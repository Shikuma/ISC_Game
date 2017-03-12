using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerStats : MonoBehaviour {
	public float score;
	public int lives, qScore, obstaclesPlayerSuccessfullyJumpedOver;

	public Text scoreText, livesText, qScoreText;

	// Use this for initialization
	void Start () {
		score = 0;
		lives = 3;	
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OpenQuestion() {

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
		//else DIE
	}
}
