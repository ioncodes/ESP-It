#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ServicesDialog

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "S_SystemMessage_structs.hpp"


namespace SDK::Params
{

// Function WB_ServicesDialog.WB_ServicesDialog_C.ExecuteUbergraph_WB_ServicesDialog
// 0x0048 (0x0048 - 0x0000)
struct WB_ServicesDialog_C_ExecuteUbergraph_WB_ServicesDialog final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3500[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ParseSystemMessage_bSuccess;              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3501[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_SystemMessage                       K2Node_CustomEvent_message;                        // 0x0020(0x0028)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ServicesDialog_C_ExecuteUbergraph_WB_ServicesDialog) == 0x000008, "Wrong alignment on WB_ServicesDialog_C_ExecuteUbergraph_WB_ServicesDialog");
static_assert(sizeof(WB_ServicesDialog_C_ExecuteUbergraph_WB_ServicesDialog) == 0x000048, "Wrong size on WB_ServicesDialog_C_ExecuteUbergraph_WB_ServicesDialog");
static_assert(offsetof(WB_ServicesDialog_C_ExecuteUbergraph_WB_ServicesDialog, EntryPoint) == 0x000000, "Member 'WB_ServicesDialog_C_ExecuteUbergraph_WB_ServicesDialog::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_ServicesDialog_C_ExecuteUbergraph_WB_ServicesDialog, CallFunc_GetGameInstance_ReturnValue) == 0x000008, "Member 'WB_ServicesDialog_C_ExecuteUbergraph_WB_ServicesDialog::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ServicesDialog_C_ExecuteUbergraph_WB_ServicesDialog, K2Node_DynamicCast_AsB_Game_Instance) == 0x000010, "Member 'WB_ServicesDialog_C_ExecuteUbergraph_WB_ServicesDialog::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(WB_ServicesDialog_C_ExecuteUbergraph_WB_ServicesDialog, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WB_ServicesDialog_C_ExecuteUbergraph_WB_ServicesDialog::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_ServicesDialog_C_ExecuteUbergraph_WB_ServicesDialog, CallFunc_ParseSystemMessage_bSuccess) == 0x000019, "Member 'WB_ServicesDialog_C_ExecuteUbergraph_WB_ServicesDialog::CallFunc_ParseSystemMessage_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_ServicesDialog_C_ExecuteUbergraph_WB_ServicesDialog, K2Node_CustomEvent_message) == 0x000020, "Member 'WB_ServicesDialog_C_ExecuteUbergraph_WB_ServicesDialog::K2Node_CustomEvent_message' has a wrong offset!");

// Function WB_ServicesDialog.WB_ServicesDialog_C.ParseSystemMessage
// 0x0080 (0x0080 - 0x0000)
struct WB_ServicesDialog_C_ParseSystemMessage final
{
public:
	struct FS_SystemMessage                       SystemMessage;                                     // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          bSuccess;                                          // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3502[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetStringField_ReturnValue;               // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetStringField_ReturnValue_1;             // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_TimespanFromString_Result;                // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TimespanFromString_ReturnValue;           // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3503[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_DateTimeFromIsoString_Result;             // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DateTimeFromIsoString_ReturnValue;        // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3504[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetIntegerField_ReturnValue;              // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetIntegerField_ReturnValue_1;            // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0076(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue_1;              // 0x0077(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ServicesDialog_C_ParseSystemMessage) == 0x000008, "Wrong alignment on WB_ServicesDialog_C_ParseSystemMessage");
static_assert(sizeof(WB_ServicesDialog_C_ParseSystemMessage) == 0x000080, "Wrong size on WB_ServicesDialog_C_ParseSystemMessage");
static_assert(offsetof(WB_ServicesDialog_C_ParseSystemMessage, SystemMessage) == 0x000000, "Member 'WB_ServicesDialog_C_ParseSystemMessage::SystemMessage' has a wrong offset!");
static_assert(offsetof(WB_ServicesDialog_C_ParseSystemMessage, bSuccess) == 0x000028, "Member 'WB_ServicesDialog_C_ParseSystemMessage::bSuccess' has a wrong offset!");
static_assert(offsetof(WB_ServicesDialog_C_ParseSystemMessage, CallFunc_GetStringField_ReturnValue) == 0x000030, "Member 'WB_ServicesDialog_C_ParseSystemMessage::CallFunc_GetStringField_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ServicesDialog_C_ParseSystemMessage, CallFunc_GetStringField_ReturnValue_1) == 0x000040, "Member 'WB_ServicesDialog_C_ParseSystemMessage::CallFunc_GetStringField_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_ServicesDialog_C_ParseSystemMessage, CallFunc_TimespanFromString_Result) == 0x000050, "Member 'WB_ServicesDialog_C_ParseSystemMessage::CallFunc_TimespanFromString_Result' has a wrong offset!");
static_assert(offsetof(WB_ServicesDialog_C_ParseSystemMessage, CallFunc_TimespanFromString_ReturnValue) == 0x000058, "Member 'WB_ServicesDialog_C_ParseSystemMessage::CallFunc_TimespanFromString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ServicesDialog_C_ParseSystemMessage, CallFunc_DateTimeFromIsoString_Result) == 0x000060, "Member 'WB_ServicesDialog_C_ParseSystemMessage::CallFunc_DateTimeFromIsoString_Result' has a wrong offset!");
static_assert(offsetof(WB_ServicesDialog_C_ParseSystemMessage, CallFunc_DateTimeFromIsoString_ReturnValue) == 0x000068, "Member 'WB_ServicesDialog_C_ParseSystemMessage::CallFunc_DateTimeFromIsoString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ServicesDialog_C_ParseSystemMessage, CallFunc_GetIntegerField_ReturnValue) == 0x00006C, "Member 'WB_ServicesDialog_C_ParseSystemMessage::CallFunc_GetIntegerField_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ServicesDialog_C_ParseSystemMessage, CallFunc_GetIntegerField_ReturnValue_1) == 0x000070, "Member 'WB_ServicesDialog_C_ParseSystemMessage::CallFunc_GetIntegerField_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_ServicesDialog_C_ParseSystemMessage, CallFunc_Conv_IntToByte_ReturnValue) == 0x000074, "Member 'WB_ServicesDialog_C_ParseSystemMessage::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ServicesDialog_C_ParseSystemMessage, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000075, "Member 'WB_ServicesDialog_C_ParseSystemMessage::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_ServicesDialog_C_ParseSystemMessage, CallFunc_GetValidValue_ReturnValue) == 0x000076, "Member 'WB_ServicesDialog_C_ParseSystemMessage::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ServicesDialog_C_ParseSystemMessage, CallFunc_GetValidValue_ReturnValue_1) == 0x000077, "Member 'WB_ServicesDialog_C_ParseSystemMessage::CallFunc_GetValidValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_ServicesDialog_C_ParseSystemMessage, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000078, "Member 'WB_ServicesDialog_C_ParseSystemMessage::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function WB_ServicesDialog.WB_ServicesDialog_C.SetDowntimeText
// 0x0001 (0x0001 - 0x0000)
struct WB_ServicesDialog_C_SetDowntimeText final
{
public:
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ServicesDialog_C_SetDowntimeText) == 0x000001, "Wrong alignment on WB_ServicesDialog_C_SetDowntimeText");
static_assert(sizeof(WB_ServicesDialog_C_SetDowntimeText) == 0x000001, "Wrong size on WB_ServicesDialog_C_SetDowntimeText");
static_assert(offsetof(WB_ServicesDialog_C_SetDowntimeText, K2Node_SwitchEnum_CmpSuccess) == 0x000000, "Member 'WB_ServicesDialog_C_SetDowntimeText::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function WB_ServicesDialog.WB_ServicesDialog_C.SetTimeTexts
// 0x02D8 (0x02D8 - 0x0000)
struct WB_ServicesDialog_C_SetTimeTexts final
{
public:
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0000(0x0018)()
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_1;            // 0x0018(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0030(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0080(0x0050)(HasGetValueTypeHash)
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_2;            // 0x00D0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x00E8(0x0050)(HasGetValueTypeHash)
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_3;            // 0x0138(0x0018)()
	struct FDateTime                              CallFunc_Add_DateTimeTimespan_ReturnValue;         // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x0158(0x0050)(HasGetValueTypeHash)
	struct FDateTime                              CallFunc_ConvertUtcDateToLocalDate_Local;          // 0x01A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_AsDateTime_DateTime_ReturnValue;          // 0x01B0(0x0018)()
	struct FDateTime                              CallFunc_ConvertUtcDateToLocalDate_Local_1;        // 0x01C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;            // 0x01D0(0x0050)(HasGetValueTypeHash)
	class FText                                   CallFunc_AsDateTime_DateTime_ReturnValue_1;        // 0x0220(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0238(0x0010)(ReferenceParm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_5;            // 0x0248(0x0050)(HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0298(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x02B0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x02C0(0x0018)()
};
static_assert(alignof(WB_ServicesDialog_C_SetTimeTexts) == 0x000008, "Wrong alignment on WB_ServicesDialog_C_SetTimeTexts");
static_assert(sizeof(WB_ServicesDialog_C_SetTimeTexts) == 0x0002D8, "Wrong size on WB_ServicesDialog_C_SetTimeTexts");
static_assert(offsetof(WB_ServicesDialog_C_SetTimeTexts, CallFunc_MakeLiteralText_ReturnValue) == 0x000000, "Member 'WB_ServicesDialog_C_SetTimeTexts::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ServicesDialog_C_SetTimeTexts, CallFunc_MakeLiteralText_ReturnValue_1) == 0x000018, "Member 'WB_ServicesDialog_C_SetTimeTexts::CallFunc_MakeLiteralText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_ServicesDialog_C_SetTimeTexts, K2Node_MakeStruct_FormatArgumentData) == 0x000030, "Member 'WB_ServicesDialog_C_SetTimeTexts::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WB_ServicesDialog_C_SetTimeTexts, K2Node_MakeStruct_FormatArgumentData_1) == 0x000080, "Member 'WB_ServicesDialog_C_SetTimeTexts::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WB_ServicesDialog_C_SetTimeTexts, CallFunc_MakeLiteralText_ReturnValue_2) == 0x0000D0, "Member 'WB_ServicesDialog_C_SetTimeTexts::CallFunc_MakeLiteralText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_ServicesDialog_C_SetTimeTexts, K2Node_MakeStruct_FormatArgumentData_2) == 0x0000E8, "Member 'WB_ServicesDialog_C_SetTimeTexts::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(WB_ServicesDialog_C_SetTimeTexts, CallFunc_MakeLiteralText_ReturnValue_3) == 0x000138, "Member 'WB_ServicesDialog_C_SetTimeTexts::CallFunc_MakeLiteralText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WB_ServicesDialog_C_SetTimeTexts, CallFunc_Add_DateTimeTimespan_ReturnValue) == 0x000150, "Member 'WB_ServicesDialog_C_SetTimeTexts::CallFunc_Add_DateTimeTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ServicesDialog_C_SetTimeTexts, K2Node_MakeStruct_FormatArgumentData_3) == 0x000158, "Member 'WB_ServicesDialog_C_SetTimeTexts::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(WB_ServicesDialog_C_SetTimeTexts, CallFunc_ConvertUtcDateToLocalDate_Local) == 0x0001A8, "Member 'WB_ServicesDialog_C_SetTimeTexts::CallFunc_ConvertUtcDateToLocalDate_Local' has a wrong offset!");
static_assert(offsetof(WB_ServicesDialog_C_SetTimeTexts, CallFunc_AsDateTime_DateTime_ReturnValue) == 0x0001B0, "Member 'WB_ServicesDialog_C_SetTimeTexts::CallFunc_AsDateTime_DateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ServicesDialog_C_SetTimeTexts, CallFunc_ConvertUtcDateToLocalDate_Local_1) == 0x0001C8, "Member 'WB_ServicesDialog_C_SetTimeTexts::CallFunc_ConvertUtcDateToLocalDate_Local_1' has a wrong offset!");
static_assert(offsetof(WB_ServicesDialog_C_SetTimeTexts, K2Node_MakeStruct_FormatArgumentData_4) == 0x0001D0, "Member 'WB_ServicesDialog_C_SetTimeTexts::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(WB_ServicesDialog_C_SetTimeTexts, CallFunc_AsDateTime_DateTime_ReturnValue_1) == 0x000220, "Member 'WB_ServicesDialog_C_SetTimeTexts::CallFunc_AsDateTime_DateTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_ServicesDialog_C_SetTimeTexts, K2Node_MakeArray_Array) == 0x000238, "Member 'WB_ServicesDialog_C_SetTimeTexts::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WB_ServicesDialog_C_SetTimeTexts, K2Node_MakeStruct_FormatArgumentData_5) == 0x000248, "Member 'WB_ServicesDialog_C_SetTimeTexts::K2Node_MakeStruct_FormatArgumentData_5' has a wrong offset!");
static_assert(offsetof(WB_ServicesDialog_C_SetTimeTexts, CallFunc_Format_ReturnValue) == 0x000298, "Member 'WB_ServicesDialog_C_SetTimeTexts::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ServicesDialog_C_SetTimeTexts, K2Node_MakeArray_Array_1) == 0x0002B0, "Member 'WB_ServicesDialog_C_SetTimeTexts::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WB_ServicesDialog_C_SetTimeTexts, CallFunc_Format_ReturnValue_1) == 0x0002C0, "Member 'WB_ServicesDialog_C_SetTimeTexts::CallFunc_Format_ReturnValue_1' has a wrong offset!");

// Function WB_ServicesDialog.WB_ServicesDialog_C.UpdateMessage
// 0x0028 (0x0028 - 0x0000)
struct WB_ServicesDialog_C_UpdateMessage final
{
public:
	struct FS_SystemMessage                       Param_Message;                                     // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ServicesDialog_C_UpdateMessage) == 0x000008, "Wrong alignment on WB_ServicesDialog_C_UpdateMessage");
static_assert(sizeof(WB_ServicesDialog_C_UpdateMessage) == 0x000028, "Wrong size on WB_ServicesDialog_C_UpdateMessage");
static_assert(offsetof(WB_ServicesDialog_C_UpdateMessage, Param_Message) == 0x000000, "Member 'WB_ServicesDialog_C_UpdateMessage::Param_Message' has a wrong offset!");

// Function WB_ServicesDialog.WB_ServicesDialog_C.UpdateUI
// 0x0038 (0x0038 - 0x0000)
struct WB_ServicesDialog_C_UpdateUI final
{
public:
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0000(0x0018)()
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_1;            // 0x0018(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ServicesDialog_C_UpdateUI) == 0x000008, "Wrong alignment on WB_ServicesDialog_C_UpdateUI");
static_assert(sizeof(WB_ServicesDialog_C_UpdateUI) == 0x000038, "Wrong size on WB_ServicesDialog_C_UpdateUI");
static_assert(offsetof(WB_ServicesDialog_C_UpdateUI, CallFunc_MakeLiteralText_ReturnValue) == 0x000000, "Member 'WB_ServicesDialog_C_UpdateUI::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ServicesDialog_C_UpdateUI, CallFunc_MakeLiteralText_ReturnValue_1) == 0x000018, "Member 'WB_ServicesDialog_C_UpdateUI::CallFunc_MakeLiteralText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_ServicesDialog_C_UpdateUI, K2Node_SwitchEnum_CmpSuccess) == 0x000030, "Member 'WB_ServicesDialog_C_UpdateUI::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}
