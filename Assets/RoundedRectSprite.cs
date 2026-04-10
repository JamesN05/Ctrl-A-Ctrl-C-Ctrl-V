using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(Image))]
public class RoundedRectSprite : MonoBehaviour
{
    [Range(0, 100)]
    public int cornerRadius = 20;
    public int resolution = 8; // smoothness of corners

    void Start()
    {
        GetComponent<Image>().sprite = CreateRoundedRectSprite(
            (int)GetComponent<RectTransform>().rect.width,
            (int)GetComponent<RectTransform>().rect.height,
            cornerRadius, resolution);
    }

    Sprite CreateRoundedRectSprite(int width, int height, int radius, int res)
    {
        Texture2D tex = new Texture2D(width, height);
        Color[] pixels = new Color[width * height];
        for (int y = 0; y < height; y++)
            for (int x = 0; x < width; x++)
                pixels[y * width + x] = IsInsideRoundedRect(x, y, width, height, radius)
                    ? Color.white : Color.clear;
        tex.SetPixels(pixels);
        tex.Apply();
        return Sprite.Create(tex, new Rect(0, 0, width, height), new Vector2(0.5f, 0.5f));
    }

    bool IsInsideRoundedRect(int x, int y, int w, int h, int r)
    {
        int cx = Mathf.Clamp(x, r, w - r);
        int cy = Mathf.Clamp(y, r, h - r);
        return (x - cx) * (x - cx) + (y - cy) * (y - cy) <= r * r;
    }
}