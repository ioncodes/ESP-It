#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_MaterialButton

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WB_MaterialButton.WB_MaterialButton_C.Clicked
// 0x0088 (0x0088 - 0x0000)
struct WB_MaterialButton_C_Clicked final
{
public:
	TArray<class ABP_PlaceableStaticProp_C*>      MatStructures;                                     // 0x0000(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlaceableStaticProp_C*              CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AB_CreativePlayerController_C*          K2Node_DynamicCast_AsB_Creative_Player_Controller; // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_PlaceAndEditUI_C*                   CallFunc_WidgetGetParentOfClass_ReturnValue;       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInterface*>             CallFunc_SetLocalSpecificMaterial_MatOptions;      // 0x0050(0x0010)(ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_MaterialChangeTab_C*                K2Node_DynamicCast_AsWB_Material_Change_Tab;       // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_WorldSettingsTab_C*                 CallFunc_WidgetGetParentOfClass_ReturnValue_1;     // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_MaterialButton_C_Clicked) == 0x000008, "Wrong alignment on WB_MaterialButton_C_Clicked");
static_assert(sizeof(WB_MaterialButton_C_Clicked) == 0x000088, "Wrong size on WB_MaterialButton_C_Clicked");
static_assert(offsetof(WB_MaterialButton_C_Clicked, MatStructures) == 0x000000, "Member 'WB_MaterialButton_C_Clicked::MatStructures' has a wrong offset!");
static_assert(offsetof(WB_MaterialButton_C_Clicked, Temp_int_Array_Index_Variable) == 0x000010, "Member 'WB_MaterialButton_C_Clicked::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WB_MaterialButton_C_Clicked, CallFunc_Array_Get_Item) == 0x000018, "Member 'WB_MaterialButton_C_Clicked::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_MaterialButton_C_Clicked, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'WB_MaterialButton_C_Clicked::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MaterialButton_C_Clicked, CallFunc_GetOwningPlayer_ReturnValue) == 0x000028, "Member 'WB_MaterialButton_C_Clicked::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MaterialButton_C_Clicked, K2Node_DynamicCast_AsB_Creative_Player_Controller) == 0x000030, "Member 'WB_MaterialButton_C_Clicked::K2Node_DynamicCast_AsB_Creative_Player_Controller' has a wrong offset!");
static_assert(offsetof(WB_MaterialButton_C_Clicked, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'WB_MaterialButton_C_Clicked::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_MaterialButton_C_Clicked, CallFunc_WidgetGetParentOfClass_ReturnValue) == 0x000040, "Member 'WB_MaterialButton_C_Clicked::CallFunc_WidgetGetParentOfClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MaterialButton_C_Clicked, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'WB_MaterialButton_C_Clicked::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MaterialButton_C_Clicked, CallFunc_SetLocalSpecificMaterial_MatOptions) == 0x000050, "Member 'WB_MaterialButton_C_Clicked::CallFunc_SetLocalSpecificMaterial_MatOptions' has a wrong offset!");
static_assert(offsetof(WB_MaterialButton_C_Clicked, Temp_int_Loop_Counter_Variable) == 0x000060, "Member 'WB_MaterialButton_C_Clicked::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WB_MaterialButton_C_Clicked, CallFunc_Less_IntInt_ReturnValue) == 0x000064, "Member 'WB_MaterialButton_C_Clicked::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MaterialButton_C_Clicked, CallFunc_Add_IntInt_ReturnValue) == 0x000068, "Member 'WB_MaterialButton_C_Clicked::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MaterialButton_C_Clicked, K2Node_DynamicCast_AsWB_Material_Change_Tab) == 0x000070, "Member 'WB_MaterialButton_C_Clicked::K2Node_DynamicCast_AsWB_Material_Change_Tab' has a wrong offset!");
static_assert(offsetof(WB_MaterialButton_C_Clicked, K2Node_DynamicCast_bSuccess_1) == 0x000078, "Member 'WB_MaterialButton_C_Clicked::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WB_MaterialButton_C_Clicked, CallFunc_WidgetGetParentOfClass_ReturnValue_1) == 0x000080, "Member 'WB_MaterialButton_C_Clicked::CallFunc_WidgetGetParentOfClass_ReturnValue_1' has a wrong offset!");

// Function WB_MaterialButton.WB_MaterialButton_C.ExecuteUbergraph_WB_MaterialButton
// 0x0020 (0x0020 - 0x0000)
struct WB_MaterialButton_C_ExecuteUbergraph_WB_MaterialButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AB_CreativePlayerController_C*          K2Node_DynamicCast_AsB_Creative_Player_Controller; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_MaterialButton_C_ExecuteUbergraph_WB_MaterialButton) == 0x000008, "Wrong alignment on WB_MaterialButton_C_ExecuteUbergraph_WB_MaterialButton");
static_assert(sizeof(WB_MaterialButton_C_ExecuteUbergraph_WB_MaterialButton) == 0x000020, "Wrong size on WB_MaterialButton_C_ExecuteUbergraph_WB_MaterialButton");
static_assert(offsetof(WB_MaterialButton_C_ExecuteUbergraph_WB_MaterialButton, EntryPoint) == 0x000000, "Member 'WB_MaterialButton_C_ExecuteUbergraph_WB_MaterialButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_MaterialButton_C_ExecuteUbergraph_WB_MaterialButton, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'WB_MaterialButton_C_ExecuteUbergraph_WB_MaterialButton::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MaterialButton_C_ExecuteUbergraph_WB_MaterialButton, K2Node_DynamicCast_AsB_Creative_Player_Controller) == 0x000010, "Member 'WB_MaterialButton_C_ExecuteUbergraph_WB_MaterialButton::K2Node_DynamicCast_AsB_Creative_Player_Controller' has a wrong offset!");
static_assert(offsetof(WB_MaterialButton_C_ExecuteUbergraph_WB_MaterialButton, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WB_MaterialButton_C_ExecuteUbergraph_WB_MaterialButton::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WB_MaterialButton.WB_MaterialButton_C.GetBorderColor
// 0x0010 (0x0010 - 0x0000)
struct WB_MaterialButton_C_GetBorderColor final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_MaterialButton_C_GetBorderColor) == 0x000004, "Wrong alignment on WB_MaterialButton_C_GetBorderColor");
static_assert(sizeof(WB_MaterialButton_C_GetBorderColor) == 0x000010, "Wrong size on WB_MaterialButton_C_GetBorderColor");
static_assert(offsetof(WB_MaterialButton_C_GetBorderColor, Color) == 0x000000, "Member 'WB_MaterialButton_C_GetBorderColor::Color' has a wrong offset!");

// Function WB_MaterialButton.WB_MaterialButton_C.GetIcon
// 0x0050 (0x0050 - 0x0000)
struct WB_MaterialButton_C_GetIcon final
{
public:
	TSoftObjectPtr<class UObject>                 ReturnValue;                                       // 0x0000(0x0028)(Parm, OutParm, ReturnParm, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x0028(0x0028)(UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(WB_MaterialButton_C_GetIcon) == 0x000008, "Wrong alignment on WB_MaterialButton_C_GetIcon");
static_assert(sizeof(WB_MaterialButton_C_GetIcon) == 0x000050, "Wrong size on WB_MaterialButton_C_GetIcon");
static_assert(offsetof(WB_MaterialButton_C_GetIcon, ReturnValue) == 0x000000, "Member 'WB_MaterialButton_C_GetIcon::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MaterialButton_C_GetIcon, CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue) == 0x000028, "Member 'WB_MaterialButton_C_GetIcon::CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue' has a wrong offset!");

// Function WB_MaterialButton.WB_MaterialButton_C.GetTileView
// 0x0020 (0x0020 - 0x0000)
struct WB_MaterialButton_C_GetTileView final
{
public:
	class UTileView*                              TileView;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UTileView*                              CallFunc_GetTileView_TileView;                     // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWB_MaterialChangeTab_C*                K2Node_DynamicCast_AsWB_Material_Change_Tab;       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_MaterialButton_C_GetTileView) == 0x000008, "Wrong alignment on WB_MaterialButton_C_GetTileView");
static_assert(sizeof(WB_MaterialButton_C_GetTileView) == 0x000020, "Wrong size on WB_MaterialButton_C_GetTileView");
static_assert(offsetof(WB_MaterialButton_C_GetTileView, TileView) == 0x000000, "Member 'WB_MaterialButton_C_GetTileView::TileView' has a wrong offset!");
static_assert(offsetof(WB_MaterialButton_C_GetTileView, CallFunc_GetTileView_TileView) == 0x000008, "Member 'WB_MaterialButton_C_GetTileView::CallFunc_GetTileView_TileView' has a wrong offset!");
static_assert(offsetof(WB_MaterialButton_C_GetTileView, K2Node_DynamicCast_AsWB_Material_Change_Tab) == 0x000010, "Member 'WB_MaterialButton_C_GetTileView::K2Node_DynamicCast_AsWB_Material_Change_Tab' has a wrong offset!");
static_assert(offsetof(WB_MaterialButton_C_GetTileView, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WB_MaterialButton_C_GetTileView::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WB_MaterialButton.WB_MaterialButton_C.SetIndividualParameters
// 0x0010 (0x0010 - 0x0000)
struct WB_MaterialButton_C_SetIndividualParameters final
{
public:
	class UB_MaterialButtonData_C*                K2Node_DynamicCast_AsB_Material_Button_Data;       // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_MaterialButton_C_SetIndividualParameters) == 0x000008, "Wrong alignment on WB_MaterialButton_C_SetIndividualParameters");
static_assert(sizeof(WB_MaterialButton_C_SetIndividualParameters) == 0x000010, "Wrong size on WB_MaterialButton_C_SetIndividualParameters");
static_assert(offsetof(WB_MaterialButton_C_SetIndividualParameters, K2Node_DynamicCast_AsB_Material_Button_Data) == 0x000000, "Member 'WB_MaterialButton_C_SetIndividualParameters::K2Node_DynamicCast_AsB_Material_Button_Data' has a wrong offset!");
static_assert(offsetof(WB_MaterialButton_C_SetIndividualParameters, K2Node_DynamicCast_bSuccess) == 0x000008, "Member 'WB_MaterialButton_C_SetIndividualParameters::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

