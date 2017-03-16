using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class QuestionHandler : MonoBehaviour {
	public GameObject answersPanel, qPanel, qResponsePanel;
	public Text qText, a1Text, a2Text, a3Text, a4Text, responseText, correctAnswerText;
	private GameObject gc, player;
	private TimeController tc;
	private List<Question> questions;
	private Question currQuestion;

	PlayerStats ps;
	// Use this for initialization
	void Start () {
		gc = GameObject.FindWithTag("GameController");
		tc = gc.GetComponent<TimeController>();
		questions = new List<Question>();
		player = GameObject.FindWithTag("Player");
		ps = player.GetComponent<PlayerStats>();

		//Disable all panels at start
		answersPanel.SetActive(false);
		qPanel.SetActive(false);
		qResponsePanel.SetActive(false);

		questions.Add(new Question("First question: What is the answer?", "one0", "two0", "three0", "four0", "one0"));
		questions.Add(new Question("Second question: What is the answer?", "one1", "two1", "three1", "four1", "four1"));
		questions.Add(new Question("Third question: What is the answer?", "one2", "two2", "three2", "four2", "two2"));
		questions.Add(new Question("Fourth question: What is the answer?", "one3", "two3", "three3", "four3", "three3"));

		print("questions capacity: " + questions.Capacity);
	}
	
	public void DisplayRandomQuestion() {
		//Pause the game
		tc.PauseGame();
		tc.qInProgress = true;
		qPanel.SetActive(true);
		answersPanel.SetActive(true);

		currQuestion = questions[Random.Range(0, questions.Capacity-1)];
		qText.text = currQuestion.question;
		a1Text.text = currQuestion.answer1;
		a2Text.text = currQuestion.answer2;
		a3Text.text = currQuestion.answer3;
		a4Text.text = currQuestion.answer4;
	}

	public void CheckAnswer() {
		//Check if currQuestion correct answer matches the text of the button clicked
		qPanel.SetActive(false);
		answersPanel.SetActive(false);
		qResponsePanel.SetActive(true);
		if (currQuestion.correctAnswer ==
		EventSystem.current.currentSelectedGameObject.gameObject.transform.GetChild(0).GetComponent<Text>().text) {
			correctAnswerText.text = "";
			responseText.text = "Correct! Good job!";
			ps.UpdateQuestionsCount(true);
		}else {
			ps.UpdateQuestionsCount(false);
			ps.UpdateLives();
			if (ps.lives <= 0) {
				qResponsePanel.SetActive(false);
				tc.qInProgress = false;
			}
			correctAnswerText.text = currQuestion.correctAnswer;
			responseText.text = "Incorrect.. Here is the correct answer.";
			
		}
	}

	public void ContinueQuestion() {
		qResponsePanel.SetActive(false);
		tc.qInProgress = false;
		tc.PauseGame();
	}
}
