#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t4216439300;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// AudioController
struct AudioController_t1047253274;
// System.Collections.Generic.List`1<Question>
struct List_1_t2297069972;
// System.Collections.Generic.List`1<Answer>
struct List_1_t653978094;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.String
struct String_t;
// Question
struct Question_t2927948840;
// Answer[]
struct AnswerU5BU5D_t2537842487;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// UnityEngine.WWW
struct WWW_t2919945039;
// TimeController
struct TimeController_t1641888515;
// PlayerStats
struct PlayerStats_t2629781060;
// System.Collections.Generic.List`1<QuestionRecord>
struct List_1_t2035948113;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// QuestionHandler2
struct  QuestionHandler2_t3751744042  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text QuestionHandler2::qText
	Text_t356221433 * ___qText_2;
	// UnityEngine.UI.Text QuestionHandler2::responseText
	Text_t356221433 * ___responseText_3;
	// UnityEngine.UI.Text QuestionHandler2::correctAnswerText
	Text_t356221433 * ___correctAnswerText_4;
	// UnityEngine.UI.Text[] QuestionHandler2::answersChoices
	TextU5BU5D_t4216439300* ___answersChoices_5;
	// UnityEngine.GameObject QuestionHandler2::answersPanel
	GameObject_t1756533147 * ___answersPanel_6;
	// UnityEngine.GameObject QuestionHandler2::qPanel
	GameObject_t1756533147 * ___qPanel_7;
	// UnityEngine.GameObject QuestionHandler2::qResponsePanel
	GameObject_t1756533147 * ___qResponsePanel_8;
	// AudioController QuestionHandler2::AC
	AudioController_t1047253274 * ___AC_9;
	// System.Collections.Generic.List`1<Question> QuestionHandler2::allQData
	List_1_t2297069972 * ___allQData_10;
	// System.Collections.Generic.List`1<Question> QuestionHandler2::usedQuestions
	List_1_t2297069972 * ___usedQuestions_11;
	// System.Collections.Generic.List`1<Answer> QuestionHandler2::allAnswers
	List_1_t653978094 * ___allAnswers_12;
	// System.String[] QuestionHandler2::answers
	StringU5BU5D_t1642385972* ___answers_13;
	// System.String[] QuestionHandler2::questions
	StringU5BU5D_t1642385972* ___questions_14;
	// System.String QuestionHandler2::answersDataText
	String_t* ___answersDataText_15;
	// System.String QuestionHandler2::questionsDataText
	String_t* ___questionsDataText_16;
	// Question QuestionHandler2::currQuestion
	Question_t2927948840 * ___currQuestion_17;
	// Answer[] QuestionHandler2::currAnswers
	AnswerU5BU5D_t2537842487* ___currAnswers_18;
	// System.Collections.Generic.List`1<System.String> QuestionHandler2::correctAnswers
	List_1_t1398341365 * ___correctAnswers_19;
	// UnityEngine.WWW QuestionHandler2::questionsData
	WWW_t2919945039 * ___questionsData_20;
	// UnityEngine.WWW QuestionHandler2::answersData
	WWW_t2919945039 * ___answersData_21;
	// UnityEngine.GameObject QuestionHandler2::gc
	GameObject_t1756533147 * ___gc_22;
	// UnityEngine.GameObject QuestionHandler2::player
	GameObject_t1756533147 * ___player_23;
	// TimeController QuestionHandler2::tc
	TimeController_t1641888515 * ___tc_24;
	// PlayerStats QuestionHandler2::ps
	PlayerStats_t2629781060 * ___ps_25;
	// System.Boolean QuestionHandler2::answerWasCorrect
	bool ___answerWasCorrect_26;
	// System.Collections.Generic.List`1<QuestionRecord> QuestionHandler2::records
	List_1_t2035948113 * ___records_27;
	// System.Int32 QuestionHandler2::currAnswerID
	int32_t ___currAnswerID_28;

public:
	inline static int32_t get_offset_of_qText_2() { return static_cast<int32_t>(offsetof(QuestionHandler2_t3751744042, ___qText_2)); }
	inline Text_t356221433 * get_qText_2() const { return ___qText_2; }
	inline Text_t356221433 ** get_address_of_qText_2() { return &___qText_2; }
	inline void set_qText_2(Text_t356221433 * value)
	{
		___qText_2 = value;
		Il2CppCodeGenWriteBarrier(&___qText_2, value);
	}

	inline static int32_t get_offset_of_responseText_3() { return static_cast<int32_t>(offsetof(QuestionHandler2_t3751744042, ___responseText_3)); }
	inline Text_t356221433 * get_responseText_3() const { return ___responseText_3; }
	inline Text_t356221433 ** get_address_of_responseText_3() { return &___responseText_3; }
	inline void set_responseText_3(Text_t356221433 * value)
	{
		___responseText_3 = value;
		Il2CppCodeGenWriteBarrier(&___responseText_3, value);
	}

	inline static int32_t get_offset_of_correctAnswerText_4() { return static_cast<int32_t>(offsetof(QuestionHandler2_t3751744042, ___correctAnswerText_4)); }
	inline Text_t356221433 * get_correctAnswerText_4() const { return ___correctAnswerText_4; }
	inline Text_t356221433 ** get_address_of_correctAnswerText_4() { return &___correctAnswerText_4; }
	inline void set_correctAnswerText_4(Text_t356221433 * value)
	{
		___correctAnswerText_4 = value;
		Il2CppCodeGenWriteBarrier(&___correctAnswerText_4, value);
	}

	inline static int32_t get_offset_of_answersChoices_5() { return static_cast<int32_t>(offsetof(QuestionHandler2_t3751744042, ___answersChoices_5)); }
	inline TextU5BU5D_t4216439300* get_answersChoices_5() const { return ___answersChoices_5; }
	inline TextU5BU5D_t4216439300** get_address_of_answersChoices_5() { return &___answersChoices_5; }
	inline void set_answersChoices_5(TextU5BU5D_t4216439300* value)
	{
		___answersChoices_5 = value;
		Il2CppCodeGenWriteBarrier(&___answersChoices_5, value);
	}

	inline static int32_t get_offset_of_answersPanel_6() { return static_cast<int32_t>(offsetof(QuestionHandler2_t3751744042, ___answersPanel_6)); }
	inline GameObject_t1756533147 * get_answersPanel_6() const { return ___answersPanel_6; }
	inline GameObject_t1756533147 ** get_address_of_answersPanel_6() { return &___answersPanel_6; }
	inline void set_answersPanel_6(GameObject_t1756533147 * value)
	{
		___answersPanel_6 = value;
		Il2CppCodeGenWriteBarrier(&___answersPanel_6, value);
	}

	inline static int32_t get_offset_of_qPanel_7() { return static_cast<int32_t>(offsetof(QuestionHandler2_t3751744042, ___qPanel_7)); }
	inline GameObject_t1756533147 * get_qPanel_7() const { return ___qPanel_7; }
	inline GameObject_t1756533147 ** get_address_of_qPanel_7() { return &___qPanel_7; }
	inline void set_qPanel_7(GameObject_t1756533147 * value)
	{
		___qPanel_7 = value;
		Il2CppCodeGenWriteBarrier(&___qPanel_7, value);
	}

	inline static int32_t get_offset_of_qResponsePanel_8() { return static_cast<int32_t>(offsetof(QuestionHandler2_t3751744042, ___qResponsePanel_8)); }
	inline GameObject_t1756533147 * get_qResponsePanel_8() const { return ___qResponsePanel_8; }
	inline GameObject_t1756533147 ** get_address_of_qResponsePanel_8() { return &___qResponsePanel_8; }
	inline void set_qResponsePanel_8(GameObject_t1756533147 * value)
	{
		___qResponsePanel_8 = value;
		Il2CppCodeGenWriteBarrier(&___qResponsePanel_8, value);
	}

	inline static int32_t get_offset_of_AC_9() { return static_cast<int32_t>(offsetof(QuestionHandler2_t3751744042, ___AC_9)); }
	inline AudioController_t1047253274 * get_AC_9() const { return ___AC_9; }
	inline AudioController_t1047253274 ** get_address_of_AC_9() { return &___AC_9; }
	inline void set_AC_9(AudioController_t1047253274 * value)
	{
		___AC_9 = value;
		Il2CppCodeGenWriteBarrier(&___AC_9, value);
	}

	inline static int32_t get_offset_of_allQData_10() { return static_cast<int32_t>(offsetof(QuestionHandler2_t3751744042, ___allQData_10)); }
	inline List_1_t2297069972 * get_allQData_10() const { return ___allQData_10; }
	inline List_1_t2297069972 ** get_address_of_allQData_10() { return &___allQData_10; }
	inline void set_allQData_10(List_1_t2297069972 * value)
	{
		___allQData_10 = value;
		Il2CppCodeGenWriteBarrier(&___allQData_10, value);
	}

	inline static int32_t get_offset_of_usedQuestions_11() { return static_cast<int32_t>(offsetof(QuestionHandler2_t3751744042, ___usedQuestions_11)); }
	inline List_1_t2297069972 * get_usedQuestions_11() const { return ___usedQuestions_11; }
	inline List_1_t2297069972 ** get_address_of_usedQuestions_11() { return &___usedQuestions_11; }
	inline void set_usedQuestions_11(List_1_t2297069972 * value)
	{
		___usedQuestions_11 = value;
		Il2CppCodeGenWriteBarrier(&___usedQuestions_11, value);
	}

	inline static int32_t get_offset_of_allAnswers_12() { return static_cast<int32_t>(offsetof(QuestionHandler2_t3751744042, ___allAnswers_12)); }
	inline List_1_t653978094 * get_allAnswers_12() const { return ___allAnswers_12; }
	inline List_1_t653978094 ** get_address_of_allAnswers_12() { return &___allAnswers_12; }
	inline void set_allAnswers_12(List_1_t653978094 * value)
	{
		___allAnswers_12 = value;
		Il2CppCodeGenWriteBarrier(&___allAnswers_12, value);
	}

	inline static int32_t get_offset_of_answers_13() { return static_cast<int32_t>(offsetof(QuestionHandler2_t3751744042, ___answers_13)); }
	inline StringU5BU5D_t1642385972* get_answers_13() const { return ___answers_13; }
	inline StringU5BU5D_t1642385972** get_address_of_answers_13() { return &___answers_13; }
	inline void set_answers_13(StringU5BU5D_t1642385972* value)
	{
		___answers_13 = value;
		Il2CppCodeGenWriteBarrier(&___answers_13, value);
	}

	inline static int32_t get_offset_of_questions_14() { return static_cast<int32_t>(offsetof(QuestionHandler2_t3751744042, ___questions_14)); }
	inline StringU5BU5D_t1642385972* get_questions_14() const { return ___questions_14; }
	inline StringU5BU5D_t1642385972** get_address_of_questions_14() { return &___questions_14; }
	inline void set_questions_14(StringU5BU5D_t1642385972* value)
	{
		___questions_14 = value;
		Il2CppCodeGenWriteBarrier(&___questions_14, value);
	}

	inline static int32_t get_offset_of_answersDataText_15() { return static_cast<int32_t>(offsetof(QuestionHandler2_t3751744042, ___answersDataText_15)); }
	inline String_t* get_answersDataText_15() const { return ___answersDataText_15; }
	inline String_t** get_address_of_answersDataText_15() { return &___answersDataText_15; }
	inline void set_answersDataText_15(String_t* value)
	{
		___answersDataText_15 = value;
		Il2CppCodeGenWriteBarrier(&___answersDataText_15, value);
	}

	inline static int32_t get_offset_of_questionsDataText_16() { return static_cast<int32_t>(offsetof(QuestionHandler2_t3751744042, ___questionsDataText_16)); }
	inline String_t* get_questionsDataText_16() const { return ___questionsDataText_16; }
	inline String_t** get_address_of_questionsDataText_16() { return &___questionsDataText_16; }
	inline void set_questionsDataText_16(String_t* value)
	{
		___questionsDataText_16 = value;
		Il2CppCodeGenWriteBarrier(&___questionsDataText_16, value);
	}

	inline static int32_t get_offset_of_currQuestion_17() { return static_cast<int32_t>(offsetof(QuestionHandler2_t3751744042, ___currQuestion_17)); }
	inline Question_t2927948840 * get_currQuestion_17() const { return ___currQuestion_17; }
	inline Question_t2927948840 ** get_address_of_currQuestion_17() { return &___currQuestion_17; }
	inline void set_currQuestion_17(Question_t2927948840 * value)
	{
		___currQuestion_17 = value;
		Il2CppCodeGenWriteBarrier(&___currQuestion_17, value);
	}

	inline static int32_t get_offset_of_currAnswers_18() { return static_cast<int32_t>(offsetof(QuestionHandler2_t3751744042, ___currAnswers_18)); }
	inline AnswerU5BU5D_t2537842487* get_currAnswers_18() const { return ___currAnswers_18; }
	inline AnswerU5BU5D_t2537842487** get_address_of_currAnswers_18() { return &___currAnswers_18; }
	inline void set_currAnswers_18(AnswerU5BU5D_t2537842487* value)
	{
		___currAnswers_18 = value;
		Il2CppCodeGenWriteBarrier(&___currAnswers_18, value);
	}

	inline static int32_t get_offset_of_correctAnswers_19() { return static_cast<int32_t>(offsetof(QuestionHandler2_t3751744042, ___correctAnswers_19)); }
	inline List_1_t1398341365 * get_correctAnswers_19() const { return ___correctAnswers_19; }
	inline List_1_t1398341365 ** get_address_of_correctAnswers_19() { return &___correctAnswers_19; }
	inline void set_correctAnswers_19(List_1_t1398341365 * value)
	{
		___correctAnswers_19 = value;
		Il2CppCodeGenWriteBarrier(&___correctAnswers_19, value);
	}

	inline static int32_t get_offset_of_questionsData_20() { return static_cast<int32_t>(offsetof(QuestionHandler2_t3751744042, ___questionsData_20)); }
	inline WWW_t2919945039 * get_questionsData_20() const { return ___questionsData_20; }
	inline WWW_t2919945039 ** get_address_of_questionsData_20() { return &___questionsData_20; }
	inline void set_questionsData_20(WWW_t2919945039 * value)
	{
		___questionsData_20 = value;
		Il2CppCodeGenWriteBarrier(&___questionsData_20, value);
	}

	inline static int32_t get_offset_of_answersData_21() { return static_cast<int32_t>(offsetof(QuestionHandler2_t3751744042, ___answersData_21)); }
	inline WWW_t2919945039 * get_answersData_21() const { return ___answersData_21; }
	inline WWW_t2919945039 ** get_address_of_answersData_21() { return &___answersData_21; }
	inline void set_answersData_21(WWW_t2919945039 * value)
	{
		___answersData_21 = value;
		Il2CppCodeGenWriteBarrier(&___answersData_21, value);
	}

	inline static int32_t get_offset_of_gc_22() { return static_cast<int32_t>(offsetof(QuestionHandler2_t3751744042, ___gc_22)); }
	inline GameObject_t1756533147 * get_gc_22() const { return ___gc_22; }
	inline GameObject_t1756533147 ** get_address_of_gc_22() { return &___gc_22; }
	inline void set_gc_22(GameObject_t1756533147 * value)
	{
		___gc_22 = value;
		Il2CppCodeGenWriteBarrier(&___gc_22, value);
	}

	inline static int32_t get_offset_of_player_23() { return static_cast<int32_t>(offsetof(QuestionHandler2_t3751744042, ___player_23)); }
	inline GameObject_t1756533147 * get_player_23() const { return ___player_23; }
	inline GameObject_t1756533147 ** get_address_of_player_23() { return &___player_23; }
	inline void set_player_23(GameObject_t1756533147 * value)
	{
		___player_23 = value;
		Il2CppCodeGenWriteBarrier(&___player_23, value);
	}

	inline static int32_t get_offset_of_tc_24() { return static_cast<int32_t>(offsetof(QuestionHandler2_t3751744042, ___tc_24)); }
	inline TimeController_t1641888515 * get_tc_24() const { return ___tc_24; }
	inline TimeController_t1641888515 ** get_address_of_tc_24() { return &___tc_24; }
	inline void set_tc_24(TimeController_t1641888515 * value)
	{
		___tc_24 = value;
		Il2CppCodeGenWriteBarrier(&___tc_24, value);
	}

	inline static int32_t get_offset_of_ps_25() { return static_cast<int32_t>(offsetof(QuestionHandler2_t3751744042, ___ps_25)); }
	inline PlayerStats_t2629781060 * get_ps_25() const { return ___ps_25; }
	inline PlayerStats_t2629781060 ** get_address_of_ps_25() { return &___ps_25; }
	inline void set_ps_25(PlayerStats_t2629781060 * value)
	{
		___ps_25 = value;
		Il2CppCodeGenWriteBarrier(&___ps_25, value);
	}

	inline static int32_t get_offset_of_answerWasCorrect_26() { return static_cast<int32_t>(offsetof(QuestionHandler2_t3751744042, ___answerWasCorrect_26)); }
	inline bool get_answerWasCorrect_26() const { return ___answerWasCorrect_26; }
	inline bool* get_address_of_answerWasCorrect_26() { return &___answerWasCorrect_26; }
	inline void set_answerWasCorrect_26(bool value)
	{
		___answerWasCorrect_26 = value;
	}

	inline static int32_t get_offset_of_records_27() { return static_cast<int32_t>(offsetof(QuestionHandler2_t3751744042, ___records_27)); }
	inline List_1_t2035948113 * get_records_27() const { return ___records_27; }
	inline List_1_t2035948113 ** get_address_of_records_27() { return &___records_27; }
	inline void set_records_27(List_1_t2035948113 * value)
	{
		___records_27 = value;
		Il2CppCodeGenWriteBarrier(&___records_27, value);
	}

	inline static int32_t get_offset_of_currAnswerID_28() { return static_cast<int32_t>(offsetof(QuestionHandler2_t3751744042, ___currAnswerID_28)); }
	inline int32_t get_currAnswerID_28() const { return ___currAnswerID_28; }
	inline int32_t* get_address_of_currAnswerID_28() { return &___currAnswerID_28; }
	inline void set_currAnswerID_28(int32_t value)
	{
		___currAnswerID_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
