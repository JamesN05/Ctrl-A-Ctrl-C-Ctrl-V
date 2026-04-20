using System.Collections;
using UnityEngine.Networking;
using UnityEngine;
using UnityEngine.Android;
using System.Collections.Generic;

public class CameraFeed : MonoBehaviour
{
    //Connect to API via endpoint, api key and api secret key
    public string endpoint = "https://api-us.faceplusplus.com/facepp/v3/detect";
    public string apiKey = "eyASoNalP-M7AUB8uSIFr_oEn08faV97";
    public string apiSecret = "CReMsvBMe8PpOt5Sn2HCYKQmGsiEHpch";

    //create web cam texture
    WebCamTexture webCamTexture;

    //
    public string savedToken = "b930fbf12082ad3f4c8a1eca6950f5b8";
    string lastToken = "";

    //API can't take too many requests simultaneously
    //so requests will need to be halted/ delayed to give api a
    //chance to send back responses. This boolean will stop
    //processes between requests
    bool wait = false;

    float bestConfidence = 0f;
    string bestMatch = "";
    float lastCompareTime = 0f;

    // Start is called before the first frame update
    void Start()
    {
        if (!Application.HasUserAuthorization(UserAuthorization.WebCam))
        {
            Application.RequestUserAuthorization(UserAuthorization.WebCam);
        }

        //Create a web cam feed object, replace quads material and texture with web cam
        //and start live web cam feed video on quad
        webCamTexture = new WebCamTexture(1280, 720);
        GetComponent<Renderer>().material.mainTexture = webCamTexture;
        webCamTexture.Play();

        //Wait 3 seconds before calling send frame and call it every 5 seconds after that
        StartCoroutine(MainLoop());
    }

    IEnumerator MainLoop()
    {
        yield return new WaitForSeconds(3f);

        while (true)
        {
            if (!wait)
            {
                yield return StartCoroutine(SendImage());
            }

            yield return new WaitForSeconds(5f);
        }
    }

    //Capture the web cam feed and send to API
    IEnumerator SendImage()
    {
        if (wait) yield break;

        if (webCamTexture.width < 100)
        {
            Debug.Log("Camera not ready yet...");
            yield break;
        }

        wait = true;

        bestConfidence = 0f;
        bestMatch = "";

        int width = 640;
        int height = 480;

        // scale pixels manually
        Color32[] pixels = webCamTexture.GetPixels32();
        Color32[] resized = new Color32[width * height];

        float ratioX = (float)webCamTexture.width / width;
        float ratioY = (float)webCamTexture.height / height;

        for (int y = 0; y < height; y++)
        {
            for (int x = 0; x < width; x++)
            {
                int px = (int)(x * ratioX);
                int py = (int)(y * ratioY);

                resized[y * width + x] = pixels[py * webCamTexture.width + px];
            }
        }

        Texture2D tex = new Texture2D(width, height, TextureFormat.RGB24, false);
        tex.SetPixels32(resized);
        tex.Apply();

        byte[] jpg = tex.EncodeToJPG(90);

        Debug.Log("Image size: " + jpg.Length);

        string base64Image = System.Convert.ToBase64String(jpg);

        WWWForm form = new WWWForm();
        form.AddField("api_key", apiKey);
        form.AddField("api_secret", apiSecret);
        form.AddField("image_base64", base64Image);
        form.AddField("return_attributes", "age,gender,emotion");

        UnityWebRequest unityWebRequest = UnityWebRequest.Post(endpoint, form);

        yield return unityWebRequest.SendWebRequest();

        Debug.Log(unityWebRequest.downloadHandler.text);

        if (unityWebRequest.result != UnityWebRequest.Result.Success)
        {
            Debug.LogError("ERROR: " + unityWebRequest.error);
        }
        else
        {
            Debug.Log("FACE DATA: " + unityWebRequest.downloadHandler.text);
        }

        Debug.Log(unityWebRequest.responseCode);

        string json = unityWebRequest.downloadHandler.text;

        FaceResponse faceResponse = JsonUtility.FromJson<FaceResponse>(json);

        if (faceResponse.faces != null && faceResponse.faces.Length > 0)
        {
            Face face = faceResponse.faces[0];

            DrawFaceBox(face.face_rectangle);

            string liveToken = face.face_token;

            if (liveToken != lastToken && Time.time - lastCompareTime > 5f)
            {
                lastToken = liveToken;
                lastCompareTime = Time.time;

                //CompareAgainstDatabase(liveToken);
                yield return StartCoroutine(CompareFaces(liveToken, savedToken));

                /*foreach (var token in testTokens)
                {
                    StartCoroutine(CompareFaces(liveToken, token));
                }*/
            }
        }
        else
        {
            facebox.gameObject.SetActive(false);
        }

        yield return new WaitForSeconds(6f);

        wait = false;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public Transform facebox;

    [System.Serializable]
    public class FaceRectangle
    {
        public int top;
        public int left;
        public int width;
        public int height;
    }

    [System.Serializable]
    public class Face
    {
        public FaceRectangle face_rectangle;
        public string face_token;
    }

    [System.Serializable]
    public class FaceResponse
    {
        public Face[] faces;
    }
    void DrawFaceBox(FaceRectangle rect)
    {
        facebox.gameObject.SetActive(true);

        float camWidth = 640f;
        float camHeight = 480f;

        //Convert API coordinates to Unity UI coordinates
        float x = rect.left / camWidth;
        float y = rect.top / camHeight;
        float w = rect.width / camWidth;
        float h = rect.height / camHeight;

        y = 1f - y - h;
        //x = 1f - x - w;

        float quadWidth = transform.localScale.x; ;
        float quadHeight = transform.localScale.y;

        float posX = (x - 0.5f + w * 0.5f) * quadWidth;
        float posY = (y - 0.5f + h * 0.5f) * quadHeight;

        float scaleX = w * quadWidth;
        float scaleY = h * quadHeight;

        facebox.transform.localPosition = new Vector3(posX, posY, -0.01f);
        facebox.transform.localScale = new Vector3(scaleX, scaleY, 1f);

        Debug.Log($"POS: {posX}, {posY} SIZE: {scaleX}, {scaleY}");
    }

    IEnumerator CompareFaces(string token1, string token2)
    {
        WWWForm form = new WWWForm();

        form.AddField("api_key", apiKey);
        form.AddField("api_secret", apiSecret);
        form.AddField("face_token1", token1);
        form.AddField("face_token2", token2);

        UnityWebRequest req = UnityWebRequest.Post(
            "https://api-us.faceplusplus.com/facepp/v3/compare",
            form
        );

        if (req.result != UnityWebRequest.Result.Success)
        {
            Debug.LogError(req.error);
            yield break;
        }

        string json = req.downloadHandler.text;
        Debug.Log(json);

        CompareResponse res = JsonUtility.FromJson<CompareResponse>(json);

        if (res.confidence > bestConfidence)
        {
            bestConfidence = res.confidence;
            bestMatch = token2;
        }

        Debug.Log($"Checked → {res.confidence}");
    }

    [System.Serializable]
    public class CompareResponse
    {
        public float confidence;
    }

    void CompareAgainstDatabase(string liveToken)
    {
        foreach (var user in usersFromFirebase)
        {
            StartCoroutine(CompareFaces(liveToken, user.face_token));
        }
    }

    [System.Serializable]
    public class User
    {
        public string name;
        public string face_token;
    }

    public List<User> usersFromFirebase = new List<User>();

    /*public List<string> testTokens = new List<string>()
    {
        "",
        "",
        "",
        "b930fbf12082ad3f4c8a1eca6950f5b8"
    };*/
}

