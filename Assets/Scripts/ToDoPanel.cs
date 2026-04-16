using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ToDoPanel : MonoBehaviour
{
    [Header("UI References")]
    public Button addButton;
    public Button closeButton;
    public Transform taskList;
    public GameObject taskItemPrefab;

    [Header("Panel Reference")]
    public GameObject toDoPanelCanvas;

    private TMP_InputField taskInputField;

    void Start()
    {
        // Find input field automatically
        taskInputField = GetComponentInChildren<TMP_InputField>();

        addButton.onClick.AddListener(AddTask);
        closeButton.onClick.AddListener(ClosePanel);
    }

    void AddTask()
    {
        if (taskInputField == null) return;

        string taskText = taskInputField.text.Trim();
        if (string.IsNullOrEmpty(taskText)) return;

        GameObject newTask = Instantiate(taskItemPrefab, taskList);
        TaskItem item = newTask.GetComponent<TaskItem>();
        item.SetTask(taskText);

        taskInputField.text = "";
    }

    public void ClosePanel()
    {
        toDoPanelCanvas.SetActive(false);
    }
}