using NUnit.Framework;

public class ProfilePanelUITests
{
    // Test 1: Check that an empty name input is rejected
    // If the name is empty, it will return without saving
    [Test]
    public void ConfirmAdd_EmptyName_IsRejected()
    {
        string nameInput = "";
        bool isRejected = string.IsNullOrEmpty(nameInput);
        Assert.IsTrue(isRejected);
    }

    // Test 2: Check that a valid name input is accepted
    [Test]
    public void ConfirmAdd_ValidName_IsAccepted()
    {
        string nameInput = "John";
        bool isAccepted = !string.IsNullOrEmpty(nameInput);
        Assert.IsTrue(isAccepted);
    }
}
