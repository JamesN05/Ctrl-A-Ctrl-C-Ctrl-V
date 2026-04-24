using System.Collections;
using UnityEngine;
using UnityEngine.Events;

public class DemoPhotoProvider : MonoBehaviour
{
    [System.Serializable]
    public class PhotoCapturedEvent : UnityEvent<Texture2D, byte[]> { }

    public PhotoCapturedEvent OnPhotoCaptured;
    public UnityEvent<string> OnCaptureFailed;

    public CameraFeed cameraFeed;

    private bool isCapturing;

    public void CapturePhoto()
    {
        if (isCapturing) return;
        StartCoroutine(CaptureRoutine());
    }

    private IEnumerator CaptureRoutine()
    {
        isCapturing = true;

        yield return new WaitForEndOfFrame();

        if (cameraFeed == null)
        {
            OnCaptureFailed?.Invoke("CameraFeed not assigned.");
            isCapturing = false;
            yield break;
        }

        Texture2D frame = cameraFeed.GetCurrentFrame();

        if (frame == null)
        {
            OnCaptureFailed?.Invoke("No frame available.");
            isCapturing = false;
            yield break;
        }

        Texture2D copy = new Texture2D(frame.width, frame.height, TextureFormat.RGBA32, false);
        copy.SetPixels32(frame.GetPixels32());
        copy.Apply();

        byte[] jpgBytes = copy.EncodeToJPG(85);
        isCapturing = false;

        Debug.Log("Photo captured from CameraFeed ✅");

        OnPhotoCaptured?.Invoke(copy, jpgBytes);
    }
}