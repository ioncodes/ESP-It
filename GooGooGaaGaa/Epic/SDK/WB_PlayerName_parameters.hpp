#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_PlayerName

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WB_PlayerName.WB_PlayerName_C.GetVisibility_0
// 0x0020 (0x0020 - 0x0000)
struct WB_PlayerName_C_GetVisibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUserInterfaceHidden_UserInterfaceIsHidden; // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_PlayerName_C_GetVisibility_0) == 0x000008, "Wrong alignment on WB_PlayerName_C_GetVisibility_0");
static_assert(sizeof(WB_PlayerName_C_GetVisibility_0) == 0x000020, "Wrong size on WB_PlayerName_C_GetVisibility_0");
static_assert(offsetof(WB_PlayerName_C_GetVisibility_0, ReturnValue) == 0x000000, "Member 'WB_PlayerName_C_GetVisibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PlayerName_C_GetVisibility_0, Temp_byte_Variable) == 0x000001, "Member 'WB_PlayerName_C_GetVisibility_0::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WB_PlayerName_C_GetVisibility_0, CallFunc_GetGameInstance_ReturnValue) == 0x000008, "Member 'WB_PlayerName_C_GetVisibility_0::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PlayerName_C_GetVisibility_0, K2Node_DynamicCast_AsB_Game_Instance) == 0x000010, "Member 'WB_PlayerName_C_GetVisibility_0::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(WB_PlayerName_C_GetVisibility_0, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WB_PlayerName_C_GetVisibility_0::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_PlayerName_C_GetVisibility_0, Temp_byte_Variable_1) == 0x000019, "Member 'WB_PlayerName_C_GetVisibility_0::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_PlayerName_C_GetVisibility_0, CallFunc_IsUserInterfaceHidden_UserInterfaceIsHidden) == 0x00001A, "Member 'WB_PlayerName_C_GetVisibility_0::CallFunc_IsUserInterfaceHidden_UserInterfaceIsHidden' has a wrong offset!");
static_assert(offsetof(WB_PlayerName_C_GetVisibility_0, Temp_bool_Variable) == 0x00001B, "Member 'WB_PlayerName_C_GetVisibility_0::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WB_PlayerName_C_GetVisibility_0, CallFunc_BooleanOR_ReturnValue) == 0x00001C, "Member 'WB_PlayerName_C_GetVisibility_0::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PlayerName_C_GetVisibility_0, K2Node_Select_Default) == 0x00001D, "Member 'WB_PlayerName_C_GetVisibility_0::K2Node_Select_Default' has a wrong offset!");

}

