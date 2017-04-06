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
// EnvironmentController
struct EnvironmentController_t98459507;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TilePooling
struct  TilePooling_t2465240170  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject TilePooling::gameController
	GameObject_t1756533147 * ___gameController_2;
	// EnvironmentController TilePooling::ec
	EnvironmentController_t98459507 * ___ec_3;

public:
	inline static int32_t get_offset_of_gameController_2() { return static_cast<int32_t>(offsetof(TilePooling_t2465240170, ___gameController_2)); }
	inline GameObject_t1756533147 * get_gameController_2() const { return ___gameController_2; }
	inline GameObject_t1756533147 ** get_address_of_gameController_2() { return &___gameController_2; }
	inline void set_gameController_2(GameObject_t1756533147 * value)
	{
		___gameController_2 = value;
		Il2CppCodeGenWriteBarrier(&___gameController_2, value);
	}

	inline static int32_t get_offset_of_ec_3() { return static_cast<int32_t>(offsetof(TilePooling_t2465240170, ___ec_3)); }
	inline EnvironmentController_t98459507 * get_ec_3() const { return ___ec_3; }
	inline EnvironmentController_t98459507 ** get_address_of_ec_3() { return &___ec_3; }
	inline void set_ec_3(EnvironmentController_t98459507 * value)
	{
		___ec_3 = value;
		Il2CppCodeGenWriteBarrier(&___ec_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
