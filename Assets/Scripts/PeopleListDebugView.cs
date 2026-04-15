using System.Text;
using TMPro;
using UnityEngine;

public class PeopleListDebugView : MonoBehaviour
{
    public LocalPersonRepository repository;
    public TMP_Text outputText;

    public void Refresh()
    {
        if (repository == null || outputText == null)
            return;

        PersonDatabase db = repository.LoadDatabase();

        if (db.people.Count == 0)
        {
            outputText.text = "No people saved yet.";
            return;
        }

        StringBuilder sb = new StringBuilder();
        sb.AppendLine("Saved People");
        sb.AppendLine("------------------------------");

        foreach (var person in db.people)
        {
            sb.AppendLine("Name: " + person.name);
            sb.AppendLine("Relationship: " + person.relationship);
            sb.AppendLine("Reminder: " + person.reminder);
            sb.AppendLine("Consent: " + person.consentConfirmed);
            sb.AppendLine("Photo: " + person.photoFileName);
            sb.AppendLine("Added: " + person.addedAtIso);
            sb.AppendLine();
        }

        outputText.text = sb.ToString();
    }
}