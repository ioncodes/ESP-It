#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ObjectiveTutorial

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WB_ObjectiveTutorial.WB_ObjectiveTutorial_C.ExecuteUbergraph_WB_ObjectiveTutorial
// 0x0020 (0x0020 - 0x0000)
struct WB_ObjectiveTutorial_C_ExecuteUbergraph_WB_ObjectiveTutorial final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5335[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ObjectiveTutorial_C_ExecuteUbergraph_WB_ObjectiveTutorial) == 0x000008, "Wrong alignment on WB_ObjectiveTutorial_C_ExecuteUbergraph_WB_ObjectiveTutorial");
static_assert(sizeof(WB_ObjectiveTutorial_C_ExecuteUbergraph_WB_ObjectiveTutorial) == 0x000020, "Wrong size on WB_ObjectiveTutorial_C_ExecuteUbergraph_WB_ObjectiveTutorial");
static_assert(offsetof(WB_ObjectiveTutorial_C_ExecuteUbergraph_WB_ObjectiveTutorial, EntryPoint) == 0x000000, "Member 'WB_ObjectiveTutorial_C_ExecuteUbergraph_WB_ObjectiveTutorial::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_ObjectiveTutorial_C_ExecuteUbergraph_WB_ObjectiveTutorial, Temp_byte_Variable) == 0x000004, "Member 'WB_ObjectiveTutorial_C_ExecuteUbergraph_WB_ObjectiveTutorial::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WB_ObjectiveTutorial_C_ExecuteUbergraph_WB_ObjectiveTutorial, Temp_byte_Variable_1) == 0x000005, "Member 'WB_ObjectiveTutorial_C_ExecuteUbergraph_WB_ObjectiveTutorial::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_ObjectiveTutorial_C_ExecuteUbergraph_WB_ObjectiveTutorial, Temp_bool_Variable) == 0x000006, "Member 'WB_ObjectiveTutorial_C_ExecuteUbergraph_WB_ObjectiveTutorial::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WB_ObjectiveTutorial_C_ExecuteUbergraph_WB_ObjectiveTutorial, CallFunc_GetGameInstance_ReturnValue) == 0x000008, "Member 'WB_ObjectiveTutorial_C_ExecuteUbergraph_WB_ObjectiveTutorial::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ObjectiveTutorial_C_ExecuteUbergraph_WB_ObjectiveTutorial, K2Node_DynamicCast_AsB_Game_Instance) == 0x000010, "Member 'WB_ObjectiveTutorial_C_ExecuteUbergraph_WB_ObjectiveTutorial::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(WB_ObjectiveTutorial_C_ExecuteUbergraph_WB_ObjectiveTutorial, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WB_ObjectiveTutorial_C_ExecuteUbergraph_WB_ObjectiveTutorial::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_ObjectiveTutorial_C_ExecuteUbergraph_WB_ObjectiveTutorial, K2Node_Select_Default) == 0x000019, "Member 'WB_ObjectiveTutorial_C_ExecuteUbergraph_WB_ObjectiveTutorial::K2Node_Select_Default' has a wrong offset!");

// Function WB_ObjectiveTutorial.WB_ObjectiveTutorial_C.GetInitialFocusWidget
// 0x0008 (0x0008 - 0x0000)
struct WB_ObjectiveTutorial_C_GetInitialFocusWidget final
{
public:
	class UUserWidget*                            InitialFocusWidget;                                // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ObjectiveTutorial_C_GetInitialFocusWidget) == 0x000008, "Wrong alignment on WB_ObjectiveTutorial_C_GetInitialFocusWidget");
static_assert(sizeof(WB_ObjectiveTutorial_C_GetInitialFocusWidget) == 0x000008, "Wrong size on WB_ObjectiveTutorial_C_GetInitialFocusWidget");
static_assert(offsetof(WB_ObjectiveTutorial_C_GetInitialFocusWidget, InitialFocusWidget) == 0x000000, "Member 'WB_ObjectiveTutorial_C_GetInitialFocusWidget::InitialFocusWidget' has a wrong offset!");

}
