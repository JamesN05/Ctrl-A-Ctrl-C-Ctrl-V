using System.Collections.Generic;
using System.IO;
using TMPro;
using UnityEngine;

public class SavedPeoplePanelController : MonoBehaviour
{
    public LocalPersonRepository repository;
    public Transform contentRoot;
    public GameObject personRowPrefab;
    public TMP_Text emptyStateText;

    public void Refresh()
    {
        if (repository == null || contentRoot == null || personRowPrefab == null)
        {
            Debug.LogWarning("SavedPeoplePanelController is missing references.");
            return;
        }

        foreach (Transform child in contentRoot)
            Destroy(child.gameObject);

        List<PersonRecord> people = repository.GetAllPeople();

        Debug.Log("Saved people count: " + people.Count);

        if (emptyStateText != null)
            emptyStateText.gameObject.SetActive(people.Count == 0);

        foreach (PersonRecord person in people)
        {
            GameObject row = Instantiate(personRowPrefab, contentRoot);
            SavedPersonRowUI rowUI = row.GetComponent<SavedPersonRowUI>();

            Texture2D loadedTexture = null;

            if (!string.IsNullOrEmpty(person.photoPath) && File.Exists(person.photoPath))
            {
                byte[] bytes = File.ReadAllBytes(person.photoPath);
                loadedTexture = new Texture2D(2, 2);
                loadedTexture.LoadImage(bytes);
            }

            rowUI.Setup(person, loadedTexture, repository, this);
        }

        Debug.Log("Content root: " + contentRoot);
        Debug.Log("People count: " + people.Count);
        Debug.Log("Prefab: " + personRowPrefab);
    }
}