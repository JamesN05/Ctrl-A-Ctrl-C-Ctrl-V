using UnityEngine;
using OpenCVForUnity.CoreModule;
using OpenCVForUnity.ImgprocModule;
using OpenCVForUnity.ObjdetectModule;
using OpenCVForUnity.UnityUtils;
using UnityEngine.UI;
using System.Collections.Generic;

public class CameraFeed : MonoBehaviour
{
    //Creates Rawimage variable
    public RawImage rawImage;
    //create web cam texture
    WebCamTexture webCamTexture;

    //Create the face detection model
    CascadeClassifier faceCascade;

    //Create tex for Texture2D
    Texture2D tex;

    Texture2D referenceTexture;
    Mat referenceMat;

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

        //Creates a blank image in memorty with the same measurements as the webcam
        tex = new Texture2D(webCamTexture.width, webCamTexture.height);

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

        referenceTexture = Resources.Load<Texture2D>("DemoImage");

        referenceMat = new Mat(referenceTexture.height, referenceTexture.width, CvType.CV_8UC3);
        Utils.texture2DToMat(referenceTexture, referenceMat);

        // Convert to grayscale
        Imgproc.cvtColor(referenceMat, referenceMat, Imgproc.COLOR_RGB2GRAY);

        Imgproc.resize(referenceMat, referenceMat, new Size(200, 200));

        //Wait 3 seconds before calling capture and detect and call it every 5 seconds after that
        InvokeRepeating(nameof(CaptureAndDetect), 3f, 8f);
    }

    //Take an image from the webcam, save it and find a face within the image
    void CaptureAndDetect()
    {

        //If the width is too small then the webcam isn't ready
        if (webCamTexture.width < 100) return;

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

        // Convert to grayscale
        Mat gray = new Mat();
        Imgproc.cvtColor(mat, gray, Imgproc.COLOR_RGB2GRAY);

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
            Debug.Log("FACE DETECTED ✅");

            OpenCVForUnity.CoreModule.Rect faceRect = faces.toArray()[0];

            // Crop detected face
            Mat faceMat = new Mat(gray, faceRect).clone();

            // Resize both images to same size
            Imgproc.resize(faceMat, faceMat, new Size(200, 200));

            double similarity = CompareFaces(faceMat, referenceMat);

            Debug.Log("Similarity: " + similarity);

            if (similarity > 0.7)
            {
                Debug.Log("MATCH ✅");
            }
            else
            {
                Debug.Log("NO MATCH ❌");
            }

            faceMat.Dispose();
        }
        else
        {
            Debug.Log("NO FACE ❌");
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

    double CompareFaces(Mat img1, Mat img2)
    {
        Mat hist1 = new Mat();
        Mat hist2 = new Mat();

        Imgproc.calcHist(
            new List<Mat> { img1 },
            new MatOfInt(0),
            new Mat(),
            hist1,
            new MatOfInt(256),
            new MatOfFloat(0, 256)
        );

        Imgproc.calcHist(
            new List<Mat> { img2 },
            new MatOfInt(0),
            new Mat(),
            hist2,
            new MatOfInt(256),
            new MatOfFloat(0, 256)
        );

        Core.normalize(hist1, hist1);
        Core.normalize(hist2, hist2);

        return Imgproc.compareHist(hist1, hist2, Imgproc.CV_COMP_CORREL);
    }
}

