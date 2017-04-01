using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class QuestionRecord : MonoBehaviour {
	public string q_text, user_answer;
	public int q_id;
	public bool isCorrect;

	public QuestionRecord(string question_text, string u_answer, int question_id, bool isCorrect) {
		q_text = question_text;
		user_answer = u_answer;
		q_id = question_id;
		this.isCorrect = isCorrect;
	}
}
