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
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnvironmentController
struct  EnvironmentController_t98459507  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector2 EnvironmentController::screenSize
	Vector2_t2243707579  ___screenSize_2;
	// System.Int32 EnvironmentController::poolSize
	int32_t ___poolSize_3;
	// UnityEngine.GameObject EnvironmentController::player
	GameObject_t1756533147 * ___player_4;
	// UnityEngine.GameObject EnvironmentController::tile
	GameObject_t1756533147 * ___tile_5;
	// UnityEngine.GameObject EnvironmentController::walkingSurfacePrefab
	GameObject_t1756533147 * ___walkingSurfacePrefab_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> EnvironmentController::tiles
	List_1_t1125654279 * ___tiles_7;
	// UnityEngine.GameObject EnvironmentController::environmentParent
	GameObject_t1756533147 * ___environmentParent_8;

public:
	inline static int32_t get_offset_of_screenSize_2() { return static_cast<int32_t>(offsetof(EnvironmentController_t98459507, ___screenSize_2)); }
	inline Vector2_t2243707579  get_screenSize_2() const { return ___screenSize_2; }
	inline Vector2_t2243707579 * get_address_of_screenSize_2() { return &___screenSize_2; }
	inline void set_screenSize_2(Vector2_t2243707579  value)
	{
		___screenSize_2 = value;
	}

	inline static int32_t get_offset_of_poolSize_3() { return static_cast<int32_t>(offsetof(EnvironmentController_t98459507, ___poolSize_3)); }
	inline int32_t get_poolSize_3() const { return ___poolSize_3; }
	inline int32_t* get_address_of_poolSize_3() { return &___poolSize_3; }
	inline void set_poolSize_3(int32_t value)
	{
		___poolSize_3 = value;
	}

	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(EnvironmentController_t98459507, ___player_4)); }
	inline GameObject_t1756533147 * get_player_4() const { return ___player_4; }
	inline GameObject_t1756533147 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_t1756533147 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier(&___player_4, value);
	}

	inline static int32_t get_offset_of_tile_5() { return static_cast<int32_t>(offsetof(EnvironmentController_t98459507, ___tile_5)); }
	inline GameObject_t1756533147 * get_tile_5() const { return ___tile_5; }
	inline GameObject_t1756533147 ** get_address_of_tile_5() { return &___tile_5; }
	inline void set_tile_5(GameObject_t1756533147 * value)
	{
		___tile_5 = value;
		Il2CppCodeGenWriteBarrier(&___tile_5, value);
	}

	inline static int32_t get_offset_of_walkingSurfacePrefab_6() { return static_cast<int32_t>(offsetof(EnvironmentController_t98459507, ___walkingSurfacePrefab_6)); }
	inline GameObject_t1756533147 * get_walkingSurfacePrefab_6() const { return ___walkingSurfacePrefab_6; }
	inline GameObject_t1756533147 ** get_address_of_walkingSurfacePrefab_6() { return &___walkingSurfacePrefab_6; }
	inline void set_walkingSurfacePrefab_6(GameObject_t1756533147 * value)
	{
		___walkingSurfacePrefab_6 = value;
		Il2CppCodeGenWriteBarrier(&___walkingSurfacePrefab_6, value);
	}

	inline static int32_t get_offset_of_tiles_7() { return static_cast<int32_t>(offsetof(EnvironmentController_t98459507, ___tiles_7)); }
	inline List_1_t1125654279 * get_tiles_7() const { return ___tiles_7; }
	inline List_1_t1125654279 ** get_address_of_tiles_7() { return &___tiles_7; }
	inline void set_tiles_7(List_1_t1125654279 * value)
	{
		___tiles_7 = value;
		Il2CppCodeGenWriteBarrier(&___tiles_7, value);
	}

	inline static int32_t get_offset_of_environmentParent_8() { return static_cast<int32_t>(offsetof(EnvironmentController_t98459507, ___environmentParent_8)); }
	inline GameObject_t1756533147 * get_environmentParent_8() const { return ___environmentParent_8; }
	inline GameObject_t1756533147 ** get_address_of_environmentParent_8() { return &___environmentParent_8; }
	inline void set_environmentParent_8(GameObject_t1756533147 * value)
	{
		___environmentParent_8 = value;
		Il2CppCodeGenWriteBarrier(&___environmentParent_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
