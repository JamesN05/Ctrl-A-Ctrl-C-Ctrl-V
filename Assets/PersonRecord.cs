using System;
using System.Collections.Generic;

[Serializable]
public class PersonRecord
{
    public string id;
    public string name;
    public string relationship;
    public string reminder;
    public bool consentConfirmed;
    public string photoFileName;
    public string photoPath;
    public string addedAtIso;
    public int recognitionCount;
    public List<float> faceEncoding = new List<float>();
}