#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t1642385972;
// System.String
struct String_t;
// System.Collections.Generic.List`1<ScoreObject>
struct List_1_t2935809407;
// ScoreObject[]
struct ScoreObjectU5BU5D_t3116523074;
// leaderBoardHandler
struct leaderBoardHandler_t2898871315;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GetGamesData
struct  GetGamesData_t1156560617  : public MonoBehaviour_t1158329972
{
public:
	// System.String[] GetGamesData::games
	StringU5BU5D_t1642385972* ___games_2;
	// System.String GetGamesData::getColumn
	String_t* ___getColumn_3;
	// System.String GetGamesData::gamesDataText
	String_t* ___gamesDataText_4;
	// System.Collections.Generic.List`1<ScoreObject> GetGamesData::scores
	List_1_t2935809407 * ___scores_5;
	// ScoreObject[] GetGamesData::sortedScores
	ScoreObjectU5BU5D_t3116523074* ___sortedScores_6;
	// leaderBoardHandler GetGamesData::handler
	leaderBoardHandler_t2898871315 * ___handler_7;
	// System.Int32 GetGamesData::iteration
	int32_t ___iteration_8;
	// UnityEngine.UI.Text GetGamesData::debugtext
	Text_t356221433 * ___debugtext_9;

public:
	inline static int32_t get_offset_of_games_2() { return static_cast<int32_t>(offsetof(GetGamesData_t1156560617, ___games_2)); }
	inline StringU5BU5D_t1642385972* get_games_2() const { return ___games_2; }
	inline StringU5BU5D_t1642385972** get_address_of_games_2() { return &___games_2; }
	inline void set_games_2(StringU5BU5D_t1642385972* value)
	{
		___games_2 = value;
		Il2CppCodeGenWriteBarrier(&___games_2, value);
	}

	inline static int32_t get_offset_of_getColumn_3() { return static_cast<int32_t>(offsetof(GetGamesData_t1156560617, ___getColumn_3)); }
	inline String_t* get_getColumn_3() const { return ___getColumn_3; }
	inline String_t** get_address_of_getColumn_3() { return &___getColumn_3; }
	inline void set_getColumn_3(String_t* value)
	{
		___getColumn_3 = value;
		Il2CppCodeGenWriteBarrier(&___getColumn_3, value);
	}

	inline static int32_t get_offset_of_gamesDataText_4() { return static_cast<int32_t>(offsetof(GetGamesData_t1156560617, ___gamesDataText_4)); }
	inline String_t* get_gamesDataText_4() const { return ___gamesDataText_4; }
	inline String_t** get_address_of_gamesDataText_4() { return &___gamesDataText_4; }
	inline void set_gamesDataText_4(String_t* value)
	{
		___gamesDataText_4 = value;
		Il2CppCodeGenWriteBarrier(&___gamesDataText_4, value);
	}

	inline static int32_t get_offset_of_scores_5() { return static_cast<int32_t>(offsetof(GetGamesData_t1156560617, ___scores_5)); }
	inline List_1_t2935809407 * get_scores_5() const { return ___scores_5; }
	inline List_1_t2935809407 ** get_address_of_scores_5() { return &___scores_5; }
	inline void set_scores_5(List_1_t2935809407 * value)
	{
		___scores_5 = value;
		Il2CppCodeGenWriteBarrier(&___scores_5, value);
	}

	inline static int32_t get_offset_of_sortedScores_6() { return static_cast<int32_t>(offsetof(GetGamesData_t1156560617, ___sortedScores_6)); }
	inline ScoreObjectU5BU5D_t3116523074* get_sortedScores_6() const { return ___sortedScores_6; }
	inline ScoreObjectU5BU5D_t3116523074** get_address_of_sortedScores_6() { return &___sortedScores_6; }
	inline void set_sortedScores_6(ScoreObjectU5BU5D_t3116523074* value)
	{
		___sortedScores_6 = value;
		Il2CppCodeGenWriteBarrier(&___sortedScores_6, value);
	}

	inline static int32_t get_offset_of_handler_7() { return static_cast<int32_t>(offsetof(GetGamesData_t1156560617, ___handler_7)); }
	inline leaderBoardHandler_t2898871315 * get_handler_7() const { return ___handler_7; }
	inline leaderBoardHandler_t2898871315 ** get_address_of_handler_7() { return &___handler_7; }
	inline void set_handler_7(leaderBoardHandler_t2898871315 * value)
	{
		___handler_7 = value;
		Il2CppCodeGenWriteBarrier(&___handler_7, value);
	}

	inline static int32_t get_offset_of_iteration_8() { return static_cast<int32_t>(offsetof(GetGamesData_t1156560617, ___iteration_8)); }
	inline int32_t get_iteration_8() const { return ___iteration_8; }
	inline int32_t* get_address_of_iteration_8() { return &___iteration_8; }
	inline void set_iteration_8(int32_t value)
	{
		___iteration_8 = value;
	}

	inline static int32_t get_offset_of_debugtext_9() { return static_cast<int32_t>(offsetof(GetGamesData_t1156560617, ___debugtext_9)); }
	inline Text_t356221433 * get_debugtext_9() const { return ___debugtext_9; }
	inline Text_t356221433 ** get_address_of_debugtext_9() { return &___debugtext_9; }
	inline void set_debugtext_9(Text_t356221433 * value)
	{
		___debugtext_9 = value;
		Il2CppCodeGenWriteBarrier(&___debugtext_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
