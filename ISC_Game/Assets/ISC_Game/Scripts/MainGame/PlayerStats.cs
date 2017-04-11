using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Diagnostics;

public class PlayerStats : MonoBehaviour {
	public float score;
	public int lives, qScore, obstaclesPlayerSuccessfullyJumpedOver, totalQuestions, questionsCorrect, gameLength, user_id, secondsToFinish;
	public GameObject quizPanel, gc, gameOverPanel, questionOKBtn;
	public Text scoreText, livesText, gameOverText, GOResponseText, questionsAttemptTxt, questionsCorrectTxt, questionsLeftTxt;
	public GameObject user_id_input;
	private string firstName, lastName;
	public bool canSubmit;
	public Stopwatch timer;
	public SpriteRenderer background;
	public Sprite nightSprite;

	private GameObject flag;

	QuestionHandler2 qHandler;
	TimeController tc;

	// Use this for initialization
	void Start () {
		canSubmit = true;
		gc = GameObject.FindWithTag("GameController");
		tc = gc.GetComponent<TimeController>();
		flag = GameObject.FindWithTag ("flag");
		flag.SetActive (false);

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
		//Debug.Log(input.text);
		timer = new Stopwatch();
		timer.Start();
	}
	
	// Update is called once per frame
	void Update () {
		//scoreText.text = timer.ElapsedMilliseconds.ToString();
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

		if (totalQuestions >= (gameLength/2)) {
			background.sprite = nightSprite;
		}

		if (correct) {
			questionsCorrect++;
			questionsCorrectTxt.text = "Correct: " + questionsCorrect;
		}
		questionsAttemptTxt.text = "Attempted: " + totalQuestions;
		questionsLeftTxt.text = "Remaining: " + (gameLength-totalQuestions);
		
		if (totalQuestions >= gameLength) {
			//EndGame ();
			StartCoroutine("finishGame");
		}
	}

	public void OpenQuestion() {
		qHandler.GetRandomQuestion();
	}

	public void EndGame() {
		if(timer.IsRunning) timer.Stop();
		secondsToFinish = (int)timer.ElapsedMilliseconds / 1000;
		gameOverPanel.SetActive(true);
		gameOverText.text = "You got " + questionsCorrect + "/" + totalQuestions + " questions correct. Good game!\n" + "You completed the game in " + secondsToFinish + " seconds!";
		questionOKBtn.SetActive(!tc.qInProgress);
		tc.PauseGame ();
	}

	IEnumerator finishGame (){
		// Put a flag in there
		yield return new WaitForSeconds(.5f);
		flag.SetActive(true);
		yield return new WaitForSeconds(1.25f);
		EndGame ();
	}

	public void UpdateUserID() {
		InputField input = user_id_input.GetComponent<InputField>();
		//If left blank, set user id = 0
		if (input.text == "") {
			user_id = 0;
			//Debug.Log("Setting user_id to 0");
		}else {
			//If number then continue
			try {
				user_id = int.Parse(input.text);
				GOResponseText.text = "";
				GOResponseText.color = Color.black;

			//if not a number, don't continue
			}catch {
				canSubmit = false;
				GOResponseText.text = "Please insert a numerical value";
				GOResponseText.color = Color.red;
			}
		}

	}
}


