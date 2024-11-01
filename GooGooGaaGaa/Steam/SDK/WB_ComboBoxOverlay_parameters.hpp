#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ComboBoxOverlay

#include "Basic.hpp"


namespace SDK::Params
{

// Function WB_ComboBoxOverlay.WB_ComboBoxOverlay_C.ExecuteUbergraph_WB_ComboBoxOverlay
// 0x0020 (0x0020 - 0x0000)
struct WB_ComboBoxOverlay_C_ExecuteUbergraph_WB_ComboBoxOverlay final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Event_Widget;                               // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWB_ComboBoxWithLabel_C*                K2Node_DynamicCast_AsWB_Combo_Box_with_Label;      // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ComboBoxOverlay_C_ExecuteUbergraph_WB_ComboBoxOverlay) == 0x000008, "Wrong alignment on WB_ComboBoxOverlay_C_ExecuteUbergraph_WB_ComboBoxOverlay");
static_assert(sizeof(WB_ComboBoxOverlay_C_ExecuteUbergraph_WB_ComboBoxOverlay) == 0x000020, "Wrong size on WB_ComboBoxOverlay_C_ExecuteUbergraph_WB_ComboBoxOverlay");
static_assert(offsetof(WB_ComboBoxOverlay_C_ExecuteUbergraph_WB_ComboBoxOverlay, EntryPoint) == 0x000000, "Member 'WB_ComboBoxOverlay_C_ExecuteUbergraph_WB_ComboBoxOverlay::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_ComboBoxOverlay_C_ExecuteUbergraph_WB_ComboBoxOverlay, K2Node_Event_Widget) == 0x000008, "Member 'WB_ComboBoxOverlay_C_ExecuteUbergraph_WB_ComboBoxOverlay::K2Node_Event_Widget' has a wrong offset!");
static_assert(offsetof(WB_ComboBoxOverlay_C_ExecuteUbergraph_WB_ComboBoxOverlay, K2Node_DynamicCast_AsWB_Combo_Box_with_Label) == 0x000010, "Member 'WB_ComboBoxOverlay_C_ExecuteUbergraph_WB_ComboBoxOverlay::K2Node_DynamicCast_AsWB_Combo_Box_with_Label' has a wrong offset!");
static_assert(offsetof(WB_ComboBoxOverlay_C_ExecuteUbergraph_WB_ComboBoxOverlay, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WB_ComboBoxOverlay_C_ExecuteUbergraph_WB_ComboBoxOverlay::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WB_ComboBoxOverlay.WB_ComboBoxOverlay_C.GetInitialFocusWidget
// 0x0028 (0x0028 - 0x0000)
struct WB_ComboBoxOverlay_C_GetInitialFocusWidget final
{
public:
	class UUserWidget*                            InitialFocusWidget;                                // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            K2Node_DynamicCast_AsUser_Widget;                  // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ComboBoxOverlay_C_GetInitialFocusWidget) == 0x000008, "Wrong alignment on WB_ComboBoxOverlay_C_GetInitialFocusWidget");
static_assert(sizeof(WB_ComboBoxOverlay_C_GetInitialFocusWidget) == 0x000028, "Wrong size on WB_ComboBoxOverlay_C_GetInitialFocusWidget");
static_assert(offsetof(WB_ComboBoxOverlay_C_GetInitialFocusWidget, InitialFocusWidget) == 0x000000, "Member 'WB_ComboBoxOverlay_C_GetInitialFocusWidget::InitialFocusWidget' has a wrong offset!");
static_assert(offsetof(WB_ComboBoxOverlay_C_GetInitialFocusWidget, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WB_ComboBoxOverlay_C_GetInitialFocusWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ComboBoxOverlay_C_GetInitialFocusWidget, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'WB_ComboBoxOverlay_C_GetInitialFocusWidget::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ComboBoxOverlay_C_GetInitialFocusWidget, K2Node_DynamicCast_AsUser_Widget) == 0x000018, "Member 'WB_ComboBoxOverlay_C_GetInitialFocusWidget::K2Node_DynamicCast_AsUser_Widget' has a wrong offset!");
static_assert(offsetof(WB_ComboBoxOverlay_C_GetInitialFocusWidget, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WB_ComboBoxOverlay_C_GetInitialFocusWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WB_ComboBoxOverlay.WB_ComboBoxOverlay_C.GetSizeBox
// 0x0008 (0x0008 - 0x0000)
struct WB_ComboBoxOverlay_C_GetSizeBox final
{
public:
	class USizeBox*                               SizeBox;                                           // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ComboBoxOverlay_C_GetSizeBox) == 0x000008, "Wrong alignment on WB_ComboBoxOverlay_C_GetSizeBox");
static_assert(sizeof(WB_ComboBoxOverlay_C_GetSizeBox) == 0x000008, "Wrong size on WB_ComboBoxOverlay_C_GetSizeBox");
static_assert(offsetof(WB_ComboBoxOverlay_C_GetSizeBox, SizeBox) == 0x000000, "Member 'WB_ComboBoxOverlay_C_GetSizeBox::SizeBox' has a wrong offset!");

// Function WB_ComboBoxOverlay.WB_ComboBoxOverlay_C.SetBaseWidget
// 0x0008 (0x0008 - 0x0000)
struct WB_ComboBoxOverlay_C_SetBaseWidget final
{
public:
	class UWidget*                                Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ComboBoxOverlay_C_SetBaseWidget) == 0x000008, "Wrong alignment on WB_ComboBoxOverlay_C_SetBaseWidget");
static_assert(sizeof(WB_ComboBoxOverlay_C_SetBaseWidget) == 0x000008, "Wrong size on WB_ComboBoxOverlay_C_SetBaseWidget");
static_assert(offsetof(WB_ComboBoxOverlay_C_SetBaseWidget, Widget) == 0x000000, "Member 'WB_ComboBoxOverlay_C_SetBaseWidget::Widget' has a wrong offset!");

// Function WB_ComboBoxOverlay.WB_ComboBoxOverlay_C.SetOption
// 0x0040 (0x0040 - 0x0000)
struct WB_ComboBoxOverlay_C_SetOption final
{
public:
	class FText                                   Option;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         Index_0;                                           // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ComboBoxOverlay_C_SetOption) == 0x000008, "Wrong alignment on WB_ComboBoxOverlay_C_SetOption");
static_assert(sizeof(WB_ComboBoxOverlay_C_SetOption) == 0x000040, "Wrong size on WB_ComboBoxOverlay_C_SetOption");
static_assert(offsetof(WB_ComboBoxOverlay_C_SetOption, Option) == 0x000000, "Member 'WB_ComboBoxOverlay_C_SetOption::Option' has a wrong offset!");
static_assert(offsetof(WB_ComboBoxOverlay_C_SetOption, Index_0) == 0x000010, "Member 'WB_ComboBoxOverlay_C_SetOption::Index_0' has a wrong offset!");
static_assert(offsetof(WB_ComboBoxOverlay_C_SetOption, CallFunc_GetGameInstance_ReturnValue) == 0x000018, "Member 'WB_ComboBoxOverlay_C_SetOption::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ComboBoxOverlay_C_SetOption, K2Node_DynamicCast_AsB_Game_Instance) == 0x000020, "Member 'WB_ComboBoxOverlay_C_SetOption::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(WB_ComboBoxOverlay_C_SetOption, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WB_ComboBoxOverlay_C_SetOption::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_ComboBoxOverlay_C_SetOption, CallFunc_Conv_TextToString_ReturnValue) == 0x000030, "Member 'WB_ComboBoxOverlay_C_SetOption::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

}

