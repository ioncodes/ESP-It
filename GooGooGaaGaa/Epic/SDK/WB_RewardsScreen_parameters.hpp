#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_RewardsScreen

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WB_RewardsScreen.WB_RewardsScreen_C.ExecuteUbergraph_WB_RewardsScreen
// 0x0078 (0x0078 - 0x0000)
struct WB_RewardsScreen_C_ExecuteUbergraph_WB_RewardsScreen final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_GameState_C*                         K2Node_DynamicCast_AsB_Game_State;                 // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A[0x2];                                       // 0x006A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRoundEnd_RoundIsEnd;                    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_RewardsScreen_C_ExecuteUbergraph_WB_RewardsScreen) == 0x000008, "Wrong alignment on WB_RewardsScreen_C_ExecuteUbergraph_WB_RewardsScreen");
static_assert(sizeof(WB_RewardsScreen_C_ExecuteUbergraph_WB_RewardsScreen) == 0x000078, "Wrong size on WB_RewardsScreen_C_ExecuteUbergraph_WB_RewardsScreen");
static_assert(offsetof(WB_RewardsScreen_C_ExecuteUbergraph_WB_RewardsScreen, EntryPoint) == 0x000000, "Member 'WB_RewardsScreen_C_ExecuteUbergraph_WB_RewardsScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_RewardsScreen_C_ExecuteUbergraph_WB_RewardsScreen, K2Node_Event_MyGeometry) == 0x000004, "Member 'WB_RewardsScreen_C_ExecuteUbergraph_WB_RewardsScreen::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_RewardsScreen_C_ExecuteUbergraph_WB_RewardsScreen, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'WB_RewardsScreen_C_ExecuteUbergraph_WB_RewardsScreen::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WB_RewardsScreen_C_ExecuteUbergraph_WB_RewardsScreen, CallFunc_GetGameInstance_ReturnValue) == 0x000040, "Member 'WB_RewardsScreen_C_ExecuteUbergraph_WB_RewardsScreen::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_RewardsScreen_C_ExecuteUbergraph_WB_RewardsScreen, CallFunc_GetGameState_ReturnValue) == 0x000048, "Member 'WB_RewardsScreen_C_ExecuteUbergraph_WB_RewardsScreen::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_RewardsScreen_C_ExecuteUbergraph_WB_RewardsScreen, K2Node_DynamicCast_AsB_Game_Instance) == 0x000050, "Member 'WB_RewardsScreen_C_ExecuteUbergraph_WB_RewardsScreen::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(WB_RewardsScreen_C_ExecuteUbergraph_WB_RewardsScreen, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'WB_RewardsScreen_C_ExecuteUbergraph_WB_RewardsScreen::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_RewardsScreen_C_ExecuteUbergraph_WB_RewardsScreen, K2Node_DynamicCast_AsB_Game_State) == 0x000060, "Member 'WB_RewardsScreen_C_ExecuteUbergraph_WB_RewardsScreen::K2Node_DynamicCast_AsB_Game_State' has a wrong offset!");
static_assert(offsetof(WB_RewardsScreen_C_ExecuteUbergraph_WB_RewardsScreen, K2Node_DynamicCast_bSuccess_1) == 0x000068, "Member 'WB_RewardsScreen_C_ExecuteUbergraph_WB_RewardsScreen::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WB_RewardsScreen_C_ExecuteUbergraph_WB_RewardsScreen, CallFunc_IsValid_ReturnValue) == 0x000069, "Member 'WB_RewardsScreen_C_ExecuteUbergraph_WB_RewardsScreen::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_RewardsScreen_C_ExecuteUbergraph_WB_RewardsScreen, CallFunc_Array_Length_ReturnValue) == 0x00006C, "Member 'WB_RewardsScreen_C_ExecuteUbergraph_WB_RewardsScreen::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_RewardsScreen_C_ExecuteUbergraph_WB_RewardsScreen, CallFunc_IsRoundEnd_RoundIsEnd) == 0x000070, "Member 'WB_RewardsScreen_C_ExecuteUbergraph_WB_RewardsScreen::CallFunc_IsRoundEnd_RoundIsEnd' has a wrong offset!");
static_assert(offsetof(WB_RewardsScreen_C_ExecuteUbergraph_WB_RewardsScreen, CallFunc_Greater_IntInt_ReturnValue) == 0x000071, "Member 'WB_RewardsScreen_C_ExecuteUbergraph_WB_RewardsScreen::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function WB_RewardsScreen.WB_RewardsScreen_C.Get_NextGameText_Text_0
// 0x0120 (0x0120 - 0x0000)
struct WB_RewardsScreen_C_Get_NextGameText_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AB_GameState_C*                         K2Node_DynamicCast_AsB_Game_State;                 // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0038(0x0048)(HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0088(0x0010)(ReferenceParm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0098(0x0048)(HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00E0(0x0010)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x00F0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0100(0x0010)()
	class FText                                   K2Node_Select_Default;                             // 0x0110(0x0010)()
};
static_assert(alignof(WB_RewardsScreen_C_Get_NextGameText_Text_0) == 0x000008, "Wrong alignment on WB_RewardsScreen_C_Get_NextGameText_Text_0");
static_assert(sizeof(WB_RewardsScreen_C_Get_NextGameText_Text_0) == 0x000120, "Wrong size on WB_RewardsScreen_C_Get_NextGameText_Text_0");
static_assert(offsetof(WB_RewardsScreen_C_Get_NextGameText_Text_0, ReturnValue) == 0x000000, "Member 'WB_RewardsScreen_C_Get_NextGameText_Text_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_RewardsScreen_C_Get_NextGameText_Text_0, Temp_bool_Variable) == 0x000010, "Member 'WB_RewardsScreen_C_Get_NextGameText_Text_0::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WB_RewardsScreen_C_Get_NextGameText_Text_0, CallFunc_GetGameState_ReturnValue) == 0x000018, "Member 'WB_RewardsScreen_C_Get_NextGameText_Text_0::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_RewardsScreen_C_Get_NextGameText_Text_0, K2Node_DynamicCast_AsB_Game_State) == 0x000020, "Member 'WB_RewardsScreen_C_Get_NextGameText_Text_0::K2Node_DynamicCast_AsB_Game_State' has a wrong offset!");
static_assert(offsetof(WB_RewardsScreen_C_Get_NextGameText_Text_0, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WB_RewardsScreen_C_Get_NextGameText_Text_0::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_RewardsScreen_C_Get_NextGameText_Text_0, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000030, "Member 'WB_RewardsScreen_C_Get_NextGameText_Text_0::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_RewardsScreen_C_Get_NextGameText_Text_0, K2Node_MakeStruct_FormatArgumentData) == 0x000038, "Member 'WB_RewardsScreen_C_Get_NextGameText_Text_0::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WB_RewardsScreen_C_Get_NextGameText_Text_0, CallFunc_Conv_IntToInt64_ReturnValue_1) == 0x000080, "Member 'WB_RewardsScreen_C_Get_NextGameText_Text_0::CallFunc_Conv_IntToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_RewardsScreen_C_Get_NextGameText_Text_0, K2Node_MakeArray_Array) == 0x000088, "Member 'WB_RewardsScreen_C_Get_NextGameText_Text_0::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WB_RewardsScreen_C_Get_NextGameText_Text_0, K2Node_MakeStruct_FormatArgumentData_1) == 0x000098, "Member 'WB_RewardsScreen_C_Get_NextGameText_Text_0::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WB_RewardsScreen_C_Get_NextGameText_Text_0, CallFunc_Format_ReturnValue) == 0x0000E0, "Member 'WB_RewardsScreen_C_Get_NextGameText_Text_0::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_RewardsScreen_C_Get_NextGameText_Text_0, K2Node_MakeArray_Array_1) == 0x0000F0, "Member 'WB_RewardsScreen_C_Get_NextGameText_Text_0::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WB_RewardsScreen_C_Get_NextGameText_Text_0, CallFunc_Format_ReturnValue_1) == 0x000100, "Member 'WB_RewardsScreen_C_Get_NextGameText_Text_0::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_RewardsScreen_C_Get_NextGameText_Text_0, K2Node_Select_Default) == 0x000110, "Member 'WB_RewardsScreen_C_Get_NextGameText_Text_0::K2Node_Select_Default' has a wrong offset!");

// Function WB_RewardsScreen.WB_RewardsScreen_C.OnPreviewKeyDown
// 0x02A0 (0x02A0 - 0x0000)
struct WB_RewardsScreen_C_OnPreviewKeyDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                              InKeyEvent;                                        // 0x0038(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0078(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_OnPreviewKeyDown_ReturnValue;             // 0x0130(0x00B8)()
	struct FEventReply                            CallFunc_HandleSelectionScreenPreviewKeyDown_EventReply; // 0x01E8(0x00B8)()
};
static_assert(alignof(WB_RewardsScreen_C_OnPreviewKeyDown) == 0x000008, "Wrong alignment on WB_RewardsScreen_C_OnPreviewKeyDown");
static_assert(sizeof(WB_RewardsScreen_C_OnPreviewKeyDown) == 0x0002A0, "Wrong size on WB_RewardsScreen_C_OnPreviewKeyDown");
static_assert(offsetof(WB_RewardsScreen_C_OnPreviewKeyDown, MyGeometry) == 0x000000, "Member 'WB_RewardsScreen_C_OnPreviewKeyDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_RewardsScreen_C_OnPreviewKeyDown, InKeyEvent) == 0x000038, "Member 'WB_RewardsScreen_C_OnPreviewKeyDown::InKeyEvent' has a wrong offset!");
static_assert(offsetof(WB_RewardsScreen_C_OnPreviewKeyDown, ReturnValue) == 0x000078, "Member 'WB_RewardsScreen_C_OnPreviewKeyDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_RewardsScreen_C_OnPreviewKeyDown, CallFunc_OnPreviewKeyDown_ReturnValue) == 0x000130, "Member 'WB_RewardsScreen_C_OnPreviewKeyDown::CallFunc_OnPreviewKeyDown_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_RewardsScreen_C_OnPreviewKeyDown, CallFunc_HandleSelectionScreenPreviewKeyDown_EventReply) == 0x0001E8, "Member 'WB_RewardsScreen_C_OnPreviewKeyDown::CallFunc_HandleSelectionScreenPreviewKeyDown_EventReply' has a wrong offset!");

// Function WB_RewardsScreen.WB_RewardsScreen_C.Tick
// 0x003C (0x003C - 0x0000)
struct WB_RewardsScreen_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_RewardsScreen_C_Tick) == 0x000004, "Wrong alignment on WB_RewardsScreen_C_Tick");
static_assert(sizeof(WB_RewardsScreen_C_Tick) == 0x00003C, "Wrong size on WB_RewardsScreen_C_Tick");
static_assert(offsetof(WB_RewardsScreen_C_Tick, MyGeometry) == 0x000000, "Member 'WB_RewardsScreen_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_RewardsScreen_C_Tick, InDeltaTime) == 0x000038, "Member 'WB_RewardsScreen_C_Tick::InDeltaTime' has a wrong offset!");

// Function WB_RewardsScreen.WB_RewardsScreen_C.TickNextScreen
// 0x0050 (0x0050 - 0x0000)
struct WB_RewardsScreen_C_TickNextScreen final
{
public:
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance_1;            // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsScreenOpen_IsOpen;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_RewardsScreen_C_TickNextScreen) == 0x000008, "Wrong alignment on WB_RewardsScreen_C_TickNextScreen");
static_assert(sizeof(WB_RewardsScreen_C_TickNextScreen) == 0x000050, "Wrong size on WB_RewardsScreen_C_TickNextScreen");
static_assert(offsetof(WB_RewardsScreen_C_TickNextScreen, CallFunc_GetGameInstance_ReturnValue) == 0x000000, "Member 'WB_RewardsScreen_C_TickNextScreen::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_RewardsScreen_C_TickNextScreen, K2Node_DynamicCast_AsB_Game_Instance) == 0x000008, "Member 'WB_RewardsScreen_C_TickNextScreen::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(WB_RewardsScreen_C_TickNextScreen, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'WB_RewardsScreen_C_TickNextScreen::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_RewardsScreen_C_TickNextScreen, CallFunc_GetGameInstance_ReturnValue_1) == 0x000018, "Member 'WB_RewardsScreen_C_TickNextScreen::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_RewardsScreen_C_TickNextScreen, K2Node_DynamicCast_AsB_Game_Instance_1) == 0x000020, "Member 'WB_RewardsScreen_C_TickNextScreen::K2Node_DynamicCast_AsB_Game_Instance_1' has a wrong offset!");
static_assert(offsetof(WB_RewardsScreen_C_TickNextScreen, K2Node_DynamicCast_bSuccess_1) == 0x000028, "Member 'WB_RewardsScreen_C_TickNextScreen::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WB_RewardsScreen_C_TickNextScreen, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000030, "Member 'WB_RewardsScreen_C_TickNextScreen::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_RewardsScreen_C_TickNextScreen, CallFunc_IsScreenOpen_IsOpen) == 0x000038, "Member 'WB_RewardsScreen_C_TickNextScreen::CallFunc_IsScreenOpen_IsOpen' has a wrong offset!");
static_assert(offsetof(WB_RewardsScreen_C_TickNextScreen, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000040, "Member 'WB_RewardsScreen_C_TickNextScreen::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_RewardsScreen_C_TickNextScreen, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000048, "Member 'WB_RewardsScreen_C_TickNextScreen::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");

}
