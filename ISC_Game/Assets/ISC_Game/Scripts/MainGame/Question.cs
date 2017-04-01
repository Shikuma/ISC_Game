using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Question : MonoBehaviour {

	public int q_id;
	public string q_text, subject;

	public Question(int id, string question_text, string subject) {
		q_id = id;
		q_text = question_text;
		this.subject = subject;
	}
}
