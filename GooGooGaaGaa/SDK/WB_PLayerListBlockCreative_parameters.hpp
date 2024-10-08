#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_PLayerListBlockCreative

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WB_PLayerListBlockCreative.WB_PLayerListBlockCreative_C.IsPlayerShown
// 0x0010 (0x0010 - 0x0000)
struct WB_PLayerListBlockCreative_C_IsPlayerShown final
{
public:
	class AB_PlayerState_C*                       PlayerState;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsShown;                                           // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_PLayerListBlockCreative_C_IsPlayerShown) == 0x000008, "Wrong alignment on WB_PLayerListBlockCreative_C_IsPlayerShown");
static_assert(sizeof(WB_PLayerListBlockCreative_C_IsPlayerShown) == 0x000010, "Wrong size on WB_PLayerListBlockCreative_C_IsPlayerShown");
static_assert(offsetof(WB_PLayerListBlockCreative_C_IsPlayerShown, PlayerState) == 0x000000, "Member 'WB_PLayerListBlockCreative_C_IsPlayerShown::PlayerState' has a wrong offset!");
static_assert(offsetof(WB_PLayerListBlockCreative_C_IsPlayerShown, IsShown) == 0x000008, "Member 'WB_PLayerListBlockCreative_C_IsPlayerShown::IsShown' has a wrong offset!");
static_assert(offsetof(WB_PLayerListBlockCreative_C_IsPlayerShown, CallFunc_IsValidClass_ReturnValue) == 0x000009, "Member 'WB_PLayerListBlockCreative_C_IsPlayerShown::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");

// Function WB_PLayerListBlockCreative.WB_PLayerListBlockCreative_C.Tick
// 0x003C (0x003C - 0x0000)
struct WB_PLayerListBlockCreative_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_PLayerListBlockCreative_C_Tick) == 0x000004, "Wrong alignment on WB_PLayerListBlockCreative_C_Tick");
static_assert(sizeof(WB_PLayerListBlockCreative_C_Tick) == 0x00003C, "Wrong size on WB_PLayerListBlockCreative_C_Tick");
static_assert(offsetof(WB_PLayerListBlockCreative_C_Tick, MyGeometry) == 0x000000, "Member 'WB_PLayerListBlockCreative_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_PLayerListBlockCreative_C_Tick, InDeltaTime) == 0x000038, "Member 'WB_PLayerListBlockCreative_C_Tick::InDeltaTime' has a wrong offset!");

// Function WB_PLayerListBlockCreative.WB_PLayerListBlockCreative_C.ExecuteUbergraph_WB_PLayerListBlockCreative
// 0x0040 (0x0040 - 0x0000)
struct WB_PLayerListBlockCreative_C_ExecuteUbergraph_WB_PLayerListBlockCreative final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_PLayerListBlockCreative_C_ExecuteUbergraph_WB_PLayerListBlockCreative) == 0x000004, "Wrong alignment on WB_PLayerListBlockCreative_C_ExecuteUbergraph_WB_PLayerListBlockCreative");
static_assert(sizeof(WB_PLayerListBlockCreative_C_ExecuteUbergraph_WB_PLayerListBlockCreative) == 0x000040, "Wrong size on WB_PLayerListBlockCreative_C_ExecuteUbergraph_WB_PLayerListBlockCreative");
static_assert(offsetof(WB_PLayerListBlockCreative_C_ExecuteUbergraph_WB_PLayerListBlockCreative, EntryPoint) == 0x000000, "Member 'WB_PLayerListBlockCreative_C_ExecuteUbergraph_WB_PLayerListBlockCreative::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_PLayerListBlockCreative_C_ExecuteUbergraph_WB_PLayerListBlockCreative, K2Node_Event_MyGeometry) == 0x000004, "Member 'WB_PLayerListBlockCreative_C_ExecuteUbergraph_WB_PLayerListBlockCreative::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_PLayerListBlockCreative_C_ExecuteUbergraph_WB_PLayerListBlockCreative, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'WB_PLayerListBlockCreative_C_ExecuteUbergraph_WB_PLayerListBlockCreative::K2Node_Event_InDeltaTime' has a wrong offset!");

}

