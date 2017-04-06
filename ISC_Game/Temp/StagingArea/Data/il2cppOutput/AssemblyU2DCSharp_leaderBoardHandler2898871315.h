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
// UnityEngine.GameObject
struct GameObject_t1756533147;
// ScoreObject[]
struct ScoreObjectU5BU5D_t3116523074;
// GetGamesData
struct GetGamesData_t1156560617;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// leaderBoardHandler
struct  leaderBoardHandler_t2898871315  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] leaderBoardHandler::lbObjects
	GameObjectU5BU5D_t3057952154* ___lbObjects_2;
	// System.Int32 leaderBoardHandler::topScores
	int32_t ___topScores_3;
	// UnityEngine.GameObject leaderBoardHandler::objContainer
	GameObject_t1756533147 * ___objContainer_4;
	// ScoreObject[] leaderBoardHandler::userData
	ScoreObjectU5BU5D_t3116523074* ___userData_5;
	// GetGamesData leaderBoardHandler::ggd
	GetGamesData_t1156560617 * ___ggd_6;

public:
	inline static int32_t get_offset_of_lbObjects_2() { return static_cast<int32_t>(offsetof(leaderBoardHandler_t2898871315, ___lbObjects_2)); }
	inline GameObjectU5BU5D_t3057952154* get_lbObjects_2() const { return ___lbObjects_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_lbObjects_2() { return &___lbObjects_2; }
	inline void set_lbObjects_2(GameObjectU5BU5D_t3057952154* value)
	{
		___lbObjects_2 = value;
		Il2CppCodeGenWriteBarrier(&___lbObjects_2, value);
	}

	inline static int32_t get_offset_of_topScores_3() { return static_cast<int32_t>(offsetof(leaderBoardHandler_t2898871315, ___topScores_3)); }
	inline int32_t get_topScores_3() const { return ___topScores_3; }
	inline int32_t* get_address_of_topScores_3() { return &___topScores_3; }
	inline void set_topScores_3(int32_t value)
	{
		___topScores_3 = value;
	}

	inline static int32_t get_offset_of_objContainer_4() { return static_cast<int32_t>(offsetof(leaderBoardHandler_t2898871315, ___objContainer_4)); }
	inline GameObject_t1756533147 * get_objContainer_4() const { return ___objContainer_4; }
	inline GameObject_t1756533147 ** get_address_of_objContainer_4() { return &___objContainer_4; }
	inline void set_objContainer_4(GameObject_t1756533147 * value)
	{
		___objContainer_4 = value;
		Il2CppCodeGenWriteBarrier(&___objContainer_4, value);
	}

	inline static int32_t get_offset_of_userData_5() { return static_cast<int32_t>(offsetof(leaderBoardHandler_t2898871315, ___userData_5)); }
	inline ScoreObjectU5BU5D_t3116523074* get_userData_5() const { return ___userData_5; }
	inline ScoreObjectU5BU5D_t3116523074** get_address_of_userData_5() { return &___userData_5; }
	inline void set_userData_5(ScoreObjectU5BU5D_t3116523074* value)
	{
		___userData_5 = value;
		Il2CppCodeGenWriteBarrier(&___userData_5, value);
	}

	inline static int32_t get_offset_of_ggd_6() { return static_cast<int32_t>(offsetof(leaderBoardHandler_t2898871315, ___ggd_6)); }
	inline GetGamesData_t1156560617 * get_ggd_6() const { return ___ggd_6; }
	inline GetGamesData_t1156560617 ** get_address_of_ggd_6() { return &___ggd_6; }
	inline void set_ggd_6(GetGamesData_t1156560617 * value)
	{
		___ggd_6 = value;
		Il2CppCodeGenWriteBarrier(&___ggd_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
