#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_SkinConfigPopup

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WB_SkinConfigPopup.WB_SkinConfigPopup_C.AddSkinConfigButton
// 0x0018 (0x0018 - 0x0000)
struct WB_SkinConfigPopup_C_AddSkinConfigButton final
{
public:
	int32                                         ConfigNr;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ActiveConfigNr;                                    // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_SkinConfigButton_C*                 CurrentButton;                                     // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWB_SkinConfigButton_C*                 CallFunc_CreateObject_Object;                      // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_SkinConfigPopup_C_AddSkinConfigButton) == 0x000008, "Wrong alignment on WB_SkinConfigPopup_C_AddSkinConfigButton");
static_assert(sizeof(WB_SkinConfigPopup_C_AddSkinConfigButton) == 0x000018, "Wrong size on WB_SkinConfigPopup_C_AddSkinConfigButton");
static_assert(offsetof(WB_SkinConfigPopup_C_AddSkinConfigButton, ConfigNr) == 0x000000, "Member 'WB_SkinConfigPopup_C_AddSkinConfigButton::ConfigNr' has a wrong offset!");
static_assert(offsetof(WB_SkinConfigPopup_C_AddSkinConfigButton, ActiveConfigNr) == 0x000004, "Member 'WB_SkinConfigPopup_C_AddSkinConfigButton::ActiveConfigNr' has a wrong offset!");
static_assert(offsetof(WB_SkinConfigPopup_C_AddSkinConfigButton, CurrentButton) == 0x000008, "Member 'WB_SkinConfigPopup_C_AddSkinConfigButton::CurrentButton' has a wrong offset!");
static_assert(offsetof(WB_SkinConfigPopup_C_AddSkinConfigButton, CallFunc_CreateObject_Object) == 0x000010, "Member 'WB_SkinConfigPopup_C_AddSkinConfigButton::CallFunc_CreateObject_Object' has a wrong offset!");

// Function WB_SkinConfigPopup.WB_SkinConfigPopup_C.CloseAndRefreshMainScreen
// 0x0018 (0x0018 - 0x0000)
struct WB_SkinConfigPopup_C_CloseAndRefreshMainScreen final
{
public:
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_SkinConfigPopup_C_CloseAndRefreshMainScreen) == 0x000008, "Wrong alignment on WB_SkinConfigPopup_C_CloseAndRefreshMainScreen");
static_assert(sizeof(WB_SkinConfigPopup_C_CloseAndRefreshMainScreen) == 0x000018, "Wrong size on WB_SkinConfigPopup_C_CloseAndRefreshMainScreen");
static_assert(offsetof(WB_SkinConfigPopup_C_CloseAndRefreshMainScreen, CallFunc_GetGameInstance_ReturnValue) == 0x000000, "Member 'WB_SkinConfigPopup_C_CloseAndRefreshMainScreen::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SkinConfigPopup_C_CloseAndRefreshMainScreen, K2Node_DynamicCast_AsB_Game_Instance) == 0x000008, "Member 'WB_SkinConfigPopup_C_CloseAndRefreshMainScreen::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(WB_SkinConfigPopup_C_CloseAndRefreshMainScreen, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'WB_SkinConfigPopup_C_CloseAndRefreshMainScreen::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WB_SkinConfigPopup.WB_SkinConfigPopup_C.ExecuteUbergraph_WB_SkinConfigPopup
// 0x0010 (0x0010 - 0x0000)
struct WB_SkinConfigPopup_C_ExecuteUbergraph_WB_SkinConfigPopup final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_SkinConfigPopup_C_ExecuteUbergraph_WB_SkinConfigPopup) == 0x000004, "Wrong alignment on WB_SkinConfigPopup_C_ExecuteUbergraph_WB_SkinConfigPopup");
static_assert(sizeof(WB_SkinConfigPopup_C_ExecuteUbergraph_WB_SkinConfigPopup) == 0x000010, "Wrong size on WB_SkinConfigPopup_C_ExecuteUbergraph_WB_SkinConfigPopup");
static_assert(offsetof(WB_SkinConfigPopup_C_ExecuteUbergraph_WB_SkinConfigPopup, EntryPoint) == 0x000000, "Member 'WB_SkinConfigPopup_C_ExecuteUbergraph_WB_SkinConfigPopup::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_SkinConfigPopup_C_ExecuteUbergraph_WB_SkinConfigPopup, Temp_int_Variable) == 0x000004, "Member 'WB_SkinConfigPopup_C_ExecuteUbergraph_WB_SkinConfigPopup::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WB_SkinConfigPopup_C_ExecuteUbergraph_WB_SkinConfigPopup, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WB_SkinConfigPopup_C_ExecuteUbergraph_WB_SkinConfigPopup::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SkinConfigPopup_C_ExecuteUbergraph_WB_SkinConfigPopup, CallFunc_Less_IntInt_ReturnValue) == 0x00000C, "Member 'WB_SkinConfigPopup_C_ExecuteUbergraph_WB_SkinConfigPopup::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function WB_SkinConfigPopup.WB_SkinConfigPopup_C.GetInitialFocusWidget
// 0x0008 (0x0008 - 0x0000)
struct WB_SkinConfigPopup_C_GetInitialFocusWidget final
{
public:
	class UUserWidget*                            InitialFocusWidget;                                // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_SkinConfigPopup_C_GetInitialFocusWidget) == 0x000008, "Wrong alignment on WB_SkinConfigPopup_C_GetInitialFocusWidget");
static_assert(sizeof(WB_SkinConfigPopup_C_GetInitialFocusWidget) == 0x000008, "Wrong size on WB_SkinConfigPopup_C_GetInitialFocusWidget");
static_assert(offsetof(WB_SkinConfigPopup_C_GetInitialFocusWidget, InitialFocusWidget) == 0x000000, "Member 'WB_SkinConfigPopup_C_GetInitialFocusWidget::InitialFocusWidget' has a wrong offset!");

// Function WB_SkinConfigPopup.WB_SkinConfigPopup_C.OnFocusReceived
// 0x00F8 (0x00F8 - 0x0000)
struct WB_SkinConfigPopup_C_OnFocusReceived final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(WB_SkinConfigPopup_C_OnFocusReceived) == 0x000008, "Wrong alignment on WB_SkinConfigPopup_C_OnFocusReceived");
static_assert(sizeof(WB_SkinConfigPopup_C_OnFocusReceived) == 0x0000F8, "Wrong size on WB_SkinConfigPopup_C_OnFocusReceived");
static_assert(offsetof(WB_SkinConfigPopup_C_OnFocusReceived, MyGeometry) == 0x000000, "Member 'WB_SkinConfigPopup_C_OnFocusReceived::MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_SkinConfigPopup_C_OnFocusReceived, InFocusEvent) == 0x000038, "Member 'WB_SkinConfigPopup_C_OnFocusReceived::InFocusEvent' has a wrong offset!");
static_assert(offsetof(WB_SkinConfigPopup_C_OnFocusReceived, ReturnValue) == 0x000040, "Member 'WB_SkinConfigPopup_C_OnFocusReceived::ReturnValue' has a wrong offset!");

// Function WB_SkinConfigPopup.WB_SkinConfigPopup_C.UpdateMainScreenFocusWidget
// 0x0020 (0x0020 - 0x0000)
struct WB_SkinConfigPopup_C_UpdateMainScreenFocusWidget final
{
public:
	class UWB_RandomSelectionScreen_C*            K2Node_DynamicCast_AsWB_Random_Selection_Screen;   // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4731[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_PlayerCustomization_C*              K2Node_DynamicCast_AsWB_Player_Customization;      // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_SkinConfigPopup_C_UpdateMainScreenFocusWidget) == 0x000008, "Wrong alignment on WB_SkinConfigPopup_C_UpdateMainScreenFocusWidget");
static_assert(sizeof(WB_SkinConfigPopup_C_UpdateMainScreenFocusWidget) == 0x000020, "Wrong size on WB_SkinConfigPopup_C_UpdateMainScreenFocusWidget");
static_assert(offsetof(WB_SkinConfigPopup_C_UpdateMainScreenFocusWidget, K2Node_DynamicCast_AsWB_Random_Selection_Screen) == 0x000000, "Member 'WB_SkinConfigPopup_C_UpdateMainScreenFocusWidget::K2Node_DynamicCast_AsWB_Random_Selection_Screen' has a wrong offset!");
static_assert(offsetof(WB_SkinConfigPopup_C_UpdateMainScreenFocusWidget, K2Node_DynamicCast_bSuccess) == 0x000008, "Member 'WB_SkinConfigPopup_C_UpdateMainScreenFocusWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_SkinConfigPopup_C_UpdateMainScreenFocusWidget, K2Node_DynamicCast_AsWB_Player_Customization) == 0x000010, "Member 'WB_SkinConfigPopup_C_UpdateMainScreenFocusWidget::K2Node_DynamicCast_AsWB_Player_Customization' has a wrong offset!");
static_assert(offsetof(WB_SkinConfigPopup_C_UpdateMainScreenFocusWidget, K2Node_DynamicCast_bSuccess_1) == 0x000018, "Member 'WB_SkinConfigPopup_C_UpdateMainScreenFocusWidget::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function WB_SkinConfigPopup.WB_SkinConfigPopup_C.UpdateSkinConfigTileView
// 0x0030 (0x0030 - 0x0000)
struct WB_SkinConfigPopup_C_UpdateSkinConfigTileView final
{
public:
	int32                                         ButtonAmount;                                      // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSelected;                                        // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4732[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UB_SkinSelection_C*                     SkinSlots;                                         // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_MenuTileViewManager_C*               CallFunc_CreateObject_Object;                      // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TileViewIsEmpty_IsEmpty;                  // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_SkinConfigPopup_C_UpdateSkinConfigTileView) == 0x000008, "Wrong alignment on WB_SkinConfigPopup_C_UpdateSkinConfigTileView");
static_assert(sizeof(WB_SkinConfigPopup_C_UpdateSkinConfigTileView) == 0x000030, "Wrong size on WB_SkinConfigPopup_C_UpdateSkinConfigTileView");
static_assert(offsetof(WB_SkinConfigPopup_C_UpdateSkinConfigTileView, ButtonAmount) == 0x000000, "Member 'WB_SkinConfigPopup_C_UpdateSkinConfigTileView::ButtonAmount' has a wrong offset!");
static_assert(offsetof(WB_SkinConfigPopup_C_UpdateSkinConfigTileView, IsSelected) == 0x000004, "Member 'WB_SkinConfigPopup_C_UpdateSkinConfigTileView::IsSelected' has a wrong offset!");
static_assert(offsetof(WB_SkinConfigPopup_C_UpdateSkinConfigTileView, SkinSlots) == 0x000008, "Member 'WB_SkinConfigPopup_C_UpdateSkinConfigTileView::SkinSlots' has a wrong offset!");
static_assert(offsetof(WB_SkinConfigPopup_C_UpdateSkinConfigTileView, CallFunc_GetGameInstance_ReturnValue) == 0x000010, "Member 'WB_SkinConfigPopup_C_UpdateSkinConfigTileView::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SkinConfigPopup_C_UpdateSkinConfigTileView, CallFunc_CreateObject_Object) == 0x000018, "Member 'WB_SkinConfigPopup_C_UpdateSkinConfigTileView::CallFunc_CreateObject_Object' has a wrong offset!");
static_assert(offsetof(WB_SkinConfigPopup_C_UpdateSkinConfigTileView, K2Node_DynamicCast_AsB_Game_Instance) == 0x000020, "Member 'WB_SkinConfigPopup_C_UpdateSkinConfigTileView::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(WB_SkinConfigPopup_C_UpdateSkinConfigTileView, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WB_SkinConfigPopup_C_UpdateSkinConfigTileView::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_SkinConfigPopup_C_UpdateSkinConfigTileView, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'WB_SkinConfigPopup_C_UpdateSkinConfigTileView::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SkinConfigPopup_C_UpdateSkinConfigTileView, CallFunc_TileViewIsEmpty_IsEmpty) == 0x00002A, "Member 'WB_SkinConfigPopup_C_UpdateSkinConfigTileView::CallFunc_TileViewIsEmpty_IsEmpty' has a wrong offset!");

}
