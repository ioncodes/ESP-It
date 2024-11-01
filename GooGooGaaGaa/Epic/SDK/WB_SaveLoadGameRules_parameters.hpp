#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_SaveLoadGameRules

#include "Basic.hpp"

#include "EMenuState_structs.hpp"


namespace SDK::Params
{

// Function WB_SaveLoadGameRules.WB_SaveLoadGameRules_C.ActivateLoadedRules
// 0x0058 (0x0058 - 0x0000)
struct WB_SaveLoadGameRules_C_ActivateLoadedRules final
{
public:
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_PowerupParametersSubsystem_C*        CallFunc_GetWorldSubsystem_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AB_GameState_C*                         K2Node_DynamicCast_AsB_Game_State;                 // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UB_GameRules_C*                         CallFunc_GetGameRules_ReturnValue;                 // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_ModParametersSubsystem_C*            CallFunc_GetWorldSubsystem_ReturnValue_1;          // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_SkillParametersSubsystem_C*          CallFunc_GetWorldSubsystem_ReturnValue_2;          // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_MatchParametersSubsystem_C*          CallFunc_GetWorldSubsystem_ReturnValue_3;          // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_SaveLoadGameRules_C_ActivateLoadedRules) == 0x000008, "Wrong alignment on WB_SaveLoadGameRules_C_ActivateLoadedRules");
static_assert(sizeof(WB_SaveLoadGameRules_C_ActivateLoadedRules) == 0x000058, "Wrong size on WB_SaveLoadGameRules_C_ActivateLoadedRules");
static_assert(offsetof(WB_SaveLoadGameRules_C_ActivateLoadedRules, CallFunc_GetGameState_ReturnValue) == 0x000000, "Member 'WB_SaveLoadGameRules_C_ActivateLoadedRules::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SaveLoadGameRules_C_ActivateLoadedRules, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000008, "Member 'WB_SaveLoadGameRules_C_ActivateLoadedRules::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SaveLoadGameRules_C_ActivateLoadedRules, K2Node_DynamicCast_AsB_Game_State) == 0x000010, "Member 'WB_SaveLoadGameRules_C_ActivateLoadedRules::K2Node_DynamicCast_AsB_Game_State' has a wrong offset!");
static_assert(offsetof(WB_SaveLoadGameRules_C_ActivateLoadedRules, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WB_SaveLoadGameRules_C_ActivateLoadedRules::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_SaveLoadGameRules_C_ActivateLoadedRules, CallFunc_GetGameInstance_ReturnValue) == 0x000020, "Member 'WB_SaveLoadGameRules_C_ActivateLoadedRules::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SaveLoadGameRules_C_ActivateLoadedRules, K2Node_DynamicCast_AsB_Game_Instance) == 0x000028, "Member 'WB_SaveLoadGameRules_C_ActivateLoadedRules::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(WB_SaveLoadGameRules_C_ActivateLoadedRules, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'WB_SaveLoadGameRules_C_ActivateLoadedRules::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WB_SaveLoadGameRules_C_ActivateLoadedRules, CallFunc_GetGameRules_ReturnValue) == 0x000038, "Member 'WB_SaveLoadGameRules_C_ActivateLoadedRules::CallFunc_GetGameRules_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SaveLoadGameRules_C_ActivateLoadedRules, CallFunc_GetWorldSubsystem_ReturnValue_1) == 0x000040, "Member 'WB_SaveLoadGameRules_C_ActivateLoadedRules::CallFunc_GetWorldSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_SaveLoadGameRules_C_ActivateLoadedRules, CallFunc_GetWorldSubsystem_ReturnValue_2) == 0x000048, "Member 'WB_SaveLoadGameRules_C_ActivateLoadedRules::CallFunc_GetWorldSubsystem_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_SaveLoadGameRules_C_ActivateLoadedRules, CallFunc_GetWorldSubsystem_ReturnValue_3) == 0x000050, "Member 'WB_SaveLoadGameRules_C_ActivateLoadedRules::CallFunc_GetWorldSubsystem_ReturnValue_3' has a wrong offset!");

// Function WB_SaveLoadGameRules.WB_SaveLoadGameRules_C.ExecuteUbergraph_WB_SaveLoadGameRules
// 0x00B0 (0x00B0 - 0x0000)
struct WB_SaveLoadGameRules_C_ExecuteUbergraph_WB_SaveLoadGameRules final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IIMenuScreen_C>        CallFunc_OnApply_self_CastInput;                   // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_GameMode_C*                          K2Node_DynamicCast_AsB_Game_Mode;                  // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UB_GameRules_C*                         CallFunc_GetGameRules_ReturnValue;                 // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& Filename, class USaveGame* SaveFile)> K2Node_CreateDelegate_OutputDelegate;              // 0x0050(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0060(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0070(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& Filename)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0080(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IIMenuScreen_C>        CallFunc_OnBack_self_CastInput;                    // 0x0090(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IIMenuScreen_C>        CallFunc_OnSpecialAction_self_CastInput;           // 0x00A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_SaveLoadGameRules_C_ExecuteUbergraph_WB_SaveLoadGameRules) == 0x000008, "Wrong alignment on WB_SaveLoadGameRules_C_ExecuteUbergraph_WB_SaveLoadGameRules");
static_assert(sizeof(WB_SaveLoadGameRules_C_ExecuteUbergraph_WB_SaveLoadGameRules) == 0x0000B0, "Wrong size on WB_SaveLoadGameRules_C_ExecuteUbergraph_WB_SaveLoadGameRules");
static_assert(offsetof(WB_SaveLoadGameRules_C_ExecuteUbergraph_WB_SaveLoadGameRules, EntryPoint) == 0x000000, "Member 'WB_SaveLoadGameRules_C_ExecuteUbergraph_WB_SaveLoadGameRules::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_SaveLoadGameRules_C_ExecuteUbergraph_WB_SaveLoadGameRules, CallFunc_GetGameMode_ReturnValue) == 0x000008, "Member 'WB_SaveLoadGameRules_C_ExecuteUbergraph_WB_SaveLoadGameRules::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SaveLoadGameRules_C_ExecuteUbergraph_WB_SaveLoadGameRules, CallFunc_OnApply_self_CastInput) == 0x000010, "Member 'WB_SaveLoadGameRules_C_ExecuteUbergraph_WB_SaveLoadGameRules::CallFunc_OnApply_self_CastInput' has a wrong offset!");
static_assert(offsetof(WB_SaveLoadGameRules_C_ExecuteUbergraph_WB_SaveLoadGameRules, K2Node_DynamicCast_AsB_Game_Mode) == 0x000020, "Member 'WB_SaveLoadGameRules_C_ExecuteUbergraph_WB_SaveLoadGameRules::K2Node_DynamicCast_AsB_Game_Mode' has a wrong offset!");
static_assert(offsetof(WB_SaveLoadGameRules_C_ExecuteUbergraph_WB_SaveLoadGameRules, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WB_SaveLoadGameRules_C_ExecuteUbergraph_WB_SaveLoadGameRules::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_SaveLoadGameRules_C_ExecuteUbergraph_WB_SaveLoadGameRules, CallFunc_GetGameInstance_ReturnValue) == 0x000030, "Member 'WB_SaveLoadGameRules_C_ExecuteUbergraph_WB_SaveLoadGameRules::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SaveLoadGameRules_C_ExecuteUbergraph_WB_SaveLoadGameRules, K2Node_DynamicCast_AsB_Game_Instance) == 0x000038, "Member 'WB_SaveLoadGameRules_C_ExecuteUbergraph_WB_SaveLoadGameRules::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(WB_SaveLoadGameRules_C_ExecuteUbergraph_WB_SaveLoadGameRules, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'WB_SaveLoadGameRules_C_ExecuteUbergraph_WB_SaveLoadGameRules::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WB_SaveLoadGameRules_C_ExecuteUbergraph_WB_SaveLoadGameRules, CallFunc_GetGameRules_ReturnValue) == 0x000048, "Member 'WB_SaveLoadGameRules_C_ExecuteUbergraph_WB_SaveLoadGameRules::CallFunc_GetGameRules_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SaveLoadGameRules_C_ExecuteUbergraph_WB_SaveLoadGameRules, K2Node_CreateDelegate_OutputDelegate) == 0x000050, "Member 'WB_SaveLoadGameRules_C_ExecuteUbergraph_WB_SaveLoadGameRules::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WB_SaveLoadGameRules_C_ExecuteUbergraph_WB_SaveLoadGameRules, K2Node_CreateDelegate_OutputDelegate_1) == 0x000060, "Member 'WB_SaveLoadGameRules_C_ExecuteUbergraph_WB_SaveLoadGameRules::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WB_SaveLoadGameRules_C_ExecuteUbergraph_WB_SaveLoadGameRules, K2Node_CreateDelegate_OutputDelegate_2) == 0x000070, "Member 'WB_SaveLoadGameRules_C_ExecuteUbergraph_WB_SaveLoadGameRules::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WB_SaveLoadGameRules_C_ExecuteUbergraph_WB_SaveLoadGameRules, K2Node_CreateDelegate_OutputDelegate_3) == 0x000080, "Member 'WB_SaveLoadGameRules_C_ExecuteUbergraph_WB_SaveLoadGameRules::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WB_SaveLoadGameRules_C_ExecuteUbergraph_WB_SaveLoadGameRules, CallFunc_OnBack_self_CastInput) == 0x000090, "Member 'WB_SaveLoadGameRules_C_ExecuteUbergraph_WB_SaveLoadGameRules::CallFunc_OnBack_self_CastInput' has a wrong offset!");
static_assert(offsetof(WB_SaveLoadGameRules_C_ExecuteUbergraph_WB_SaveLoadGameRules, CallFunc_OnSpecialAction_self_CastInput) == 0x0000A0, "Member 'WB_SaveLoadGameRules_C_ExecuteUbergraph_WB_SaveLoadGameRules::CallFunc_OnSpecialAction_self_CastInput' has a wrong offset!");

// Function WB_SaveLoadGameRules.WB_SaveLoadGameRules_C.GetInitialFocusWidget
// 0x0008 (0x0008 - 0x0000)
struct WB_SaveLoadGameRules_C_GetInitialFocusWidget final
{
public:
	class UUserWidget*                            InitialFocusWidget;                                // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_SaveLoadGameRules_C_GetInitialFocusWidget) == 0x000008, "Wrong alignment on WB_SaveLoadGameRules_C_GetInitialFocusWidget");
static_assert(sizeof(WB_SaveLoadGameRules_C_GetInitialFocusWidget) == 0x000008, "Wrong size on WB_SaveLoadGameRules_C_GetInitialFocusWidget");
static_assert(offsetof(WB_SaveLoadGameRules_C_GetInitialFocusWidget, InitialFocusWidget) == 0x000000, "Member 'WB_SaveLoadGameRules_C_GetInitialFocusWidget::InitialFocusWidget' has a wrong offset!");

// Function WB_SaveLoadGameRules.WB_SaveLoadGameRules_C.OnBackPressed
// 0x0028 (0x0028 - 0x0000)
struct WB_SaveLoadGameRules_C_OnBackPressed final
{
public:
	EMenuState                                    Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMenuState                                    Temp_byte_Variable_1;                              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMenuState                                    K2Node_Select_Default;                             // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_SaveLoadGameRules_C_OnBackPressed) == 0x000008, "Wrong alignment on WB_SaveLoadGameRules_C_OnBackPressed");
static_assert(sizeof(WB_SaveLoadGameRules_C_OnBackPressed) == 0x000028, "Wrong size on WB_SaveLoadGameRules_C_OnBackPressed");
static_assert(offsetof(WB_SaveLoadGameRules_C_OnBackPressed, Temp_byte_Variable) == 0x000000, "Member 'WB_SaveLoadGameRules_C_OnBackPressed::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WB_SaveLoadGameRules_C_OnBackPressed, Temp_byte_Variable_1) == 0x000001, "Member 'WB_SaveLoadGameRules_C_OnBackPressed::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_SaveLoadGameRules_C_OnBackPressed, CallFunc_GetGameInstance_ReturnValue) == 0x000008, "Member 'WB_SaveLoadGameRules_C_OnBackPressed::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SaveLoadGameRules_C_OnBackPressed, Temp_bool_Variable) == 0x000010, "Member 'WB_SaveLoadGameRules_C_OnBackPressed::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WB_SaveLoadGameRules_C_OnBackPressed, K2Node_DynamicCast_AsB_Game_Instance) == 0x000018, "Member 'WB_SaveLoadGameRules_C_OnBackPressed::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(WB_SaveLoadGameRules_C_OnBackPressed, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WB_SaveLoadGameRules_C_OnBackPressed::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_SaveLoadGameRules_C_OnBackPressed, K2Node_Select_Default) == 0x000021, "Member 'WB_SaveLoadGameRules_C_OnBackPressed::K2Node_Select_Default' has a wrong offset!");

// Function WB_SaveLoadGameRules.WB_SaveLoadGameRules_C.OnSaved
// 0x0010 (0x0010 - 0x0000)
struct WB_SaveLoadGameRules_C_OnSaved final
{
public:
	class FString                                 Filename;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_SaveLoadGameRules_C_OnSaved) == 0x000008, "Wrong alignment on WB_SaveLoadGameRules_C_OnSaved");
static_assert(sizeof(WB_SaveLoadGameRules_C_OnSaved) == 0x000010, "Wrong size on WB_SaveLoadGameRules_C_OnSaved");
static_assert(offsetof(WB_SaveLoadGameRules_C_OnSaved, Filename) == 0x000000, "Member 'WB_SaveLoadGameRules_C_OnSaved::Filename' has a wrong offset!");

// Function WB_SaveLoadGameRules.WB_SaveLoadGameRules_C.ResetRules
// 0x0020 (0x0020 - 0x0000)
struct WB_SaveLoadGameRules_C_ResetRules final
{
public:
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UB_GameRules_C*                         CallFunc_GetGameRules_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_SaveLoadGameRules_C_ResetRules) == 0x000008, "Wrong alignment on WB_SaveLoadGameRules_C_ResetRules");
static_assert(sizeof(WB_SaveLoadGameRules_C_ResetRules) == 0x000020, "Wrong size on WB_SaveLoadGameRules_C_ResetRules");
static_assert(offsetof(WB_SaveLoadGameRules_C_ResetRules, CallFunc_GetGameInstance_ReturnValue) == 0x000000, "Member 'WB_SaveLoadGameRules_C_ResetRules::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SaveLoadGameRules_C_ResetRules, K2Node_DynamicCast_AsB_Game_Instance) == 0x000008, "Member 'WB_SaveLoadGameRules_C_ResetRules::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(WB_SaveLoadGameRules_C_ResetRules, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'WB_SaveLoadGameRules_C_ResetRules::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_SaveLoadGameRules_C_ResetRules, CallFunc_GetGameRules_ReturnValue) == 0x000018, "Member 'WB_SaveLoadGameRules_C_ResetRules::CallFunc_GetGameRules_ReturnValue' has a wrong offset!");

// Function WB_SaveLoadGameRules.WB_SaveLoadGameRules_C.SaveFileLoaded
// 0x0040 (0x0040 - 0x0000)
struct WB_SaveLoadGameRules_C_SaveFileLoaded final
{
public:
	class FString                                 Filename;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class USaveGame*                              SaveFile;                                          // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameRules_C*                         K2Node_DynamicCast_AsB_Game_Rules;                 // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_SaveLoadGameRules_C_SaveFileLoaded) == 0x000008, "Wrong alignment on WB_SaveLoadGameRules_C_SaveFileLoaded");
static_assert(sizeof(WB_SaveLoadGameRules_C_SaveFileLoaded) == 0x000040, "Wrong size on WB_SaveLoadGameRules_C_SaveFileLoaded");
static_assert(offsetof(WB_SaveLoadGameRules_C_SaveFileLoaded, Filename) == 0x000000, "Member 'WB_SaveLoadGameRules_C_SaveFileLoaded::Filename' has a wrong offset!");
static_assert(offsetof(WB_SaveLoadGameRules_C_SaveFileLoaded, SaveFile) == 0x000010, "Member 'WB_SaveLoadGameRules_C_SaveFileLoaded::SaveFile' has a wrong offset!");
static_assert(offsetof(WB_SaveLoadGameRules_C_SaveFileLoaded, CallFunc_GetGameInstance_ReturnValue) == 0x000018, "Member 'WB_SaveLoadGameRules_C_SaveFileLoaded::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SaveLoadGameRules_C_SaveFileLoaded, K2Node_DynamicCast_AsB_Game_Rules) == 0x000020, "Member 'WB_SaveLoadGameRules_C_SaveFileLoaded::K2Node_DynamicCast_AsB_Game_Rules' has a wrong offset!");
static_assert(offsetof(WB_SaveLoadGameRules_C_SaveFileLoaded, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WB_SaveLoadGameRules_C_SaveFileLoaded::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_SaveLoadGameRules_C_SaveFileLoaded, K2Node_DynamicCast_AsB_Game_Instance) == 0x000030, "Member 'WB_SaveLoadGameRules_C_SaveFileLoaded::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(WB_SaveLoadGameRules_C_SaveFileLoaded, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'WB_SaveLoadGameRules_C_SaveFileLoaded::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}

