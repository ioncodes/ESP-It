#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_CheckboxAreaButton

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WB_CheckboxAreaButton.WB_CheckboxAreaButton_C.ExecuteUbergraph_WB_CheckboxAreaButton
// 0x0008 (0x0008 - 0x0000)
struct WB_CheckboxAreaButton_C_ExecuteUbergraph_WB_CheckboxAreaButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_CheckboxAreaButton_C_ExecuteUbergraph_WB_CheckboxAreaButton) == 0x000004, "Wrong alignment on WB_CheckboxAreaButton_C_ExecuteUbergraph_WB_CheckboxAreaButton");
static_assert(sizeof(WB_CheckboxAreaButton_C_ExecuteUbergraph_WB_CheckboxAreaButton) == 0x000008, "Wrong size on WB_CheckboxAreaButton_C_ExecuteUbergraph_WB_CheckboxAreaButton");
static_assert(offsetof(WB_CheckboxAreaButton_C_ExecuteUbergraph_WB_CheckboxAreaButton, EntryPoint) == 0x000000, "Member 'WB_CheckboxAreaButton_C_ExecuteUbergraph_WB_CheckboxAreaButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_CheckboxAreaButton_C_ExecuteUbergraph_WB_CheckboxAreaButton, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WB_CheckboxAreaButton_C_ExecuteUbergraph_WB_CheckboxAreaButton::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function WB_CheckboxAreaButton.WB_CheckboxAreaButton_C.OnMouseButtonDown
// 0x0220 (0x0220 - 0x0000)
struct WB_CheckboxAreaButton_C_OnMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00B0(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0168(0x00B8)()
};
static_assert(alignof(WB_CheckboxAreaButton_C_OnMouseButtonDown) == 0x000008, "Wrong alignment on WB_CheckboxAreaButton_C_OnMouseButtonDown");
static_assert(sizeof(WB_CheckboxAreaButton_C_OnMouseButtonDown) == 0x000220, "Wrong size on WB_CheckboxAreaButton_C_OnMouseButtonDown");
static_assert(offsetof(WB_CheckboxAreaButton_C_OnMouseButtonDown, MyGeometry) == 0x000000, "Member 'WB_CheckboxAreaButton_C_OnMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_CheckboxAreaButton_C_OnMouseButtonDown, MouseEvent) == 0x000038, "Member 'WB_CheckboxAreaButton_C_OnMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(WB_CheckboxAreaButton_C_OnMouseButtonDown, ReturnValue) == 0x0000B0, "Member 'WB_CheckboxAreaButton_C_OnMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CheckboxAreaButton_C_OnMouseButtonDown, CallFunc_Unhandled_ReturnValue) == 0x000168, "Member 'WB_CheckboxAreaButton_C_OnMouseButtonDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");

// Function WB_CheckboxAreaButton.WB_CheckboxAreaButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WB_CheckboxAreaButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_CheckboxAreaButton_C_PreConstruct) == 0x000001, "Wrong alignment on WB_CheckboxAreaButton_C_PreConstruct");
static_assert(sizeof(WB_CheckboxAreaButton_C_PreConstruct) == 0x000001, "Wrong size on WB_CheckboxAreaButton_C_PreConstruct");
static_assert(offsetof(WB_CheckboxAreaButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WB_CheckboxAreaButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WB_CheckboxAreaButton.WB_CheckboxAreaButton_C.ResetCheckboxStateToDeterminedTest
// 0x0058 (0x0058 - 0x0000)
struct WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest final
{
public:
	TArray<class AActor*>                         TestActors;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         NeedsUncheckedCount;                               // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NeedsCheckedCount;                                 // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x2];                                       // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23[0x1];                                       // 0x0023(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                CallFunc_GetCheckBoxState_CheckedState;            // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetTestBool_TestBool;                     // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x004E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F[0x1];                                       // 0x004F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest) == 0x000008, "Wrong alignment on WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest");
static_assert(sizeof(WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest) == 0x000058, "Wrong size on WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest");
static_assert(offsetof(WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest, TestActors) == 0x000000, "Member 'WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest::TestActors' has a wrong offset!");
static_assert(offsetof(WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest, NeedsUncheckedCount) == 0x000010, "Member 'WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest::NeedsUncheckedCount' has a wrong offset!");
static_assert(offsetof(WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest, NeedsCheckedCount) == 0x000014, "Member 'WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest::NeedsCheckedCount' has a wrong offset!");
static_assert(offsetof(WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest, Temp_bool_True_if_break_was_hit_Variable) == 0x000018, "Member 'WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest, CallFunc_Not_PreBool_ReturnValue) == 0x000019, "Member 'WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest, Temp_int_Variable) == 0x00001C, "Member 'WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest, CallFunc_Greater_IntInt_ReturnValue) == 0x000020, "Member 'WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000021, "Member 'WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000022, "Member 'WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest, CallFunc_Add_IntInt_ReturnValue_1) == 0x000028, "Member 'WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest, CallFunc_GetCheckBoxState_CheckedState) == 0x00002C, "Member 'WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest::CallFunc_GetCheckBoxState_CheckedState' has a wrong offset!");
static_assert(offsetof(WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest, K2Node_SwitchEnum_CmpSuccess) == 0x000034, "Member 'WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest, CallFunc_Subtract_IntInt_ReturnValue) == 0x000038, "Member 'WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest, CallFunc_Array_Get_Item) == 0x000040, "Member 'WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000048, "Member 'WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest, CallFunc_GetTestBool_TestBool) == 0x00004C, "Member 'WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest::CallFunc_GetTestBool_TestBool' has a wrong offset!");
static_assert(offsetof(WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00004D, "Member 'WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest, CallFunc_BooleanAND_ReturnValue) == 0x00004E, "Member 'WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest, Temp_int_Variable_1) == 0x000050, "Member 'WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000054, "Member 'WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest, CallFunc_BooleanAND_ReturnValue_1) == 0x000055, "Member 'WB_CheckboxAreaButton_C_ResetCheckboxStateToDeterminedTest::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function WB_CheckboxAreaButton.WB_CheckboxAreaButton_C.SetCheckBoxState
// 0x0001 (0x0001 - 0x0000)
struct WB_CheckboxAreaButton_C_SetCheckBoxState final
{
public:
	ECheckBoxState                                InCheckedState;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_CheckboxAreaButton_C_SetCheckBoxState) == 0x000001, "Wrong alignment on WB_CheckboxAreaButton_C_SetCheckBoxState");
static_assert(sizeof(WB_CheckboxAreaButton_C_SetCheckBoxState) == 0x000001, "Wrong size on WB_CheckboxAreaButton_C_SetCheckBoxState");
static_assert(offsetof(WB_CheckboxAreaButton_C_SetCheckBoxState, InCheckedState) == 0x000000, "Member 'WB_CheckboxAreaButton_C_SetCheckBoxState::InCheckedState' has a wrong offset!");

// Function WB_CheckboxAreaButton.WB_CheckboxAreaButton_C.SetCheckboxStateToUndeterminedTest
// 0x0010 (0x0010 - 0x0000)
struct WB_CheckboxAreaButton_C_SetCheckboxStateToUndeterminedTest final
{
public:
	class AActor*                                 TestActor;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          TestBool;                                          // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetTestBool_TestBool;                     // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                CallFunc_GetCheckBoxState_CheckedState;            // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue_1;          // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_CheckboxAreaButton_C_SetCheckboxStateToUndeterminedTest) == 0x000008, "Wrong alignment on WB_CheckboxAreaButton_C_SetCheckboxStateToUndeterminedTest");
static_assert(sizeof(WB_CheckboxAreaButton_C_SetCheckboxStateToUndeterminedTest) == 0x000010, "Wrong size on WB_CheckboxAreaButton_C_SetCheckboxStateToUndeterminedTest");
static_assert(offsetof(WB_CheckboxAreaButton_C_SetCheckboxStateToUndeterminedTest, TestActor) == 0x000000, "Member 'WB_CheckboxAreaButton_C_SetCheckboxStateToUndeterminedTest::TestActor' has a wrong offset!");
static_assert(offsetof(WB_CheckboxAreaButton_C_SetCheckboxStateToUndeterminedTest, TestBool) == 0x000008, "Member 'WB_CheckboxAreaButton_C_SetCheckboxStateToUndeterminedTest::TestBool' has a wrong offset!");
static_assert(offsetof(WB_CheckboxAreaButton_C_SetCheckboxStateToUndeterminedTest, CallFunc_GetTestBool_TestBool) == 0x000009, "Member 'WB_CheckboxAreaButton_C_SetCheckboxStateToUndeterminedTest::CallFunc_GetTestBool_TestBool' has a wrong offset!");
static_assert(offsetof(WB_CheckboxAreaButton_C_SetCheckboxStateToUndeterminedTest, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x00000A, "Member 'WB_CheckboxAreaButton_C_SetCheckboxStateToUndeterminedTest::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CheckboxAreaButton_C_SetCheckboxStateToUndeterminedTest, CallFunc_GetCheckBoxState_CheckedState) == 0x00000B, "Member 'WB_CheckboxAreaButton_C_SetCheckboxStateToUndeterminedTest::CallFunc_GetCheckBoxState_CheckedState' has a wrong offset!");
static_assert(offsetof(WB_CheckboxAreaButton_C_SetCheckboxStateToUndeterminedTest, CallFunc_NotEqual_BoolBool_ReturnValue_1) == 0x00000C, "Member 'WB_CheckboxAreaButton_C_SetCheckboxStateToUndeterminedTest::CallFunc_NotEqual_BoolBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_CheckboxAreaButton_C_SetCheckboxStateToUndeterminedTest, K2Node_SwitchEnum_CmpSuccess) == 0x00000D, "Member 'WB_CheckboxAreaButton_C_SetCheckboxStateToUndeterminedTest::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function WB_CheckboxAreaButton.WB_CheckboxAreaButton_C.GetCheckBoxState
// 0x0002 (0x0002 - 0x0000)
struct WB_CheckboxAreaButton_C_GetCheckBoxState final
{
public:
	ECheckBoxState                                CheckedState;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                CallFunc_GetCheckedState_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_CheckboxAreaButton_C_GetCheckBoxState) == 0x000001, "Wrong alignment on WB_CheckboxAreaButton_C_GetCheckBoxState");
static_assert(sizeof(WB_CheckboxAreaButton_C_GetCheckBoxState) == 0x000002, "Wrong size on WB_CheckboxAreaButton_C_GetCheckBoxState");
static_assert(offsetof(WB_CheckboxAreaButton_C_GetCheckBoxState, CheckedState) == 0x000000, "Member 'WB_CheckboxAreaButton_C_GetCheckBoxState::CheckedState' has a wrong offset!");
static_assert(offsetof(WB_CheckboxAreaButton_C_GetCheckBoxState, CallFunc_GetCheckedState_ReturnValue) == 0x000001, "Member 'WB_CheckboxAreaButton_C_GetCheckBoxState::CallFunc_GetCheckedState_ReturnValue' has a wrong offset!");

// Function WB_CheckboxAreaButton.WB_CheckboxAreaButton_C.GetTestBool
// 0x0010 (0x0010 - 0x0000)
struct WB_CheckboxAreaButton_C_GetTestBool final
{
public:
	class AActor*                                 TestActor;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          TestBool;                                          // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_CheckboxAreaButton_C_GetTestBool) == 0x000008, "Wrong alignment on WB_CheckboxAreaButton_C_GetTestBool");
static_assert(sizeof(WB_CheckboxAreaButton_C_GetTestBool) == 0x000010, "Wrong size on WB_CheckboxAreaButton_C_GetTestBool");
static_assert(offsetof(WB_CheckboxAreaButton_C_GetTestBool, TestActor) == 0x000000, "Member 'WB_CheckboxAreaButton_C_GetTestBool::TestActor' has a wrong offset!");
static_assert(offsetof(WB_CheckboxAreaButton_C_GetTestBool, TestBool) == 0x000008, "Member 'WB_CheckboxAreaButton_C_GetTestBool::TestBool' has a wrong offset!");

}
