#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ScoreStatMedal

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WB_ScoreStatMedal.WB_ScoreStatMedal_C.Get_PlayerNameText_ColorAndOpacity_0
// 0x0030 (0x0030 - 0x0000)
struct WB_ScoreStatMedal_C_Get_PlayerNameText_ColorAndOpacity_0 final
{
public:
	struct FSlateColor                            ReturnValue;                                       // 0x0000(0x0014)(Parm, OutParm, ReturnParm)
	uint8                                         Pad_5AD2[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ScoreStatMedal_C_Get_PlayerNameText_ColorAndOpacity_0) == 0x000008, "Wrong alignment on WB_ScoreStatMedal_C_Get_PlayerNameText_ColorAndOpacity_0");
static_assert(sizeof(WB_ScoreStatMedal_C_Get_PlayerNameText_ColorAndOpacity_0) == 0x000030, "Wrong size on WB_ScoreStatMedal_C_Get_PlayerNameText_ColorAndOpacity_0");
static_assert(offsetof(WB_ScoreStatMedal_C_Get_PlayerNameText_ColorAndOpacity_0, ReturnValue) == 0x000000, "Member 'WB_ScoreStatMedal_C_Get_PlayerNameText_ColorAndOpacity_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ScoreStatMedal_C_Get_PlayerNameText_ColorAndOpacity_0, CallFunc_GetGameInstance_ReturnValue) == 0x000018, "Member 'WB_ScoreStatMedal_C_Get_PlayerNameText_ColorAndOpacity_0::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ScoreStatMedal_C_Get_PlayerNameText_ColorAndOpacity_0, K2Node_DynamicCast_AsB_Game_Instance) == 0x000020, "Member 'WB_ScoreStatMedal_C_Get_PlayerNameText_ColorAndOpacity_0::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(WB_ScoreStatMedal_C_Get_PlayerNameText_ColorAndOpacity_0, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WB_ScoreStatMedal_C_Get_PlayerNameText_ColorAndOpacity_0::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WB_ScoreStatMedal.WB_ScoreStatMedal_C.Get_PlayerNameText_Text_0
// 0x0070 (0x0070 - 0x0000)
struct WB_ScoreStatMedal_C_Get_PlayerNameText_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0018(0x0018)()
	class FString                                 CallFunc_GetPlayerOrBotName_Name;                  // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5AD3[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSubstring_ReturnValue;                 // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0058(0x0018)()
};
static_assert(alignof(WB_ScoreStatMedal_C_Get_PlayerNameText_Text_0) == 0x000008, "Wrong alignment on WB_ScoreStatMedal_C_Get_PlayerNameText_Text_0");
static_assert(sizeof(WB_ScoreStatMedal_C_Get_PlayerNameText_Text_0) == 0x000070, "Wrong size on WB_ScoreStatMedal_C_Get_PlayerNameText_Text_0");
static_assert(offsetof(WB_ScoreStatMedal_C_Get_PlayerNameText_Text_0, ReturnValue) == 0x000000, "Member 'WB_ScoreStatMedal_C_Get_PlayerNameText_Text_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ScoreStatMedal_C_Get_PlayerNameText_Text_0, CallFunc_MakeLiteralText_ReturnValue) == 0x000018, "Member 'WB_ScoreStatMedal_C_Get_PlayerNameText_Text_0::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ScoreStatMedal_C_Get_PlayerNameText_Text_0, CallFunc_GetPlayerOrBotName_Name) == 0x000030, "Member 'WB_ScoreStatMedal_C_Get_PlayerNameText_Text_0::CallFunc_GetPlayerOrBotName_Name' has a wrong offset!");
static_assert(offsetof(WB_ScoreStatMedal_C_Get_PlayerNameText_Text_0, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'WB_ScoreStatMedal_C_Get_PlayerNameText_Text_0::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ScoreStatMedal_C_Get_PlayerNameText_Text_0, CallFunc_GetSubstring_ReturnValue) == 0x000048, "Member 'WB_ScoreStatMedal_C_Get_PlayerNameText_Text_0::CallFunc_GetSubstring_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ScoreStatMedal_C_Get_PlayerNameText_Text_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000058, "Member 'WB_ScoreStatMedal_C_Get_PlayerNameText_Text_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function WB_ScoreStatMedal.WB_ScoreStatMedal_C.Get_StatNameText_Text_0
// 0x0020 (0x0020 - 0x0000)
struct WB_ScoreStatMedal_C_Get_StatNameText_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ScoreStatMedal_C_Get_StatNameText_Text_0) == 0x000008, "Wrong alignment on WB_ScoreStatMedal_C_Get_StatNameText_Text_0");
static_assert(sizeof(WB_ScoreStatMedal_C_Get_StatNameText_Text_0) == 0x000020, "Wrong size on WB_ScoreStatMedal_C_Get_StatNameText_Text_0");
static_assert(offsetof(WB_ScoreStatMedal_C_Get_StatNameText_Text_0, ReturnValue) == 0x000000, "Member 'WB_ScoreStatMedal_C_Get_StatNameText_Text_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ScoreStatMedal_C_Get_StatNameText_Text_0, K2Node_SwitchEnum_CmpSuccess) == 0x000018, "Member 'WB_ScoreStatMedal_C_Get_StatNameText_Text_0::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WB_ScoreStatMedal_C_Get_StatNameText_Text_0, K2Node_SwitchEnum_CmpSuccess_1) == 0x000019, "Member 'WB_ScoreStatMedal_C_Get_StatNameText_Text_0::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");

// Function WB_ScoreStatMedal.WB_ScoreStatMedal_C.Get_StatValueText_Text_0
// 0x0118 (0x0118 - 0x0000)
struct WB_ScoreStatMedal_C_Get_StatValueText_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	double                                        Value;                                             // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5AD4[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	double                                        CallFunc_FloorDecimals_ReturnValue;                // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_DoubleToString_ReturnValue;          // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0068(0x0018)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0090(0x0018)()
	int32                                         CallFunc_FTrunc_ReturnValue_1;                     // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5AD5[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue_2;                     // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5AD6[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x00D8(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00F0(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5AD7[0x6];                                     // 0x010A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_VariableSet_Value_ImplicitCast;             // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ScoreStatMedal_C_Get_StatValueText_Text_0) == 0x000008, "Wrong alignment on WB_ScoreStatMedal_C_Get_StatValueText_Text_0");
static_assert(sizeof(WB_ScoreStatMedal_C_Get_StatValueText_Text_0) == 0x000118, "Wrong size on WB_ScoreStatMedal_C_Get_StatValueText_Text_0");
static_assert(offsetof(WB_ScoreStatMedal_C_Get_StatValueText_Text_0, ReturnValue) == 0x000000, "Member 'WB_ScoreStatMedal_C_Get_StatValueText_Text_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ScoreStatMedal_C_Get_StatValueText_Text_0, Value) == 0x000018, "Member 'WB_ScoreStatMedal_C_Get_StatValueText_Text_0::Value' has a wrong offset!");
static_assert(offsetof(WB_ScoreStatMedal_C_Get_StatValueText_Text_0, CallFunc_FTrunc_ReturnValue) == 0x000020, "Member 'WB_ScoreStatMedal_C_Get_StatValueText_Text_0::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ScoreStatMedal_C_Get_StatValueText_Text_0, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000028, "Member 'WB_ScoreStatMedal_C_Get_StatValueText_Text_0::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ScoreStatMedal_C_Get_StatValueText_Text_0, CallFunc_Conv_IntToString_ReturnValue) == 0x000030, "Member 'WB_ScoreStatMedal_C_Get_StatValueText_Text_0::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ScoreStatMedal_C_Get_StatValueText_Text_0, CallFunc_FloorDecimals_ReturnValue) == 0x000040, "Member 'WB_ScoreStatMedal_C_Get_StatValueText_Text_0::CallFunc_FloorDecimals_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ScoreStatMedal_C_Get_StatValueText_Text_0, CallFunc_Concat_StrStr_ReturnValue) == 0x000048, "Member 'WB_ScoreStatMedal_C_Get_StatValueText_Text_0::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ScoreStatMedal_C_Get_StatValueText_Text_0, CallFunc_Conv_DoubleToString_ReturnValue) == 0x000058, "Member 'WB_ScoreStatMedal_C_Get_StatValueText_Text_0::CallFunc_Conv_DoubleToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ScoreStatMedal_C_Get_StatValueText_Text_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000068, "Member 'WB_ScoreStatMedal_C_Get_StatValueText_Text_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ScoreStatMedal_C_Get_StatValueText_Text_0, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000080, "Member 'WB_ScoreStatMedal_C_Get_StatValueText_Text_0::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_ScoreStatMedal_C_Get_StatValueText_Text_0, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000090, "Member 'WB_ScoreStatMedal_C_Get_StatValueText_Text_0::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_ScoreStatMedal_C_Get_StatValueText_Text_0, CallFunc_FTrunc_ReturnValue_1) == 0x0000A8, "Member 'WB_ScoreStatMedal_C_Get_StatValueText_Text_0::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_ScoreStatMedal_C_Get_StatValueText_Text_0, CallFunc_Conv_IntToString_ReturnValue_1) == 0x0000B0, "Member 'WB_ScoreStatMedal_C_Get_StatValueText_Text_0::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_ScoreStatMedal_C_Get_StatValueText_Text_0, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000C0, "Member 'WB_ScoreStatMedal_C_Get_StatValueText_Text_0::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_ScoreStatMedal_C_Get_StatValueText_Text_0, CallFunc_FTrunc_ReturnValue_2) == 0x0000D0, "Member 'WB_ScoreStatMedal_C_Get_StatValueText_Text_0::CallFunc_FTrunc_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_ScoreStatMedal_C_Get_StatValueText_Text_0, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0000D8, "Member 'WB_ScoreStatMedal_C_Get_StatValueText_Text_0::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_ScoreStatMedal_C_Get_StatValueText_Text_0, CallFunc_Conv_IntToText_ReturnValue) == 0x0000F0, "Member 'WB_ScoreStatMedal_C_Get_StatValueText_Text_0::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ScoreStatMedal_C_Get_StatValueText_Text_0, K2Node_SwitchEnum_CmpSuccess) == 0x000108, "Member 'WB_ScoreStatMedal_C_Get_StatValueText_Text_0::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WB_ScoreStatMedal_C_Get_StatValueText_Text_0, K2Node_SwitchEnum_CmpSuccess_1) == 0x000109, "Member 'WB_ScoreStatMedal_C_Get_StatValueText_Text_0::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(WB_ScoreStatMedal_C_Get_StatValueText_Text_0, K2Node_VariableSet_Value_ImplicitCast) == 0x000110, "Member 'WB_ScoreStatMedal_C_Get_StatValueText_Text_0::K2Node_VariableSet_Value_ImplicitCast' has a wrong offset!");

}
