using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerStats : MonoBehaviour {
	public float score;
	public int lives, qScore, obstaclesPlayerSuccessfullyJumpedOver, totalQuestions, questionsCorrect, gameLength, user_id;
	public GameObject quizPanel, gc, gameOverPanel, questionOKBtn;
	public Text scoreText, livesText, gameOverText, GOResponseText, questionsAttemptTxt, questionsCorrectTxt, questionsLeftTxt;
	public GameObject user_id_input;
	private string firstName, lastName;

	QuestionHandler2 qHandler;
	TimeController tc;

	// Use this for initialization
	void Start () {
		gc = GameObject.FindWithTag("GameController");
		tc = gc.GetComponent<TimeController>();

		qHandler =  quizPanel.GetComponent<QuestionHandler2>();
		score = 0;
		totalQuestions = 0;
		questionsCorrect = 0;
		scoreText.text = "Score: " + score;
		livesText.text = "Lives: " + lives;
		questionsAttemptTxt.text = "Attempted: " + totalQuestions;
		questionsCorrectTxt.text = "Correct: " + questionsCorrect;
		questionsLeftTxt.text = "Remaining: " + gameLength;
		gameOverPanel.SetActive(false);
		user_id = 0;
		InputField input = user_id_input.GetComponent<InputField>();
		try {
			user_id = int.Parse(input.text);
			GOResponseText.text = "Thank you for submitting.";
		} catch { GOResponseText.text = "Please insert a numerical value"; }
		Debug.Log(input.text);
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void UpdateScore(float points) {
		score += points;
		if(score < 0) score = 0;
		scoreText.text = "Score: " + score;
		//Every 4 obstacles successfull jumed over will open a question
		//Pause the game
		//If answer is right += score
		//If answer is wrong --lives
		if (obstaclesPlayerSuccessfullyJumpedOver % 4 == 0 && obstaclesPlayerSuccessfullyJumpedOver > 0) {
			//OpenQuestion();
			print("Time for a question!");
		}
	}

	public void UpdateLives() {
		/*
		if (lives > 0) {
			lives--;
			livesText.text = "Lives: " + lives;
		}
		print(lives);
		if (lives <= 0) {
			EndGame();
		}
		*/
	}

	public void UpdateQuestionsCount(bool correct) {
		totalQuestions++;
		if (correct) {
			questionsCorrect++;
			questionsCorrectTxt.text = "Correct: " + questionsCorrect;
		}
		questionsAttemptTxt.text = "Attempted: " + totalQuestions;
		
		if (totalQuestions >= gameLength) EndGame();
	}

	public void OpenQuestion() {
		qHandler.GetRandomQuestion();
	}

	public void EndGame() {
		gameOverPanel.SetActive(true);
		gameOverText.text = "You got " + questionsCorrect + "/" + totalQuestions + " questions correct. Good game!";
		questionOKBtn.SetActive(!tc.qInProgress);
	}

	public void UpdateUserID() {
		InputField input = user_id_input.GetComponent<InputField>();
		try {
			user_id = int.Parse(input.text);
			GOResponseText.text = "";
			GOResponseText.color = Color.black;
		}catch {
			GOResponseText.text = "Please insert a numerical value";
			GOResponseText.color = Color.red;
		}
	}
}


