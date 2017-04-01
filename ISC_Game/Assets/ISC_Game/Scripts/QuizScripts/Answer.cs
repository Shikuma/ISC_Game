using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Answer : MonoBehaviour {

	public int a_id, q_id;
	public string a_text;

	public Answer(int id, string answer_text, int question_id) {
		a_id = id;
		a_text = answer_text;
		q_id = question_id;
	}
}
