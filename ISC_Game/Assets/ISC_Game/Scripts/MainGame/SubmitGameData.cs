using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SubmitGameData : MonoBehaviour {
	public GameObject player, quizObject;
	public GameObject idField, submitBtn, restartBtn;
	public Text responseText;
	
	private PlayerStats ps;
	private QuestionHandler2 qHandler;
	private QuestionRecord qRecord;

	private int user_id, game_id;
	private string first_name, last_name;
	List<QuestionRecord> qRecords;

	void Start() {
		game_id = 1;
		restartBtn.SetActive(false);
	}

	public void SetAllTheData() {
		ps = player.GetComponent<PlayerStats>();
		qHandler = quizObject.GetComponent<QuestionHandler2>();
		qRecord = quizObject.GetComponent<QuestionRecord>();
		qRecords = new List<QuestionRecord>();
		//populate the this.qRecords
		for(int i = 0; i < qHandler.records.Count; i++) {
			qRecords.Add(qHandler.records[i]);
		}
		user_id = ps.user_id;

		//Send the quesiton records
		//Call waitForRecords to make sure it didn't fail
		//SendQuestionRecords(qRecords);
		GetUser();
		
	}

	//Get user opens WWW, waits for response, then sets first and last name
	//Then calls SendGameSession
	//Then calls waitForSessionRequest to make sure it didnt fail
	void GetUser() {
		print(user_id);
		if (!ps.canSubmit) {
			Debug.Log("User ID is not a number");
			return;
		}
		if (user_id == 0) {
			user_id = 34;
		}
		//Get first name and last name
		WWWForm form1 = new WWWForm();
		form1.AddField("user_idPost", user_id);
		WWW www1 = new WWW("http://104.236.217.201/ISC_GetUser.php", form1);
		StartCoroutine(WaitForUser(www1));
	}

	IEnumerator WaitForUser(WWW www) {
		yield return www;

		if (www.error != null) Debug.Log(www.error);
		else Debug.Log("User Request successful");

		string usersText = www.text;
		string[] users = usersText.Split(';');
		print(usersText);
		try {
			for (int i = 0; i < users.Length; i++) {
				if (users[i] != "") {
					first_name = GetDataValue(users[i], "first_name:");
					last_name = GetDataValue(users[i], "last_name:");
				}
			}
		}catch {
			responseText.text = "User does not exist.";
			yield break;
		}
		submitBtn.SetActive(false);
		SendGameSession();
	}

	void SendGameSession() {
		//Send session
		WWWForm form2 = new WWWForm();
		string date = System.DateTime.Now.ToString("yyyy") + "-" + System.DateTime.Now.ToString("MM") + "-" + System.DateTime.Now.ToString("dd");
		//form2.AddField("idPost", 1);
		form2.AddField("scorePost", ps.score.ToString());
		form2.AddField("user_idPost", user_id);
		form2.AddField("date_completePost", date);
		form2.AddField("first_namePost", first_name);
		form2.AddField("last_namePost", last_name);
		WWW www = new WWW("http://104.236.217.201/ISC_UpdateGameSessions.php", form2);
		StartCoroutine(WaitForSessionRequest(www));
	}

	IEnumerator WaitForSessionRequest(WWW www) {
		yield return www;
		if (www.error != null) Debug.Log(www.error);
		else Debug.Log("Session Request successful");

		//PostSubmitActions();
		SendQuestionRecords();
	}

	void SendQuestionRecords() {

		for (int i = 0; i < qRecords.Count; i++) {
			WWWForm form = new WWWForm();
			//Set user id and current date
			qRecords[i].u_id = user_id;
			qRecords[i].dateComplete = System.DateTime.Now.ToString("yyyy") + "-" + System.DateTime.Now.ToString("MM") + "-" + System.DateTime.Now.ToString("dd");
			form.AddField("answerIDPost", qRecords[i].answer_id);
			form.AddField("date_answeredPost", qRecords[i].dateComplete);
			int correct = qRecords[i].isCorrect ? 1 : 0;
			form.AddField("isCorrectPost", correct);
			form.AddField("userIDPost", qRecords[i].u_id);
			form.AddField("question_idPost", qRecords[i].q_id);
			//form.AddField("game_idPost", game_id);

			print("QUESTION RECORDS SENDING ==================");
			print("answerIDPost " + qRecords[i].answer_id);
			print("date_answeredPost " + qRecords[i].dateComplete);
			print("isCorrectPost " + correct);
			print("userIDPost " + qRecords[i].u_id);
			print("question_idPost " + qRecords[i].q_id);
			print("game_idPost " + game_id);

			WWW www = new WWW("http://104.236.217.201/ISC_UpdateQuestionRecords.php", form);
			StartCoroutine( WaitForRecordsRequest(www, i == qRecords.Count-1 ? true : false));
		}
	}

	IEnumerator WaitForRecordsRequest(WWW www, bool cont) {
		yield return www;
		if(www.error != null) Debug.Log(www.error);
		else Debug.Log("Record Request successful");

		//if (cont)GetUser();
		if(cont)PostSubmitActions();
	}

	string GetDataValue(string data, string index) {
		//Take a piece of a string. index is the string it takes in. +Length will take the rest of the string.
		string value = data.Substring(data.IndexOf(index) + index.Length);
		if (value.Contains("|")) value = value.Remove(value.IndexOf("|"));
		return value;
	}

	void PostSubmitActions() {
		idField.SetActive(false);
		
		restartBtn.SetActive(true);
		responseText.text = "Thank you for submitting. Feel free to play again or quit.";
	}
}
