#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UtilityDoor

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_UtilityDoor.BP_UtilityDoor_C.CloseDoor
// 0x0001 (0x0001 - 0x0000)
struct BP_UtilityDoor_C_CloseDoor final
{
public:
	bool                                          Fast;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UtilityDoor_C_CloseDoor) == 0x000001, "Wrong alignment on BP_UtilityDoor_C_CloseDoor");
static_assert(sizeof(BP_UtilityDoor_C_CloseDoor) == 0x000001, "Wrong size on BP_UtilityDoor_C_CloseDoor");
static_assert(offsetof(BP_UtilityDoor_C_CloseDoor, Fast) == 0x000000, "Member 'BP_UtilityDoor_C_CloseDoor::Fast' has a wrong offset!");

// Function BP_UtilityDoor.BP_UtilityDoor_C.OpenDoor
// 0x0001 (0x0001 - 0x0000)
struct BP_UtilityDoor_C_OpenDoor final
{
public:
	bool                                          Fast;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UtilityDoor_C_OpenDoor) == 0x000001, "Wrong alignment on BP_UtilityDoor_C_OpenDoor");
static_assert(sizeof(BP_UtilityDoor_C_OpenDoor) == 0x000001, "Wrong size on BP_UtilityDoor_C_OpenDoor");
static_assert(offsetof(BP_UtilityDoor_C_OpenDoor, Fast) == 0x000000, "Member 'BP_UtilityDoor_C_OpenDoor::Fast' has a wrong offset!");

// Function BP_UtilityDoor.BP_UtilityDoor_C.OnPlayTestStart
// 0x0001 (0x0001 - 0x0000)
struct BP_UtilityDoor_C_OnPlayTestStart final
{
public:
	bool                                          HasPlayTestStarted;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UtilityDoor_C_OnPlayTestStart) == 0x000001, "Wrong alignment on BP_UtilityDoor_C_OnPlayTestStart");
static_assert(sizeof(BP_UtilityDoor_C_OnPlayTestStart) == 0x000001, "Wrong size on BP_UtilityDoor_C_OnPlayTestStart");
static_assert(offsetof(BP_UtilityDoor_C_OnPlayTestStart, HasPlayTestStarted) == 0x000000, "Member 'BP_UtilityDoor_C_OnPlayTestStart::HasPlayTestStarted' has a wrong offset!");

// Function BP_UtilityDoor.BP_UtilityDoor_C.ExecuteUbergraph_BP_UtilityDoor
// 0x0078 (0x0078 - 0x0000)
struct BP_UtilityDoor_C_ExecuteUbergraph_BP_UtilityDoor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool HasPlayTestStarted)>      K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AB_GameState_C*                         K2Node_DynamicCast_AsB_Game_State;                 // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x002C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_CreativeGameState_C*                 K2Node_DynamicCast_AsB_Creative_Game_State;        // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_HasPlayTestStarted;             // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A[0x6];                                       // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue_1;               // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AB_GameState_C*                         K2Node_DynamicCast_AsB_Game_State_1;               // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_SeekGameState_C*                     K2Node_DynamicCast_AsB_Seek_Game_State;            // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UtilityDoor_C_ExecuteUbergraph_BP_UtilityDoor) == 0x000008, "Wrong alignment on BP_UtilityDoor_C_ExecuteUbergraph_BP_UtilityDoor");
static_assert(sizeof(BP_UtilityDoor_C_ExecuteUbergraph_BP_UtilityDoor) == 0x000078, "Wrong size on BP_UtilityDoor_C_ExecuteUbergraph_BP_UtilityDoor");
static_assert(offsetof(BP_UtilityDoor_C_ExecuteUbergraph_BP_UtilityDoor, EntryPoint) == 0x000000, "Member 'BP_UtilityDoor_C_ExecuteUbergraph_BP_UtilityDoor::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_UtilityDoor_C_ExecuteUbergraph_BP_UtilityDoor, CallFunc_HasAuthority_ReturnValue) == 0x000004, "Member 'BP_UtilityDoor_C_ExecuteUbergraph_BP_UtilityDoor::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UtilityDoor_C_ExecuteUbergraph_BP_UtilityDoor, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_UtilityDoor_C_ExecuteUbergraph_BP_UtilityDoor::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_UtilityDoor_C_ExecuteUbergraph_BP_UtilityDoor, CallFunc_GetGameState_ReturnValue) == 0x000018, "Member 'BP_UtilityDoor_C_ExecuteUbergraph_BP_UtilityDoor::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UtilityDoor_C_ExecuteUbergraph_BP_UtilityDoor, K2Node_DynamicCast_AsB_Game_State) == 0x000020, "Member 'BP_UtilityDoor_C_ExecuteUbergraph_BP_UtilityDoor::K2Node_DynamicCast_AsB_Game_State' has a wrong offset!");
static_assert(offsetof(BP_UtilityDoor_C_ExecuteUbergraph_BP_UtilityDoor, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_UtilityDoor_C_ExecuteUbergraph_BP_UtilityDoor::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_UtilityDoor_C_ExecuteUbergraph_BP_UtilityDoor, K2Node_CreateDelegate_OutputDelegate_1) == 0x00002C, "Member 'BP_UtilityDoor_C_ExecuteUbergraph_BP_UtilityDoor::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_UtilityDoor_C_ExecuteUbergraph_BP_UtilityDoor, K2Node_DynamicCast_AsB_Creative_Game_State) == 0x000040, "Member 'BP_UtilityDoor_C_ExecuteUbergraph_BP_UtilityDoor::K2Node_DynamicCast_AsB_Creative_Game_State' has a wrong offset!");
static_assert(offsetof(BP_UtilityDoor_C_ExecuteUbergraph_BP_UtilityDoor, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'BP_UtilityDoor_C_ExecuteUbergraph_BP_UtilityDoor::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_UtilityDoor_C_ExecuteUbergraph_BP_UtilityDoor, K2Node_CustomEvent_HasPlayTestStarted) == 0x000049, "Member 'BP_UtilityDoor_C_ExecuteUbergraph_BP_UtilityDoor::K2Node_CustomEvent_HasPlayTestStarted' has a wrong offset!");
static_assert(offsetof(BP_UtilityDoor_C_ExecuteUbergraph_BP_UtilityDoor, CallFunc_GetGameState_ReturnValue_1) == 0x000050, "Member 'BP_UtilityDoor_C_ExecuteUbergraph_BP_UtilityDoor::CallFunc_GetGameState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UtilityDoor_C_ExecuteUbergraph_BP_UtilityDoor, K2Node_DynamicCast_AsB_Game_State_1) == 0x000058, "Member 'BP_UtilityDoor_C_ExecuteUbergraph_BP_UtilityDoor::K2Node_DynamicCast_AsB_Game_State_1' has a wrong offset!");
static_assert(offsetof(BP_UtilityDoor_C_ExecuteUbergraph_BP_UtilityDoor, K2Node_DynamicCast_bSuccess_2) == 0x000060, "Member 'BP_UtilityDoor_C_ExecuteUbergraph_BP_UtilityDoor::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_UtilityDoor_C_ExecuteUbergraph_BP_UtilityDoor, K2Node_DynamicCast_AsB_Seek_Game_State) == 0x000068, "Member 'BP_UtilityDoor_C_ExecuteUbergraph_BP_UtilityDoor::K2Node_DynamicCast_AsB_Seek_Game_State' has a wrong offset!");
static_assert(offsetof(BP_UtilityDoor_C_ExecuteUbergraph_BP_UtilityDoor, K2Node_DynamicCast_bSuccess_3) == 0x000070, "Member 'BP_UtilityDoor_C_ExecuteUbergraph_BP_UtilityDoor::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_UtilityDoor_C_ExecuteUbergraph_BP_UtilityDoor, K2Node_SwitchEnum_CmpSuccess) == 0x000071, "Member 'BP_UtilityDoor_C_ExecuteUbergraph_BP_UtilityDoor::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}
