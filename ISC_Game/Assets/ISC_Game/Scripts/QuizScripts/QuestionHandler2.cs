using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class QuestionHandler2 : MonoBehaviour {
	public Text qText, responseText, correctAnswerText;
	public Text[] answersChoices;
	public GameObject answersPanel, qPanel, qResponsePanel, secondChancePanel;
	public Image okayButton;
	public Sprite redButtonSprite, greenButtonSprite;
	private AudioController AC;

	public List<Question> allQData, usedQuestions;
	public List<Answer> allAnswers;
	string[] answers, questions;
	string answersDataText, questionsDataText;
	private Question currQuestion;
	private Answer[] currAnswers;
	private List<Answer> correctAnswers;
	WWW questionsData, answersData;

	private GameObject gc, player;
	private TimeController tc;
	private PlayerStats ps;
	private ProgressBar progress;

	private bool answerWasCorrect = false, attempted = false;

	public List<QuestionRecord> records;
	private int currAnswerID;

	// Use this for initialization
	void Start () {
		AC = GameObject.FindWithTag ("AudioCont").GetComponent<AudioController>();
		gc = GameObject.FindWithTag("GameController");
		tc = gc.GetComponent<TimeController>();
		player = GameObject.FindWithTag("Player");
		ps = player.GetComponent<PlayerStats>();
		progress = gc.GetComponent<ProgressBar>();
		records = new List<QuestionRecord>();

		qPanel.SetActive(false);
		answersPanel.SetActive(false);
		qResponsePanel.SetActive(false);
		secondChancePanel.SetActive(false);

		questionsData = new WWW("http://104.236.217.201/ISC_GetQuestions.php");
		answersData = new WWW("http://104.236.217.201/ISC_GetAnswers.php");
		StartCoroutine(GetQuestions(questionsData, answersData));

	}

	private IEnumerator GetQuestions(WWW questions_www, WWW answers_www) {
		yield return questions_www;
		questionsDataText = questions_www.text;
		questions = questionsDataText.Split(';');
		for (int i = 0; i < questions.Length; i++) {
			if (questions[i] != "") {
				Question obj = new Question(
					int.Parse(GetDataValue(questions[i], "question_id:")),
					GetDataValue(questions[i], "question_text:"),
					GetDataValue(questions[i], "subject:"),
					GetDataValue(questions[i], "response:")
					);
				allQData.Add(obj);
			}
		}
		/*Question test1 = new Question(1, "The answer is A?", "Test");
		allQData.Add(test1);*/
		StartCoroutine(GetAnswers(answers_www));
	}

	private IEnumerator GetAnswers(WWW answers_www) {
		yield return answers_www;
		answersDataText = answers_www.text;
		answers = answersDataText.Split(';');
		for (int i = 0; i < answers.Length; i++) {
			if (answers[i] != "") {
				Answer obj = new Answer(
					int.Parse(GetDataValue(answers[i], "answer_id:")),
					GetDataValue(answers[i], "answer_text:"),
					int.Parse(GetDataValue(answers[i], "question_id:")),
					GetDataValue(answers[i], "type:")
					);
				
				allAnswers.Add(obj);
			}
		}
		/*
		Answer obj = new Answer(1, "A", 1);
		Answer obj2 = new Answer(1, "B", 0);
		Answer obj3 = new Answer(1, "C", 0);
		Answer obj4 = new Answer(1, "D", 0);
		Answer obj5 = new Answer(1, "E", 0);
		Answer obj6 = new Answer(1, "F", 0);

		allAnswers.Add(obj);
		allAnswers.Add(obj2);
		allAnswers.Add(obj3);
		allAnswers.Add(obj4);
		allAnswers.Add(obj5);
		allAnswers.Add(obj6);
		*/
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
		correctAnswers = new List<Answer>();
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
					currAnswerID = currAnswers[i].a_id;
					tempAnswerList.RemoveAt(rng);
					correctAnswers.Add(thisAnswer);
				} else {
					i--;
					continue;
				}
			}else if(thisAnswer.a_type == correctAnswers[0].a_type){
				currAnswers[i] = thisAnswer;
				tempAnswerList.RemoveAt(rng);
				if (thisAnswer.q_id == currQuestion.q_id) correctAnswers.Add(thisAnswer);
			}else {
				i--;
				continue;
			}
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
			print(currAnswers[i].a_text + " -- " + currAnswers[i].a_type);
		}
	}

	public void CheckAnswer() {
		qPanel.SetActive(false);
		answersPanel.SetActive(false);
		
		bool isCorrect = false;
		string userAnswer = EventSystem.current.currentSelectedGameObject.gameObject.transform.GetChild(0).GetComponent<Text>().text;
		//Check if the given answer was correct
		for (int i = 0; i < currAnswers.Length; i++) {
			if (EventSystem.current.currentSelectedGameObject.gameObject.transform.GetChild(0).GetComponent<Text>().text == currAnswers[i].a_text) {
				if (currAnswers[i].q_id == currQuestion.q_id) {
					answerWasCorrect = true;
					isCorrect = true;
					break;
				}
			}
		}

		if (isCorrect) {
			qResponsePanel.SetActive(true);
			correctAnswerText.text = "";
			responseText.text = "Correct! Good job!";
			okayButton.sprite = greenButtonSprite;
			AC.playSFX(2);
			ps.obstaclesPlayerSuccessfullyJumpedOver++;
			if(!attempted) ps.UpdateScore(25f);
			ps.UpdateQuestionsCount(true);
			progress.UpdateStatus(true);
		}else {
			AC.playSFX(1);
			if (attempted) {
				DisplayIncorrectResponse();
			}
			else {
				ps.UpdateScore(-15f);
				secondChancePanel.SetActive(true);
				attempted = true;
			}
		}

		//Record incorrect stats
		QuestionRecord qRecord = new QuestionRecord(currAnswerID, "", isCorrect, ps.user_id, currQuestion.q_id);
		records.Add(qRecord);

		ps.obstaclesPlayerSuccessfullyJumpedOver = 0;
	}

	public void DisplayIncorrectResponse() {
		qResponsePanel.SetActive(true);
		if(secondChancePanel.activeSelf) secondChancePanel.SetActive(false);
		okayButton.sprite = redButtonSprite;
		answerWasCorrect = false;
		ps.UpdateQuestionsCount(false);
		ps.UpdateLives();
		correctAnswerText.text = "";
		correctAnswerText.text = currQuestion.responseText;
		responseText.text = "Incorrect.. Here is/are the correct answer(s):";
		progress.UpdateStatus(false);
	}

	public void DisplayQuiz() {
		qPanel.SetActive(true);
		answersPanel.SetActive(true);
		secondChancePanel.SetActive(false);
	}

	public void ContinueQuestion() {
		qResponsePanel.SetActive (false);
		attempted = false;
		tc.qInProgress = false;
		tc.PauseGame ();
		if (answerWasCorrect)
		{
			player.GetComponent<Player> ().OnJumpInputUp ();
			AC.playSFX (3);
		}
		StartCoroutine (ps.changeBird (answerWasCorrect));
	}
}
