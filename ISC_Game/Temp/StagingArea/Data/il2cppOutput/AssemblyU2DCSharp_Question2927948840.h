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

// Question
struct  Question_t2927948840  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 Question::q_id
	int32_t ___q_id_2;
	// System.String Question::q_text
	String_t* ___q_text_3;
	// System.String Question::subject
	String_t* ___subject_4;
	// System.String Question::responseText
	String_t* ___responseText_5;

public:
	inline static int32_t get_offset_of_q_id_2() { return static_cast<int32_t>(offsetof(Question_t2927948840, ___q_id_2)); }
	inline int32_t get_q_id_2() const { return ___q_id_2; }
	inline int32_t* get_address_of_q_id_2() { return &___q_id_2; }
	inline void set_q_id_2(int32_t value)
	{
		___q_id_2 = value;
	}

	inline static int32_t get_offset_of_q_text_3() { return static_cast<int32_t>(offsetof(Question_t2927948840, ___q_text_3)); }
	inline String_t* get_q_text_3() const { return ___q_text_3; }
	inline String_t** get_address_of_q_text_3() { return &___q_text_3; }
	inline void set_q_text_3(String_t* value)
	{
		___q_text_3 = value;
		Il2CppCodeGenWriteBarrier(&___q_text_3, value);
	}

	inline static int32_t get_offset_of_subject_4() { return static_cast<int32_t>(offsetof(Question_t2927948840, ___subject_4)); }
	inline String_t* get_subject_4() const { return ___subject_4; }
	inline String_t** get_address_of_subject_4() { return &___subject_4; }
	inline void set_subject_4(String_t* value)
	{
		___subject_4 = value;
		Il2CppCodeGenWriteBarrier(&___subject_4, value);
	}

	inline static int32_t get_offset_of_responseText_5() { return static_cast<int32_t>(offsetof(Question_t2927948840, ___responseText_5)); }
	inline String_t* get_responseText_5() const { return ___responseText_5; }
	inline String_t** get_address_of_responseText_5() { return &___responseText_5; }
	inline void set_responseText_5(String_t* value)
	{
		___responseText_5 = value;
		Il2CppCodeGenWriteBarrier(&___responseText_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
