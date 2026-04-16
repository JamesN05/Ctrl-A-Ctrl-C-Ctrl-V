using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class ProfilePanelUI : MonoBehaviour
{
    [Header("UI References")]
    public TextMeshProUGUI nameText;
    public TextMeshProUGUI relationshipText;
    public TextMeshProUGUI bioText;

    [Header("Panel Reference")]
    public GameObject profilePanelCanvas;

    [Header("Close Button")]
    public Button closeButton;

    [Header("Placeholder Data")]
    public string placeholderName = "John Doe";
    public string placeholderRelationship = "Colleague";
    [TextArea(3, 6)]
    public string placeholderBio = "Lorem ipsum dolor sit amet.";

    void Start()
    {
        // Wire close button in code — no dropdown needed
        closeButton.onClick.AddListener(ClosePanel);

        LoadProfile(placeholderName, placeholderRelationship, placeholderBio);
    }

    public void LoadProfile(string name, string relationship, string bio)
    {
        nameText.text = "Name: " + name;
        relationshipText.text = "Relationship: " + relationship;
        bioText.text = bio;
    }

    public void ClosePanel()
    {
        profilePanelCanvas.SetActive(false);
    }
}