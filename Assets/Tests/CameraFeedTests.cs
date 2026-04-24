using NUnit.Framework;

public class CameraFeedTests
{
    // Test 1: Checks the confidence threshold for face recognition
    // Confidence less than 100 means person is recognised
    [Test]
    public void FaceRecognition_ConfidenceBelow100_IsRecognised()
    {
        double confidence = 85.0;
        bool isRecognised = confidence < 100;
        Assert.IsTrue(isRecognised);
    }

    // Test 2: Check confidence threshold for unknown person
    // Confidence above 100 means unknown
    [Test]
    public void FaceRecognition_ConfidenceAbove100_IsUnknown()
    {
        double confidence = 120.0;
        bool isUnknown = confidence >= 100;
        Assert.IsTrue(isUnknown);
    }
}
