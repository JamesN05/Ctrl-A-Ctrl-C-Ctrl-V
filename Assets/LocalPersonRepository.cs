using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEngine;

public class LocalPersonRepository : MonoBehaviour
{
    private string DatabasePath => Path.Combine(Application.persistentDataPath, "people_db.json");
    private string PhotosFolder => Path.Combine(Application.persistentDataPath, "photos");

    private void Awake()
    {
        if (!Directory.Exists(PhotosFolder))
            Directory.CreateDirectory(PhotosFolder);

        if (!File.Exists(DatabasePath))
            SaveDatabase(new PersonDatabase());
    }

    public PersonDatabase LoadDatabase()
    {
        if (!File.Exists(DatabasePath))
            return new PersonDatabase();

        string json = File.ReadAllText(DatabasePath);
        if (string.IsNullOrWhiteSpace(json))
            return new PersonDatabase();

        return JsonUtility.FromJson<PersonDatabase>(json) ?? new PersonDatabase();
    }

    public void SaveDatabase(PersonDatabase db)
    {
        string json = JsonUtility.ToJson(db, true);
        File.WriteAllText(DatabasePath, json);
    }

    public void SavePerson(PersonRecord person, byte[] jpgBytes)
    {
        if (!Directory.Exists(PhotosFolder))
            Directory.CreateDirectory(PhotosFolder);

        string fileName = $"{person.id}.jpg";
        string filePath = Path.Combine(PhotosFolder, fileName);

        File.WriteAllBytes(filePath, jpgBytes);

        person.photoFileName = fileName;
        person.photoPath = filePath;

        PersonDatabase db = LoadDatabase();
        db.people.Add(person);
        SaveDatabase(db);
    }

    public List<PersonRecord> GetAllPeople()
    {
        return LoadDatabase().people;
    }

    public PersonRecord GetById(string id)
    {
        return LoadDatabase().people.FirstOrDefault(p => p.id == id);
    }

    public void DeletePerson(string id)
    {
        PersonDatabase db = LoadDatabase();
        PersonRecord person = db.people.FirstOrDefault(p => p.id == id);

        if (person != null)
        {
            if (!string.IsNullOrEmpty(person.photoPath) && File.Exists(person.photoPath))
                File.Delete(person.photoPath);

            db.people.Remove(person);
            SaveDatabase(db);
        }
    }

    public void ClearAll()
    {
        if (Directory.Exists(PhotosFolder))
            Directory.Delete(PhotosFolder, true);

        Directory.CreateDirectory(PhotosFolder);
        SaveDatabase(new PersonDatabase());
    }

    public string GetDebugPath()
    {
        return Application.persistentDataPath;
    }
}