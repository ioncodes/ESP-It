#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_BuffWitchManaBoost

#include "Basic.hpp"


namespace SDK::Params
{

// Function B_BuffWitchManaBoost.B_BuffWitchManaBoost_C.BuffStart
// 0x0008 (0x0008 - 0x0000)
struct B_BuffWitchManaBoost_C_BuffStart final
{
public:
	class AB_PlayerState_C*                       Param_PlayerState;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_BuffWitchManaBoost_C_BuffStart) == 0x000008, "Wrong alignment on B_BuffWitchManaBoost_C_BuffStart");
static_assert(sizeof(B_BuffWitchManaBoost_C_BuffStart) == 0x000008, "Wrong size on B_BuffWitchManaBoost_C_BuffStart");
static_assert(offsetof(B_BuffWitchManaBoost_C_BuffStart, Param_PlayerState) == 0x000000, "Member 'B_BuffWitchManaBoost_C_BuffStart::Param_PlayerState' has a wrong offset!");

// Function B_BuffWitchManaBoost.B_BuffWitchManaBoost_C.ExecuteUbergraph_B_BuffWitchManaBoost
// 0x0078 (0x0078 - 0x0000)
struct B_BuffWitchManaBoost_C_ExecuteUbergraph_B_BuffWitchManaBoost final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EF6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UB_PowerupParametersSubsystem_C*        CallFunc_GetWorldSubsystem_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AB_PlayerState_C*                       K2Node_Event_PlayerState;                          // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EF7[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UB_ManaComponent_C*                     K2Node_CustomEvent_ManaComponent;                  // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_CustomEvent_ManaRegen;                      // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SetManaRegen_ReturnValue;                 // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UB_ManaComponent_C*                     CallFunc_GetCurrentManaComponent_ReturnValue;      // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UB_ManaComponent_C*                     CallFunc_GetCurrentManaComponent_ReturnValue_1;    // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UB_PowerupParametersSubsystem_C*        CallFunc_GetWorldSubsystem_ReturnValue_1;          // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_PowerupParametersSubsystem_C*        CallFunc_GetWorldSubsystem_ReturnValue_2;          // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SetManaRegen_ReturnValue_1;               // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SetManaRegen_ReturnValue_2;               // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_BuffWitchManaBoost_C_ExecuteUbergraph_B_BuffWitchManaBoost) == 0x000008, "Wrong alignment on B_BuffWitchManaBoost_C_ExecuteUbergraph_B_BuffWitchManaBoost");
static_assert(sizeof(B_BuffWitchManaBoost_C_ExecuteUbergraph_B_BuffWitchManaBoost) == 0x000078, "Wrong size on B_BuffWitchManaBoost_C_ExecuteUbergraph_B_BuffWitchManaBoost");
static_assert(offsetof(B_BuffWitchManaBoost_C_ExecuteUbergraph_B_BuffWitchManaBoost, EntryPoint) == 0x000000, "Member 'B_BuffWitchManaBoost_C_ExecuteUbergraph_B_BuffWitchManaBoost::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_BuffWitchManaBoost_C_ExecuteUbergraph_B_BuffWitchManaBoost, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000008, "Member 'B_BuffWitchManaBoost_C_ExecuteUbergraph_B_BuffWitchManaBoost::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_BuffWitchManaBoost_C_ExecuteUbergraph_B_BuffWitchManaBoost, K2Node_Event_PlayerState) == 0x000010, "Member 'B_BuffWitchManaBoost_C_ExecuteUbergraph_B_BuffWitchManaBoost::K2Node_Event_PlayerState' has a wrong offset!");
static_assert(offsetof(B_BuffWitchManaBoost_C_ExecuteUbergraph_B_BuffWitchManaBoost, K2Node_Event_DeltaSeconds) == 0x000018, "Member 'B_BuffWitchManaBoost_C_ExecuteUbergraph_B_BuffWitchManaBoost::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(B_BuffWitchManaBoost_C_ExecuteUbergraph_B_BuffWitchManaBoost, K2Node_CustomEvent_ManaComponent) == 0x000020, "Member 'B_BuffWitchManaBoost_C_ExecuteUbergraph_B_BuffWitchManaBoost::K2Node_CustomEvent_ManaComponent' has a wrong offset!");
static_assert(offsetof(B_BuffWitchManaBoost_C_ExecuteUbergraph_B_BuffWitchManaBoost, K2Node_CustomEvent_ManaRegen) == 0x000028, "Member 'B_BuffWitchManaBoost_C_ExecuteUbergraph_B_BuffWitchManaBoost::K2Node_CustomEvent_ManaRegen' has a wrong offset!");
static_assert(offsetof(B_BuffWitchManaBoost_C_ExecuteUbergraph_B_BuffWitchManaBoost, CallFunc_SetManaRegen_ReturnValue) == 0x000030, "Member 'B_BuffWitchManaBoost_C_ExecuteUbergraph_B_BuffWitchManaBoost::CallFunc_SetManaRegen_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_BuffWitchManaBoost_C_ExecuteUbergraph_B_BuffWitchManaBoost, CallFunc_GetCurrentManaComponent_ReturnValue) == 0x000038, "Member 'B_BuffWitchManaBoost_C_ExecuteUbergraph_B_BuffWitchManaBoost::CallFunc_GetCurrentManaComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_BuffWitchManaBoost_C_ExecuteUbergraph_B_BuffWitchManaBoost, CallFunc_GetCurrentManaComponent_ReturnValue_1) == 0x000040, "Member 'B_BuffWitchManaBoost_C_ExecuteUbergraph_B_BuffWitchManaBoost::CallFunc_GetCurrentManaComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_BuffWitchManaBoost_C_ExecuteUbergraph_B_BuffWitchManaBoost, CallFunc_GetWorldSubsystem_ReturnValue_1) == 0x000048, "Member 'B_BuffWitchManaBoost_C_ExecuteUbergraph_B_BuffWitchManaBoost::CallFunc_GetWorldSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_BuffWitchManaBoost_C_ExecuteUbergraph_B_BuffWitchManaBoost, CallFunc_GetWorldSubsystem_ReturnValue_2) == 0x000050, "Member 'B_BuffWitchManaBoost_C_ExecuteUbergraph_B_BuffWitchManaBoost::CallFunc_GetWorldSubsystem_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_BuffWitchManaBoost_C_ExecuteUbergraph_B_BuffWitchManaBoost, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000058, "Member 'B_BuffWitchManaBoost_C_ExecuteUbergraph_B_BuffWitchManaBoost::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_BuffWitchManaBoost_C_ExecuteUbergraph_B_BuffWitchManaBoost, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000060, "Member 'B_BuffWitchManaBoost_C_ExecuteUbergraph_B_BuffWitchManaBoost::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_BuffWitchManaBoost_C_ExecuteUbergraph_B_BuffWitchManaBoost, CallFunc_SetManaRegen_ReturnValue_1) == 0x000068, "Member 'B_BuffWitchManaBoost_C_ExecuteUbergraph_B_BuffWitchManaBoost::CallFunc_SetManaRegen_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_BuffWitchManaBoost_C_ExecuteUbergraph_B_BuffWitchManaBoost, CallFunc_SetManaRegen_ReturnValue_2) == 0x000070, "Member 'B_BuffWitchManaBoost_C_ExecuteUbergraph_B_BuffWitchManaBoost::CallFunc_SetManaRegen_ReturnValue_2' has a wrong offset!");

// Function B_BuffWitchManaBoost.B_BuffWitchManaBoost_C.GetCurrentManaComponent
// 0x0018 (0x0018 - 0x0000)
struct B_BuffWitchManaBoost_C_GetCurrentManaComponent final
{
public:
	class UB_ManaComponent_C*                     ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_ManaComponent_C*                     CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_BuffWitchManaBoost_C_GetCurrentManaComponent) == 0x000008, "Wrong alignment on B_BuffWitchManaBoost_C_GetCurrentManaComponent");
static_assert(sizeof(B_BuffWitchManaBoost_C_GetCurrentManaComponent) == 0x000018, "Wrong size on B_BuffWitchManaBoost_C_GetCurrentManaComponent");
static_assert(offsetof(B_BuffWitchManaBoost_C_GetCurrentManaComponent, ReturnValue) == 0x000000, "Member 'B_BuffWitchManaBoost_C_GetCurrentManaComponent::ReturnValue' has a wrong offset!");
static_assert(offsetof(B_BuffWitchManaBoost_C_GetCurrentManaComponent, CallFunc_K2_GetPawn_ReturnValue) == 0x000008, "Member 'B_BuffWitchManaBoost_C_GetCurrentManaComponent::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_BuffWitchManaBoost_C_GetCurrentManaComponent, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'B_BuffWitchManaBoost_C_GetCurrentManaComponent::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

// Function B_BuffWitchManaBoost.B_BuffWitchManaBoost_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct B_BuffWitchManaBoost_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_BuffWitchManaBoost_C_ReceiveTick) == 0x000004, "Wrong alignment on B_BuffWitchManaBoost_C_ReceiveTick");
static_assert(sizeof(B_BuffWitchManaBoost_C_ReceiveTick) == 0x000004, "Wrong size on B_BuffWitchManaBoost_C_ReceiveTick");
static_assert(offsetof(B_BuffWitchManaBoost_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'B_BuffWitchManaBoost_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function B_BuffWitchManaBoost.B_BuffWitchManaBoost_C.SetManaRegen
// 0x0018 (0x0018 - 0x0000)
struct B_BuffWitchManaBoost_C_SetManaRegen final
{
public:
	class UB_ManaComponent_C*                     Param_ManaComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        ManaRegen;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_BuffWitchManaBoost_C_SetManaRegen) == 0x000008, "Wrong alignment on B_BuffWitchManaBoost_C_SetManaRegen");
static_assert(sizeof(B_BuffWitchManaBoost_C_SetManaRegen) == 0x000018, "Wrong size on B_BuffWitchManaBoost_C_SetManaRegen");
static_assert(offsetof(B_BuffWitchManaBoost_C_SetManaRegen, Param_ManaComponent) == 0x000000, "Member 'B_BuffWitchManaBoost_C_SetManaRegen::Param_ManaComponent' has a wrong offset!");
static_assert(offsetof(B_BuffWitchManaBoost_C_SetManaRegen, ManaRegen) == 0x000008, "Member 'B_BuffWitchManaBoost_C_SetManaRegen::ManaRegen' has a wrong offset!");
static_assert(offsetof(B_BuffWitchManaBoost_C_SetManaRegen, ReturnValue) == 0x000010, "Member 'B_BuffWitchManaBoost_C_SetManaRegen::ReturnValue' has a wrong offset!");

// Function B_BuffWitchManaBoost.B_BuffWitchManaBoost_C.SetManaRegenMulti
// 0x0010 (0x0010 - 0x0000)
struct B_BuffWitchManaBoost_C_SetManaRegenMulti final
{
public:
	class UB_ManaComponent_C*                     Param_ManaComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        ManaRegen;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_BuffWitchManaBoost_C_SetManaRegenMulti) == 0x000008, "Wrong alignment on B_BuffWitchManaBoost_C_SetManaRegenMulti");
static_assert(sizeof(B_BuffWitchManaBoost_C_SetManaRegenMulti) == 0x000010, "Wrong size on B_BuffWitchManaBoost_C_SetManaRegenMulti");
static_assert(offsetof(B_BuffWitchManaBoost_C_SetManaRegenMulti, Param_ManaComponent) == 0x000000, "Member 'B_BuffWitchManaBoost_C_SetManaRegenMulti::Param_ManaComponent' has a wrong offset!");
static_assert(offsetof(B_BuffWitchManaBoost_C_SetManaRegenMulti, ManaRegen) == 0x000008, "Member 'B_BuffWitchManaBoost_C_SetManaRegenMulti::ManaRegen' has a wrong offset!");

}
