using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class QuestionHandler2 : MonoBehaviour {
	string[] answers, questions;
	string answersDataText, questionsDataText;
	public List<Question> allQData;
	WWW questionsData, answersData;

	// Use this for initialization
	void Start () {
		questionsData = new WWW("http://localhost/ISC_GetQuestions.php");
		StartCoroutine(GetQuestions());
		answersData = new WWW("http://localhost/ISC_GetAnswers.php");
		
	}

	private IEnumerator GetQuestions() {
		yield return questionsData;
		questionsDataText = questionsData.text;
		Debug.Log(questionsDataText);
		questions = questionsDataText.Split(';');
		for (int i = 0; i < questions.Length; i++) {
			if (questions[i] != "") {
				Question obj = new Question(
					GetDataValue(questions[i], "qustion_text:"),
					new List<string>(),
					"",
					int.Parse(GetDataValue(questions[i], "question_id:"))
					);
				allQData.Add(obj);
			}
		}
		print(allQData.Capacity);
		StartCoroutine(GetAnswers());
	}

	private IEnumerator GetAnswers() {
		yield return answersData;
		answersDataText = answersData.text;
		answers = answersDataText.Split(';');
		for (int i = 0; i < answers.Length; i++) {
			if (answers[i] != "") {
				for (int j = 0; j < allQData.Capacity-1; j++) {
					if (int.Parse(GetDataValue(answers[i], "question_id:")) == allQData[j].question_id) {
						allQData[j].answers.Add(GetDataValue(answers[i], "answer_text:"));
					}
				}
			}
		}

		for(int i = 0; i < allQData.Capacity - 1; i++) {
			print(allQData[i].question + " - " + allQData[i].answers);

		}
	}

	string GetDataValue(string data, string index) {
		//Take a piece of a string. index is the string it takes in. +Length will take the rest of the string.
		string value = data.Substring(data.IndexOf(index) + index.Length);
		if (value.Contains("|")) value = value.Remove(value.IndexOf("|"));
		return value;
	}
}
