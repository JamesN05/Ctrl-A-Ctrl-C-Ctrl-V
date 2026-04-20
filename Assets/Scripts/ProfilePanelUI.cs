using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class ProfilePanelUI : MonoBehaviour
{
    [Header("UI References")]
    public TextMeshProUGUI nameText;
    public TextMeshProUGUI relationshipText;
    public TextMeshProUGUI bioText;

    [Header("Panel References")]
    public GameObject profilePanelCanvas;
    public GameObject addPersonPanel;

    [Header("Buttons")]
    public Button closeButton;
    public Button addPersonButton;
    public Button confirmAddButton;
    public Button cancelAddButton;

    [Header("Input Fields")]
    public TMP_InputField nameInput;
    public TMP_InputField relationshipInput;
    public TMP_InputField bioInput;

    [Header("Placeholder Data")]
    public string placeholderName = "Unknown";
    public string placeholderRelationship = "Unrecognised";
    [TextArea(3, 6)]
    public string placeholderBio = "Face not recognised. Add this person?";

    void Start()
    {
        closeButton.onClick.AddListener(ClosePanel);
        addPersonButton.onClick.AddListener(OpenAddPanel);
        confirmAddButton.onClick.AddListener(ConfirmAdd);
        cancelAddButton.onClick.AddListener(CloseAddPanel);

        addPersonPanel.SetActive(false);
        LoadProfile(placeholderName, placeholderRelationship, placeholderBio);
    }

    public void LoadProfile(string name, string relationship, string bio)
    {
        nameText.text = name;
        relationshipText.text = "Relationship: " + relationship;
        bioText.text = bio;
    }

    public void OpenAddPanel()
    {
        addPersonPanel.SetActive(true);
    }

    public void CloseAddPanel()
    {
        addPersonPanel.SetActive(false);
    }

    public void ConfirmAdd()
    {
        if (string.IsNullOrEmpty(nameInput.text)) return;

        LoadProfile(nameInput.text, relationshipInput.text, bioInput.text);

        nameInput.text = "";
        relationshipInput.text = "";
        bioInput.text = "";

        CloseAddPanel();
    }

    public void ClosePanel()
    {
        profilePanelCanvas.SetActive(false);
    }
}