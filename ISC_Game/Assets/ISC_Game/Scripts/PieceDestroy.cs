using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PieceDestroy : MonoBehaviour {

	void Destroy() {
		gameObject.SetActive(false);
	}

}
