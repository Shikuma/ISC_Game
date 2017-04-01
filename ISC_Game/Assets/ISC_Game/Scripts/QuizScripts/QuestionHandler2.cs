using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class QuestionHandler2 : MonoBehaviour {
	public Text qText, responseText, correctAnswerText;
	public Text[] answersChoices;
	public GameObject answersPanel, qPanel, qResponsePanel;

	public List<Question> allQData, usedQuestions;
	public List<Answer> allAnswers;
	string[] answers, questions;
	string answersDataText, questionsDataText;
	private Question currQuestion;
	private Answer[] currAnswers;
	private List<string> correctAnswers;
	WWW questionsData, answersData;

	private GameObject gc, player;
	private TimeController tc;
	private PlayerStats ps;

	public List<QuestionRecord> records;

	// Use this for initialization
	void Start () {
		gc = GameObject.FindWithTag("GameController");
		tc = gc.GetComponent<TimeController>();
		player = GameObject.FindWithTag("Player");
		ps = player.GetComponent<PlayerStats>();
		records = new List<QuestionRecord>();

		qPanel.SetActive(false);
		answersPanel.SetActive(false);
		qResponsePanel.SetActive(false);

		questionsData = new WWW("http://localhost/ISC_GetQuestions.php");
		StartCoroutine(GetQuestions());
		answersData = new WWW("http://localhost/ISC_GetAnswers.php");
		
	}

	private IEnumerator GetQuestions() {
		yield return questionsData;
		questionsDataText = questionsData.text;
		questions = questionsDataText.Split(';');
		for (int i = 0; i < questions.Length; i++) {
			if (questions[i] != "") {
				Question obj = new Question(
					int.Parse(GetDataValue(questions[i], "question_id:")),
					GetDataValue(questions[i], "question_text:"),
					GetDataValue(questions[i], "subject:")
					);
				allQData.Add(obj);
			}
		}
		StartCoroutine(GetAnswers());
	}

	private IEnumerator GetAnswers() {
		yield return answersData;
		answersDataText = answersData.text;
		answers = answersDataText.Split(';');
		for (int i = 0; i < answers.Length; i++) {
			if (answers[i] != "") {
				Answer obj = new Answer(
					int.Parse(GetDataValue(answers[i], "answer_id:")),
					GetDataValue(answers[i], "answer_text:"),
					int.Parse(GetDataValue(answers[i], "question_id:"))
					);
				
				allAnswers.Add(obj);
			}
		}
		RandomizeQuestions();
	}

	string GetDataValue(string data, string index) {
		//Take a piece of a string. index is the string it takes in. +Length will take the rest of the string.
		string value = data.Substring(data.IndexOf(index) + index.Length);
		if (value.Contains("|")) value = value.Remove(value.IndexOf("|"));
		return value;
	}

	private void RandomizeQuestions() {
		for (int i = 0; i < allQData.Count; i++) {
			Question tmp = allQData[i];
			int r = Random.Range(i, allQData.Count);
			allQData[i] = allQData[r];
			allQData[r] = tmp;
		}
	}

	public void GetRandomQuestion() {
		//Check if player reached end of questions
		if (ps.totalQuestions > allQData.Count) {
			ps.EndGame();
			return;
		}

		//Pause game and set UI
		tc.PauseGame();
		tc.qInProgress = true;
		qPanel.SetActive(true);
		answersPanel.SetActive(true);

		//Set CurrQuestion
		currQuestion = allQData[ps.totalQuestions];
		//If we're clear, then continue and add question to usedQuestions list
		qText.text = currQuestion.q_text;
		usedQuestions.Add(currQuestion);
		GetRandomAnswers();
	}

	void GetRandomAnswers() {
		currAnswers = new Answer[answersChoices.Length];
		Answer thisAnswer;
		List<Answer> tempAnswerList = new List<Answer>();
		correctAnswers = new List<string>();
		//Set tempAnswerList
		for (int i = 0; i < allAnswers.Count; i++) {
			tempAnswerList.Add(allAnswers[i]);
		}
		//Set answers array
		int rng = 0;
		for (int i = 0; i < currAnswers.Length; i++) {
			rng = Random.Range(0, tempAnswerList.Count-1);
			thisAnswer = tempAnswerList[rng];
			//Get first answer as correct answer
			if (i == 0) {
				if (thisAnswer.q_id == currQuestion.q_id) {
					currAnswers[i] = thisAnswer;
					tempAnswerList.RemoveAt(rng);
				} else {
					i--;
					continue;
				}
			}else {
				currAnswers[i] = thisAnswer;
				tempAnswerList.RemoveAt(rng);
			}
			if(thisAnswer.q_id == currQuestion.q_id) correctAnswers.Add(thisAnswer.a_text);
		}
		//Shuffle currAnswers
		for(int i = 0; i < currAnswers.Length; i++) {
			Answer tmp = currAnswers[i];
			int r = Random.Range(i, currAnswers.Length);
			currAnswers[i] = currAnswers[r];
			currAnswers[r] = tmp;
		}
		//Output currAnswers in sequential order
		for(int i = 0; i < answersChoices.Length; i++) {
			answersChoices[i].text = currAnswers[i].a_text;
		}
	}

	public void CheckAnswer() {
		qPanel.SetActive(false);
		answersPanel.SetActive(false);
		qResponsePanel.SetActive(true);
		bool isCorrect = false;
		string userAnswer = EventSystem.current.currentSelectedGameObject.gameObject.transform.GetChild(0).GetComponent<Text>().text;
		for (int i = 0; i < currAnswers.Length; i++) {
			if (EventSystem.current.currentSelectedGameObject.gameObject.transform.GetChild(0).GetComponent<Text>().text == currAnswers[i].a_text) {
				if (currAnswers[i].q_id == currQuestion.q_id) {
					correctAnswerText.text = "";
					responseText.text = "Correct! Good job!";
					ps.UpdateQuestionsCount(true);
					isCorrect = true;
					break;
				}
			}
		}

		if (!isCorrect) {
			ps.UpdateQuestionsCount(false);
			ps.UpdateLives();
			if (ps.lives <= 0) {
				qResponsePanel.SetActive(false);
				tc.qInProgress = false;
			}
			correctAnswerText.text = "";
			for (int i = 0; i < correctAnswers.Count; i++) {
				if (i > 0) correctAnswerText.text += ", ";
				correctAnswerText.text += correctAnswers[i];
				
			}
			responseText.text = "Incorrect.. Here is/are the correct answer(s):";
		}

		//Record incorrect stats
		QuestionRecord qRecord = new QuestionRecord(currQuestion.q_text, userAnswer, currQuestion.q_id, isCorrect);
		records.Add(qRecord);

		ps.obstaclesPlayerSuccessfullyJumpedOver = 0;
	}

	public void ContinueQuestion() {
		qResponsePanel.SetActive(false);
		tc.qInProgress = false;
		tc.PauseGame();
	}
}
