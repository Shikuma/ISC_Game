using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Question : MonoBehaviour {

	public string question, answer1, answer2, answer3, answer4, correctAnswer;

	public Question(string q, string a1, string a2, string a3, string a4, string correctA) {
		question = q;
		answer1 = a1;
		answer2 = a2;
		answer3 = a3;
		answer4 = a4;
		correctAnswer = correctA;
	}
}
