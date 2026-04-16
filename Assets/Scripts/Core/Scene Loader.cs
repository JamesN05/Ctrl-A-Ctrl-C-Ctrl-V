using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneLoader : MonoBehaviour
{
    public void OpenRegisterPerson()
    {
        SceneManager.LoadScene("RegisterPerson");
    }

    public void OpenRecognition()
    {
        SceneManager.LoadScene("Recognition");
    }

    public void OpenProfile()
    {
        SceneManager.LoadScene("Profile");
    }

    public void OpenTodo()
    {
        SceneManager.LoadScene("Todo");
    }

    public void OpenDebug()
    {
        SceneManager.LoadScene("DebugScene");
    }

    public void OpenMainMenu()
    {
        SceneManager.LoadScene("MainMenu");
    }
}