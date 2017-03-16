using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using System.IO;

public class QuestionController : MonoBehaviour {

	public Text questionBox;
	private int qNum = 1;

	//public TextAsset qSource;
	protected FileInfo theSourceFile = null;
	protected StreamReader reader = null;
	protected string text = " ";

	private List<string> qList = new List<string>();

	// Use this for initialization
	void Start () {
		theSourceFile = new FileInfo (Application.dataPath + "/ISC_Game/Scripts/QuizScripts/Test.txt");
		reader = theSourceFile.OpenText();

		while (true) {
			text = reader.ReadLine();
			//Console.WriteLine(text);
			if (text == null) {
				break;
			}
			qList.Add(text);
		}

		reader.Close ();
	}
	
	// Update is called once per frame
	void Update () {
		if (qNum <= qList.Count) {
			questionBox.text = qList [qNum - 1];
		}	
	}

	public void SelectAnswer(int answer){
		qNum = answer;
	}
}
