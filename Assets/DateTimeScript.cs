using UnityEngine;
using TMPro;
using System;

public class DateTimeScript : MonoBehaviour
{
    [Header("UI Refernce")]

    [SerializeField] private TextMeshProUGUI dateTimeText;

    [Header("Format")]
    [SerializeField] private bool showDate = true;
    [SerializeField] private bool showSecs = true;
    [SerializeField] private bool showTime = true;
    [SerializeField] private bool use24Hr = true;

    //this will update the timer every second
    [SerializeField] private float updateInterval = 1f;

    private float timer = 0f;

    // this func will show the timer on launch so the text isn't blank
    private void Start()
    {
        UpdateDateTime();
    }

    private void Update()
    {
        timer += Time.deltaTime;
        if (timer >= updateInterval)
        {
            timer = 0f;
            UpdateDateTime();
        }
    }

    private void UpdateDateTime()
    {
        if (dateTimeText == null)
        {
            Debug.LogWarning("DateTimeDisplay: No text was assigned in the Inspector!");
            return;
        }

        DateTime now = DateTime.Now;
        string display = "";

        if (showDate)
        {
            // Example: Monday, 10 March 2026
            display += now.ToString("dddd, dd MMMM yyyy");
        }

        // if the date and tine are showing add a new line 
        if (showDate && showTime)
        {
            display += "\n";
        }

        if (showTime)
        {
            if (use24Hr)
            {
                // this will show 24hr time
                display += showSecs
                    ? now.ToString("HH:mm:ss")
                    : now.ToString("HH:mm");
            }
            else
            {
                // this will show 12hr time
                display += showSecs
                    ? now.ToString("hh:mm:ss tt")
                    : now.ToString("hh:mm tt");
            }
        }

        dateTimeText.text = display;
    }
}
