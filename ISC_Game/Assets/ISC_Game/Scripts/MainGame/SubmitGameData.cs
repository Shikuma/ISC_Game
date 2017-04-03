using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SubmitGameData : MonoBehaviour {
	public GameObject player, quizObject;
	private int user_id;
	private PlayerStats ps;
	private QuestionHandler2 qHandler;
	private QuestionRecord qRecord;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void SetAllTheData() {
		ps = player.GetComponent<PlayerStats>();
		qHandler = quizObject.GetComponent<QuestionHandler2>();
		qRecord = quizObject.GetComponent<QuestionRecord>();
		List<QuestionRecord> qRecords = new List<QuestionRecord>();
		//populate the this.qRecords
		for(int i = 0; i < qHandler.records.Count; i++) {
			qRecords[i] = qHandler.records[i];
		}
		user_id = ps.user_id;


	}
}
