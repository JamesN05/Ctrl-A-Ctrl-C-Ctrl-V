using System.IO;
using UnityEngine;

public class LocalPersonRepository : MonoBehaviour
{
    private string DatabasePath => Path.Combine(Application.persistentDataPath, "people_db.json");
    private string PhotosFolder => Path.Combine(Application.persistentDataPath, "photos");

    private void Awake()
    {
        if (!Directory.Exists(PhotosFolder))
        {
            Directory.CreateDirectory(PhotosFolder);
        }

        if (!File.Exists(DatabasePath))
        {
            SaveDatabase(new PersonDatabase());
        }
    }

    public void SavePerson(PersonRecord person, byte[] jpgBytes)
    {
        if (!Directory.Exists(PhotosFolder))
        {
            Directory.CreateDirectory(PhotosFolder);
        }

        string fileName = $"{person.id}.jpg";
        string filePath = Path.Combine(PhotosFolder, fileName);

        File.WriteAllBytes(filePath, jpgBytes);

        person.photoFileName = fileName;
        person.photoPath = filePath;

        PersonDatabase db = LoadDatabase();
        db.people.Add(person);
        SaveDatabase(db);
    }

    public PersonDatabase LoadDatabase()
    {
        if (!File.Exists(DatabasePath))
        {
            return new PersonDatabase();
        }

        string json = File.ReadAllText(DatabasePath);
        if (string.IsNullOrWhiteSpace(json))
        {
            return new PersonDatabase();
        }

        return JsonUtility.FromJson<PersonDatabase>(json) ?? new PersonDatabase();
    }

    public void SaveDatabase(PersonDatabase db)
    {
        string json = JsonUtility.ToJson(db, true);
        File.WriteAllText(DatabasePath, json);
    }

    public void ClearAll()
    {
        if (Directory.Exists(PhotosFolder))
        {
            Directory.Delete(PhotosFolder, true);
        }

        Directory.CreateDirectory(PhotosFolder);
        SaveDatabase(new PersonDatabase());
    }

    public string GetDebugPath()
    {
        return Application.persistentDataPath;
    }
}