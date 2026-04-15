using System.Collections;
using UnityEngine;
using UnityEngine.Events;

public class DemoPhotoProvider : MonoBehaviour
{
    [System.Serializable]
    public class PhotoCapturedEvent : UnityEvent<Texture2D, byte[]> { }

    public PhotoCapturedEvent OnPhotoCaptured;
    public UnityEvent<string> OnCaptureFailed;

    private bool isCapturing;

    public void CapturePhoto()
    {
        if (isCapturing) return;
        StartCoroutine(CaptureRoutine());
    }

    private IEnumerator CaptureRoutine()
    {
        isCapturing = true;

        WebCamTexture webcam = new WebCamTexture();
        webcam.Play();

        float timeout = 5f;
        float timer = 0f;

        while (webcam.width <= 16 && timer < timeout)
        {
            timer += Time.deltaTime;
            yield return null;
        }

        if (webcam.width <= 16)
        {
            webcam.Stop();
            isCapturing = false;
            OnCaptureFailed?.Invoke("Could not access webcam.");
            yield break;
        }

        Texture2D texture = new Texture2D(webcam.width, webcam.height, TextureFormat.RGBA32, false);
        texture.SetPixels32(webcam.GetPixels32());
        texture.Apply();

        webcam.Stop();

        byte[] jpgBytes = texture.EncodeToJPG(85);
        isCapturing = false;
        OnPhotoCaptured?.Invoke(texture, jpgBytes);
    }
}