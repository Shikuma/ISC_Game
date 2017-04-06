#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// QuestionHandler2
struct QuestionHandler2_t3751744042;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.WWW
struct WWW_t2919945039;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_WWW2919945039.h"
#include "mscorlib_System_String2029220233.h"

// System.Void QuestionHandler2::.ctor()
extern "C"  void QuestionHandler2__ctor_m303671699 (QuestionHandler2_t3751744042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QuestionHandler2::Start()
extern "C"  void QuestionHandler2_Start_m3598097143 (QuestionHandler2_t3751744042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator QuestionHandler2::GetQuestions(UnityEngine.WWW,UnityEngine.WWW)
extern "C"  Il2CppObject * QuestionHandler2_GetQuestions_m2504354530 (QuestionHandler2_t3751744042 * __this, WWW_t2919945039 * ___questions_www0, WWW_t2919945039 * ___answers_www1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator QuestionHandler2::GetAnswers(UnityEngine.WWW)
extern "C"  Il2CppObject * QuestionHandler2_GetAnswers_m3478660126 (QuestionHandler2_t3751744042 * __this, WWW_t2919945039 * ___answers_www0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String QuestionHandler2::GetDataValue(System.String,System.String)
extern "C"  String_t* QuestionHandler2_GetDataValue_m1433250183 (QuestionHandler2_t3751744042 * __this, String_t* ___data0, String_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QuestionHandler2::RandomizeQuestions()
extern "C"  void QuestionHandler2_RandomizeQuestions_m1692668795 (QuestionHandler2_t3751744042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QuestionHandler2::GetRandomQuestion()
extern "C"  void QuestionHandler2_GetRandomQuestion_m2779489254 (QuestionHandler2_t3751744042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QuestionHandler2::GetRandomAnswers()
extern "C"  void QuestionHandler2_GetRandomAnswers_m3125494793 (QuestionHandler2_t3751744042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QuestionHandler2::CheckAnswer()
extern "C"  void QuestionHandler2_CheckAnswer_m2285321977 (QuestionHandler2_t3751744042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QuestionHandler2::ContinueQuestion()
extern "C"  void QuestionHandler2_ContinueQuestion_m3665995924 (QuestionHandler2_t3751744042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
