using System.IO;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class SavedPeoplePanelController : MonoBehaviour
{
    [Header("Dependencies")]
    public LocalPersonRepository repository;

    [Header("UI")]
    public Transform contentRoot;
    public GameObject personRowPrefab;
    public TMP_Text emptyStateText;

    public void Refresh()
    {
        if (repository == null || contentRoot == null || personRowPrefab == null)
            return;

        foreach (Transform child in contentRoot)
            Destroy(child.gameObject);

        List<PersonRecord> people = repository.GetAllPeople();

        if (emptyStateText != null)
            emptyStateText.gameObject.SetActive(people.Count == 0);

        foreach (PersonRecord person in people)
        {
            GameObject row = Instantiate(personRowPrefab, contentRoot);
            SavedPersonRowUI rowUI = row.GetComponent<SavedPersonRowUI>();

            Texture2D photoTexture = null;

            if (!string.IsNullOrEmpty(person.photoPath) && File.Exists(person.photoPath))
            {
                byte[] bytes = File.ReadAllBytes(person.photoPath);
                photoTexture = new Texture2D(2, 2);
                photoTexture.LoadImage(bytes);
            }

            rowUI.Setup(person, photoTexture, repository, this);
        }
    }
}