using System;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class RegisterPersonManager : MonoBehaviour
{
    [Header("Panels")]
    public GameObject step1Panel;
    public GameObject step2Panel;
    public GameObject step3Panel;

    [Header("Preview")]
    public RawImage photoPreview;

    [Header("Inputs")]
    public TMP_InputField nameInput;
    public TMP_InputField relationshipInput;
    public TMP_InputField reminderInput;
    public Toggle consentToggle;

    [Header("Buttons")]
    public Button captureButton;
    public Button retakeButton;
    public Button saveButton;
    public Button refreshListButton;
    public Button clearAllButton;

    [Header("Status")]
    public TMP_Text statusText;
    public TMP_Text savePathText;

    [Header("Dependencies")]
    public DemoPhotoProvider photoProvider;
    public LocalPersonRepository repository;
    public PeopleListDebugView debugView;

    private Texture2D capturedTexture;
    private byte[] capturedJpgBytes;
    private readonly MockFaceEncoder faceEncoder = new MockFaceEncoder();

    private void Start()
    {
        ShowStep(1);

        captureButton.onClick.AddListener(OnCapturePressed);
        retakeButton.onClick.AddListener(OnRetakePressed);
        saveButton.onClick.AddListener(OnSavePressed);

        if (refreshListButton != null)
            refreshListButton.onClick.AddListener(OnRefreshListPressed);

        if (clearAllButton != null)
            clearAllButton.onClick.AddListener(OnClearAllPressed);

        photoProvider.OnPhotoCaptured.AddListener(OnPhotoCaptured);
        photoProvider.OnCaptureFailed.AddListener(OnPhotoCaptureFailed);

        if (savePathText != null)
            savePathText.text = "Local save folder: " + repository.GetDebugPath();

        if (debugView != null)
            debugView.Refresh();
    }

    private void ShowStep(int step)
    {
        if (step1Panel != null) step1Panel.SetActive(step == 1);
        if (step2Panel != null) step2Panel.SetActive(step == 2);
        if (step3Panel != null) step3Panel.SetActive(step == 3);
    }

    private void SetStatus(string message)
    {
        if (statusText != null)
            statusText.text = message;

        Debug.Log("[RegisterPerson] " + message);
    }

    public void OnCapturePressed()
    {
        SetStatus("Capturing photo...");
        photoProvider.CapturePhoto();
    }

    public void OnPhotoCaptured(Texture2D texture, byte[] jpgBytes)
    {
        capturedTexture = texture;
        capturedJpgBytes = jpgBytes;

        if (photoPreview != null)
            photoPreview.texture = capturedTexture;

        SetStatus("Photo captured. Enter details.");
        ShowStep(2);
    }

    public void OnPhotoCaptureFailed(string error)
    {
        SetStatus(error);
        ShowStep(1);
    }

    public void OnRetakePressed()
    {
        SetStatus("Retake the photo.");
        ShowStep(1);
    }

    public void OnSavePressed()
    {
        if (!ValidateForm())
            return;

        ShowStep(3);
        SetStatus("Saving person locally...");

        List<float> encoding = faceEncoder.CreateEncoding(capturedJpgBytes);

        PersonRecord person = new PersonRecord
        {
            id = Guid.NewGuid().ToString("N"),
            name = nameInput.text.Trim(),
            relationship = relationshipInput.text.Trim(),
            reminder = reminderInput.text.Trim(),
            consentConfirmed = consentToggle.isOn,
            addedAtIso = DateTime.UtcNow.ToString("o"),
            recognitionCount = 0,
            faceEncoding = encoding
        };

        repository.SavePerson(person, capturedJpgBytes);

        SetStatus($"Saved {person.name} successfully.");
        ResetForm();
        ShowStep(1);

        if (debugView != null)
            debugView.Refresh();
    }

    public void OnRefreshListPressed()
    {
        if (debugView != null)
            debugView.Refresh();

        SetStatus("Saved people list refreshed.");
    }

    public void OnClearAllPressed()
    {
        repository.ClearAll();

        if (debugView != null)
            debugView.Refresh();

        ResetForm();
        ShowStep(1);
        SetStatus("All saved demo data cleared.");
    }

    private bool ValidateForm()
    {
        if (capturedJpgBytes == null || capturedJpgBytes.Length == 0)
        {
            SetStatus("Please capture a photo first.");
            ShowStep(1);
            return false;
        }

        if (string.IsNullOrWhiteSpace(nameInput.text))
        {
            SetStatus("Please enter a name.");
            ShowStep(2);
            return false;
        }

        if (string.IsNullOrWhiteSpace(relationshipInput.text))
        {
            SetStatus("Please enter a relationship.");
            ShowStep(2);
            return false;
        }

        if (!consentToggle.isOn)
        {
            SetStatus("Consent must be confirmed.");
            ShowStep(2);
            return false;
        }

        return true;
    }

    private void ResetForm()
    {
        capturedTexture = null;
        capturedJpgBytes = null;

        if (photoPreview != null)
            photoPreview.texture = null;

        if (nameInput != null)
            nameInput.text = "";

        if (relationshipInput != null)
            relationshipInput.text = "";

        if (reminderInput != null)
            reminderInput.text = "";

        if (consentToggle != null)
            consentToggle.isOn = false;
    }
}