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

        //Prepare training data
        List<Mat> images = new List<Mat>();
        List<int> labels = new List<int>();

        referenceTexture = Resources.Load<Texture2D>("DemoImage");

        Mat refMat = new Mat(referenceTexture.height, referenceTexture.width, CvType.CV_8UC3);
        Utils.texture2DToMat(referenceTexture, refMat);

        //Convert to grayscale
        Mat grayRef = new Mat();
        Imgproc.cvtColor(refMat, grayRef, Imgproc.COLOR_RGB2GRAY);

        //Detect face in reference image
        MatOfRect refFaces = new MatOfRect();
        faceCascade.detectMultiScale(grayRef, refFaces);

        if (refFaces.toArray().Length > 0)
        {
            OpenCVForUnity.CoreModule.Rect r = refFaces.toArray()[0];

            Mat face = new Mat(grayRef, r).clone();

            Imgproc.resize(face, face, new Size(200, 200));
            Imgproc.equalizeHist(face, face);

            images.Add(face);
            labels.Add(0);

            recognizer.train(images, new MatOfInt(labels.ToArray()));

            Debug.Log("LBPH trained ✅");
        }
        else
        {
            Debug.LogError("No face found in reference image ❌");
        }

        OnNoFaceDetected();

        //Wait 3 seconds before calling capture and detect and call it every 5 seconds after that
        InvokeRepeating(nameof(CaptureAndDetect), 3f, 8f);
    }

    //Take an image from the webcam, save it and find a face within the image
    void CaptureAndDetect()
    {

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

        //Create image for saving to file
        byte[] bytes = tex.EncodeToJPG();

        //Directory for Saved Faces folder
        string folderPath = Application.persistentDataPath + "/Saved Faces";

        //If directory doesn't exist create it
        if (!System.IO.Directory.Exists(folderPath))
        {
            System.IO.Directory.CreateDirectory(folderPath);
        }

        //Path for file
        string path = folderPath + "/Person.jpg";

        //Create jpg image in specified path
        System.IO.File.WriteAllBytes(path, bytes);

        //Debug to see where image was saved
        Debug.Log("Saved image to: " + path);

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

            if (confidence[0] < 80)
            {
                profilePanel.profilePanelCanvas.SetActive(true);
                profilePanel.LoadProfile(
                    "Demo Person",
                    "Friend",
                    "Recognised via OpenCV"
                );
                if (toDoPanel != null)
                    toDoPanel.toDoPanelCanvas.SetActive(false);
            }
            else
            {
                Debug.Log("UNKNOWN PERSON ❌");

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
        //PlaceholderSaveNewPerson(pendingFace);
        isPromptActive = false;
        registerPanel.SetActive(false);
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
}

