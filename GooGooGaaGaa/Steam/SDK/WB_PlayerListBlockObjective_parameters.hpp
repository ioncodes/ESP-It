#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_PlayerListBlockObjective

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WB_PlayerListBlockObjective.WB_PlayerListBlockObjective_C.IsPlayerShown
// 0x0020 (0x0020 - 0x0000)
struct WB_PlayerListBlockObjective_C_IsPlayerShown final
{
public:
	class AB_PlayerState_C*                       PlayerState;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsShown;                                           // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_ObjectivePlayerState_C*              K2Node_DynamicCast_AsB_Objective_Player_State;     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerShown_IsShown;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_PlayerListBlockObjective_C_IsPlayerShown) == 0x000008, "Wrong alignment on WB_PlayerListBlockObjective_C_IsPlayerShown");
static_assert(sizeof(WB_PlayerListBlockObjective_C_IsPlayerShown) == 0x000020, "Wrong size on WB_PlayerListBlockObjective_C_IsPlayerShown");
static_assert(offsetof(WB_PlayerListBlockObjective_C_IsPlayerShown, PlayerState) == 0x000000, "Member 'WB_PlayerListBlockObjective_C_IsPlayerShown::PlayerState' has a wrong offset!");
static_assert(offsetof(WB_PlayerListBlockObjective_C_IsPlayerShown, IsShown) == 0x000008, "Member 'WB_PlayerListBlockObjective_C_IsPlayerShown::IsShown' has a wrong offset!");
static_assert(offsetof(WB_PlayerListBlockObjective_C_IsPlayerShown, K2Node_DynamicCast_AsB_Objective_Player_State) == 0x000010, "Member 'WB_PlayerListBlockObjective_C_IsPlayerShown::K2Node_DynamicCast_AsB_Objective_Player_State' has a wrong offset!");
static_assert(offsetof(WB_PlayerListBlockObjective_C_IsPlayerShown, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WB_PlayerListBlockObjective_C_IsPlayerShown::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_PlayerListBlockObjective_C_IsPlayerShown, CallFunc_IsPlayerShown_IsShown) == 0x000019, "Member 'WB_PlayerListBlockObjective_C_IsPlayerShown::CallFunc_IsPlayerShown_IsShown' has a wrong offset!");
static_assert(offsetof(WB_PlayerListBlockObjective_C_IsPlayerShown, CallFunc_IsValidClass_ReturnValue) == 0x00001A, "Member 'WB_PlayerListBlockObjective_C_IsPlayerShown::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PlayerListBlockObjective_C_IsPlayerShown, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00001B, "Member 'WB_PlayerListBlockObjective_C_IsPlayerShown::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PlayerListBlockObjective_C_IsPlayerShown, CallFunc_BooleanOR_ReturnValue) == 0x00001C, "Member 'WB_PlayerListBlockObjective_C_IsPlayerShown::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PlayerListBlockObjective_C_IsPlayerShown, CallFunc_BooleanAND_ReturnValue) == 0x00001D, "Member 'WB_PlayerListBlockObjective_C_IsPlayerShown::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function WB_PlayerListBlockObjective.WB_PlayerListBlockObjective_C.Tick
// 0x003C (0x003C - 0x0000)
struct WB_PlayerListBlockObjective_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_PlayerListBlockObjective_C_Tick) == 0x000004, "Wrong alignment on WB_PlayerListBlockObjective_C_Tick");
static_assert(sizeof(WB_PlayerListBlockObjective_C_Tick) == 0x00003C, "Wrong size on WB_PlayerListBlockObjective_C_Tick");
static_assert(offsetof(WB_PlayerListBlockObjective_C_Tick, MyGeometry) == 0x000000, "Member 'WB_PlayerListBlockObjective_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_PlayerListBlockObjective_C_Tick, InDeltaTime) == 0x000038, "Member 'WB_PlayerListBlockObjective_C_Tick::InDeltaTime' has a wrong offset!");

// Function WB_PlayerListBlockObjective.WB_PlayerListBlockObjective_C.AddPlayerBlock
// 0x0010 (0x0010 - 0x0000)
struct WB_PlayerListBlockObjective_C_AddPlayerBlock final
{
public:
	class AB_PlayerState_C*                       PlayerState;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWB_PlayerBlock_C*                      PlayerBlock;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_PlayerListBlockObjective_C_AddPlayerBlock) == 0x000008, "Wrong alignment on WB_PlayerListBlockObjective_C_AddPlayerBlock");
static_assert(sizeof(WB_PlayerListBlockObjective_C_AddPlayerBlock) == 0x000010, "Wrong size on WB_PlayerListBlockObjective_C_AddPlayerBlock");
static_assert(offsetof(WB_PlayerListBlockObjective_C_AddPlayerBlock, PlayerState) == 0x000000, "Member 'WB_PlayerListBlockObjective_C_AddPlayerBlock::PlayerState' has a wrong offset!");
static_assert(offsetof(WB_PlayerListBlockObjective_C_AddPlayerBlock, PlayerBlock) == 0x000008, "Member 'WB_PlayerListBlockObjective_C_AddPlayerBlock::PlayerBlock' has a wrong offset!");

// Function WB_PlayerListBlockObjective.WB_PlayerListBlockObjective_C.ExecuteUbergraph_WB_PlayerListBlockObjective
// 0x0058 (0x0058 - 0x0000)
struct WB_PlayerListBlockObjective_C_ExecuteUbergraph_WB_PlayerListBlockObjective final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_PlayerState_C*                       K2Node_Event_PlayerState;                          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWB_PlayerBlock_C*                      K2Node_Event_PlayerBlock;                          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0018(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_PlayerListBlockObjective_C_ExecuteUbergraph_WB_PlayerListBlockObjective) == 0x000008, "Wrong alignment on WB_PlayerListBlockObjective_C_ExecuteUbergraph_WB_PlayerListBlockObjective");
static_assert(sizeof(WB_PlayerListBlockObjective_C_ExecuteUbergraph_WB_PlayerListBlockObjective) == 0x000058, "Wrong size on WB_PlayerListBlockObjective_C_ExecuteUbergraph_WB_PlayerListBlockObjective");
static_assert(offsetof(WB_PlayerListBlockObjective_C_ExecuteUbergraph_WB_PlayerListBlockObjective, EntryPoint) == 0x000000, "Member 'WB_PlayerListBlockObjective_C_ExecuteUbergraph_WB_PlayerListBlockObjective::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_PlayerListBlockObjective_C_ExecuteUbergraph_WB_PlayerListBlockObjective, K2Node_Event_PlayerState) == 0x000008, "Member 'WB_PlayerListBlockObjective_C_ExecuteUbergraph_WB_PlayerListBlockObjective::K2Node_Event_PlayerState' has a wrong offset!");
static_assert(offsetof(WB_PlayerListBlockObjective_C_ExecuteUbergraph_WB_PlayerListBlockObjective, K2Node_Event_PlayerBlock) == 0x000010, "Member 'WB_PlayerListBlockObjective_C_ExecuteUbergraph_WB_PlayerListBlockObjective::K2Node_Event_PlayerBlock' has a wrong offset!");
static_assert(offsetof(WB_PlayerListBlockObjective_C_ExecuteUbergraph_WB_PlayerListBlockObjective, K2Node_Event_MyGeometry) == 0x000018, "Member 'WB_PlayerListBlockObjective_C_ExecuteUbergraph_WB_PlayerListBlockObjective::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_PlayerListBlockObjective_C_ExecuteUbergraph_WB_PlayerListBlockObjective, K2Node_Event_InDeltaTime) == 0x000050, "Member 'WB_PlayerListBlockObjective_C_ExecuteUbergraph_WB_PlayerListBlockObjective::K2Node_Event_InDeltaTime' has a wrong offset!");

}

