using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScoreObject : MonoBehaviour {
	public string firstName, lastName, dateComplete;
	public float score;
	public int id, user_id;

	public ScoreObject(int id, float score, int user_id, string dateComplete, string firstName, string lastName) {
		this.id = id;
		this.score = score;
		this.user_id = user_id;
		this.dateComplete = dateComplete;
		this.firstName = firstName;
		this.lastName = lastName;
	}
}
