using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Question : MonoBehaviour {

	public string question, correctAnswer;
	public int question_id;
	public List<string> answers;

	public Question(string q, List<string> answers, string correctA, int q_id) {
		question = q;
		this.answers = answers;
		correctAnswer = correctA;
		question_id = q_id;
	}
}
