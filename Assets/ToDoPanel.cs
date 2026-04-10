using UnityEngine;
using TMPro;

public class ToDoPanel : MonoBehaviour
{
    [Header("Title")]
    public TMP_Text titleText;

    [Header("Task Text Objects")]
    public TMP_Text[] taskTexts;

    [Header("Task Completion Status")]
    public bool[] taskCompleted;

    // Colours
    private Color completedColor = new Color(0.4f, 0.8f, 0.4f, 1f);   // green
    private Color pendingColor = new Color(1f, 1f, 1f, 1f);   // white
    private Color strikeColor = new Color(0.5f, 0.5f, 0.5f, 1f);   // grey

    void Start()
    {
        if (titleText != null)
            titleText.text = "To-Do List";

        // TODO: Replace with database data later
        string[] defaultTasks = {
            "✓ Say hello to John",
            "○ Follow up on project",
            "○ Schedule meeting",
            "○ Review notes"
        };

        taskCompleted = new bool[] { true, false, false, false };

        for (int i = 0; i < taskTexts.Length && i < defaultTasks.Length; i++)
        {
            if (taskTexts[i] != null)
            {
                taskTexts[i].text = defaultTasks[i];
                taskTexts[i].color = taskCompleted[i] ? strikeColor : pendingColor;
            }
        }
    }

    // Call this to update a task from your database later
    public void SetTask(int index, string text, bool completed)
    {
        if (index < taskTexts.Length && taskTexts[index] != null)
        {
            taskTexts[index].text = (completed ? "✓ " : "○ ") + text;
            taskTexts[index].color = completed ? strikeColor : pendingColor;
        }
    }
}