#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_LuaqAttack

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AB_LuaqAttack.AB_LuaqAttack_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct AB_LuaqAttack_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(AB_LuaqAttack_C_AnimGraph) == 0x000008, "Wrong alignment on AB_LuaqAttack_C_AnimGraph");
static_assert(sizeof(AB_LuaqAttack_C_AnimGraph) == 0x000010, "Wrong size on AB_LuaqAttack_C_AnimGraph");
static_assert(offsetof(AB_LuaqAttack_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'AB_LuaqAttack_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function AB_LuaqAttack.AB_LuaqAttack_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct AB_LuaqAttack_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_LuaqAttack_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on AB_LuaqAttack_C_BlueprintUpdateAnimation");
static_assert(sizeof(AB_LuaqAttack_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on AB_LuaqAttack_C_BlueprintUpdateAnimation");
static_assert(offsetof(AB_LuaqAttack_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'AB_LuaqAttack_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function AB_LuaqAttack.AB_LuaqAttack_C.ExecuteUbergraph_AB_LuaqAttack
// 0x0038 (0x0038 - 0x0000)
struct AB_LuaqAttack_C_ExecuteUbergraph_AB_LuaqAttack final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue; // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_373A[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTimeX;                           // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetLifeSpan_ReturnValue;                  // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue_1;     // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_373B[0x1];                                     // 0x001F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1;  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_LuaqAttack_C_ExecuteUbergraph_AB_LuaqAttack) == 0x000008, "Wrong alignment on AB_LuaqAttack_C_ExecuteUbergraph_AB_LuaqAttack");
static_assert(sizeof(AB_LuaqAttack_C_ExecuteUbergraph_AB_LuaqAttack) == 0x000038, "Wrong size on AB_LuaqAttack_C_ExecuteUbergraph_AB_LuaqAttack");
static_assert(offsetof(AB_LuaqAttack_C_ExecuteUbergraph_AB_LuaqAttack, EntryPoint) == 0x000000, "Member 'AB_LuaqAttack_C_ExecuteUbergraph_AB_LuaqAttack::EntryPoint' has a wrong offset!");
static_assert(offsetof(AB_LuaqAttack_C_ExecuteUbergraph_AB_LuaqAttack, CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue) == 0x000004, "Member 'AB_LuaqAttack_C_ExecuteUbergraph_AB_LuaqAttack::CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_LuaqAttack_C_ExecuteUbergraph_AB_LuaqAttack, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000008, "Member 'AB_LuaqAttack_C_ExecuteUbergraph_AB_LuaqAttack::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_LuaqAttack_C_ExecuteUbergraph_AB_LuaqAttack, K2Node_Event_DeltaTimeX) == 0x00000C, "Member 'AB_LuaqAttack_C_ExecuteUbergraph_AB_LuaqAttack::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(AB_LuaqAttack_C_ExecuteUbergraph_AB_LuaqAttack, CallFunc_GetOwningActor_ReturnValue) == 0x000010, "Member 'AB_LuaqAttack_C_ExecuteUbergraph_AB_LuaqAttack::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_LuaqAttack_C_ExecuteUbergraph_AB_LuaqAttack, CallFunc_GetLifeSpan_ReturnValue) == 0x000018, "Member 'AB_LuaqAttack_C_ExecuteUbergraph_AB_LuaqAttack::CallFunc_GetLifeSpan_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_LuaqAttack_C_ExecuteUbergraph_AB_LuaqAttack, CallFunc_LessEqual_DoubleDouble_ReturnValue_1) == 0x00001C, "Member 'AB_LuaqAttack_C_ExecuteUbergraph_AB_LuaqAttack::CallFunc_LessEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AB_LuaqAttack_C_ExecuteUbergraph_AB_LuaqAttack, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x00001D, "Member 'AB_LuaqAttack_C_ExecuteUbergraph_AB_LuaqAttack::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_LuaqAttack_C_ExecuteUbergraph_AB_LuaqAttack, CallFunc_BooleanAND_ReturnValue) == 0x00001E, "Member 'AB_LuaqAttack_C_ExecuteUbergraph_AB_LuaqAttack::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_LuaqAttack_C_ExecuteUbergraph_AB_LuaqAttack, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast) == 0x000020, "Member 'AB_LuaqAttack_C_ExecuteUbergraph_AB_LuaqAttack::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(AB_LuaqAttack_C_ExecuteUbergraph_AB_LuaqAttack, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1) == 0x000028, "Member 'AB_LuaqAttack_C_ExecuteUbergraph_AB_LuaqAttack::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(AB_LuaqAttack_C_ExecuteUbergraph_AB_LuaqAttack, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x000030, "Member 'AB_LuaqAttack_C_ExecuteUbergraph_AB_LuaqAttack::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");

}
