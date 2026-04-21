using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class SavedPersonRowUI : MonoBehaviour
{
    public RawImage personPhoto;
    public TMP_Text nameText;
    public TMP_Text relationshipText;
    public TMP_Text reminderText;
    public Button deleteButton;

    private string currentPersonId;
    private LocalPersonRepository repository;
    private SavedPeoplePanelController parentController;

    public void Setup(
        PersonRecord person,
        Texture2D photoTexture,
        LocalPersonRepository repo,
        SavedPeoplePanelController controller)
    {
        currentPersonId = person.id;
        repository = repo;
        parentController = controller;

        if (personPhoto != null)
            personPhoto.texture = photoTexture;

        if (nameText != null)
            nameText.text = person.name;

        if (relationshipText != null)
            relationshipText.text = person.relationship;

        if (reminderText != null)
            reminderText.text = string.IsNullOrWhiteSpace(person.reminder) ? "No note" : person.reminder;

        if (deleteButton != null)
        {
            deleteButton.onClick.RemoveAllListeners();
            deleteButton.onClick.AddListener(DeletePerson);
        }
    }

    private void DeletePerson()
    {
        if (repository != null && !string.IsNullOrEmpty(currentPersonId))
        {
            repository.DeletePerson(currentPersonId);

            if (parentController != null)
                parentController.Refresh();
        }
    }
}