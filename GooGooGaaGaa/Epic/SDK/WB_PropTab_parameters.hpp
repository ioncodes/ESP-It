#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_PropTab

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WB_PropTab.WB_PropTab_C.ExecuteUbergraph_WB_PropTab
// 0x0008 (0x0008 - 0x0000)
struct WB_PropTab_C_ExecuteUbergraph_WB_PropTab final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_PropTab_C_ExecuteUbergraph_WB_PropTab) == 0x000004, "Wrong alignment on WB_PropTab_C_ExecuteUbergraph_WB_PropTab");
static_assert(sizeof(WB_PropTab_C_ExecuteUbergraph_WB_PropTab) == 0x000008, "Wrong size on WB_PropTab_C_ExecuteUbergraph_WB_PropTab");
static_assert(offsetof(WB_PropTab_C_ExecuteUbergraph_WB_PropTab, EntryPoint) == 0x000000, "Member 'WB_PropTab_C_ExecuteUbergraph_WB_PropTab::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_ExecuteUbergraph_WB_PropTab, CallFunc_Not_PreBool_ReturnValue) == 0x000004, "Member 'WB_PropTab_C_ExecuteUbergraph_WB_PropTab::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function WB_PropTab.WB_PropTab_C.GetUsePhysicsRequiredVisibility
// 0x0007 (0x0007 - 0x0000)
struct WB_PropTab_C_GetUsePhysicsRequiredVisibility final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                CallFunc_GetCheckBoxState_CheckedState;            // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_PropTab_C_GetUsePhysicsRequiredVisibility) == 0x000001, "Wrong alignment on WB_PropTab_C_GetUsePhysicsRequiredVisibility");
static_assert(sizeof(WB_PropTab_C_GetUsePhysicsRequiredVisibility) == 0x000007, "Wrong size on WB_PropTab_C_GetUsePhysicsRequiredVisibility");
static_assert(offsetof(WB_PropTab_C_GetUsePhysicsRequiredVisibility, ReturnValue) == 0x000000, "Member 'WB_PropTab_C_GetUsePhysicsRequiredVisibility::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_GetUsePhysicsRequiredVisibility, Temp_byte_Variable) == 0x000001, "Member 'WB_PropTab_C_GetUsePhysicsRequiredVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_GetUsePhysicsRequiredVisibility, Temp_byte_Variable_1) == 0x000002, "Member 'WB_PropTab_C_GetUsePhysicsRequiredVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_GetUsePhysicsRequiredVisibility, Temp_byte_Variable_2) == 0x000003, "Member 'WB_PropTab_C_GetUsePhysicsRequiredVisibility::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_GetUsePhysicsRequiredVisibility, Temp_byte_Variable_3) == 0x000004, "Member 'WB_PropTab_C_GetUsePhysicsRequiredVisibility::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_GetUsePhysicsRequiredVisibility, CallFunc_GetCheckBoxState_CheckedState) == 0x000005, "Member 'WB_PropTab_C_GetUsePhysicsRequiredVisibility::CallFunc_GetCheckBoxState_CheckedState' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_GetUsePhysicsRequiredVisibility, K2Node_Select_Default) == 0x000006, "Member 'WB_PropTab_C_GetUsePhysicsRequiredVisibility::K2Node_Select_Default' has a wrong offset!");

// Function WB_PropTab.WB_PropTab_C.Initialize
// 0x0008 (0x0008 - 0x0000)
struct WB_PropTab_C_Initialize final
{
public:
	class UWB_WorldSettingsTab_C*                 CallFunc_WidgetGetParentOfClass_ReturnValue;       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_PropTab_C_Initialize) == 0x000008, "Wrong alignment on WB_PropTab_C_Initialize");
static_assert(sizeof(WB_PropTab_C_Initialize) == 0x000008, "Wrong size on WB_PropTab_C_Initialize");
static_assert(offsetof(WB_PropTab_C_Initialize, CallFunc_WidgetGetParentOfClass_ReturnValue) == 0x000000, "Member 'WB_PropTab_C_Initialize::CallFunc_WidgetGetParentOfClass_ReturnValue' has a wrong offset!");

// Function WB_PropTab.WB_PropTab_C.UpdateAllPropsAwakeProperty
// 0x0048 (0x0048 - 0x0000)
struct WB_PropTab_C_UpdateAllPropsAwakeProperty final
{
public:
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                CallFunc_GetCheckBoxState_CheckedState;            // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E[0x2];                                        // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_StaticMeshProp_C*                    CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_StaticMeshProp_C*                    CallFunc_Array_Get_Item_1;                         // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AB_StaticMeshProp_C*                    CallFunc_Array_Get_Item_2;                         // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_PropTab_C_UpdateAllPropsAwakeProperty) == 0x000008, "Wrong alignment on WB_PropTab_C_UpdateAllPropsAwakeProperty");
static_assert(sizeof(WB_PropTab_C_UpdateAllPropsAwakeProperty) == 0x000048, "Wrong size on WB_PropTab_C_UpdateAllPropsAwakeProperty");
static_assert(offsetof(WB_PropTab_C_UpdateAllPropsAwakeProperty, Temp_int_Loop_Counter_Variable) == 0x000000, "Member 'WB_PropTab_C_UpdateAllPropsAwakeProperty::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdateAllPropsAwakeProperty, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'WB_PropTab_C_UpdateAllPropsAwakeProperty::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdateAllPropsAwakeProperty, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WB_PropTab_C_UpdateAllPropsAwakeProperty::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdateAllPropsAwakeProperty, CallFunc_GetCheckBoxState_CheckedState) == 0x00000C, "Member 'WB_PropTab_C_UpdateAllPropsAwakeProperty::CallFunc_GetCheckBoxState_CheckedState' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdateAllPropsAwakeProperty, K2Node_SwitchEnum_CmpSuccess) == 0x00000D, "Member 'WB_PropTab_C_UpdateAllPropsAwakeProperty::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdateAllPropsAwakeProperty, Temp_int_Array_Index_Variable_1) == 0x000010, "Member 'WB_PropTab_C_UpdateAllPropsAwakeProperty::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdateAllPropsAwakeProperty, Temp_int_Loop_Counter_Variable_1) == 0x000014, "Member 'WB_PropTab_C_UpdateAllPropsAwakeProperty::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdateAllPropsAwakeProperty, CallFunc_Array_Get_Item) == 0x000018, "Member 'WB_PropTab_C_UpdateAllPropsAwakeProperty::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdateAllPropsAwakeProperty, CallFunc_Add_IntInt_ReturnValue_1) == 0x000020, "Member 'WB_PropTab_C_UpdateAllPropsAwakeProperty::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdateAllPropsAwakeProperty, CallFunc_Array_Get_Item_1) == 0x000028, "Member 'WB_PropTab_C_UpdateAllPropsAwakeProperty::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdateAllPropsAwakeProperty, CallFunc_Array_Get_Item_2) == 0x000030, "Member 'WB_PropTab_C_UpdateAllPropsAwakeProperty::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdateAllPropsAwakeProperty, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'WB_PropTab_C_UpdateAllPropsAwakeProperty::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdateAllPropsAwakeProperty, CallFunc_Array_Length_ReturnValue_1) == 0x00003C, "Member 'WB_PropTab_C_UpdateAllPropsAwakeProperty::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdateAllPropsAwakeProperty, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'WB_PropTab_C_UpdateAllPropsAwakeProperty::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdateAllPropsAwakeProperty, CallFunc_Less_IntInt_ReturnValue_1) == 0x000041, "Member 'WB_PropTab_C_UpdateAllPropsAwakeProperty::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function WB_PropTab.WB_PropTab_C.UpdateAllPropsFreezeProperty
// 0x0048 (0x0048 - 0x0000)
struct WB_PropTab_C_UpdateAllPropsFreezeProperty final
{
public:
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                CallFunc_GetCheckBoxState_CheckedState;            // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E[0x2];                                        // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_StaticMeshProp_C*                    CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_StaticMeshProp_C*                    CallFunc_Array_Get_Item_1;                         // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AB_StaticMeshProp_C*                    CallFunc_Array_Get_Item_2;                         // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_PropTab_C_UpdateAllPropsFreezeProperty) == 0x000008, "Wrong alignment on WB_PropTab_C_UpdateAllPropsFreezeProperty");
static_assert(sizeof(WB_PropTab_C_UpdateAllPropsFreezeProperty) == 0x000048, "Wrong size on WB_PropTab_C_UpdateAllPropsFreezeProperty");
static_assert(offsetof(WB_PropTab_C_UpdateAllPropsFreezeProperty, Temp_int_Loop_Counter_Variable) == 0x000000, "Member 'WB_PropTab_C_UpdateAllPropsFreezeProperty::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdateAllPropsFreezeProperty, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'WB_PropTab_C_UpdateAllPropsFreezeProperty::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdateAllPropsFreezeProperty, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WB_PropTab_C_UpdateAllPropsFreezeProperty::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdateAllPropsFreezeProperty, CallFunc_GetCheckBoxState_CheckedState) == 0x00000C, "Member 'WB_PropTab_C_UpdateAllPropsFreezeProperty::CallFunc_GetCheckBoxState_CheckedState' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdateAllPropsFreezeProperty, K2Node_SwitchEnum_CmpSuccess) == 0x00000D, "Member 'WB_PropTab_C_UpdateAllPropsFreezeProperty::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdateAllPropsFreezeProperty, Temp_int_Array_Index_Variable_1) == 0x000010, "Member 'WB_PropTab_C_UpdateAllPropsFreezeProperty::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdateAllPropsFreezeProperty, Temp_int_Loop_Counter_Variable_1) == 0x000014, "Member 'WB_PropTab_C_UpdateAllPropsFreezeProperty::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdateAllPropsFreezeProperty, CallFunc_Array_Get_Item) == 0x000018, "Member 'WB_PropTab_C_UpdateAllPropsFreezeProperty::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdateAllPropsFreezeProperty, CallFunc_Add_IntInt_ReturnValue_1) == 0x000020, "Member 'WB_PropTab_C_UpdateAllPropsFreezeProperty::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdateAllPropsFreezeProperty, CallFunc_Array_Get_Item_1) == 0x000028, "Member 'WB_PropTab_C_UpdateAllPropsFreezeProperty::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdateAllPropsFreezeProperty, CallFunc_Array_Get_Item_2) == 0x000030, "Member 'WB_PropTab_C_UpdateAllPropsFreezeProperty::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdateAllPropsFreezeProperty, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'WB_PropTab_C_UpdateAllPropsFreezeProperty::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdateAllPropsFreezeProperty, CallFunc_Array_Length_ReturnValue_1) == 0x00003C, "Member 'WB_PropTab_C_UpdateAllPropsFreezeProperty::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdateAllPropsFreezeProperty, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'WB_PropTab_C_UpdateAllPropsFreezeProperty::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdateAllPropsFreezeProperty, CallFunc_Less_IntInt_ReturnValue_1) == 0x000041, "Member 'WB_PropTab_C_UpdateAllPropsFreezeProperty::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function WB_PropTab.WB_PropTab_C.UpdateGravityButtonLabelText
// 0x0038 (0x0038 - 0x0000)
struct WB_PropTab_C_UpdateGravityButtonLabelText final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0010)()
	class FText                                   Temp_text_Variable_1;                              // 0x0018(0x0010)()
	class FText                                   K2Node_Select_Default;                             // 0x0028(0x0010)()
};
static_assert(alignof(WB_PropTab_C_UpdateGravityButtonLabelText) == 0x000008, "Wrong alignment on WB_PropTab_C_UpdateGravityButtonLabelText");
static_assert(sizeof(WB_PropTab_C_UpdateGravityButtonLabelText) == 0x000038, "Wrong size on WB_PropTab_C_UpdateGravityButtonLabelText");
static_assert(offsetof(WB_PropTab_C_UpdateGravityButtonLabelText, Temp_bool_Variable) == 0x000000, "Member 'WB_PropTab_C_UpdateGravityButtonLabelText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdateGravityButtonLabelText, Temp_text_Variable) == 0x000008, "Member 'WB_PropTab_C_UpdateGravityButtonLabelText::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdateGravityButtonLabelText, Temp_text_Variable_1) == 0x000018, "Member 'WB_PropTab_C_UpdateGravityButtonLabelText::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdateGravityButtonLabelText, K2Node_Select_Default) == 0x000028, "Member 'WB_PropTab_C_UpdateGravityButtonLabelText::K2Node_Select_Default' has a wrong offset!");

// Function WB_PropTab.WB_PropTab_C.UpdatePropHpAndSpeedInfo
// 0x00E8 (0x00E8 - 0x0000)
struct WB_PropTab_C_UpdatePropHpAndSpeedInfo final
{
public:
	class AB_StaticMeshProp_C*                    TargetProp;                                        // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class AB_StaticMeshProp_C*                    CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0010(0x0048)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0058(0x0010)(ReferenceParm)
	double                                        CallFunc_GetMaxHealth_MaxHealth;                   // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0070(0x0010)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0080(0x0048)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x00C8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x00D8(0x0010)()
};
static_assert(alignof(WB_PropTab_C_UpdatePropHpAndSpeedInfo) == 0x000008, "Wrong alignment on WB_PropTab_C_UpdatePropHpAndSpeedInfo");
static_assert(sizeof(WB_PropTab_C_UpdatePropHpAndSpeedInfo) == 0x0000E8, "Wrong size on WB_PropTab_C_UpdatePropHpAndSpeedInfo");
static_assert(offsetof(WB_PropTab_C_UpdatePropHpAndSpeedInfo, TargetProp) == 0x000000, "Member 'WB_PropTab_C_UpdatePropHpAndSpeedInfo::TargetProp' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdatePropHpAndSpeedInfo, CallFunc_Array_Get_Item) == 0x000008, "Member 'WB_PropTab_C_UpdatePropHpAndSpeedInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdatePropHpAndSpeedInfo, K2Node_MakeStruct_FormatArgumentData) == 0x000010, "Member 'WB_PropTab_C_UpdatePropHpAndSpeedInfo::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdatePropHpAndSpeedInfo, K2Node_MakeArray_Array) == 0x000058, "Member 'WB_PropTab_C_UpdatePropHpAndSpeedInfo::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdatePropHpAndSpeedInfo, CallFunc_GetMaxHealth_MaxHealth) == 0x000068, "Member 'WB_PropTab_C_UpdatePropHpAndSpeedInfo::CallFunc_GetMaxHealth_MaxHealth' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdatePropHpAndSpeedInfo, CallFunc_Format_ReturnValue) == 0x000070, "Member 'WB_PropTab_C_UpdatePropHpAndSpeedInfo::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdatePropHpAndSpeedInfo, K2Node_MakeStruct_FormatArgumentData_1) == 0x000080, "Member 'WB_PropTab_C_UpdatePropHpAndSpeedInfo::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdatePropHpAndSpeedInfo, K2Node_MakeArray_Array_1) == 0x0000C8, "Member 'WB_PropTab_C_UpdatePropHpAndSpeedInfo::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdatePropHpAndSpeedInfo, CallFunc_Format_ReturnValue_1) == 0x0000D8, "Member 'WB_PropTab_C_UpdatePropHpAndSpeedInfo::CallFunc_Format_ReturnValue_1' has a wrong offset!");

// Function WB_PropTab.WB_PropTab_C.UpdatePropTabContent
// 0x0028 (0x0028 - 0x0000)
struct WB_PropTab_C_UpdatePropTabContent final
{
public:
	class AB_StaticMeshProp_C*                    PropToTest;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Added;                                             // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                Temp_byte_Variable;                                // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                Temp_byte_Variable_1;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                Temp_byte_Variable_2;                              // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                Temp_byte_Variable_3;                              // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_StaticMeshProp_C*                    CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                K2Node_Select_Default_1;                           // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                K2Node_Select_Default_2;                           // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_PropTab_C_UpdatePropTabContent) == 0x000008, "Wrong alignment on WB_PropTab_C_UpdatePropTabContent");
static_assert(sizeof(WB_PropTab_C_UpdatePropTabContent) == 0x000028, "Wrong size on WB_PropTab_C_UpdatePropTabContent");
static_assert(offsetof(WB_PropTab_C_UpdatePropTabContent, PropToTest) == 0x000000, "Member 'WB_PropTab_C_UpdatePropTabContent::PropToTest' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdatePropTabContent, Added) == 0x000008, "Member 'WB_PropTab_C_UpdatePropTabContent::Added' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdatePropTabContent, Temp_bool_Variable) == 0x000009, "Member 'WB_PropTab_C_UpdatePropTabContent::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdatePropTabContent, Temp_byte_Variable) == 0x00000A, "Member 'WB_PropTab_C_UpdatePropTabContent::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdatePropTabContent, Temp_byte_Variable_1) == 0x00000B, "Member 'WB_PropTab_C_UpdatePropTabContent::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdatePropTabContent, Temp_bool_Variable_1) == 0x00000C, "Member 'WB_PropTab_C_UpdatePropTabContent::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdatePropTabContent, Temp_byte_Variable_2) == 0x00000D, "Member 'WB_PropTab_C_UpdatePropTabContent::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdatePropTabContent, Temp_byte_Variable_3) == 0x00000E, "Member 'WB_PropTab_C_UpdatePropTabContent::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdatePropTabContent, Temp_byte_Variable_4) == 0x00000F, "Member 'WB_PropTab_C_UpdatePropTabContent::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdatePropTabContent, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'WB_PropTab_C_UpdatePropTabContent::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdatePropTabContent, CallFunc_Greater_IntInt_ReturnValue) == 0x000014, "Member 'WB_PropTab_C_UpdatePropTabContent::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdatePropTabContent, Temp_byte_Variable_5) == 0x000015, "Member 'WB_PropTab_C_UpdatePropTabContent::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdatePropTabContent, Temp_bool_Variable_2) == 0x000016, "Member 'WB_PropTab_C_UpdatePropTabContent::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdatePropTabContent, K2Node_Select_Default) == 0x000017, "Member 'WB_PropTab_C_UpdatePropTabContent::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdatePropTabContent, CallFunc_Array_Get_Item) == 0x000018, "Member 'WB_PropTab_C_UpdatePropTabContent::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdatePropTabContent, CallFunc_Array_Length_ReturnValue_1) == 0x000020, "Member 'WB_PropTab_C_UpdatePropTabContent::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdatePropTabContent, K2Node_Select_Default_1) == 0x000024, "Member 'WB_PropTab_C_UpdatePropTabContent::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdatePropTabContent, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000025, "Member 'WB_PropTab_C_UpdatePropTabContent::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PropTab_C_UpdatePropTabContent, K2Node_Select_Default_2) == 0x000026, "Member 'WB_PropTab_C_UpdatePropTabContent::K2Node_Select_Default_2' has a wrong offset!");

}

