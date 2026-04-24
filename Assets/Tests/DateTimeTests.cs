using NUnit.Framework;
using System;

public class DateTimeTests
{
    // Test 1: Checks that 24 hour time formats correctly
    [Test]
    public void FormatTime_24Hour_IsCorrect()
    {
        DateTime testTime = new DateTime(2026, 3, 10, 14, 30, 45);
        string result = testTime.ToString("HH:mm:ss");
        Assert.AreEqual("14:30:45", result);
    }

    // Test 2: Checks if uptime formats correctly
    [Test]
    public void FormatUptime_OneHour_IsCorrect()
    {
        float totalSeconds = 3600f;
        int hours = (int)(totalSeconds / 3600);
        int minutes = (int)((totalSeconds % 3600) / 60);
        int seconds = (int)(totalSeconds % 60);

        string result = string.Format("{0:00}:{1:00}:{2:00}",
            hours, minutes, seconds);

        Assert.AreEqual("01:00:00", result);
    }
}
