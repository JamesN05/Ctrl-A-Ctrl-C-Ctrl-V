using System.Collections.Generic;

public class MockFaceEncoder
{
    public List<float> CreateEncoding(byte[] imageBytes)
    {
        List<float> encoding = new List<float>(128);

        int seed = 17;
        for (int i = 0; i < imageBytes.Length; i++)
        {
            seed = seed * 31 + imageBytes[i];
        }

        System.Random rng = new System.Random(seed);

        for (int i = 0; i < 128; i++)
        {
            float value = (float)(rng.NextDouble() * 2.0 - 1.0);
            encoding.Add(value);
        }

        return encoding;
    }
}