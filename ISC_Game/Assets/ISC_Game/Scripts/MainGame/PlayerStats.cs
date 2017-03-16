using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerStats : MonoBehaviour {
	public float score;
	public int lives, qScore, obstaclesPlayerSuccessfullyJumpedOver, totalQuestions, questionsCorrect;
	public GameObject quizPanel, gc, gameOverPanel;
	public Text scoreText, livesText, qScoreText, gameOverText;

	QuestionHandler qHandler;
	TimeController tc;

	// Use this for initialization
	void Start () {
		gc = GameObject.FindWithTag("GameController");
		tc = gc.GetComponent<TimeController>();

		qHandler =  quizPanel.GetComponent<QuestionHandler>();
		score = 0;
		lives = 3;
		totalQuestions = 0;
		questionsCorrect = 0;
		scoreText.text = "Score: " + score;
		livesText.text = "Lives: " + lives;
		qScoreText.text = "Correct: " + questionsCorrect + "/" + totalQuestions;
		gameOverPanel.SetActive(false);
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
			OpenQuestion();
			print("Time for a question!");
		}
	}

	public void UpdateLives() {
		if (lives > 0) {
			lives--;
			livesText.text = "Lives: " + lives;
		}
		print(lives);
		if (lives <= 0) {
			gameOverPanel.SetActive(true);
			gameOverText.text = "You got " + questionsCorrect + "/" + totalQuestions + " questions correct. Good attempt!";
		}
	}

	public void UpdateQuestionsCount(bool correct) {
		totalQuestions++;
		if(correct) questionsCorrect++;
		qScoreText.text = "Correct: " + questionsCorrect + "/" + totalQuestions;
	}

	void OpenQuestion() {
		qHandler.DisplayRandomQuestion();
	}
}
