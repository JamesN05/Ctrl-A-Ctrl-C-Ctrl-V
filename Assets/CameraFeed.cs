using UnityEngine;
using OpenCVForUnity.CoreModule;
using OpenCVForUnity.ImgprocModule;
using OpenCVForUnity.ObjdetectModule;
using OpenCVForUnity.UnityUtils;
using UnityEngine.UI;
using System.Collections.Generic;
using OpenCVForUnity.FaceModule;

public class CameraFeed : MonoBehaviour
{
    //Creates Rawimage variable
    public RawImage rawImage;
    public GameObject registerPanel;
    public ProfilePanelUI profilePanel;
    public ToDoPanel toDoPanel;
    public GameObject peopleRegistryUI;
    public RegisterPersonManager registerManager;
    public LocalPersonRepository repository;

    //create web cam texture
    WebCamTexture webCamTexture;
    //Create the face detection model
    CascadeClassifier faceCascade;
    //Create tex for Texture2D
    Texture2D tex;
    Texture2D referenceTexture;
    LBPHFaceRecognizer recognizer;
    Mat referenceMat;
    Mat pendingFace;
    bool isPromptActive = false;
    bool isFaceVisible = false;
    bool isInPeopleRegistry = false;
    Dictionary<int, PersonRecord> labelToPerson = new Dictionary<int, PersonRecord>();

    // Start is called before the first frame update
    void Start()
    {
        //Force target frame rate v sync off in unity
        Application.targetFrameRate = 60;
        QualitySettings.vSyncCount = 0;

        //Create a web cam feed object, replace quads material and texture with web cam
        //and start live web cam feed video on the RawImage
        webCamTexture = new WebCamTexture();
        rawImage.texture = webCamTexture;
        webCamTexture.Play();

        //Load the face detection file
        string cascadePath = Utils.getFilePath("haarcascade_frontalface_default.xml");

        //Debug to see if haarcascade_frontalface_default.xml can be reached
        Debug.Log("Cascade path: " + cascadePath);

        //Loads the face detection model into Unity
        faceCascade = new CascadeClassifier(cascadePath);

        //Debug to see if the face detection model can be loaded
        if (faceCascade.empty())
        {
            Debug.LogError("Cascade failed to load ❌");
        }
        else
        {
            Debug.Log("Cascade loaded ✅");
        }

        recognizer = LBPHFaceRecognizer.create();
        LoadSavedFaces();

        OnNoFaceDetected();

        //Wait 3 seconds before calling capture and detect and call it every 5 seconds after that
        InvokeRepeating(nameof(CaptureAndDetect), 3f, 8f);
    }

    //Take an image from the webcam, save it and find a face within the image
    void CaptureAndDetect()
    {

        if (isInPeopleRegistry) return;

        //If the width is too small then the webcam isn't ready
        if (webCamTexture.width < 100) return;

        if (tex == null)
        {
            //Creates a blank image in memorty with the same measurements as the webcam
            tex = new Texture2D(webCamTexture.width, webCamTexture.height);
        }

        //Create an image of webcam frame and apply it to the texture of the RawImage
        tex.SetPixels32(webCamTexture.GetPixels32());
        tex.Apply();

        //Debug for camera width, height and fps for when web cam was stuttering
        Debug.Log(webCamTexture.requestedFPS);
        Debug.Log(webCamTexture.width + "x" + webCamTexture.height);

        //Converts image from unity image to OpenCV image
        Mat mat = new Mat(tex.height, tex.width, CvType.CV_8UC3);
        Utils.texture2DToMat(tex, mat);

        //Flip image for face detection
        Core.flip(mat, mat, 1);

        //Convert to grayscale
        Mat gray = new Mat();
        Imgproc.cvtColor(mat, gray, Imgproc.COLOR_RGB2GRAY);
        Imgproc.equalizeHist(gray, gray);
        Imgproc.GaussianBlur(gray, gray, new Size(3, 3), 0);

        //Face detection using OpenCV
        MatOfRect faces = new MatOfRect();
        faceCascade.detectMultiScale(
            gray,
            faces,
            1.1,
            3,
            0,
            new Size(100, 100),
            new Size()
        );

        //Debug to see if face has been detected in frame
        if (faces.toArray().Length > 0)
        {
            isFaceVisible = true;

            Debug.Log("FACE DETECTED ✅");

            if (toDoPanel != null)
                toDoPanel.toDoPanelCanvas.SetActive(false);

            OpenCVForUnity.CoreModule.Rect faceRect = faces.toArray()[0];

            //Crop detected face
            Mat faceMat = new Mat(gray, faceRect).clone();

            //Resize both images to same size
            Imgproc.resize(faceMat, faceMat, new Size(200, 200));
            Imgproc.equalizeHist(faceMat, faceMat);
            Imgproc.GaussianBlur(faceMat, faceMat, new Size(3, 3), 0);

            int[] predictedLabel = new int[1];
            double[] confidence = new double[1];

            if (recognizer == null) return;

            recognizer.predict(faceMat, predictedLabel, confidence);

            Debug.Log("Label: " + predictedLabel[0]);
            Debug.Log("Confidence: " + confidence[0]);

            if (confidence[0] < 90)
            {
                if (labelToPerson.ContainsKey(predictedLabel[0]))
                {
                    var person = labelToPerson[predictedLabel[0]];

                    profilePanel.profilePanelCanvas.SetActive(true);

                    profilePanel.LoadProfile(
                        person.name,
                        person.relationship,
                        person.reminder
                    );
                }
                else
                {
                    Debug.LogWarning("Label not found in dictionary");
                }

                if (toDoPanel != null)
                    toDoPanel.toDoPanelCanvas.SetActive(false);
            }
            else
            {
                Debug.Log("UNKNOWN PERSON ❌");

                if (!isInPeopleRegistry)
                    ShowRegisterPrompt(faceMat);
            }

            faceMat.Dispose();
        }
        else
        {
            Debug.Log("NO FACE ❌");

            if (isFaceVisible)
            {
                isFaceVisible = false;
                OnNoFaceDetected();
            }
        }

        //Remove image from memory
        mat.Dispose();
        gray.Dispose();
    }

    // Update is called once per frame
    void Update()
    {
        //Set web cam texture to raw image
        if (webCamTexture != null && webCamTexture.didUpdateThisFrame)
        {
            rawImage.texture = webCamTexture;
        }
    }

    void ShowRegisterPrompt(Mat faceMat)
    {
        if (isPromptActive) return;

        isPromptActive = true;
        registerPanel.SetActive(true);

        //Store face temporarily for saving
        pendingFace = faceMat.clone();
    }

    public void OnRegisterYes()
    {
        isPromptActive = false;
        registerPanel.SetActive(false);
        isInPeopleRegistry = true;

        //Convert Mat → Texture2D
        Texture2D tex = new Texture2D(pendingFace.cols(), pendingFace.rows(), TextureFormat.RGB24, false);
        Utils.matToTexture2D(pendingFace, tex);

        //Convert Texture2D → JPG bytes
        byte[] jpgBytes = tex.EncodeToJPG();

        //Inject directly into his system
        registerManager.OnPhotoCaptured(tex, jpgBytes);

        //Open UI
        peopleRegistryUI.SetActive(true);
    }

    public void OnRegisterNo()
    {
        pendingFace.Dispose();
        isPromptActive = false;
        registerPanel.SetActive(false);
    }

    void OnNoFaceDetected()
    {
        Debug.Log("NO FACE MODE 💤");

        if (toDoPanel != null)
            toDoPanel.toDoPanelCanvas.SetActive(true);

        if (profilePanel != null)
            profilePanel.profilePanelCanvas.SetActive(false);
    }

    public Texture2D GetCurrentFrame()
    {
        if (tex == null) return null;
        return tex;
    }

    public void OnClosePeopleRegistry()
    {
        isInPeopleRegistry = false;
        peopleRegistryUI.SetActive(false);
    }

    void LoadSavedFaces()
    {
        if (repository == null)
        {
            Debug.LogError("Repository not assigned ❌");
            return;
        }

        var people = repository.GetAllPeople();

        if (people == null || people.Count == 0)
        {
            Debug.Log("No saved people found");
            return;
        }

        List<Mat> images = new List<Mat>();
        List<int> labels = new List<int>();

        int label = 0;

        foreach (var person in people)
        {
            if (string.IsNullOrEmpty(person.photoPath) || !System.IO.File.Exists(person.photoPath))
            {
                Debug.LogWarning($"Image not found for {person.name}");
                continue;
            }

            byte[] imageBytes = System.IO.File.ReadAllBytes(person.photoPath);

            if (imageBytes == null) continue;

            Texture2D tex = new Texture2D(2, 2);
            tex.LoadImage(imageBytes);

            Mat mat = new Mat(tex.height, tex.width, CvType.CV_8UC3);
            Utils.texture2DToMat(tex, mat);

            Mat gray = new Mat();
            Imgproc.cvtColor(mat, gray, Imgproc.COLOR_RGB2GRAY);

            MatOfRect faces = new MatOfRect();
            faceCascade.detectMultiScale(gray, faces);

            if (faces.toArray().Length == 0)
            {
                Debug.LogWarning($"No face found for {person.name}");
                continue;
            }

            var r = faces.toArray()[0];
            Mat face = new Mat(gray, r).clone();

            Imgproc.resize(face, face, new Size(200, 200));
            Imgproc.equalizeHist(face, face);

            images.Add(face);
            labels.Add(label);

            labelToPerson[label] = person;

            label++;
        }

        if (images.Count > 0)
        {
            recognizer.train(images, new MatOfInt(labels.ToArray()));
            Debug.Log($"Loaded {images.Count} faces into recognizer ✅");
        }
        else
        {
            Debug.LogWarning("No valid faces to train ❌");
        }
    }
}