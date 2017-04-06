#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Text
struct Text_t356221433;
// PlayerStats
struct PlayerStats_t2629781060;
// QuestionHandler2
struct QuestionHandler2_t3751744042;
// QuestionRecord
struct QuestionRecord_t2666826981;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SubmitGameData
struct  SubmitGameData_t1241831570  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject SubmitGameData::player
	GameObject_t1756533147 * ___player_2;
	// UnityEngine.GameObject SubmitGameData::quizObject
	GameObject_t1756533147 * ___quizObject_3;
	// UnityEngine.GameObject SubmitGameData::idField
	GameObject_t1756533147 * ___idField_4;
	// UnityEngine.GameObject SubmitGameData::submitBtn
	GameObject_t1756533147 * ___submitBtn_5;
	// UnityEngine.GameObject SubmitGameData::restartBtn
	GameObject_t1756533147 * ___restartBtn_6;
	// UnityEngine.UI.Text SubmitGameData::responseText
	Text_t356221433 * ___responseText_7;
	// PlayerStats SubmitGameData::ps
	PlayerStats_t2629781060 * ___ps_8;
	// QuestionHandler2 SubmitGameData::qHandler
	QuestionHandler2_t3751744042 * ___qHandler_9;
	// QuestionRecord SubmitGameData::qRecord
	QuestionRecord_t2666826981 * ___qRecord_10;
	// System.Int32 SubmitGameData::user_id
	int32_t ___user_id_11;
	// System.Int32 SubmitGameData::game_id
	int32_t ___game_id_12;
	// System.String SubmitGameData::first_name
	String_t* ___first_name_13;
	// System.String SubmitGameData::last_name
	String_t* ___last_name_14;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(SubmitGameData_t1241831570, ___player_2)); }
	inline GameObject_t1756533147 * get_player_2() const { return ___player_2; }
	inline GameObject_t1756533147 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t1756533147 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_quizObject_3() { return static_cast<int32_t>(offsetof(SubmitGameData_t1241831570, ___quizObject_3)); }
	inline GameObject_t1756533147 * get_quizObject_3() const { return ___quizObject_3; }
	inline GameObject_t1756533147 ** get_address_of_quizObject_3() { return &___quizObject_3; }
	inline void set_quizObject_3(GameObject_t1756533147 * value)
	{
		___quizObject_3 = value;
		Il2CppCodeGenWriteBarrier(&___quizObject_3, value);
	}

	inline static int32_t get_offset_of_idField_4() { return static_cast<int32_t>(offsetof(SubmitGameData_t1241831570, ___idField_4)); }
	inline GameObject_t1756533147 * get_idField_4() const { return ___idField_4; }
	inline GameObject_t1756533147 ** get_address_of_idField_4() { return &___idField_4; }
	inline void set_idField_4(GameObject_t1756533147 * value)
	{
		___idField_4 = value;
		Il2CppCodeGenWriteBarrier(&___idField_4, value);
	}

	inline static int32_t get_offset_of_submitBtn_5() { return static_cast<int32_t>(offsetof(SubmitGameData_t1241831570, ___submitBtn_5)); }
	inline GameObject_t1756533147 * get_submitBtn_5() const { return ___submitBtn_5; }
	inline GameObject_t1756533147 ** get_address_of_submitBtn_5() { return &___submitBtn_5; }
	inline void set_submitBtn_5(GameObject_t1756533147 * value)
	{
		___submitBtn_5 = value;
		Il2CppCodeGenWriteBarrier(&___submitBtn_5, value);
	}

	inline static int32_t get_offset_of_restartBtn_6() { return static_cast<int32_t>(offsetof(SubmitGameData_t1241831570, ___restartBtn_6)); }
	inline GameObject_t1756533147 * get_restartBtn_6() const { return ___restartBtn_6; }
	inline GameObject_t1756533147 ** get_address_of_restartBtn_6() { return &___restartBtn_6; }
	inline void set_restartBtn_6(GameObject_t1756533147 * value)
	{
		___restartBtn_6 = value;
		Il2CppCodeGenWriteBarrier(&___restartBtn_6, value);
	}

	inline static int32_t get_offset_of_responseText_7() { return static_cast<int32_t>(offsetof(SubmitGameData_t1241831570, ___responseText_7)); }
	inline Text_t356221433 * get_responseText_7() const { return ___responseText_7; }
	inline Text_t356221433 ** get_address_of_responseText_7() { return &___responseText_7; }
	inline void set_responseText_7(Text_t356221433 * value)
	{
		___responseText_7 = value;
		Il2CppCodeGenWriteBarrier(&___responseText_7, value);
	}

	inline static int32_t get_offset_of_ps_8() { return static_cast<int32_t>(offsetof(SubmitGameData_t1241831570, ___ps_8)); }
	inline PlayerStats_t2629781060 * get_ps_8() const { return ___ps_8; }
	inline PlayerStats_t2629781060 ** get_address_of_ps_8() { return &___ps_8; }
	inline void set_ps_8(PlayerStats_t2629781060 * value)
	{
		___ps_8 = value;
		Il2CppCodeGenWriteBarrier(&___ps_8, value);
	}

	inline static int32_t get_offset_of_qHandler_9() { return static_cast<int32_t>(offsetof(SubmitGameData_t1241831570, ___qHandler_9)); }
	inline QuestionHandler2_t3751744042 * get_qHandler_9() const { return ___qHandler_9; }
	inline QuestionHandler2_t3751744042 ** get_address_of_qHandler_9() { return &___qHandler_9; }
	inline void set_qHandler_9(QuestionHandler2_t3751744042 * value)
	{
		___qHandler_9 = value;
		Il2CppCodeGenWriteBarrier(&___qHandler_9, value);
	}

	inline static int32_t get_offset_of_qRecord_10() { return static_cast<int32_t>(offsetof(SubmitGameData_t1241831570, ___qRecord_10)); }
	inline QuestionRecord_t2666826981 * get_qRecord_10() const { return ___qRecord_10; }
	inline QuestionRecord_t2666826981 ** get_address_of_qRecord_10() { return &___qRecord_10; }
	inline void set_qRecord_10(QuestionRecord_t2666826981 * value)
	{
		___qRecord_10 = value;
		Il2CppCodeGenWriteBarrier(&___qRecord_10, value);
	}

	inline static int32_t get_offset_of_user_id_11() { return static_cast<int32_t>(offsetof(SubmitGameData_t1241831570, ___user_id_11)); }
	inline int32_t get_user_id_11() const { return ___user_id_11; }
	inline int32_t* get_address_of_user_id_11() { return &___user_id_11; }
	inline void set_user_id_11(int32_t value)
	{
		___user_id_11 = value;
	}

	inline static int32_t get_offset_of_game_id_12() { return static_cast<int32_t>(offsetof(SubmitGameData_t1241831570, ___game_id_12)); }
	inline int32_t get_game_id_12() const { return ___game_id_12; }
	inline int32_t* get_address_of_game_id_12() { return &___game_id_12; }
	inline void set_game_id_12(int32_t value)
	{
		___game_id_12 = value;
	}

	inline static int32_t get_offset_of_first_name_13() { return static_cast<int32_t>(offsetof(SubmitGameData_t1241831570, ___first_name_13)); }
	inline String_t* get_first_name_13() const { return ___first_name_13; }
	inline String_t** get_address_of_first_name_13() { return &___first_name_13; }
	inline void set_first_name_13(String_t* value)
	{
		___first_name_13 = value;
		Il2CppCodeGenWriteBarrier(&___first_name_13, value);
	}

	inline static int32_t get_offset_of_last_name_14() { return static_cast<int32_t>(offsetof(SubmitGameData_t1241831570, ___last_name_14)); }
	inline String_t* get_last_name_14() const { return ___last_name_14; }
	inline String_t** get_address_of_last_name_14() { return &___last_name_14; }
	inline void set_last_name_14(String_t* value)
	{
		___last_name_14 = value;
		Il2CppCodeGenWriteBarrier(&___last_name_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
