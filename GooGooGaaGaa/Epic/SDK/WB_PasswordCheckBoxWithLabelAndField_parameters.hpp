#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_PasswordCheckBoxWithLabelAndField

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK::Params
{

// Function WB_PasswordCheckBoxWithLabelAndField.WB_PasswordCheckBoxWithLabelAndField_C.OnPreviewKeyDown
// 0x02C0 (0x02C0 - 0x0000)
struct WB_PasswordCheckBoxWithLabelAndField_C_OnPreviewKeyDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                              InKeyEvent;                                        // 0x0038(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0078(0x00B8)(Parm, OutParm, ReturnParm)
	struct FKey                                   CallFunc_GetKey_ReturnValue;                       // 0x0130(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_149[0x7];                                      // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_OnPreviewKeyDown_ReturnValue;             // 0x0150(0x00B8)()
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0208(0x00B8)()
};
static_assert(alignof(WB_PasswordCheckBoxWithLabelAndField_C_OnPreviewKeyDown) == 0x000008, "Wrong alignment on WB_PasswordCheckBoxWithLabelAndField_C_OnPreviewKeyDown");
static_assert(sizeof(WB_PasswordCheckBoxWithLabelAndField_C_OnPreviewKeyDown) == 0x0002C0, "Wrong size on WB_PasswordCheckBoxWithLabelAndField_C_OnPreviewKeyDown");
static_assert(offsetof(WB_PasswordCheckBoxWithLabelAndField_C_OnPreviewKeyDown, MyGeometry) == 0x000000, "Member 'WB_PasswordCheckBoxWithLabelAndField_C_OnPreviewKeyDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_PasswordCheckBoxWithLabelAndField_C_OnPreviewKeyDown, InKeyEvent) == 0x000038, "Member 'WB_PasswordCheckBoxWithLabelAndField_C_OnPreviewKeyDown::InKeyEvent' has a wrong offset!");
static_assert(offsetof(WB_PasswordCheckBoxWithLabelAndField_C_OnPreviewKeyDown, ReturnValue) == 0x000078, "Member 'WB_PasswordCheckBoxWithLabelAndField_C_OnPreviewKeyDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PasswordCheckBoxWithLabelAndField_C_OnPreviewKeyDown, CallFunc_GetKey_ReturnValue) == 0x000130, "Member 'WB_PasswordCheckBoxWithLabelAndField_C_OnPreviewKeyDown::CallFunc_GetKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PasswordCheckBoxWithLabelAndField_C_OnPreviewKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000148, "Member 'WB_PasswordCheckBoxWithLabelAndField_C_OnPreviewKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PasswordCheckBoxWithLabelAndField_C_OnPreviewKeyDown, CallFunc_OnPreviewKeyDown_ReturnValue) == 0x000150, "Member 'WB_PasswordCheckBoxWithLabelAndField_C_OnPreviewKeyDown::CallFunc_OnPreviewKeyDown_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PasswordCheckBoxWithLabelAndField_C_OnPreviewKeyDown, CallFunc_Handled_ReturnValue) == 0x000208, "Member 'WB_PasswordCheckBoxWithLabelAndField_C_OnPreviewKeyDown::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function WB_PasswordCheckBoxWithLabelAndField.WB_PasswordCheckBoxWithLabelAndField_C.Get_ControllerIcon_Visibility
// 0x000A (0x000A - 0x0000)
struct WB_PasswordCheckBoxWithLabelAndField_C_Get_ControllerIcon_Visibility final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasFocusedDescendants_ReturnValue;        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAnyUserFocus_ReturnValue;              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGamepadMode_ReturnValue;                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_PasswordCheckBoxWithLabelAndField_C_Get_ControllerIcon_Visibility) == 0x000001, "Wrong alignment on WB_PasswordCheckBoxWithLabelAndField_C_Get_ControllerIcon_Visibility");
static_assert(sizeof(WB_PasswordCheckBoxWithLabelAndField_C_Get_ControllerIcon_Visibility) == 0x00000A, "Wrong size on WB_PasswordCheckBoxWithLabelAndField_C_Get_ControllerIcon_Visibility");
static_assert(offsetof(WB_PasswordCheckBoxWithLabelAndField_C_Get_ControllerIcon_Visibility, ReturnValue) == 0x000000, "Member 'WB_PasswordCheckBoxWithLabelAndField_C_Get_ControllerIcon_Visibility::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PasswordCheckBoxWithLabelAndField_C_Get_ControllerIcon_Visibility, Temp_bool_Variable) == 0x000001, "Member 'WB_PasswordCheckBoxWithLabelAndField_C_Get_ControllerIcon_Visibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WB_PasswordCheckBoxWithLabelAndField_C_Get_ControllerIcon_Visibility, Temp_byte_Variable) == 0x000002, "Member 'WB_PasswordCheckBoxWithLabelAndField_C_Get_ControllerIcon_Visibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WB_PasswordCheckBoxWithLabelAndField_C_Get_ControllerIcon_Visibility, Temp_byte_Variable_1) == 0x000003, "Member 'WB_PasswordCheckBoxWithLabelAndField_C_Get_ControllerIcon_Visibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_PasswordCheckBoxWithLabelAndField_C_Get_ControllerIcon_Visibility, CallFunc_HasFocusedDescendants_ReturnValue) == 0x000004, "Member 'WB_PasswordCheckBoxWithLabelAndField_C_Get_ControllerIcon_Visibility::CallFunc_HasFocusedDescendants_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PasswordCheckBoxWithLabelAndField_C_Get_ControllerIcon_Visibility, CallFunc_HasAnyUserFocus_ReturnValue) == 0x000005, "Member 'WB_PasswordCheckBoxWithLabelAndField_C_Get_ControllerIcon_Visibility::CallFunc_HasAnyUserFocus_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PasswordCheckBoxWithLabelAndField_C_Get_ControllerIcon_Visibility, CallFunc_IsGamepadMode_ReturnValue) == 0x000006, "Member 'WB_PasswordCheckBoxWithLabelAndField_C_Get_ControllerIcon_Visibility::CallFunc_IsGamepadMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PasswordCheckBoxWithLabelAndField_C_Get_ControllerIcon_Visibility, CallFunc_BooleanOR_ReturnValue) == 0x000007, "Member 'WB_PasswordCheckBoxWithLabelAndField_C_Get_ControllerIcon_Visibility::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PasswordCheckBoxWithLabelAndField_C_Get_ControllerIcon_Visibility, CallFunc_BooleanAND_ReturnValue) == 0x000008, "Member 'WB_PasswordCheckBoxWithLabelAndField_C_Get_ControllerIcon_Visibility::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PasswordCheckBoxWithLabelAndField_C_Get_ControllerIcon_Visibility, K2Node_Select_Default) == 0x000009, "Member 'WB_PasswordCheckBoxWithLabelAndField_C_Get_ControllerIcon_Visibility::K2Node_Select_Default' has a wrong offset!");

// Function WB_PasswordCheckBoxWithLabelAndField.WB_PasswordCheckBoxWithLabelAndField_C.OnFocusReceived
// 0x01B8 (0x01B8 - 0x0000)
struct WB_PasswordCheckBoxWithLabelAndField_C_OnFocusReceived final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_OnFocusReceived_ReturnValue;              // 0x00F8(0x00B8)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x01B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_PasswordCheckBoxWithLabelAndField_C_OnFocusReceived) == 0x000008, "Wrong alignment on WB_PasswordCheckBoxWithLabelAndField_C_OnFocusReceived");
static_assert(sizeof(WB_PasswordCheckBoxWithLabelAndField_C_OnFocusReceived) == 0x0001B8, "Wrong size on WB_PasswordCheckBoxWithLabelAndField_C_OnFocusReceived");
static_assert(offsetof(WB_PasswordCheckBoxWithLabelAndField_C_OnFocusReceived, MyGeometry) == 0x000000, "Member 'WB_PasswordCheckBoxWithLabelAndField_C_OnFocusReceived::MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_PasswordCheckBoxWithLabelAndField_C_OnFocusReceived, InFocusEvent) == 0x000038, "Member 'WB_PasswordCheckBoxWithLabelAndField_C_OnFocusReceived::InFocusEvent' has a wrong offset!");
static_assert(offsetof(WB_PasswordCheckBoxWithLabelAndField_C_OnFocusReceived, ReturnValue) == 0x000040, "Member 'WB_PasswordCheckBoxWithLabelAndField_C_OnFocusReceived::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PasswordCheckBoxWithLabelAndField_C_OnFocusReceived, CallFunc_OnFocusReceived_ReturnValue) == 0x0000F8, "Member 'WB_PasswordCheckBoxWithLabelAndField_C_OnFocusReceived::CallFunc_OnFocusReceived_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PasswordCheckBoxWithLabelAndField_C_OnFocusReceived, CallFunc_PlayAnimation_ReturnValue) == 0x0001B0, "Member 'WB_PasswordCheckBoxWithLabelAndField_C_OnFocusReceived::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WB_PasswordCheckBoxWithLabelAndField.WB_PasswordCheckBoxWithLabelAndField_C.GetVisibility_PasswordField_0
// 0x0002 (0x0002 - 0x0000)
struct WB_PasswordCheckBoxWithLabelAndField_C_GetVisibility_PasswordField_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsChecked_ReturnValue;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_PasswordCheckBoxWithLabelAndField_C_GetVisibility_PasswordField_0) == 0x000001, "Wrong alignment on WB_PasswordCheckBoxWithLabelAndField_C_GetVisibility_PasswordField_0");
static_assert(sizeof(WB_PasswordCheckBoxWithLabelAndField_C_GetVisibility_PasswordField_0) == 0x000002, "Wrong size on WB_PasswordCheckBoxWithLabelAndField_C_GetVisibility_PasswordField_0");
static_assert(offsetof(WB_PasswordCheckBoxWithLabelAndField_C_GetVisibility_PasswordField_0, ReturnValue) == 0x000000, "Member 'WB_PasswordCheckBoxWithLabelAndField_C_GetVisibility_PasswordField_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PasswordCheckBoxWithLabelAndField_C_GetVisibility_PasswordField_0, CallFunc_IsChecked_ReturnValue) == 0x000001, "Member 'WB_PasswordCheckBoxWithLabelAndField_C_GetVisibility_PasswordField_0::CallFunc_IsChecked_ReturnValue' has a wrong offset!");

// Function WB_PasswordCheckBoxWithLabelAndField.WB_PasswordCheckBoxWithLabelAndField_C.Tick
// 0x003C (0x003C - 0x0000)
struct WB_PasswordCheckBoxWithLabelAndField_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_PasswordCheckBoxWithLabelAndField_C_Tick) == 0x000004, "Wrong alignment on WB_PasswordCheckBoxWithLabelAndField_C_Tick");
static_assert(sizeof(WB_PasswordCheckBoxWithLabelAndField_C_Tick) == 0x00003C, "Wrong size on WB_PasswordCheckBoxWithLabelAndField_C_Tick");
static_assert(offsetof(WB_PasswordCheckBoxWithLabelAndField_C_Tick, MyGeometry) == 0x000000, "Member 'WB_PasswordCheckBoxWithLabelAndField_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_PasswordCheckBoxWithLabelAndField_C_Tick, InDeltaTime) == 0x000038, "Member 'WB_PasswordCheckBoxWithLabelAndField_C_Tick::InDeltaTime' has a wrong offset!");

// Function WB_PasswordCheckBoxWithLabelAndField.WB_PasswordCheckBoxWithLabelAndField_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WB_PasswordCheckBoxWithLabelAndField_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_PasswordCheckBoxWithLabelAndField_C_PreConstruct) == 0x000001, "Wrong alignment on WB_PasswordCheckBoxWithLabelAndField_C_PreConstruct");
static_assert(sizeof(WB_PasswordCheckBoxWithLabelAndField_C_PreConstruct) == 0x000001, "Wrong size on WB_PasswordCheckBoxWithLabelAndField_C_PreConstruct");
static_assert(offsetof(WB_PasswordCheckBoxWithLabelAndField_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WB_PasswordCheckBoxWithLabelAndField_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WB_PasswordCheckBoxWithLabelAndField.WB_PasswordCheckBoxWithLabelAndField_C.ExecuteUbergraph_WB_PasswordCheckBoxWithLabelAndField
// 0x0068 (0x0068 - 0x0000)
struct WB_PasswordCheckBoxWithLabelAndField_C_ExecuteUbergraph_WB_PasswordCheckBoxWithLabelAndField final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTextBlock*>                     K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0028(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsChecked_ReturnValue;                    // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0066(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_PasswordCheckBoxWithLabelAndField_C_ExecuteUbergraph_WB_PasswordCheckBoxWithLabelAndField) == 0x000008, "Wrong alignment on WB_PasswordCheckBoxWithLabelAndField_C_ExecuteUbergraph_WB_PasswordCheckBoxWithLabelAndField");
static_assert(sizeof(WB_PasswordCheckBoxWithLabelAndField_C_ExecuteUbergraph_WB_PasswordCheckBoxWithLabelAndField) == 0x000068, "Wrong size on WB_PasswordCheckBoxWithLabelAndField_C_ExecuteUbergraph_WB_PasswordCheckBoxWithLabelAndField");
static_assert(offsetof(WB_PasswordCheckBoxWithLabelAndField_C_ExecuteUbergraph_WB_PasswordCheckBoxWithLabelAndField, EntryPoint) == 0x000000, "Member 'WB_PasswordCheckBoxWithLabelAndField_C_ExecuteUbergraph_WB_PasswordCheckBoxWithLabelAndField::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_PasswordCheckBoxWithLabelAndField_C_ExecuteUbergraph_WB_PasswordCheckBoxWithLabelAndField, K2Node_MakeArray_Array) == 0x000008, "Member 'WB_PasswordCheckBoxWithLabelAndField_C_ExecuteUbergraph_WB_PasswordCheckBoxWithLabelAndField::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WB_PasswordCheckBoxWithLabelAndField_C_ExecuteUbergraph_WB_PasswordCheckBoxWithLabelAndField, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'WB_PasswordCheckBoxWithLabelAndField_C_ExecuteUbergraph_WB_PasswordCheckBoxWithLabelAndField::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WB_PasswordCheckBoxWithLabelAndField_C_ExecuteUbergraph_WB_PasswordCheckBoxWithLabelAndField, K2Node_Event_MyGeometry) == 0x000028, "Member 'WB_PasswordCheckBoxWithLabelAndField_C_ExecuteUbergraph_WB_PasswordCheckBoxWithLabelAndField::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_PasswordCheckBoxWithLabelAndField_C_ExecuteUbergraph_WB_PasswordCheckBoxWithLabelAndField, K2Node_Event_InDeltaTime) == 0x000060, "Member 'WB_PasswordCheckBoxWithLabelAndField_C_ExecuteUbergraph_WB_PasswordCheckBoxWithLabelAndField::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WB_PasswordCheckBoxWithLabelAndField_C_ExecuteUbergraph_WB_PasswordCheckBoxWithLabelAndField, CallFunc_IsChecked_ReturnValue) == 0x000064, "Member 'WB_PasswordCheckBoxWithLabelAndField_C_ExecuteUbergraph_WB_PasswordCheckBoxWithLabelAndField::CallFunc_IsChecked_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PasswordCheckBoxWithLabelAndField_C_ExecuteUbergraph_WB_PasswordCheckBoxWithLabelAndField, CallFunc_Not_PreBool_ReturnValue) == 0x000065, "Member 'WB_PasswordCheckBoxWithLabelAndField_C_ExecuteUbergraph_WB_PasswordCheckBoxWithLabelAndField::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PasswordCheckBoxWithLabelAndField_C_ExecuteUbergraph_WB_PasswordCheckBoxWithLabelAndField, K2Node_Event_IsDesignTime) == 0x000066, "Member 'WB_PasswordCheckBoxWithLabelAndField_C_ExecuteUbergraph_WB_PasswordCheckBoxWithLabelAndField::K2Node_Event_IsDesignTime' has a wrong offset!");

}
