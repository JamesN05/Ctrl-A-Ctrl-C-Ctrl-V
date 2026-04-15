using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class HoloLensDebugMenu : MonoBehaviour
{
    [Header("Menu Placement")]
    public float distanceFromCamera = 1.2f;
    public Vector3 offset = new Vector3(0f, 0f, 0.15f);

    [Header("Status")]
    public string buildStatus = "SCRUM-82 Test Build";
    public string trackingStatus = "Waiting";
    public string recognitionStatus = "Disabled";
    public string customStatus = "Ready";

    private Camera mainCam;
    private GameObject menuRoot;
    private TMP_Text fpsText;
    private TMP_Text headText;
    private TMP_Text statusText;
    private TMP_Text trackingText;
    private TMP_Text recognitionText;
    private TMP_Text customText;
    private TMP_Text logsText;

    private readonly Queue<string> logs = new Queue<string>();
    private readonly List<GameObject> spawnedCubes = new List<GameObject>();

    private float fpsTimer;
    private int fpsFrames;
    private float currentFps;

    private void Start()
    {
        mainCam = Camera.main;
        BuildMenu();
        AddLog("Debug menu started");
    }

    private void Update()
    {
        if (mainCam == null)
            mainCam = Camera.main;

        UpdateFps();
        UpdateHeadInfo();
        UpdateStatusTexts();
        FollowCamera();
    }

    private void BuildMenu()
    {
        menuRoot = new GameObject("DebugMenuRoot");
        Canvas canvas = menuRoot.AddComponent<Canvas>();
        canvas.renderMode = RenderMode.WorldSpace;
        menuRoot.AddComponent<CanvasScaler>();
        menuRoot.AddComponent<GraphicRaycaster>();

        RectTransform canvasRect = menuRoot.GetComponent<RectTransform>();
        canvasRect.sizeDelta = new Vector2(1600, 1200);
        canvasRect.localScale = Vector3.one * 0.0007f;

        GameObject panel = CreateUI("Panel", menuRoot.transform);
        Image panelImage = panel.AddComponent<Image>();
        panelImage.color = new Color(0.1f, 0.1f, 0.1f, 0.9f);

        RectTransform panelRect = panel.GetComponent<RectTransform>();
        panelRect.sizeDelta = new Vector2(1600, 1200);

        VerticalLayoutGroup layout = panel.AddComponent<VerticalLayoutGroup>();
        layout.padding = new RectOffset(30, 30, 30, 30);
        layout.spacing = 16;
        layout.childControlHeight = true;
        layout.childControlWidth = true;
        layout.childForceExpandHeight = false;
        layout.childForceExpandWidth = true;

        CreateText(panel.transform, "HOLOLENS DEBUG MENU", 60, FontStyles.Bold, 110);
        statusText = CreateText(panel.transform, "", 36, FontStyles.Normal, 60);
        fpsText = CreateText(panel.transform, "", 36, FontStyles.Normal, 60);
        headText = CreateText(panel.transform, "", 36, FontStyles.Normal, 110);
        trackingText = CreateText(panel.transform, "", 36, FontStyles.Normal, 60);
        recognitionText = CreateText(panel.transform, "", 36, FontStyles.Normal, 60);
        customText = CreateText(panel.transform, "", 36, FontStyles.Normal, 60);

        CreateButtonRow(panel.transform,
            ("Spawn Cube", SpawnCube),
            ("Clear Cubes", ClearCubes));

        CreateButtonRow(panel.transform,
            ("Track Found", () => { trackingStatus = "Face Found"; AddLog("Tracking found"); }),
            ("Track Lost", () => { trackingStatus = "Face Lost"; AddLog("Tracking lost"); }));

        CreateButtonRow(panel.transform,
            ("Recog On", () => { recognitionStatus = "Enabled"; AddLog("Recognition enabled"); }),
            ("Recog Off", () => { recognitionStatus = "Disabled"; AddLog("Recognition disabled"); }));

        CreateText(panel.transform, "Logs", 42, FontStyles.Bold, 70);
        logsText = CreateText(panel.transform, "No logs yet", 28, FontStyles.Normal, 220);
        logsText.enableWordWrapping = true;
    }

    private void FollowCamera()
    {
        if (mainCam == null || menuRoot == null)
            return;

        Transform cam = mainCam.transform;
        menuRoot.transform.position = cam.position + cam.forward * distanceFromCamera + cam.TransformVector(offset);

        Vector3 dir = menuRoot.transform.position - cam.position;
        dir.y = 0f;
        if (dir.sqrMagnitude > 0.0001f)
            menuRoot.transform.rotation = Quaternion.LookRotation(dir.normalized, Vector3.up);
    }

    private void UpdateFps()
    {
        fpsFrames++;
        fpsTimer += Time.unscaledDeltaTime;

        if (fpsTimer >= 0.5f)
        {
            currentFps = fpsFrames / fpsTimer;
            fpsFrames = 0;
            fpsTimer = 0f;
        }

        if (fpsText != null)
            fpsText.text = $"FPS: {currentFps:F1}";
    }

    private void UpdateHeadInfo()
    {
        if (mainCam == null || headText == null)
            return;

        Vector3 pos = mainCam.transform.position;
        Vector3 rot = mainCam.transform.eulerAngles;

        headText.text =
            $"Head Pos: {pos.x:F2}, {pos.y:F2}, {pos.z:F2}\n" +
            $"Head Rot: {rot.x:F1}, {rot.y:F1}, {rot.z:F1}";
    }

    private void UpdateStatusTexts()
    {
        if (statusText != null)
            statusText.text = $"Build: {buildStatus}";
        if (trackingText != null)
            trackingText.text = $"Tracking: {trackingStatus}";
        if (recognitionText != null)
            recognitionText.text = $"Recognition: {recognitionStatus}";
        if (customText != null)
            customText.text = $"Custom: {customStatus}";
    }

    private GameObject CreateUI(string name, Transform parent)
    {
        GameObject go = new GameObject(name);
        go.transform.SetParent(parent, false);
        go.AddComponent<RectTransform>();
        return go;
    }

    private TMP_Text CreateText(Transform parent, string content, float fontSize, FontStyles style, float height)
    {
        GameObject textObj = CreateUI("Text", parent);
        RectTransform rect = textObj.GetComponent<RectTransform>();
        rect.sizeDelta = new Vector2(1480, height);

        TMP_Text text = textObj.AddComponent<TextMeshProUGUI>();
        text.text = content;
        text.fontSize = fontSize;
        text.fontStyle = style;
        text.color = Color.white;
        text.alignment = TextAlignmentOptions.Left;
        return text;
    }

    private void CreateButtonRow(Transform parent, params (string label, UnityEngine.Events.UnityAction action)[] buttons)
    {
        GameObject row = CreateUI("ButtonRow", parent);

        RectTransform rect = row.GetComponent<RectTransform>();
        rect.sizeDelta = new Vector2(1480, 120);

        HorizontalLayoutGroup layout = row.AddComponent<HorizontalLayoutGroup>();
        layout.spacing = 16;
        layout.childForceExpandWidth = true;
        layout.childForceExpandHeight = false;
        layout.childControlWidth = true;
        layout.childControlHeight = true;

        foreach (var buttonInfo in buttons)
            CreateButton(row.transform, buttonInfo.label, buttonInfo.action);
    }

    private void CreateButton(Transform parent, string label, UnityEngine.Events.UnityAction action)
    {
        GameObject buttonObj = CreateUI(label + "Button", parent);

        RectTransform rect = buttonObj.GetComponent<RectTransform>();
        rect.sizeDelta = new Vector2(420, 100);

        Image image = buttonObj.AddComponent<Image>();
        image.color = new Color(0.15f, 0.4f, 0.85f, 1f);

        Button button = buttonObj.AddComponent<Button>();
        button.targetGraphic = image;
        button.onClick.AddListener(action);

        GameObject textObj = CreateUI("Label", buttonObj.transform);
        RectTransform textRect = textObj.GetComponent<RectTransform>();
        textRect.anchorMin = Vector2.zero;
        textRect.anchorMax = Vector2.one;
        textRect.offsetMin = Vector2.zero;
        textRect.offsetMax = Vector2.zero;

        TMP_Text text = textObj.AddComponent<TextMeshProUGUI>();
        text.text = label;
        text.fontSize = 32;
        text.fontStyle = FontStyles.Bold;
        text.color = Color.white;
        text.alignment = TextAlignmentOptions.Center;
    }

    private void SpawnCube()
    {
        if (mainCam == null)
            return;

        GameObject cube = GameObject.CreatePrimitive(PrimitiveType.Cube);
        cube.transform.position = mainCam.transform.position + mainCam.transform.forward * 2f;
        cube.transform.localScale = Vector3.one * 0.15f;
        spawnedCubes.Add(cube);
        AddLog("Spawned test cube");
    }

    private void ClearCubes()
    {
        foreach (var cube in spawnedCubes)
        {
            if (cube != null)
                Destroy(cube);
        }

        spawnedCubes.Clear();
        AddLog("Cleared cubes");
    }

    private void AddLog(string message)
    {
        logs.Enqueue(message);

        while (logs.Count > 6)
            logs.Dequeue();

        if (logsText != null)
            logsText.text = string.Join("\n", logs);
    }
}