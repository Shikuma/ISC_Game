using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Diagnostics;

public class PlayerStats : MonoBehaviour {
	public float score;
	public int lives, qScore, obstaclesPlayerSuccessfullyJumpedOver, totalQuestions, questionsCorrect, gameLength, secondsToFinish;
	public GameObject quizPanel, gc, gameOverPanel, questionOKBtn, pauseBtn;
	public Text scoreText, livesText, gameOverText, GOResponseText, questionsAttemptTxt, questionsCorrectTxt, questionsLeftTxt;
	private string firstName, lastName;
	public Stopwatch timer;
	public SpriteRenderer background, birdSR;
	public Sprite nightSprite, birdFly, birdTrip, birdNormal;
	public Slider progressSlider;

	private GameObject flag;

	QuestionHandler2 qHandler;
	TimeController tc;
	UserIdentification uid;

	// Use this for initialization
	void Start () {
		gc = GameObject.FindWithTag("GameController");
		tc = gc.GetComponent<TimeController>();
		flag = GameObject.FindWithTag ("flag");
		flag.SetActive (false);
		uid = gc.GetComponent<UserIdentification>();

		progressSlider.minValue = 0;
		progressSlider.maxValue = gameLength-1;
		progressSlider.wholeNumbers = true;

		birdSR = GetComponent<SpriteRenderer> ();

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

	public IEnumerator changeBird(bool right){
		if (right) {
			birdSR.sprite = birdFly;
		} else {
			birdSR.sprite = birdTrip;
		}

		yield return new WaitForSeconds (0.6f);

		birdSR.sprite = birdNormal;
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
		progressSlider.value = totalQuestions-1;

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
		uid.TryFetchID();
		pauseBtn.SetActive(false);
		tc.PauseGame ();
	}

	IEnumerator finishGame (){
		// Put a flag in there
		yield return new WaitForSeconds(.5f);
		flag.SetActive(true);
		yield return new WaitForSeconds(1.25f);
		EndGame ();
	}
}


