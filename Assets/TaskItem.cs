using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class TaskItem : MonoBehaviour
{
    public TextMeshProUGUI taskText;
    public Toggle completedToggle;
    public Button deleteButton;

    public void SetTask(string text)
    {
        taskText.text = text;
        completedToggle.onValueChanged.AddListener(OnToggleChanged);
        deleteButton.onClick.AddListener(DeleteTask);
    }

    void OnToggleChanged(bool isComplete)
    {
        taskText.fontStyle = isComplete ?
            FontStyles.Strikethrough : FontStyles.Normal;
    }

    void DeleteTask()
    {
        Destroy(gameObject);
    }
}