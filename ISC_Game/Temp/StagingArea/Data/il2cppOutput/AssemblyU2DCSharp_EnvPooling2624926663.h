#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnvPooling
struct  EnvPooling_t2624926663  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] EnvPooling::pieces
	GameObjectU5BU5D_t3057952154* ___pieces_2;
	// UnityEngine.GameObject[] EnvPooling::obstacles
	GameObjectU5BU5D_t3057952154* ___obstacles_3;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> EnvPooling::a
	List_1_t1125654279 * ___a_4;

public:
	inline static int32_t get_offset_of_pieces_2() { return static_cast<int32_t>(offsetof(EnvPooling_t2624926663, ___pieces_2)); }
	inline GameObjectU5BU5D_t3057952154* get_pieces_2() const { return ___pieces_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_pieces_2() { return &___pieces_2; }
	inline void set_pieces_2(GameObjectU5BU5D_t3057952154* value)
	{
		___pieces_2 = value;
		Il2CppCodeGenWriteBarrier(&___pieces_2, value);
	}

	inline static int32_t get_offset_of_obstacles_3() { return static_cast<int32_t>(offsetof(EnvPooling_t2624926663, ___obstacles_3)); }
	inline GameObjectU5BU5D_t3057952154* get_obstacles_3() const { return ___obstacles_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_obstacles_3() { return &___obstacles_3; }
	inline void set_obstacles_3(GameObjectU5BU5D_t3057952154* value)
	{
		___obstacles_3 = value;
		Il2CppCodeGenWriteBarrier(&___obstacles_3, value);
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(EnvPooling_t2624926663, ___a_4)); }
	inline List_1_t1125654279 * get_a_4() const { return ___a_4; }
	inline List_1_t1125654279 ** get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(List_1_t1125654279 * value)
	{
		___a_4 = value;
		Il2CppCodeGenWriteBarrier(&___a_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
