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
// System.String
struct String_t;
// QuestionHandler2
struct QuestionHandler2_t3751744042;
// TimeController
struct TimeController_t1641888515;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerStats
struct  PlayerStats_t2629781060  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PlayerStats::score
	float ___score_2;
	// System.Int32 PlayerStats::lives
	int32_t ___lives_3;
	// System.Int32 PlayerStats::qScore
	int32_t ___qScore_4;
	// System.Int32 PlayerStats::obstaclesPlayerSuccessfullyJumpedOver
	int32_t ___obstaclesPlayerSuccessfullyJumpedOver_5;
	// System.Int32 PlayerStats::totalQuestions
	int32_t ___totalQuestions_6;
	// System.Int32 PlayerStats::questionsCorrect
	int32_t ___questionsCorrect_7;
	// System.Int32 PlayerStats::gameLength
	int32_t ___gameLength_8;
	// System.Int32 PlayerStats::user_id
	int32_t ___user_id_9;
	// UnityEngine.GameObject PlayerStats::quizPanel
	GameObject_t1756533147 * ___quizPanel_10;
	// UnityEngine.GameObject PlayerStats::gc
	GameObject_t1756533147 * ___gc_11;
	// UnityEngine.GameObject PlayerStats::gameOverPanel
	GameObject_t1756533147 * ___gameOverPanel_12;
	// UnityEngine.GameObject PlayerStats::questionOKBtn
	GameObject_t1756533147 * ___questionOKBtn_13;
	// UnityEngine.UI.Text PlayerStats::scoreText
	Text_t356221433 * ___scoreText_14;
	// UnityEngine.UI.Text PlayerStats::livesText
	Text_t356221433 * ___livesText_15;
	// UnityEngine.UI.Text PlayerStats::gameOverText
	Text_t356221433 * ___gameOverText_16;
	// UnityEngine.UI.Text PlayerStats::GOResponseText
	Text_t356221433 * ___GOResponseText_17;
	// UnityEngine.UI.Text PlayerStats::questionsAttemptTxt
	Text_t356221433 * ___questionsAttemptTxt_18;
	// UnityEngine.UI.Text PlayerStats::questionsCorrectTxt
	Text_t356221433 * ___questionsCorrectTxt_19;
	// UnityEngine.UI.Text PlayerStats::questionsLeftTxt
	Text_t356221433 * ___questionsLeftTxt_20;
	// UnityEngine.GameObject PlayerStats::user_id_input
	GameObject_t1756533147 * ___user_id_input_21;
	// System.String PlayerStats::firstName
	String_t* ___firstName_22;
	// System.String PlayerStats::lastName
	String_t* ___lastName_23;
	// QuestionHandler2 PlayerStats::qHandler
	QuestionHandler2_t3751744042 * ___qHandler_24;
	// TimeController PlayerStats::tc
	TimeController_t1641888515 * ___tc_25;

public:
	inline static int32_t get_offset_of_score_2() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___score_2)); }
	inline float get_score_2() const { return ___score_2; }
	inline float* get_address_of_score_2() { return &___score_2; }
	inline void set_score_2(float value)
	{
		___score_2 = value;
	}

	inline static int32_t get_offset_of_lives_3() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___lives_3)); }
	inline int32_t get_lives_3() const { return ___lives_3; }
	inline int32_t* get_address_of_lives_3() { return &___lives_3; }
	inline void set_lives_3(int32_t value)
	{
		___lives_3 = value;
	}

	inline static int32_t get_offset_of_qScore_4() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___qScore_4)); }
	inline int32_t get_qScore_4() const { return ___qScore_4; }
	inline int32_t* get_address_of_qScore_4() { return &___qScore_4; }
	inline void set_qScore_4(int32_t value)
	{
		___qScore_4 = value;
	}

	inline static int32_t get_offset_of_obstaclesPlayerSuccessfullyJumpedOver_5() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___obstaclesPlayerSuccessfullyJumpedOver_5)); }
	inline int32_t get_obstaclesPlayerSuccessfullyJumpedOver_5() const { return ___obstaclesPlayerSuccessfullyJumpedOver_5; }
	inline int32_t* get_address_of_obstaclesPlayerSuccessfullyJumpedOver_5() { return &___obstaclesPlayerSuccessfullyJumpedOver_5; }
	inline void set_obstaclesPlayerSuccessfullyJumpedOver_5(int32_t value)
	{
		___obstaclesPlayerSuccessfullyJumpedOver_5 = value;
	}

	inline static int32_t get_offset_of_totalQuestions_6() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___totalQuestions_6)); }
	inline int32_t get_totalQuestions_6() const { return ___totalQuestions_6; }
	inline int32_t* get_address_of_totalQuestions_6() { return &___totalQuestions_6; }
	inline void set_totalQuestions_6(int32_t value)
	{
		___totalQuestions_6 = value;
	}

	inline static int32_t get_offset_of_questionsCorrect_7() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___questionsCorrect_7)); }
	inline int32_t get_questionsCorrect_7() const { return ___questionsCorrect_7; }
	inline int32_t* get_address_of_questionsCorrect_7() { return &___questionsCorrect_7; }
	inline void set_questionsCorrect_7(int32_t value)
	{
		___questionsCorrect_7 = value;
	}

	inline static int32_t get_offset_of_gameLength_8() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___gameLength_8)); }
	inline int32_t get_gameLength_8() const { return ___gameLength_8; }
	inline int32_t* get_address_of_gameLength_8() { return &___gameLength_8; }
	inline void set_gameLength_8(int32_t value)
	{
		___gameLength_8 = value;
	}

	inline static int32_t get_offset_of_user_id_9() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___user_id_9)); }
	inline int32_t get_user_id_9() const { return ___user_id_9; }
	inline int32_t* get_address_of_user_id_9() { return &___user_id_9; }
	inline void set_user_id_9(int32_t value)
	{
		___user_id_9 = value;
	}

	inline static int32_t get_offset_of_quizPanel_10() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___quizPanel_10)); }
	inline GameObject_t1756533147 * get_quizPanel_10() const { return ___quizPanel_10; }
	inline GameObject_t1756533147 ** get_address_of_quizPanel_10() { return &___quizPanel_10; }
	inline void set_quizPanel_10(GameObject_t1756533147 * value)
	{
		___quizPanel_10 = value;
		Il2CppCodeGenWriteBarrier(&___quizPanel_10, value);
	}

	inline static int32_t get_offset_of_gc_11() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___gc_11)); }
	inline GameObject_t1756533147 * get_gc_11() const { return ___gc_11; }
	inline GameObject_t1756533147 ** get_address_of_gc_11() { return &___gc_11; }
	inline void set_gc_11(GameObject_t1756533147 * value)
	{
		___gc_11 = value;
		Il2CppCodeGenWriteBarrier(&___gc_11, value);
	}

	inline static int32_t get_offset_of_gameOverPanel_12() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___gameOverPanel_12)); }
	inline GameObject_t1756533147 * get_gameOverPanel_12() const { return ___gameOverPanel_12; }
	inline GameObject_t1756533147 ** get_address_of_gameOverPanel_12() { return &___gameOverPanel_12; }
	inline void set_gameOverPanel_12(GameObject_t1756533147 * value)
	{
		___gameOverPanel_12 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverPanel_12, value);
	}

	inline static int32_t get_offset_of_questionOKBtn_13() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___questionOKBtn_13)); }
	inline GameObject_t1756533147 * get_questionOKBtn_13() const { return ___questionOKBtn_13; }
	inline GameObject_t1756533147 ** get_address_of_questionOKBtn_13() { return &___questionOKBtn_13; }
	inline void set_questionOKBtn_13(GameObject_t1756533147 * value)
	{
		___questionOKBtn_13 = value;
		Il2CppCodeGenWriteBarrier(&___questionOKBtn_13, value);
	}

	inline static int32_t get_offset_of_scoreText_14() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___scoreText_14)); }
	inline Text_t356221433 * get_scoreText_14() const { return ___scoreText_14; }
	inline Text_t356221433 ** get_address_of_scoreText_14() { return &___scoreText_14; }
	inline void set_scoreText_14(Text_t356221433 * value)
	{
		___scoreText_14 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_14, value);
	}

	inline static int32_t get_offset_of_livesText_15() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___livesText_15)); }
	inline Text_t356221433 * get_livesText_15() const { return ___livesText_15; }
	inline Text_t356221433 ** get_address_of_livesText_15() { return &___livesText_15; }
	inline void set_livesText_15(Text_t356221433 * value)
	{
		___livesText_15 = value;
		Il2CppCodeGenWriteBarrier(&___livesText_15, value);
	}

	inline static int32_t get_offset_of_gameOverText_16() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___gameOverText_16)); }
	inline Text_t356221433 * get_gameOverText_16() const { return ___gameOverText_16; }
	inline Text_t356221433 ** get_address_of_gameOverText_16() { return &___gameOverText_16; }
	inline void set_gameOverText_16(Text_t356221433 * value)
	{
		___gameOverText_16 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverText_16, value);
	}

	inline static int32_t get_offset_of_GOResponseText_17() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___GOResponseText_17)); }
	inline Text_t356221433 * get_GOResponseText_17() const { return ___GOResponseText_17; }
	inline Text_t356221433 ** get_address_of_GOResponseText_17() { return &___GOResponseText_17; }
	inline void set_GOResponseText_17(Text_t356221433 * value)
	{
		___GOResponseText_17 = value;
		Il2CppCodeGenWriteBarrier(&___GOResponseText_17, value);
	}

	inline static int32_t get_offset_of_questionsAttemptTxt_18() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___questionsAttemptTxt_18)); }
	inline Text_t356221433 * get_questionsAttemptTxt_18() const { return ___questionsAttemptTxt_18; }
	inline Text_t356221433 ** get_address_of_questionsAttemptTxt_18() { return &___questionsAttemptTxt_18; }
	inline void set_questionsAttemptTxt_18(Text_t356221433 * value)
	{
		___questionsAttemptTxt_18 = value;
		Il2CppCodeGenWriteBarrier(&___questionsAttemptTxt_18, value);
	}

	inline static int32_t get_offset_of_questionsCorrectTxt_19() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___questionsCorrectTxt_19)); }
	inline Text_t356221433 * get_questionsCorrectTxt_19() const { return ___questionsCorrectTxt_19; }
	inline Text_t356221433 ** get_address_of_questionsCorrectTxt_19() { return &___questionsCorrectTxt_19; }
	inline void set_questionsCorrectTxt_19(Text_t356221433 * value)
	{
		___questionsCorrectTxt_19 = value;
		Il2CppCodeGenWriteBarrier(&___questionsCorrectTxt_19, value);
	}

	inline static int32_t get_offset_of_questionsLeftTxt_20() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___questionsLeftTxt_20)); }
	inline Text_t356221433 * get_questionsLeftTxt_20() const { return ___questionsLeftTxt_20; }
	inline Text_t356221433 ** get_address_of_questionsLeftTxt_20() { return &___questionsLeftTxt_20; }
	inline void set_questionsLeftTxt_20(Text_t356221433 * value)
	{
		___questionsLeftTxt_20 = value;
		Il2CppCodeGenWriteBarrier(&___questionsLeftTxt_20, value);
	}

	inline static int32_t get_offset_of_user_id_input_21() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___user_id_input_21)); }
	inline GameObject_t1756533147 * get_user_id_input_21() const { return ___user_id_input_21; }
	inline GameObject_t1756533147 ** get_address_of_user_id_input_21() { return &___user_id_input_21; }
	inline void set_user_id_input_21(GameObject_t1756533147 * value)
	{
		___user_id_input_21 = value;
		Il2CppCodeGenWriteBarrier(&___user_id_input_21, value);
	}

	inline static int32_t get_offset_of_firstName_22() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___firstName_22)); }
	inline String_t* get_firstName_22() const { return ___firstName_22; }
	inline String_t** get_address_of_firstName_22() { return &___firstName_22; }
	inline void set_firstName_22(String_t* value)
	{
		___firstName_22 = value;
		Il2CppCodeGenWriteBarrier(&___firstName_22, value);
	}

	inline static int32_t get_offset_of_lastName_23() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___lastName_23)); }
	inline String_t* get_lastName_23() const { return ___lastName_23; }
	inline String_t** get_address_of_lastName_23() { return &___lastName_23; }
	inline void set_lastName_23(String_t* value)
	{
		___lastName_23 = value;
		Il2CppCodeGenWriteBarrier(&___lastName_23, value);
	}

	inline static int32_t get_offset_of_qHandler_24() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___qHandler_24)); }
	inline QuestionHandler2_t3751744042 * get_qHandler_24() const { return ___qHandler_24; }
	inline QuestionHandler2_t3751744042 ** get_address_of_qHandler_24() { return &___qHandler_24; }
	inline void set_qHandler_24(QuestionHandler2_t3751744042 * value)
	{
		___qHandler_24 = value;
		Il2CppCodeGenWriteBarrier(&___qHandler_24, value);
	}

	inline static int32_t get_offset_of_tc_25() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___tc_25)); }
	inline TimeController_t1641888515 * get_tc_25() const { return ___tc_25; }
	inline TimeController_t1641888515 ** get_address_of_tc_25() { return &___tc_25; }
	inline void set_tc_25(TimeController_t1641888515 * value)
	{
		___tc_25 = value;
		Il2CppCodeGenWriteBarrier(&___tc_25, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
