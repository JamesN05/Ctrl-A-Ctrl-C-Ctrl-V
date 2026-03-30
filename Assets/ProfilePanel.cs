using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class ProfilePanel : MonoBehaviour
{
    // ─── UI REFERENCES (drag these in from the Inspector) ───────────────────
    [Header("Static Label Text - These never change")]
    public TMP_Text nameLabel;          // The word "Name:"
    public TMP_Text bioLabel;           // The word "Bio:"
    public TMP_Text lastConvoLabel;     // The word "Last Conversation:"

    [Header("Dynamic Value Text - Filled by database")]
    public TMP_Text nameValueText;      // e.g. "Tomás Óg."
    public TMP_Text bioValueText;       // e.g. "Friend From College."
    public TMP_Text lastConvoValueText; // e.g. "You were speaking about..."

    [Header("Profile Photo")]
    public Image profilePhoto;          // The circular profile image

    private void Start()
    {
        // Null checks to prevent errors
        if (nameLabel != null) nameLabel.text = "Name:";
        if (bioLabel != null) bioLabel.text = "Bio:";
        if (lastConvoLabel != null) lastConvoLabel.text = "Last Conversation:";

        SetProfileData("Unknown Person", "No bio available.", "No recent conversations.");
    }

    public void SetProfileData(string name, string bio, string lastConversation)
    {
        if (nameValueText != null) nameValueText.text = name;
        if (bioValueText != null) bioValueText.text = bio;
        if (lastConvoValueText != null) lastConvoValueText.text = lastConversation;
    }

    // ─── OPTIONAL: Update just the photo ─────────────────────────────────────
    public void SetProfilePhoto(Sprite photo)
    {
        // TODO: DATABASE - Call this when you fetch the photo from your database
        // e.g. profilePhoto.sprite = DatabaseManager.GetPhoto(personID);
        profilePhoto.sprite = photo;
    }
}