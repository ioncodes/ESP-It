#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_KickPlayerEntry

#include "Basic.hpp"


namespace SDK::Params
{

// Function WB_KickPlayerEntry.WB_KickPlayerEntry_C.ExecuteUbergraph_WB_KickPlayerEntry
// 0x0020 (0x0020 - 0x0000)
struct WB_KickPlayerEntry_C_ExecuteUbergraph_WB_KickPlayerEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_KickPlayerEntry_C_ExecuteUbergraph_WB_KickPlayerEntry) == 0x000008, "Wrong alignment on WB_KickPlayerEntry_C_ExecuteUbergraph_WB_KickPlayerEntry");
static_assert(sizeof(WB_KickPlayerEntry_C_ExecuteUbergraph_WB_KickPlayerEntry) == 0x000020, "Wrong size on WB_KickPlayerEntry_C_ExecuteUbergraph_WB_KickPlayerEntry");
static_assert(offsetof(WB_KickPlayerEntry_C_ExecuteUbergraph_WB_KickPlayerEntry, EntryPoint) == 0x000000, "Member 'WB_KickPlayerEntry_C_ExecuteUbergraph_WB_KickPlayerEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_KickPlayerEntry_C_ExecuteUbergraph_WB_KickPlayerEntry, CallFunc_GetGameInstance_ReturnValue) == 0x000008, "Member 'WB_KickPlayerEntry_C_ExecuteUbergraph_WB_KickPlayerEntry::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_KickPlayerEntry_C_ExecuteUbergraph_WB_KickPlayerEntry, K2Node_DynamicCast_AsB_Game_Instance) == 0x000010, "Member 'WB_KickPlayerEntry_C_ExecuteUbergraph_WB_KickPlayerEntry::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(WB_KickPlayerEntry_C_ExecuteUbergraph_WB_KickPlayerEntry, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WB_KickPlayerEntry_C_ExecuteUbergraph_WB_KickPlayerEntry::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WB_KickPlayerEntry.WB_KickPlayerEntry_C.Get_PlayerNameText_Text_0
// 0x0030 (0x0030 - 0x0000)
struct WB_KickPlayerEntry_C_Get_PlayerNameText_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm)
	class FString                                 CallFunc_GetPlayerName_ReturnValue;                // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0010)()
};
static_assert(alignof(WB_KickPlayerEntry_C_Get_PlayerNameText_Text_0) == 0x000008, "Wrong alignment on WB_KickPlayerEntry_C_Get_PlayerNameText_Text_0");
static_assert(sizeof(WB_KickPlayerEntry_C_Get_PlayerNameText_Text_0) == 0x000030, "Wrong size on WB_KickPlayerEntry_C_Get_PlayerNameText_Text_0");
static_assert(offsetof(WB_KickPlayerEntry_C_Get_PlayerNameText_Text_0, ReturnValue) == 0x000000, "Member 'WB_KickPlayerEntry_C_Get_PlayerNameText_Text_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_KickPlayerEntry_C_Get_PlayerNameText_Text_0, CallFunc_GetPlayerName_ReturnValue) == 0x000010, "Member 'WB_KickPlayerEntry_C_Get_PlayerNameText_Text_0::CallFunc_GetPlayerName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_KickPlayerEntry_C_Get_PlayerNameText_Text_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'WB_KickPlayerEntry_C_Get_PlayerNameText_Text_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

