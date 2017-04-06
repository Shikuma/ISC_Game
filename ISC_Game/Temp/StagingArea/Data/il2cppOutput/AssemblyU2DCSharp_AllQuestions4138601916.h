#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Question[]
struct QuestionU5BU5D_t1028533817;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AllQuestions
struct  AllQuestions_t4138601916  : public MonoBehaviour_t1158329972
{
public:
	// Question[] AllQuestions::questions
	QuestionU5BU5D_t1028533817* ___questions_2;

public:
	inline static int32_t get_offset_of_questions_2() { return static_cast<int32_t>(offsetof(AllQuestions_t4138601916, ___questions_2)); }
	inline QuestionU5BU5D_t1028533817* get_questions_2() const { return ___questions_2; }
	inline QuestionU5BU5D_t1028533817** get_address_of_questions_2() { return &___questions_2; }
	inline void set_questions_2(QuestionU5BU5D_t1028533817* value)
	{
		___questions_2 = value;
		Il2CppCodeGenWriteBarrier(&___questions_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
