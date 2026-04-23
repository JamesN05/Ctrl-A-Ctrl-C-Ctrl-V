using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ToDoPanel : MonoBehaviour
{
    [Header("UI References")]
    public TMP_InputField taskInputField;
    public Button addButton;
    public Button closeButton;
    public Transform taskList;
    public GameObject taskItemPrefab;

    [Header("Panel Reference")]
    public GameObject toDoPanelCanvas;

    void Start()
    {
        if (addButton != null)
            addButton.onClick.AddListener(AddTask);

        if (closeButton != null)
            closeButton.onClick.AddListener(ClosePanel);
    }

    void AddTask()
    {
        if (taskInputField == null || string.IsNullOrEmpty(taskInputField.text.Trim())) return;

        GameObject newTask = Instantiate(taskItemPrefab, taskList);
        TaskItem item = newTask.GetComponent<TaskItem>();
        item.SetTask(taskInputField.text.Trim());
        taskInputField.text = "";
    }

    public void ClosePanel()
    {
        toDoPanelCanvas.SetActive(false);
    }
}