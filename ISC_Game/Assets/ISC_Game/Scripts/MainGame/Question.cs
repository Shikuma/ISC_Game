using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Question : MonoBehaviour {

	public int q_id;
	public string q_text, subject, responseText;

	public Question(int id, string question_text, string subject, string responseText) {
		q_id = id;
		q_text = question_text;
		this.subject = subject;
		this.responseText = responseText;
	}
}
