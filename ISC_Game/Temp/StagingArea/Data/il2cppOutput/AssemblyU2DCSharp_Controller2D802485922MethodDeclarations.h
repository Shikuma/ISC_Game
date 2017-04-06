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

// Controller2D
struct Controller2D_t802485922;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void Controller2D::.ctor()
extern "C"  void Controller2D__ctor_m1972723229 (Controller2D_t802485922 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Controller2D::Start()
extern "C"  void Controller2D_Start_m774250573 (Controller2D_t802485922 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Controller2D::Move(UnityEngine.Vector2,System.Boolean)
extern "C"  void Controller2D_Move_m1917408023 (Controller2D_t802485922 * __this, Vector2_t2243707579  ___moveAmount0, bool ___standingOnPlatform1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Controller2D::Move(UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
extern "C"  void Controller2D_Move_m2845994491 (Controller2D_t802485922 * __this, Vector2_t2243707579  ___moveAmount0, Vector2_t2243707579  ___input1, bool ___standingOnPlatform2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Controller2D::HorizontalCollisions(UnityEngine.Vector2&)
extern "C"  void Controller2D_HorizontalCollisions_m3152837472 (Controller2D_t802485922 * __this, Vector2_t2243707579 * ___moveAmount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Controller2D::ClimbSlope(UnityEngine.Vector2&,System.Single)
extern "C"  void Controller2D_ClimbSlope_m2135446562 (Controller2D_t802485922 * __this, Vector2_t2243707579 * ___moveAmount0, float ___slopeAngle1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Controller2D::DescendSlope(UnityEngine.Vector2&)
extern "C"  void Controller2D_DescendSlope_m2395602848 (Controller2D_t802485922 * __this, Vector2_t2243707579 * ___moveAmount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Controller2D::VerticalCollisions(UnityEngine.Vector2&)
extern "C"  void Controller2D_VerticalCollisions_m3560307286 (Controller2D_t802485922 * __this, Vector2_t2243707579 * ___moveAmount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Controller2D::ResetFallingThroughPlatform()
extern "C"  void Controller2D_ResetFallingThroughPlatform_m348026807 (Controller2D_t802485922 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
