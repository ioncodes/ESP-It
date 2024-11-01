#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Chicken

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function AB_Chicken.AB_Chicken_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct AB_Chicken_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(AB_Chicken_C_AnimGraph) == 0x000008, "Wrong alignment on AB_Chicken_C_AnimGraph");
static_assert(sizeof(AB_Chicken_C_AnimGraph) == 0x000010, "Wrong size on AB_Chicken_C_AnimGraph");
static_assert(offsetof(AB_Chicken_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'AB_Chicken_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function AB_Chicken.AB_Chicken_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct AB_Chicken_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_Chicken_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on AB_Chicken_C_BlueprintUpdateAnimation");
static_assert(sizeof(AB_Chicken_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on AB_Chicken_C_BlueprintUpdateAnimation");
static_assert(offsetof(AB_Chicken_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'AB_Chicken_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function AB_Chicken.AB_Chicken_C.ExecuteUbergraph_AB_Chicken
// 0x0068 (0x0068 - 0x0000)
struct AB_Chicken_C_ExecuteUbergraph_AB_Chicken final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AB_Chicken_C*                           K2Node_DynamicCast_AsB_Chicken;                    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_VSize_ReturnValue;                        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AB_GameState_C*                         K2Node_DynamicCast_AsB_Game_State;                 // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasTrackingStarted_HasTrackingStarted;    // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRoundEnd_RoundIsEnd;                    // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_Chicken_C_ExecuteUbergraph_AB_Chicken) == 0x000008, "Wrong alignment on AB_Chicken_C_ExecuteUbergraph_AB_Chicken");
static_assert(sizeof(AB_Chicken_C_ExecuteUbergraph_AB_Chicken) == 0x000068, "Wrong size on AB_Chicken_C_ExecuteUbergraph_AB_Chicken");
static_assert(offsetof(AB_Chicken_C_ExecuteUbergraph_AB_Chicken, EntryPoint) == 0x000000, "Member 'AB_Chicken_C_ExecuteUbergraph_AB_Chicken::EntryPoint' has a wrong offset!");
static_assert(offsetof(AB_Chicken_C_ExecuteUbergraph_AB_Chicken, K2Node_Event_DeltaTimeX) == 0x000004, "Member 'AB_Chicken_C_ExecuteUbergraph_AB_Chicken::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(AB_Chicken_C_ExecuteUbergraph_AB_Chicken, CallFunc_GetOwningActor_ReturnValue) == 0x000008, "Member 'AB_Chicken_C_ExecuteUbergraph_AB_Chicken::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Chicken_C_ExecuteUbergraph_AB_Chicken, K2Node_DynamicCast_AsB_Chicken) == 0x000010, "Member 'AB_Chicken_C_ExecuteUbergraph_AB_Chicken::K2Node_DynamicCast_AsB_Chicken' has a wrong offset!");
static_assert(offsetof(AB_Chicken_C_ExecuteUbergraph_AB_Chicken, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'AB_Chicken_C_ExecuteUbergraph_AB_Chicken::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AB_Chicken_C_ExecuteUbergraph_AB_Chicken, CallFunc_GetVelocity_ReturnValue) == 0x000020, "Member 'AB_Chicken_C_ExecuteUbergraph_AB_Chicken::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Chicken_C_ExecuteUbergraph_AB_Chicken, CallFunc_Greater_IntInt_ReturnValue) == 0x000038, "Member 'AB_Chicken_C_ExecuteUbergraph_AB_Chicken::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Chicken_C_ExecuteUbergraph_AB_Chicken, CallFunc_VSize_ReturnValue) == 0x000040, "Member 'AB_Chicken_C_ExecuteUbergraph_AB_Chicken::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Chicken_C_ExecuteUbergraph_AB_Chicken, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000048, "Member 'AB_Chicken_C_ExecuteUbergraph_AB_Chicken::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Chicken_C_ExecuteUbergraph_AB_Chicken, CallFunc_GetGameState_ReturnValue) == 0x000050, "Member 'AB_Chicken_C_ExecuteUbergraph_AB_Chicken::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Chicken_C_ExecuteUbergraph_AB_Chicken, K2Node_DynamicCast_AsB_Game_State) == 0x000058, "Member 'AB_Chicken_C_ExecuteUbergraph_AB_Chicken::K2Node_DynamicCast_AsB_Game_State' has a wrong offset!");
static_assert(offsetof(AB_Chicken_C_ExecuteUbergraph_AB_Chicken, K2Node_DynamicCast_bSuccess_1) == 0x000060, "Member 'AB_Chicken_C_ExecuteUbergraph_AB_Chicken::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(AB_Chicken_C_ExecuteUbergraph_AB_Chicken, CallFunc_HasTrackingStarted_HasTrackingStarted) == 0x000061, "Member 'AB_Chicken_C_ExecuteUbergraph_AB_Chicken::CallFunc_HasTrackingStarted_HasTrackingStarted' has a wrong offset!");
static_assert(offsetof(AB_Chicken_C_ExecuteUbergraph_AB_Chicken, CallFunc_BooleanAND_ReturnValue) == 0x000062, "Member 'AB_Chicken_C_ExecuteUbergraph_AB_Chicken::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Chicken_C_ExecuteUbergraph_AB_Chicken, CallFunc_IsRoundEnd_RoundIsEnd) == 0x000063, "Member 'AB_Chicken_C_ExecuteUbergraph_AB_Chicken::CallFunc_IsRoundEnd_RoundIsEnd' has a wrong offset!");
static_assert(offsetof(AB_Chicken_C_ExecuteUbergraph_AB_Chicken, CallFunc_BooleanOR_ReturnValue) == 0x000064, "Member 'AB_Chicken_C_ExecuteUbergraph_AB_Chicken::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Chicken_C_ExecuteUbergraph_AB_Chicken, CallFunc_BooleanAND_ReturnValue_1) == 0x000065, "Member 'AB_Chicken_C_ExecuteUbergraph_AB_Chicken::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

}

