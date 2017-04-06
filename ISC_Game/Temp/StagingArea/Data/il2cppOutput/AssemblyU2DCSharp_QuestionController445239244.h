#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;
// System.IO.FileInfo
struct FileInfo_t3153503742;
// System.IO.StreamReader
struct StreamReader_t2360341767;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// QuestionController
struct  QuestionController_t445239244  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text QuestionController::questionBox
	Text_t356221433 * ___questionBox_2;
	// System.Int32 QuestionController::qNum
	int32_t ___qNum_3;
	// System.IO.FileInfo QuestionController::theSourceFile
	FileInfo_t3153503742 * ___theSourceFile_4;
	// System.IO.StreamReader QuestionController::reader
	StreamReader_t2360341767 * ___reader_5;
	// System.String QuestionController::text
	String_t* ___text_6;
	// System.Collections.Generic.List`1<System.String> QuestionController::qList
	List_1_t1398341365 * ___qList_7;

public:
	inline static int32_t get_offset_of_questionBox_2() { return static_cast<int32_t>(offsetof(QuestionController_t445239244, ___questionBox_2)); }
	inline Text_t356221433 * get_questionBox_2() const { return ___questionBox_2; }
	inline Text_t356221433 ** get_address_of_questionBox_2() { return &___questionBox_2; }
	inline void set_questionBox_2(Text_t356221433 * value)
	{
		___questionBox_2 = value;
		Il2CppCodeGenWriteBarrier(&___questionBox_2, value);
	}

	inline static int32_t get_offset_of_qNum_3() { return static_cast<int32_t>(offsetof(QuestionController_t445239244, ___qNum_3)); }
	inline int32_t get_qNum_3() const { return ___qNum_3; }
	inline int32_t* get_address_of_qNum_3() { return &___qNum_3; }
	inline void set_qNum_3(int32_t value)
	{
		___qNum_3 = value;
	}

	inline static int32_t get_offset_of_theSourceFile_4() { return static_cast<int32_t>(offsetof(QuestionController_t445239244, ___theSourceFile_4)); }
	inline FileInfo_t3153503742 * get_theSourceFile_4() const { return ___theSourceFile_4; }
	inline FileInfo_t3153503742 ** get_address_of_theSourceFile_4() { return &___theSourceFile_4; }
	inline void set_theSourceFile_4(FileInfo_t3153503742 * value)
	{
		___theSourceFile_4 = value;
		Il2CppCodeGenWriteBarrier(&___theSourceFile_4, value);
	}

	inline static int32_t get_offset_of_reader_5() { return static_cast<int32_t>(offsetof(QuestionController_t445239244, ___reader_5)); }
	inline StreamReader_t2360341767 * get_reader_5() const { return ___reader_5; }
	inline StreamReader_t2360341767 ** get_address_of_reader_5() { return &___reader_5; }
	inline void set_reader_5(StreamReader_t2360341767 * value)
	{
		___reader_5 = value;
		Il2CppCodeGenWriteBarrier(&___reader_5, value);
	}

	inline static int32_t get_offset_of_text_6() { return static_cast<int32_t>(offsetof(QuestionController_t445239244, ___text_6)); }
	inline String_t* get_text_6() const { return ___text_6; }
	inline String_t** get_address_of_text_6() { return &___text_6; }
	inline void set_text_6(String_t* value)
	{
		___text_6 = value;
		Il2CppCodeGenWriteBarrier(&___text_6, value);
	}

	inline static int32_t get_offset_of_qList_7() { return static_cast<int32_t>(offsetof(QuestionController_t445239244, ___qList_7)); }
	inline List_1_t1398341365 * get_qList_7() const { return ___qList_7; }
	inline List_1_t1398341365 ** get_address_of_qList_7() { return &___qList_7; }
	inline void set_qList_7(List_1_t1398341365 * value)
	{
		___qList_7 = value;
		Il2CppCodeGenWriteBarrier(&___qList_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
