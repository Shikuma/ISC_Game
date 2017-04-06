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

// ScoreObject
struct  ScoreObject_t3566688275  : public MonoBehaviour_t1158329972
{
public:
	// System.String ScoreObject::firstName
	String_t* ___firstName_2;
	// System.String ScoreObject::lastName
	String_t* ___lastName_3;
	// System.String ScoreObject::dateComplete
	String_t* ___dateComplete_4;
	// System.Single ScoreObject::score
	float ___score_5;
	// System.Int32 ScoreObject::id
	int32_t ___id_6;
	// System.Int32 ScoreObject::user_id
	int32_t ___user_id_7;

public:
	inline static int32_t get_offset_of_firstName_2() { return static_cast<int32_t>(offsetof(ScoreObject_t3566688275, ___firstName_2)); }
	inline String_t* get_firstName_2() const { return ___firstName_2; }
	inline String_t** get_address_of_firstName_2() { return &___firstName_2; }
	inline void set_firstName_2(String_t* value)
	{
		___firstName_2 = value;
		Il2CppCodeGenWriteBarrier(&___firstName_2, value);
	}

	inline static int32_t get_offset_of_lastName_3() { return static_cast<int32_t>(offsetof(ScoreObject_t3566688275, ___lastName_3)); }
	inline String_t* get_lastName_3() const { return ___lastName_3; }
	inline String_t** get_address_of_lastName_3() { return &___lastName_3; }
	inline void set_lastName_3(String_t* value)
	{
		___lastName_3 = value;
		Il2CppCodeGenWriteBarrier(&___lastName_3, value);
	}

	inline static int32_t get_offset_of_dateComplete_4() { return static_cast<int32_t>(offsetof(ScoreObject_t3566688275, ___dateComplete_4)); }
	inline String_t* get_dateComplete_4() const { return ___dateComplete_4; }
	inline String_t** get_address_of_dateComplete_4() { return &___dateComplete_4; }
	inline void set_dateComplete_4(String_t* value)
	{
		___dateComplete_4 = value;
		Il2CppCodeGenWriteBarrier(&___dateComplete_4, value);
	}

	inline static int32_t get_offset_of_score_5() { return static_cast<int32_t>(offsetof(ScoreObject_t3566688275, ___score_5)); }
	inline float get_score_5() const { return ___score_5; }
	inline float* get_address_of_score_5() { return &___score_5; }
	inline void set_score_5(float value)
	{
		___score_5 = value;
	}

	inline static int32_t get_offset_of_id_6() { return static_cast<int32_t>(offsetof(ScoreObject_t3566688275, ___id_6)); }
	inline int32_t get_id_6() const { return ___id_6; }
	inline int32_t* get_address_of_id_6() { return &___id_6; }
	inline void set_id_6(int32_t value)
	{
		___id_6 = value;
	}

	inline static int32_t get_offset_of_user_id_7() { return static_cast<int32_t>(offsetof(ScoreObject_t3566688275, ___user_id_7)); }
	inline int32_t get_user_id_7() const { return ___user_id_7; }
	inline int32_t* get_address_of_user_id_7() { return &___user_id_7; }
	inline void set_user_id_7(int32_t value)
	{
		___user_id_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
