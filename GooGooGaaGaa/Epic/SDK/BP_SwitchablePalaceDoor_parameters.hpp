#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SwitchablePalaceDoor

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_SwitchablePalaceDoor.BP_SwitchablePalaceDoor_C.CloseDoor
// 0x0018 (0x0018 - 0x0000)
struct BP_SwitchablePalaceDoor_C_CloseDoor final
{
public:
	bool                                          Fast;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SwitchablePalaceDoor_C_CloseDoor) == 0x000008, "Wrong alignment on BP_SwitchablePalaceDoor_C_CloseDoor");
static_assert(sizeof(BP_SwitchablePalaceDoor_C_CloseDoor) == 0x000018, "Wrong size on BP_SwitchablePalaceDoor_C_CloseDoor");
static_assert(offsetof(BP_SwitchablePalaceDoor_C_CloseDoor, Fast) == 0x000000, "Member 'BP_SwitchablePalaceDoor_C_CloseDoor::Fast' has a wrong offset!");
static_assert(offsetof(BP_SwitchablePalaceDoor_C_CloseDoor, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000008, "Member 'BP_SwitchablePalaceDoor_C_CloseDoor::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SwitchablePalaceDoor_C_CloseDoor, CallFunc_FTrunc_ReturnValue) == 0x000010, "Member 'BP_SwitchablePalaceDoor_C_CloseDoor::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SwitchablePalaceDoor_C_CloseDoor, CallFunc_HasAuthority_ReturnValue) == 0x000014, "Member 'BP_SwitchablePalaceDoor_C_CloseDoor::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");

// Function BP_SwitchablePalaceDoor.BP_SwitchablePalaceDoor_C.ExecuteUbergraph_BP_SwitchablePalaceDoor
// 0x000C (0x000C - 0x0000)
struct BP_SwitchablePalaceDoor_C_ExecuteUbergraph_BP_SwitchablePalaceDoor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SwitchablePalaceDoor_C_ExecuteUbergraph_BP_SwitchablePalaceDoor) == 0x000004, "Wrong alignment on BP_SwitchablePalaceDoor_C_ExecuteUbergraph_BP_SwitchablePalaceDoor");
static_assert(sizeof(BP_SwitchablePalaceDoor_C_ExecuteUbergraph_BP_SwitchablePalaceDoor) == 0x00000C, "Wrong size on BP_SwitchablePalaceDoor_C_ExecuteUbergraph_BP_SwitchablePalaceDoor");
static_assert(offsetof(BP_SwitchablePalaceDoor_C_ExecuteUbergraph_BP_SwitchablePalaceDoor, EntryPoint) == 0x000000, "Member 'BP_SwitchablePalaceDoor_C_ExecuteUbergraph_BP_SwitchablePalaceDoor::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SwitchablePalaceDoor_C_ExecuteUbergraph_BP_SwitchablePalaceDoor, CallFunc_HasAuthority_ReturnValue) == 0x000004, "Member 'BP_SwitchablePalaceDoor_C_ExecuteUbergraph_BP_SwitchablePalaceDoor::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SwitchablePalaceDoor_C_ExecuteUbergraph_BP_SwitchablePalaceDoor, K2Node_Event_DeltaSeconds) == 0x000008, "Member 'BP_SwitchablePalaceDoor_C_ExecuteUbergraph_BP_SwitchablePalaceDoor::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function BP_SwitchablePalaceDoor.BP_SwitchablePalaceDoor_C.OpenDoor
// 0x0001 (0x0001 - 0x0000)
struct BP_SwitchablePalaceDoor_C_OpenDoor final
{
public:
	bool                                          Fast;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SwitchablePalaceDoor_C_OpenDoor) == 0x000001, "Wrong alignment on BP_SwitchablePalaceDoor_C_OpenDoor");
static_assert(sizeof(BP_SwitchablePalaceDoor_C_OpenDoor) == 0x000001, "Wrong size on BP_SwitchablePalaceDoor_C_OpenDoor");
static_assert(offsetof(BP_SwitchablePalaceDoor_C_OpenDoor, Fast) == 0x000000, "Member 'BP_SwitchablePalaceDoor_C_OpenDoor::Fast' has a wrong offset!");

// Function BP_SwitchablePalaceDoor.BP_SwitchablePalaceDoor_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_SwitchablePalaceDoor_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SwitchablePalaceDoor_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_SwitchablePalaceDoor_C_ReceiveTick");
static_assert(sizeof(BP_SwitchablePalaceDoor_C_ReceiveTick) == 0x000004, "Wrong size on BP_SwitchablePalaceDoor_C_ReceiveTick");
static_assert(offsetof(BP_SwitchablePalaceDoor_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_SwitchablePalaceDoor_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_SwitchablePalaceDoor.BP_SwitchablePalaceDoor_C.TestForBlockedStatus
// 0x0004 (0x0004 - 0x0000)
struct BP_SwitchablePalaceDoor_C_TestForBlockedStatus final
{
public:
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlaying_ReturnValue;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsBlockedByPlayerProp_Blocked;            // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SwitchablePalaceDoor_C_TestForBlockedStatus) == 0x000001, "Wrong alignment on BP_SwitchablePalaceDoor_C_TestForBlockedStatus");
static_assert(sizeof(BP_SwitchablePalaceDoor_C_TestForBlockedStatus) == 0x000004, "Wrong size on BP_SwitchablePalaceDoor_C_TestForBlockedStatus");
static_assert(offsetof(BP_SwitchablePalaceDoor_C_TestForBlockedStatus, CallFunc_Not_PreBool_ReturnValue) == 0x000000, "Member 'BP_SwitchablePalaceDoor_C_TestForBlockedStatus::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SwitchablePalaceDoor_C_TestForBlockedStatus, CallFunc_IsPlaying_ReturnValue) == 0x000001, "Member 'BP_SwitchablePalaceDoor_C_TestForBlockedStatus::CallFunc_IsPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SwitchablePalaceDoor_C_TestForBlockedStatus, CallFunc_BooleanAND_ReturnValue) == 0x000002, "Member 'BP_SwitchablePalaceDoor_C_TestForBlockedStatus::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SwitchablePalaceDoor_C_TestForBlockedStatus, CallFunc_IsBlockedByPlayerProp_Blocked) == 0x000003, "Member 'BP_SwitchablePalaceDoor_C_TestForBlockedStatus::CallFunc_IsBlockedByPlayerProp_Blocked' has a wrong offset!");

// Function BP_SwitchablePalaceDoor.BP_SwitchablePalaceDoor_C.IsBlockedByPlayerProp
// 0x0028 (0x0028 - 0x0000)
struct BP_SwitchablePalaceDoor_C_IsBlockedByPlayerProp final
{
public:
	class UPrimitiveComponent*                    CollisionBox;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Blocked;                                           // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors;   // 0x0010(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SwitchablePalaceDoor_C_IsBlockedByPlayerProp) == 0x000008, "Wrong alignment on BP_SwitchablePalaceDoor_C_IsBlockedByPlayerProp");
static_assert(sizeof(BP_SwitchablePalaceDoor_C_IsBlockedByPlayerProp) == 0x000028, "Wrong size on BP_SwitchablePalaceDoor_C_IsBlockedByPlayerProp");
static_assert(offsetof(BP_SwitchablePalaceDoor_C_IsBlockedByPlayerProp, CollisionBox) == 0x000000, "Member 'BP_SwitchablePalaceDoor_C_IsBlockedByPlayerProp::CollisionBox' has a wrong offset!");
static_assert(offsetof(BP_SwitchablePalaceDoor_C_IsBlockedByPlayerProp, Blocked) == 0x000008, "Member 'BP_SwitchablePalaceDoor_C_IsBlockedByPlayerProp::Blocked' has a wrong offset!");
static_assert(offsetof(BP_SwitchablePalaceDoor_C_IsBlockedByPlayerProp, CallFunc_GetOverlappingActors_OverlappingActors) == 0x000010, "Member 'BP_SwitchablePalaceDoor_C_IsBlockedByPlayerProp::CallFunc_GetOverlappingActors_OverlappingActors' has a wrong offset!");
static_assert(offsetof(BP_SwitchablePalaceDoor_C_IsBlockedByPlayerProp, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'BP_SwitchablePalaceDoor_C_IsBlockedByPlayerProp::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SwitchablePalaceDoor_C_IsBlockedByPlayerProp, CallFunc_Greater_IntInt_ReturnValue) == 0x000024, "Member 'BP_SwitchablePalaceDoor_C_IsBlockedByPlayerProp::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

}
