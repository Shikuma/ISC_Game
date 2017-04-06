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

// SubmitGameData
struct SubmitGameData_t1241831570;
// System.Collections.Generic.List`1<QuestionRecord>
struct List_1_t2035948113;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.WWW
struct WWW_t2919945039;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_WWW2919945039.h"
#include "mscorlib_System_String2029220233.h"

// System.Void SubmitGameData::.ctor()
extern "C"  void SubmitGameData__ctor_m1902118337 (SubmitGameData_t1241831570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SubmitGameData::Start()
extern "C"  void SubmitGameData_Start_m2163991761 (SubmitGameData_t1241831570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SubmitGameData::SetAllTheData()
extern "C"  void SubmitGameData_SetAllTheData_m3670833303 (SubmitGameData_t1241831570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SubmitGameData::SendQuestionRecords(System.Collections.Generic.List`1<QuestionRecord>)
extern "C"  void SubmitGameData_SendQuestionRecords_m1563500008 (SubmitGameData_t1241831570 * __this, List_1_t2035948113 * ___records0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SubmitGameData::WaitForRecordsRequest(UnityEngine.WWW)
extern "C"  Il2CppObject * SubmitGameData_WaitForRecordsRequest_m2106233210 (SubmitGameData_t1241831570 * __this, WWW_t2919945039 * ___www0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SubmitGameData::GetUser()
extern "C"  void SubmitGameData_GetUser_m3803674110 (SubmitGameData_t1241831570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SubmitGameData::WaitForUser(UnityEngine.WWW)
extern "C"  Il2CppObject * SubmitGameData_WaitForUser_m3928069522 (SubmitGameData_t1241831570 * __this, WWW_t2919945039 * ___www0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SubmitGameData::SendGameSession()
extern "C"  void SubmitGameData_SendGameSession_m960615001 (SubmitGameData_t1241831570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SubmitGameData::WaitForSessionRequest(UnityEngine.WWW)
extern "C"  Il2CppObject * SubmitGameData_WaitForSessionRequest_m2891373584 (SubmitGameData_t1241831570 * __this, WWW_t2919945039 * ___www0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SubmitGameData::GetDataValue(System.String,System.String)
extern "C"  String_t* SubmitGameData_GetDataValue_m687334713 (SubmitGameData_t1241831570 * __this, String_t* ___data0, String_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SubmitGameData::PostSubmitActions()
extern "C"  void SubmitGameData_PostSubmitActions_m3446845044 (SubmitGameData_t1241831570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
