#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// QuestionRecord
struct  QuestionRecord_t2666826981  : public MonoBehaviour_t1158329972
{
public:
	// System.String QuestionRecord::dateComplete
	String_t* ___dateComplete_2;
	// System.Int32 QuestionRecord::q_id
	int32_t ___q_id_3;
	// System.Int32 QuestionRecord::u_id
	int32_t ___u_id_4;
	// System.Int32 QuestionRecord::answer_id
	int32_t ___answer_id_5;
	// System.Boolean QuestionRecord::isCorrect
	bool ___isCorrect_6;

public:
	inline static int32_t get_offset_of_dateComplete_2() { return static_cast<int32_t>(offsetof(QuestionRecord_t2666826981, ___dateComplete_2)); }
	inline String_t* get_dateComplete_2() const { return ___dateComplete_2; }
	inline String_t** get_address_of_dateComplete_2() { return &___dateComplete_2; }
	inline void set_dateComplete_2(String_t* value)
	{
		___dateComplete_2 = value;
		Il2CppCodeGenWriteBarrier(&___dateComplete_2, value);
	}

	inline static int32_t get_offset_of_q_id_3() { return static_cast<int32_t>(offsetof(QuestionRecord_t2666826981, ___q_id_3)); }
	inline int32_t get_q_id_3() const { return ___q_id_3; }
	inline int32_t* get_address_of_q_id_3() { return &___q_id_3; }
	inline void set_q_id_3(int32_t value)
	{
		___q_id_3 = value;
	}

	inline static int32_t get_offset_of_u_id_4() { return static_cast<int32_t>(offsetof(QuestionRecord_t2666826981, ___u_id_4)); }
	inline int32_t get_u_id_4() const { return ___u_id_4; }
	inline int32_t* get_address_of_u_id_4() { return &___u_id_4; }
	inline void set_u_id_4(int32_t value)
	{
		___u_id_4 = value;
	}

	inline static int32_t get_offset_of_answer_id_5() { return static_cast<int32_t>(offsetof(QuestionRecord_t2666826981, ___answer_id_5)); }
	inline int32_t get_answer_id_5() const { return ___answer_id_5; }
	inline int32_t* get_address_of_answer_id_5() { return &___answer_id_5; }
	inline void set_answer_id_5(int32_t value)
	{
		___answer_id_5 = value;
	}

	inline static int32_t get_offset_of_isCorrect_6() { return static_cast<int32_t>(offsetof(QuestionRecord_t2666826981, ___isCorrect_6)); }
	inline bool get_isCorrect_6() const { return ___isCorrect_6; }
	inline bool* get_address_of_isCorrect_6() { return &___isCorrect_6; }
	inline void set_isCorrect_6(bool value)
	{
		___isCorrect_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
