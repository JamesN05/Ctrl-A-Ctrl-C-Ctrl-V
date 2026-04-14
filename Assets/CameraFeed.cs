using System.Collections;
using UnityEngine.Networking;
using UnityEngine;
using UnityEngine.UI;

public class CameraFeed : MonoBehaviour
{
    public string endpoint = "https://api-us.faceplusplus.com/facepp/v3/detect";
    public string apiKey = "-6UiFAngRexsAC7bf0TCsQlZR3SRIDrE";
    public string apiSecret = "8qppI6FWRY_lOZRsqPMbwljPv9LNNe0b";

    WebCamTexture webCamTexture;  
    
    // Start is called before the first frame update
    void Start()
    {
        webCamTexture = new WebCamTexture();
        GetComponent<Renderer>().material.mainTexture = webCamTexture;
        webCamTexture.Play();

        InvokeRepeating(nameof(SendFrame), 3f, 5f);
    }

    void SendFrame()
    {
        if (webCamTexture.width < 100)
        {
            Debug.Log("Camera not ready yet...");
            return;
        }

        Debug.Log("Resolution: " + webCamTexture.width + "x" + webCamTexture.height);

        StartCoroutine(SendImage());
    }

    IEnumerator SendImage()
    {
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

        if (unityWebRequest.isNetworkError || unityWebRequest.isHttpError)
        {
            Debug.LogError("ERROR: " + unityWebRequest.error);
        }
        else
        {
            Debug.Log("FACE DATA: " + unityWebRequest.downloadHandler.text);
        }

        Debug.Log(unityWebRequest.downloadHandler.text);
        Debug.Log(unityWebRequest.responseCode);

        string json = unityWebRequest.downloadHandler.text;
        Debug.Log("FACE DATA: " + json);

        FaceResponse faceResponse = JsonUtility.FromJson<FaceResponse>(json);

        if (faceResponse.faces != null && faceResponse.faces.Length > 0)
        {
            FaceRectangle faceRectangle = faceResponse.faces[0].face_rectangle;

            DrawFaceBox(faceRectangle);
        }
        else
        {
            facebox.gameObject.SetActive(false);
        }
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
}

