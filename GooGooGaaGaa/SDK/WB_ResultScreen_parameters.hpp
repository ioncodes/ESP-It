#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ResultScreen

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "EResultType_structs.hpp"


namespace SDK::Params
{

// Function WB_ResultScreen.WB_ResultScreen_C.ExecuteUbergraph_WB_ResultScreen
// 0x0108 (0x0108 - 0x0000)
struct WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B21[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AB_GameState_C*                         K2Node_DynamicCast_AsB_Game_State;                 // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B22[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_PropPawnPhysics_C*                   K2Node_DynamicCast_AsB_Prop_Pawn_Physics;          // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B23[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B24[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance_1;            // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B25[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x006C(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_2;            // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance_2;            // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsScreenOpen_IsOpen;                      // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B26[0x6];                                     // 0x00BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B27[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_3;            // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance_3;            // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B28[0x6];                                     // 0x00EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_4;            // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance_4;            // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen) == 0x000008, "Wrong alignment on WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen");
static_assert(sizeof(WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen) == 0x000108, "Wrong size on WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen");
static_assert(offsetof(WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen, EntryPoint) == 0x000000, "Member 'WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen, CallFunc_GetGameState_ReturnValue) == 0x000010, "Member 'WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen, CallFunc_K2_GetPawn_ReturnValue) == 0x000018, "Member 'WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen, K2Node_DynamicCast_AsB_Game_State) == 0x000020, "Member 'WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen::K2Node_DynamicCast_AsB_Game_State' has a wrong offset!");
static_assert(offsetof(WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen, K2Node_DynamicCast_AsB_Prop_Pawn_Physics) == 0x000030, "Member 'WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen::K2Node_DynamicCast_AsB_Prop_Pawn_Physics' has a wrong offset!");
static_assert(offsetof(WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen, CallFunc_GetGameInstance_ReturnValue) == 0x000040, "Member 'WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen, CallFunc_GetGameInstance_ReturnValue_1) == 0x000048, "Member 'WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen, K2Node_DynamicCast_AsB_Game_Instance) == 0x000050, "Member 'WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen, K2Node_DynamicCast_bSuccess_2) == 0x000058, "Member 'WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen, K2Node_DynamicCast_AsB_Game_Instance_1) == 0x000060, "Member 'WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen::K2Node_DynamicCast_AsB_Game_Instance_1' has a wrong offset!");
static_assert(offsetof(WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen, K2Node_DynamicCast_bSuccess_3) == 0x000068, "Member 'WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen, K2Node_Event_MyGeometry) == 0x00006C, "Member 'WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen, K2Node_Event_InDeltaTime) == 0x0000A4, "Member 'WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen, CallFunc_GetGameInstance_ReturnValue_2) == 0x0000A8, "Member 'WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen::CallFunc_GetGameInstance_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen, K2Node_DynamicCast_AsB_Game_Instance_2) == 0x0000B0, "Member 'WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen::K2Node_DynamicCast_AsB_Game_Instance_2' has a wrong offset!");
static_assert(offsetof(WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen, K2Node_DynamicCast_bSuccess_4) == 0x0000B8, "Member 'WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen, CallFunc_IsScreenOpen_IsOpen) == 0x0000B9, "Member 'WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen::CallFunc_IsScreenOpen_IsOpen' has a wrong offset!");
static_assert(offsetof(WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x0000C0, "Member 'WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0000C8, "Member 'WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen, K2Node_SwitchEnum_CmpSuccess) == 0x0000D0, "Member 'WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen, CallFunc_GetGameInstance_ReturnValue_3) == 0x0000D8, "Member 'WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen::CallFunc_GetGameInstance_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen, K2Node_DynamicCast_AsB_Game_Instance_3) == 0x0000E0, "Member 'WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen::K2Node_DynamicCast_AsB_Game_Instance_3' has a wrong offset!");
static_assert(offsetof(WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen, K2Node_DynamicCast_bSuccess_5) == 0x0000E8, "Member 'WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x0000E9, "Member 'WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen, CallFunc_GetGameInstance_ReturnValue_4) == 0x0000F0, "Member 'WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen::CallFunc_GetGameInstance_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen, K2Node_DynamicCast_AsB_Game_Instance_4) == 0x0000F8, "Member 'WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen::K2Node_DynamicCast_AsB_Game_Instance_4' has a wrong offset!");
static_assert(offsetof(WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen, K2Node_DynamicCast_bSuccess_6) == 0x000100, "Member 'WB_ResultScreen_C_ExecuteUbergraph_WB_ResultScreen::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");

// Function WB_ResultScreen.WB_ResultScreen_C.Initialize
// 0x0002 (0x0002 - 0x0000)
struct WB_ResultScreen_C_Initialize final
{
public:
	EResultType                                   Param_ResultType;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ResultScreen_C_Initialize) == 0x000001, "Wrong alignment on WB_ResultScreen_C_Initialize");
static_assert(sizeof(WB_ResultScreen_C_Initialize) == 0x000002, "Wrong size on WB_ResultScreen_C_Initialize");
static_assert(offsetof(WB_ResultScreen_C_Initialize, Param_ResultType) == 0x000000, "Member 'WB_ResultScreen_C_Initialize::Param_ResultType' has a wrong offset!");
static_assert(offsetof(WB_ResultScreen_C_Initialize, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'WB_ResultScreen_C_Initialize::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function WB_ResultScreen.WB_ResultScreen_C.Tick
// 0x003C (0x003C - 0x0000)
struct WB_ResultScreen_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ResultScreen_C_Tick) == 0x000004, "Wrong alignment on WB_ResultScreen_C_Tick");
static_assert(sizeof(WB_ResultScreen_C_Tick) == 0x00003C, "Wrong size on WB_ResultScreen_C_Tick");
static_assert(offsetof(WB_ResultScreen_C_Tick, MyGeometry) == 0x000000, "Member 'WB_ResultScreen_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_ResultScreen_C_Tick, InDeltaTime) == 0x000038, "Member 'WB_ResultScreen_C_Tick::InDeltaTime' has a wrong offset!");

}
