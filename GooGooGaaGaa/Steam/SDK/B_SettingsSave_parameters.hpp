#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_SettingsSave

#include "Basic.hpp"


namespace SDK::Params
{

// Function B_SettingsSave.B_SettingsSave_C.GetChatEnabled
// 0x0010 (0x0010 - 0x0000)
struct B_SettingsSave_C_GetChatEnabled final
{
public:
	class UB_GameInstance_C*                      GameInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ChatEnabled;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCanCommunicateOnline_CanCommunicate;   // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_SettingsSave_C_GetChatEnabled) == 0x000008, "Wrong alignment on B_SettingsSave_C_GetChatEnabled");
static_assert(sizeof(B_SettingsSave_C_GetChatEnabled) == 0x000010, "Wrong size on B_SettingsSave_C_GetChatEnabled");
static_assert(offsetof(B_SettingsSave_C_GetChatEnabled, GameInstance) == 0x000000, "Member 'B_SettingsSave_C_GetChatEnabled::GameInstance' has a wrong offset!");
static_assert(offsetof(B_SettingsSave_C_GetChatEnabled, ChatEnabled) == 0x000008, "Member 'B_SettingsSave_C_GetChatEnabled::ChatEnabled' has a wrong offset!");
static_assert(offsetof(B_SettingsSave_C_GetChatEnabled, CallFunc_GetCanCommunicateOnline_CanCommunicate) == 0x000009, "Member 'B_SettingsSave_C_GetChatEnabled::CallFunc_GetCanCommunicateOnline_CanCommunicate' has a wrong offset!");
static_assert(offsetof(B_SettingsSave_C_GetChatEnabled, CallFunc_BooleanAND_ReturnValue) == 0x00000A, "Member 'B_SettingsSave_C_GetChatEnabled::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function B_SettingsSave.B_SettingsSave_C.SetChatEnabled
// 0x0001 (0x0001 - 0x0000)
struct B_SettingsSave_C_SetChatEnabled final
{
public:
	bool                                          ChatEnabled;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_SettingsSave_C_SetChatEnabled) == 0x000001, "Wrong alignment on B_SettingsSave_C_SetChatEnabled");
static_assert(sizeof(B_SettingsSave_C_SetChatEnabled) == 0x000001, "Wrong size on B_SettingsSave_C_SetChatEnabled");
static_assert(offsetof(B_SettingsSave_C_SetChatEnabled, ChatEnabled) == 0x000000, "Member 'B_SettingsSave_C_SetChatEnabled::ChatEnabled' has a wrong offset!");

}
