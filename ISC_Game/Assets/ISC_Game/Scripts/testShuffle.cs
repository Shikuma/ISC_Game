using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class testShuffle : MonoBehaviour {
	Random rng = new Random();
	// Use this for initialization
	void Start () {
		
		int[] arr  = {1, 2, 3, 4, 5};
		Shuffle(arr);
	}
	
	void Shuffle(int[] array) {
		for(int i = 0; i < array.Length; i++) {
			int tmp = array[i];
			int r = Random.Range(i, array.Length);
			array[i] = array[r];
			array[r] = tmp;
		}

		for(int i = 0; i < array.Length; i++) {
			print(array[i]);
		}
	}
}
