#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_CookingInteractionActor

#include "Basic.hpp"


namespace SDK::Params
{

// Function B_CookingInteractionActor.B_CookingInteractionActor_C.ExecuteUbergraph_B_CookingInteractionActor
// 0x0028 (0x0028 - 0x0000)
struct B_CookingInteractionActor_C_ExecuteUbergraph_B_CookingInteractionActor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AB_CookingTask_C*                       K2Node_DynamicCast_AsB_Cooking_Task;               // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_CookingInteractionActor_C_ExecuteUbergraph_B_CookingInteractionActor) == 0x000008, "Wrong alignment on B_CookingInteractionActor_C_ExecuteUbergraph_B_CookingInteractionActor");
static_assert(sizeof(B_CookingInteractionActor_C_ExecuteUbergraph_B_CookingInteractionActor) == 0x000028, "Wrong size on B_CookingInteractionActor_C_ExecuteUbergraph_B_CookingInteractionActor");
static_assert(offsetof(B_CookingInteractionActor_C_ExecuteUbergraph_B_CookingInteractionActor, EntryPoint) == 0x000000, "Member 'B_CookingInteractionActor_C_ExecuteUbergraph_B_CookingInteractionActor::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_CookingInteractionActor_C_ExecuteUbergraph_B_CookingInteractionActor, CallFunc_Not_PreBool_ReturnValue) == 0x000004, "Member 'B_CookingInteractionActor_C_ExecuteUbergraph_B_CookingInteractionActor::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_CookingInteractionActor_C_ExecuteUbergraph_B_CookingInteractionActor, K2Node_Event_DeltaSeconds) == 0x000008, "Member 'B_CookingInteractionActor_C_ExecuteUbergraph_B_CookingInteractionActor::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(B_CookingInteractionActor_C_ExecuteUbergraph_B_CookingInteractionActor, CallFunc_GetOwner_ReturnValue) == 0x000010, "Member 'B_CookingInteractionActor_C_ExecuteUbergraph_B_CookingInteractionActor::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_CookingInteractionActor_C_ExecuteUbergraph_B_CookingInteractionActor, K2Node_DynamicCast_AsB_Cooking_Task) == 0x000018, "Member 'B_CookingInteractionActor_C_ExecuteUbergraph_B_CookingInteractionActor::K2Node_DynamicCast_AsB_Cooking_Task' has a wrong offset!");
static_assert(offsetof(B_CookingInteractionActor_C_ExecuteUbergraph_B_CookingInteractionActor, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'B_CookingInteractionActor_C_ExecuteUbergraph_B_CookingInteractionActor::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_CookingInteractionActor_C_ExecuteUbergraph_B_CookingInteractionActor, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000021, "Member 'B_CookingInteractionActor_C_ExecuteUbergraph_B_CookingInteractionActor::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function B_CookingInteractionActor.B_CookingInteractionActor_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct B_CookingInteractionActor_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_CookingInteractionActor_C_ReceiveTick) == 0x000004, "Wrong alignment on B_CookingInteractionActor_C_ReceiveTick");
static_assert(sizeof(B_CookingInteractionActor_C_ReceiveTick) == 0x000004, "Wrong size on B_CookingInteractionActor_C_ReceiveTick");
static_assert(offsetof(B_CookingInteractionActor_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'B_CookingInteractionActor_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}
