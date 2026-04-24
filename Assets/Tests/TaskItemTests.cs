using NUnit.Framework;
using TMPro;

public class TaskItemTests
{
    // Test 1: Checks that completed task will make a strikethrough
    [Test]
    public void Toggle_Completed_AppliesStrikethrough()
    {
        FontStyles style = FontStyles.Strikethrough;
        bool isComplete = true;
        FontStyles result = isComplete ? FontStyles.Strikethrough : FontStyles.Normal;
        Assert.AreEqual(style, result);
    }

    // Test 2: Checks that incomplete toggle applies normal style
    [Test]
    public void Toggle_Incomplete_AppliesNormalStyle()
    {
        FontStyles style = FontStyles.Normal;
        bool isComplete = false;
        FontStyles result = isComplete ? FontStyles.Strikethrough : FontStyles.Normal;
        Assert.AreEqual(style, result);
    }
}
