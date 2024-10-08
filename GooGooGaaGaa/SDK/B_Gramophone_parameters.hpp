#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Gramophone

#include "Basic.hpp"


namespace SDK::Params
{

// Function B_Gramophone.B_Gramophone_C.ActivateActionProp
// 0x0003 (0x0003 - 0x0000)
struct B_Gramophone_C_ActivateActionProp final
{
public:
	bool                                          Override;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlaying_ReturnValue;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Gramophone_C_ActivateActionProp) == 0x000001, "Wrong alignment on B_Gramophone_C_ActivateActionProp");
static_assert(sizeof(B_Gramophone_C_ActivateActionProp) == 0x000003, "Wrong size on B_Gramophone_C_ActivateActionProp");
static_assert(offsetof(B_Gramophone_C_ActivateActionProp, Override) == 0x000000, "Member 'B_Gramophone_C_ActivateActionProp::Override' has a wrong offset!");
static_assert(offsetof(B_Gramophone_C_ActivateActionProp, CallFunc_IsPlaying_ReturnValue) == 0x000001, "Member 'B_Gramophone_C_ActivateActionProp::CallFunc_IsPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Gramophone_C_ActivateActionProp, CallFunc_Not_PreBool_ReturnValue) == 0x000002, "Member 'B_Gramophone_C_ActivateActionProp::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function B_Gramophone.B_Gramophone_C.DeactivateActionProp
// 0x0001 (0x0001 - 0x0000)
struct B_Gramophone_C_DeactivateActionProp final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Gramophone_C_DeactivateActionProp) == 0x000001, "Wrong alignment on B_Gramophone_C_DeactivateActionProp");
static_assert(sizeof(B_Gramophone_C_DeactivateActionProp) == 0x000001, "Wrong size on B_Gramophone_C_DeactivateActionProp");
static_assert(offsetof(B_Gramophone_C_DeactivateActionProp, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'B_Gramophone_C_DeactivateActionProp::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function B_Gramophone.B_Gramophone_C.ExecuteUbergraph_B_Gramophone
// 0x0010 (0x0010 - 0x0000)
struct B_Gramophone_C_ExecuteUbergraph_B_Gramophone final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlaying_ReturnValue;                    // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x2];                                        // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Play_StartTime_ImplicitCast;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Gramophone_C_ExecuteUbergraph_B_Gramophone) == 0x000004, "Wrong alignment on B_Gramophone_C_ExecuteUbergraph_B_Gramophone");
static_assert(sizeof(B_Gramophone_C_ExecuteUbergraph_B_Gramophone) == 0x000010, "Wrong size on B_Gramophone_C_ExecuteUbergraph_B_Gramophone");
static_assert(offsetof(B_Gramophone_C_ExecuteUbergraph_B_Gramophone, EntryPoint) == 0x000000, "Member 'B_Gramophone_C_ExecuteUbergraph_B_Gramophone::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Gramophone_C_ExecuteUbergraph_B_Gramophone, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'B_Gramophone_C_ExecuteUbergraph_B_Gramophone::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(B_Gramophone_C_ExecuteUbergraph_B_Gramophone, CallFunc_IsPlaying_ReturnValue) == 0x000008, "Member 'B_Gramophone_C_ExecuteUbergraph_B_Gramophone::CallFunc_IsPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Gramophone_C_ExecuteUbergraph_B_Gramophone, CallFunc_Not_PreBool_ReturnValue) == 0x000009, "Member 'B_Gramophone_C_ExecuteUbergraph_B_Gramophone::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Gramophone_C_ExecuteUbergraph_B_Gramophone, CallFunc_Play_StartTime_ImplicitCast) == 0x00000C, "Member 'B_Gramophone_C_ExecuteUbergraph_B_Gramophone::CallFunc_Play_StartTime_ImplicitCast' has a wrong offset!");

// Function B_Gramophone.B_Gramophone_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct B_Gramophone_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Gramophone_C_ReceiveTick) == 0x000004, "Wrong alignment on B_Gramophone_C_ReceiveTick");
static_assert(sizeof(B_Gramophone_C_ReceiveTick) == 0x000004, "Wrong size on B_Gramophone_C_ReceiveTick");
static_assert(offsetof(B_Gramophone_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'B_Gramophone_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

