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

// Answer
struct  Answer_t1284856962  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 Answer::a_id
	int32_t ___a_id_2;
	// System.Int32 Answer::q_id
	int32_t ___q_id_3;
	// System.String Answer::a_text
	String_t* ___a_text_4;

public:
	inline static int32_t get_offset_of_a_id_2() { return static_cast<int32_t>(offsetof(Answer_t1284856962, ___a_id_2)); }
	inline int32_t get_a_id_2() const { return ___a_id_2; }
	inline int32_t* get_address_of_a_id_2() { return &___a_id_2; }
	inline void set_a_id_2(int32_t value)
	{
		___a_id_2 = value;
	}

	inline static int32_t get_offset_of_q_id_3() { return static_cast<int32_t>(offsetof(Answer_t1284856962, ___q_id_3)); }
	inline int32_t get_q_id_3() const { return ___q_id_3; }
	inline int32_t* get_address_of_q_id_3() { return &___q_id_3; }
	inline void set_q_id_3(int32_t value)
	{
		___q_id_3 = value;
	}

	inline static int32_t get_offset_of_a_text_4() { return static_cast<int32_t>(offsetof(Answer_t1284856962, ___a_text_4)); }
	inline String_t* get_a_text_4() const { return ___a_text_4; }
	inline String_t** get_address_of_a_text_4() { return &___a_text_4; }
	inline void set_a_text_4(String_t* value)
	{
		___a_text_4 = value;
		Il2CppCodeGenWriteBarrier(&___a_text_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
