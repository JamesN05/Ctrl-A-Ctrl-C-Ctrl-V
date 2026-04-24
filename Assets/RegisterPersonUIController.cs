using System;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class RegisterPersonUIController : MonoBehaviour
{
    [Header("Inputs")]
    public TMP_InputField nameInput;
    public TMP_InputField relationshipInput;
    public TMP_InputField reminderInput;
    public Toggle consentToggle;

    [Header("Preview")]
    public RawImage photoPreview;
    public TMP_Text statusText;

    [Header("Buttons")]
    public Button captureButton;
    public Button saveButton;
    public Button deleteButton;
    public Button clearButton;
    public Button refreshButton;

    [Header("People List")]
    public Transform peopleListRoot;
    public GameObject personRowPrefab;

    [Header("Dependencies")]
    public DemoPhotoProvider photoProvider;
    public LocalPersonRepository repository;

    private Texture2D capturedTexture;
    private byte[] capturedJpgBytes;
    private string selectedPersonId;

    private void Start()
    {
        captureButton.onClick.AddListener(OnCapturePressed);
        saveButton.onClick.AddListener(OnSavePressed);
        deleteButton.onClick.AddListener(OnDeletePressed);
        clearButton.onClick.AddListener(ClearForm);
        refreshButton.onClick.AddListener(RefreshPeopleList);

        photoProvider.OnPhotoCaptured.AddListener(OnPhotoCaptured);
        photoProvider.OnCaptureFailed.AddListener(OnPhotoCaptureFailed);

        RefreshPeopleList();
        SetStatus("Ready");
        deleteButton.interactable = false;
    }

    private void SetStatus(string message)
    {
        if (statusText != null)
            statusText.text = message;

        Debug.Log("[RegisterPerson] " + message);
    }

    private void OnCapturePressed()
    {
        SetStatus("Capturing photo...");
        photoProvider.CapturePhoto();
    }

    private void OnPhotoCaptured(Texture2D texture, byte[] jpgBytes)
    {
        capturedTexture = texture;
        capturedJpgBytes = jpgBytes;

        if (photoPreview != null)
            photoPreview.texture = capturedTexture;

        SetStatus("Photo captured");
    }

    private void OnPhotoCaptureFailed(string error)
    {
        SetStatus("Capture failed: " + error);
    }

    private void OnSavePressed()
    {
        if (!ValidateForm())
            return;

        PersonRecord person = new PersonRecord
        {
            id = Guid.NewGuid().ToString("N"),
            name = nameInput.text.Trim(),
            relationship = relationshipInput.text.Trim(),
            reminder = reminderInput.text.Trim(),
            consentConfirmed = consentToggle.isOn,
            addedAtIso = DateTime.UtcNow.ToString("o"),
            recognitionCount = 0
        };

        repository.SavePerson(person, capturedJpgBytes);
        SetStatus($"Saved {person.name}");
        ClearForm();
        RefreshPeopleList();
    }

    private void OnDeletePressed()
    {
        if (string.IsNullOrEmpty(selectedPersonId))
        {
            SetStatus("No person selected");
            return;
        }

        repository.DeletePerson(selectedPersonId);
        SetStatus("Person deleted");
        selectedPersonId = null;
        deleteButton.interactable = false;
        ClearForm();
        RefreshPeopleList();
    }

    private bool ValidateForm()
    {
        if (capturedJpgBytes == null || capturedJpgBytes.Length == 0)
        {
            SetStatus("Take a photo first");
            return false;
        }

        if (string.IsNullOrWhiteSpace(nameInput.text))
        {
            SetStatus("Enter a name");
            return false;
        }

        if (string.IsNullOrWhiteSpace(relationshipInput.text))
        {
            SetStatus("Enter a relationship");
            return false;
        }

        if (!consentToggle.isOn)
        {
            SetStatus("Consent must be confirmed");
            return false;
        }

        return true;
    }

    public void SelectPerson(string personId)
    {
        selectedPersonId = personId;
        deleteButton.interactable = true;

        PersonRecord person = repository.GetById(personId);
        if (person == null)
            return;

        nameInput.text = person.name;
        relationshipInput.text = person.relationship;
        reminderInput.text = person.reminder;
        consentToggle.isOn = person.consentConfirmed;

        if (!string.IsNullOrEmpty(person.photoPath) && System.IO.File.Exists(person.photoPath))
        {
            byte[] bytes = System.IO.File.ReadAllBytes(person.photoPath);
            Texture2D tex = new Texture2D(2, 2);
            tex.LoadImage(bytes);
            photoPreview.texture = tex;
        }

        SetStatus($"Selected {person.name}");
    }

    public void RefreshPeopleList()
    {
        foreach (Transform child in peopleListRoot)
            Destroy(child.gameObject);

        List<PersonRecord> people = repository.GetAllPeople();

        foreach (PersonRecord person in people)
        {
            GameObject row = Instantiate(personRowPrefab, peopleListRoot);
            PersonListRowUI rowUI = row.GetComponent<PersonListRowUI>();
            rowUI.Setup(person, this);
        }

        SetStatus($"Loaded {people.Count} people");
    }

    public void ClearForm()
    {
        capturedTexture = null;
        capturedJpgBytes = null;
        selectedPersonId = null;

        nameInput.text = "";
        relationshipInput.text = "";
        reminderInput.text = "";
        consentToggle.isOn = false;
        deleteButton.interactable = false;

        if (photoPreview != null)
            photoPreview.texture = null;

        SetStatus("Form cleared");
    }
}