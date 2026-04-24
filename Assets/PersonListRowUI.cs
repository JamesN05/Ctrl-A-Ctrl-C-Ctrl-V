using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class PersonListRowUI : MonoBehaviour
{
    public TMP_Text nameText;
    public TMP_Text relationshipText;
    public Button selectButton;

    private string personId;
    private RegisterPersonUIController controller;

    public void Setup(PersonRecord person, RegisterPersonUIController uiController)
    {
        personId = person.id;
        controller = uiController;

        nameText.text = person.name;
        relationshipText.text = person.relationship;

        selectButton.onClick.RemoveAllListeners();
        selectButton.onClick.AddListener(OnSelectPressed);
    }

    private void OnSelectPressed()
    {
        controller.SelectPerson(personId);
    }
}