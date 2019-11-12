using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.Windows.Speech;
 
public class KeyWordRecognizerBehaviour : MonoBehaviour {
	
	KeywordRecognizer keywordRecognizer;
	// keyword array
	public string[] Keywords_array;
    public GameObject Panel;
    public GameObject Task1;
    public GameObject Task2;

 
	// Use this for initialization
	void Start () {
		// Change size of array for your requirement
		// Keywords_array = new string[2];
		// Keywords_array [0] = "hello";
		// Keywords_array [1] = "how are you";
 
		// instantiate keyword recognizer, pass keyword array in the constructor
		keywordRecognizer = new KeywordRecognizer(Keywords_array);
		keywordRecognizer.OnPhraseRecognized += OnKeywordsRecognized;
		// start keyword recognizer
		keywordRecognizer.Start ();
	}
 
	void OnKeywordsRecognized(PhraseRecognizedEventArgs args)
	{
		Debug.Log ("Keyword: " + args.text + "; Confidence: " + args.confidence + "; Start Time: " + args.phraseStartTime + "; Duration: "  + args.phraseDuration);
		// write your own logic
        if(args.text == "Show Window"){
            // Debug.Log("Recognized");
            Panel.SetActive(true);
        }
                if(args.text == "Hide Window"){
            // Debug.Log("Recognized");
            Panel.SetActive(false);
        }
                if(args.text == "Task One"){
            // Debug.Log("Recognized");
            Task1.SetActive(true);
        }
                if(args.text == "Task Two"){
            // Debug.Log("Recognized");
            Task2.SetActive(true);
        }
	}
}