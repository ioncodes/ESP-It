#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Witch_Spline

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function B_Witch_Spline.B_Witch_Spline_C.UserConstructionScript
// 0x0008 (0x0008 - 0x0000)
struct B_Witch_Spline_C_UserConstructionScript final
{
public:
	float                                         CallFunc_OverrideAnimationData_PlayRate_ImplicitCast; // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_OverrideAnimationData_Position_ImplicitCast; // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Witch_Spline_C_UserConstructionScript) == 0x000004, "Wrong alignment on B_Witch_Spline_C_UserConstructionScript");
static_assert(sizeof(B_Witch_Spline_C_UserConstructionScript) == 0x000008, "Wrong size on B_Witch_Spline_C_UserConstructionScript");
static_assert(offsetof(B_Witch_Spline_C_UserConstructionScript, CallFunc_OverrideAnimationData_PlayRate_ImplicitCast) == 0x000000, "Member 'B_Witch_Spline_C_UserConstructionScript::CallFunc_OverrideAnimationData_PlayRate_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Witch_Spline_C_UserConstructionScript, CallFunc_OverrideAnimationData_Position_ImplicitCast) == 0x000004, "Member 'B_Witch_Spline_C_UserConstructionScript::CallFunc_OverrideAnimationData_Position_ImplicitCast' has a wrong offset!");

// Function B_Witch_Spline.B_Witch_Spline_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct B_Witch_Spline_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Witch_Spline_C_ReceiveTick) == 0x000004, "Wrong alignment on B_Witch_Spline_C_ReceiveTick");
static_assert(sizeof(B_Witch_Spline_C_ReceiveTick) == 0x000004, "Wrong size on B_Witch_Spline_C_ReceiveTick");
static_assert(offsetof(B_Witch_Spline_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'B_Witch_Spline_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function B_Witch_Spline.B_Witch_Spline_C.ExecuteUbergraph_B_Witch_Spline
// 0x03B0 (0x03B0 - 0x0000)
struct B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetTransformAtDistanceAlongSpline_ReturnValue; // 0x0030(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D8[0x8];                                       // 0x00D8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00E0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_1;              // 0x0140(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSplineLength_ReturnValue;              // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x01A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A5[0x3];                                      // 0x01A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeTransform_SweepHitResult;   // 0x01A8(0x00F8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeTransform_SweepHitResult_1; // 0x02A0(0x00F8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0398(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTransformAtDistanceAlongSpline_Distance_ImplicitCast; // 0x03A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A4[0x4];                                      // 0x03A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Greater_DoubleDouble_B_ImplicitCast;      // 0x03A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline) == 0x000010, "Wrong alignment on B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline");
static_assert(sizeof(B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline) == 0x0003B0, "Wrong size on B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline");
static_assert(offsetof(B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline, EntryPoint) == 0x000000, "Member 'B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline, CallFunc_GetGameInstance_ReturnValue) == 0x000008, "Member 'B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline, K2Node_DynamicCast_AsB_Game_Instance) == 0x000010, "Member 'B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline, K2Node_Event_DeltaSeconds) == 0x00001C, "Member 'B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000020, "Member 'B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000028, "Member 'B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline, CallFunc_GetTransformAtDistanceAlongSpline_ReturnValue) == 0x000030, "Member 'B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline::CallFunc_GetTransformAtDistanceAlongSpline_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline, CallFunc_BreakTransform_Location) == 0x000090, "Member 'B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline, CallFunc_BreakTransform_Rotation) == 0x0000A8, "Member 'B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline, CallFunc_BreakTransform_Scale) == 0x0000C0, "Member 'B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline, CallFunc_MakeTransform_ReturnValue) == 0x0000E0, "Member 'B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline, CallFunc_MakeTransform_ReturnValue_1) == 0x000140, "Member 'B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline::CallFunc_MakeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline, CallFunc_GetSplineLength_ReturnValue) == 0x0001A0, "Member 'B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline::CallFunc_GetSplineLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0001A4, "Member 'B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline, CallFunc_K2_SetRelativeTransform_SweepHitResult) == 0x0001A8, "Member 'B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline::CallFunc_K2_SetRelativeTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline, CallFunc_K2_SetRelativeTransform_SweepHitResult_1) == 0x0002A0, "Member 'B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline::CallFunc_K2_SetRelativeTransform_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000398, "Member 'B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline, CallFunc_GetTransformAtDistanceAlongSpline_Distance_ImplicitCast) == 0x0003A0, "Member 'B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline::CallFunc_GetTransformAtDistanceAlongSpline_Distance_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline, CallFunc_Greater_DoubleDouble_B_ImplicitCast) == 0x0003A8, "Member 'B_Witch_Spline_C_ExecuteUbergraph_B_Witch_Spline::CallFunc_Greater_DoubleDouble_B_ImplicitCast' has a wrong offset!");

}

