using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class QuestionRecord : MonoBehaviour {
	public string dateComplete;
	public int q_id, u_id, answer_id;
	public bool isCorrect;

	public QuestionRecord(int a_id, string date_complete, bool isCorrect, int user_id, int question_id) {
		answer_id = a_id;
		dateComplete = date_complete;
		this.isCorrect = isCorrect;
		u_id = user_id;
		q_id = question_id;

	}
}
