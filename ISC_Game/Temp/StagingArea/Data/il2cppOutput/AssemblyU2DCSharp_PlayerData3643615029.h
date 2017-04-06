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

// PlayerData
struct  PlayerData_t3643615029  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 PlayerData::userID
	int32_t ___userID_2;
	// System.String PlayerData::username
	String_t* ___username_3;
	// System.String PlayerData::firstName
	String_t* ___firstName_4;
	// System.String PlayerData::lastName
	String_t* ___lastName_5;
	// System.Single PlayerData::highScore
	float ___highScore_6;
	// System.Single PlayerData::instanceHighScore
	float ___instanceHighScore_7;

public:
	inline static int32_t get_offset_of_userID_2() { return static_cast<int32_t>(offsetof(PlayerData_t3643615029, ___userID_2)); }
	inline int32_t get_userID_2() const { return ___userID_2; }
	inline int32_t* get_address_of_userID_2() { return &___userID_2; }
	inline void set_userID_2(int32_t value)
	{
		___userID_2 = value;
	}

	inline static int32_t get_offset_of_username_3() { return static_cast<int32_t>(offsetof(PlayerData_t3643615029, ___username_3)); }
	inline String_t* get_username_3() const { return ___username_3; }
	inline String_t** get_address_of_username_3() { return &___username_3; }
	inline void set_username_3(String_t* value)
	{
		___username_3 = value;
		Il2CppCodeGenWriteBarrier(&___username_3, value);
	}

	inline static int32_t get_offset_of_firstName_4() { return static_cast<int32_t>(offsetof(PlayerData_t3643615029, ___firstName_4)); }
	inline String_t* get_firstName_4() const { return ___firstName_4; }
	inline String_t** get_address_of_firstName_4() { return &___firstName_4; }
	inline void set_firstName_4(String_t* value)
	{
		___firstName_4 = value;
		Il2CppCodeGenWriteBarrier(&___firstName_4, value);
	}

	inline static int32_t get_offset_of_lastName_5() { return static_cast<int32_t>(offsetof(PlayerData_t3643615029, ___lastName_5)); }
	inline String_t* get_lastName_5() const { return ___lastName_5; }
	inline String_t** get_address_of_lastName_5() { return &___lastName_5; }
	inline void set_lastName_5(String_t* value)
	{
		___lastName_5 = value;
		Il2CppCodeGenWriteBarrier(&___lastName_5, value);
	}

	inline static int32_t get_offset_of_highScore_6() { return static_cast<int32_t>(offsetof(PlayerData_t3643615029, ___highScore_6)); }
	inline float get_highScore_6() const { return ___highScore_6; }
	inline float* get_address_of_highScore_6() { return &___highScore_6; }
	inline void set_highScore_6(float value)
	{
		___highScore_6 = value;
	}

	inline static int32_t get_offset_of_instanceHighScore_7() { return static_cast<int32_t>(offsetof(PlayerData_t3643615029, ___instanceHighScore_7)); }
	inline float get_instanceHighScore_7() const { return ___instanceHighScore_7; }
	inline float* get_address_of_instanceHighScore_7() { return &___instanceHighScore_7; }
	inline void set_instanceHighScore_7(float value)
	{
		___instanceHighScore_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
