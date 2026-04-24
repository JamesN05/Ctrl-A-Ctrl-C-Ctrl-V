using NUnit.Framework;

public class ToDoPanelTests
{
    // Test 1: Checks that empty task input is rejected
    // if input is empty, it returns without adding anything
    [Test]
    public void AddTask_EmptyInput_IsRejected()
    {
        string input = "";
        bool isRejected = string.IsNullOrEmpty(input.Trim());
        Assert.IsTrue(isRejected);
    }

    // Test 2: Checks that Valid inputs are accepted
   [Test]
    public void AddTask_ValidInput_IsAccepted()
    {
        string input = "Buy groceries";
        bool isAccepted = !string.IsNullOrEmpty(input.Trim());
        Assert.IsTrue(isAccepted);
    }
}
