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
    public GameObject savedPeoplePanel;

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
    public Button openSavedPeopleButton;
    public Button closeSavedPeopleButton;
    public Button clearAllButton;

    [Header("Status")]
    public TMP_Text statusText;

    [Header("Dependencies")]
    public DemoPhotoProvider photoProvider;
    public LocalPersonRepository repository;
    public SavedPeoplePanelController savedPeopleController;

    [Header("Fields")]
    public UnityEngine.Events.UnityEvent OnPersonSaved;

    private Texture2D capturedTexture;
    private byte[] capturedJpgBytes;
    private readonly MockFaceEncoder faceEncoder = new MockFaceEncoder();

   private void Start()
{
    Debug.Log("=== START RUNNING ===");
    Debug.Log("captureButton: " + captureButton);
    Debug.Log("photoProvider: " + photoProvider);
    Debug.Log("savedPeoplePanel: " + savedPeoplePanel);

    ShowStep(1);
    SetSavedPeoplePanel(false);

    if (captureButton != null) captureButton.onClick.AddListener(OnCapturePressed);
    else Debug.LogError("captureButton is NULL");

    if (retakeButton != null) retakeButton.onClick.AddListener(OnRetakePressed);
    else Debug.LogError("retakeButton is NULL");

    if (saveButton != null) saveButton.onClick.AddListener(OnSavePressed);
    else Debug.LogError("saveButton is NULL");

    if (openSavedPeopleButton != null)
        openSavedPeopleButton.onClick.AddListener(OnOpenSavedPeoplePressed);

    if (closeSavedPeopleButton != null)
        closeSavedPeopleButton.onClick.AddListener(OnCloseSavedPeoplePressed);

    if (clearAllButton != null)
        clearAllButton.onClick.AddListener(OnClearAllPressed);

    if (photoProvider != null)
    {
        photoProvider.OnPhotoCaptured.AddListener(OnPhotoCaptured);
        photoProvider.OnCaptureFailed.AddListener(OnPhotoCaptureFailed);
    }
    else Debug.LogError("photoProvider is NULL");

    if (savedPeopleController != null)
        savedPeopleController.Refresh();
}

    private void ShowStep(int step)
    {
        if (step1Panel != null) step1Panel.SetActive(step == 1);
        if (step2Panel != null) step2Panel.SetActive(step == 2);
        if (step3Panel != null) step3Panel.SetActive(step == 3);
    }

    private void SetSavedPeoplePanel(bool isOpen)
    {
        if (savedPeoplePanel != null)
            savedPeoplePanel.SetActive(isOpen);
    }

    private void SetStatus(string message)
    {
        if (statusText != null)
            statusText.text = message;

        Debug.Log("[RegisterPerson] " + message);
    }

    public void OnCapturePressed()
    {
        SetStatus("Opening camera...");
        photoProvider.CapturePhoto();
    }

    public void OnPhotoCaptured(Texture2D texture, byte[] jpgBytes)
    {
        capturedTexture = texture;
        capturedJpgBytes = jpgBytes;

        if (photoPreview != null)
            photoPreview.texture = capturedTexture;

        SetStatus("Photo ready");
        ShowStep(2);
    }

    public void OnPhotoCaptureFailed(string error)
    {
        SetStatus(error);
        ShowStep(1);
    }

    public void OnRetakePressed()
    {
        SetStatus("Retake photo");
        ShowStep(1);
    }

    public void OnSavePressed()
    {
        if (!ValidateForm())
            return;

        ShowStep(3);
        SetStatus("Saving...");

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

        SetStatus($"{person.name} saved");
        OnPersonSaved?.Invoke();
        ResetForm();
        ShowStep(1);

        if (savedPeopleController != null)
            savedPeopleController.Refresh();
    }

    public void OnOpenSavedPeoplePressed()
{
    Debug.Log("Open pressed, calling Refresh");
    SetSavedPeoplePanel(true);

    if (savedPeopleController != null)
        savedPeopleController.Refresh();
    else
        Debug.LogError("savedPeopleController is NULL");
}

    public void OnCloseSavedPeoplePressed()
    {
        SetSavedPeoplePanel(false);
    }

    public void OnClearAllPressed()
    {
        repository.ClearAll();

        if (savedPeopleController != null)
            savedPeopleController.Refresh();

        ResetForm();
        ShowStep(1);
        SetStatus("All people cleared");
    }

    private bool ValidateForm()
    {
        if (capturedJpgBytes == null || capturedJpgBytes.Length == 0)
        {
            SetStatus("Capture a photo first");
            ShowStep(1);
            return false;
        }

        if (string.IsNullOrWhiteSpace(nameInput.text))
        {
            SetStatus("Enter a name");
            ShowStep(2);
            return false;
        }

        if (string.IsNullOrWhiteSpace(relationshipInput.text))
        {
            SetStatus("Enter a relationship");
            ShowStep(2);
            return false;
        }

        if (!consentToggle.isOn)
        {
            SetStatus("Confirm consent");
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