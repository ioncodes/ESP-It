#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ControllerIconWithActionName

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "ETeamID_structs.hpp"


namespace SDK::Params
{

// Function WB_ControllerIconWithActionName.WB_ControllerIconWithActionName_C.ExecuteUbergraph_WB_ControllerIconWithActionName
// 0x0008 (0x0008 - 0x0000)
struct WB_ControllerIconWithActionName_C_ExecuteUbergraph_WB_ControllerIconWithActionName final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ControllerIconWithActionName_C_ExecuteUbergraph_WB_ControllerIconWithActionName) == 0x000004, "Wrong alignment on WB_ControllerIconWithActionName_C_ExecuteUbergraph_WB_ControllerIconWithActionName");
static_assert(sizeof(WB_ControllerIconWithActionName_C_ExecuteUbergraph_WB_ControllerIconWithActionName) == 0x000008, "Wrong size on WB_ControllerIconWithActionName_C_ExecuteUbergraph_WB_ControllerIconWithActionName");
static_assert(offsetof(WB_ControllerIconWithActionName_C_ExecuteUbergraph_WB_ControllerIconWithActionName, EntryPoint) == 0x000000, "Member 'WB_ControllerIconWithActionName_C_ExecuteUbergraph_WB_ControllerIconWithActionName::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_ExecuteUbergraph_WB_ControllerIconWithActionName, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WB_ControllerIconWithActionName_C_ExecuteUbergraph_WB_ControllerIconWithActionName::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function WB_ControllerIconWithActionName.WB_ControllerIconWithActionName_C.GetActionTextForIndex
// 0x0060 (0x0060 - 0x0000)
struct WB_ControllerIconWithActionName_C_GetActionTextForIndex final
{
public:
	int32                                         Index_0;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ReturnParm)
	ETeamID                                       Team;                                              // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ActionNameLocalized;                               // 0x0020(0x0010)(Edit, BlueprintVisible)
	class FName                                   ActionName;                                        // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x0048(0x0010)()
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ControllerIconWithActionName_C_GetActionTextForIndex) == 0x000008, "Wrong alignment on WB_ControllerIconWithActionName_C_GetActionTextForIndex");
static_assert(sizeof(WB_ControllerIconWithActionName_C_GetActionTextForIndex) == 0x000060, "Wrong size on WB_ControllerIconWithActionName_C_GetActionTextForIndex");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetActionTextForIndex, Index_0) == 0x000000, "Member 'WB_ControllerIconWithActionName_C_GetActionTextForIndex::Index_0' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetActionTextForIndex, ReturnValue) == 0x000008, "Member 'WB_ControllerIconWithActionName_C_GetActionTextForIndex::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetActionTextForIndex, Team) == 0x000018, "Member 'WB_ControllerIconWithActionName_C_GetActionTextForIndex::Team' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetActionTextForIndex, ActionNameLocalized) == 0x000020, "Member 'WB_ControllerIconWithActionName_C_GetActionTextForIndex::ActionNameLocalized' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetActionTextForIndex, ActionName) == 0x000030, "Member 'WB_ControllerIconWithActionName_C_GetActionTextForIndex::ActionName' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetActionTextForIndex, K2Node_SwitchEnum_CmpSuccess) == 0x000038, "Member 'WB_ControllerIconWithActionName_C_GetActionTextForIndex::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetActionTextForIndex, CallFunc_Array_Length_ReturnValue) == 0x00003C, "Member 'WB_ControllerIconWithActionName_C_GetActionTextForIndex::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetActionTextForIndex, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'WB_ControllerIconWithActionName_C_GetActionTextForIndex::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetActionTextForIndex, CallFunc_Conv_NameToText_ReturnValue) == 0x000048, "Member 'WB_ControllerIconWithActionName_C_GetActionTextForIndex::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetActionTextForIndex, K2Node_SwitchName_CmpSuccess) == 0x000058, "Member 'WB_ControllerIconWithActionName_C_GetActionTextForIndex::K2Node_SwitchName_CmpSuccess' has a wrong offset!");

// Function WB_ControllerIconWithActionName.WB_ControllerIconWithActionName_C.GetColor_0
// 0x0028 (0x0028 - 0x0000)
struct WB_ControllerIconWithActionName_C_GetColor_0 final
{
public:
	struct FSlateColor                            ReturnValue;                                       // 0x0000(0x0014)(Parm, OutParm, ReturnParm)
	struct FSlateColor                            CallFunc_GetColorForIndex_ReturnValue;             // 0x0014(0x0014)()
};
static_assert(alignof(WB_ControllerIconWithActionName_C_GetColor_0) == 0x000004, "Wrong alignment on WB_ControllerIconWithActionName_C_GetColor_0");
static_assert(sizeof(WB_ControllerIconWithActionName_C_GetColor_0) == 0x000028, "Wrong size on WB_ControllerIconWithActionName_C_GetColor_0");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetColor_0, ReturnValue) == 0x000000, "Member 'WB_ControllerIconWithActionName_C_GetColor_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetColor_0, CallFunc_GetColorForIndex_ReturnValue) == 0x000014, "Member 'WB_ControllerIconWithActionName_C_GetColor_0::CallFunc_GetColorForIndex_ReturnValue' has a wrong offset!");

// Function WB_ControllerIconWithActionName.WB_ControllerIconWithActionName_C.GetColor_1
// 0x0028 (0x0028 - 0x0000)
struct WB_ControllerIconWithActionName_C_GetColor_1 final
{
public:
	struct FSlateColor                            ReturnValue;                                       // 0x0000(0x0014)(Parm, OutParm, ReturnParm)
	struct FSlateColor                            CallFunc_GetColorForIndex_ReturnValue;             // 0x0014(0x0014)()
};
static_assert(alignof(WB_ControllerIconWithActionName_C_GetColor_1) == 0x000004, "Wrong alignment on WB_ControllerIconWithActionName_C_GetColor_1");
static_assert(sizeof(WB_ControllerIconWithActionName_C_GetColor_1) == 0x000028, "Wrong size on WB_ControllerIconWithActionName_C_GetColor_1");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetColor_1, ReturnValue) == 0x000000, "Member 'WB_ControllerIconWithActionName_C_GetColor_1::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetColor_1, CallFunc_GetColorForIndex_ReturnValue) == 0x000014, "Member 'WB_ControllerIconWithActionName_C_GetColor_1::CallFunc_GetColorForIndex_ReturnValue' has a wrong offset!");

// Function WB_ControllerIconWithActionName.WB_ControllerIconWithActionName_C.GetColor_2
// 0x0028 (0x0028 - 0x0000)
struct WB_ControllerIconWithActionName_C_GetColor_2 final
{
public:
	struct FSlateColor                            ReturnValue;                                       // 0x0000(0x0014)(Parm, OutParm, ReturnParm)
	struct FSlateColor                            CallFunc_GetColorForIndex_ReturnValue;             // 0x0014(0x0014)()
};
static_assert(alignof(WB_ControllerIconWithActionName_C_GetColor_2) == 0x000004, "Wrong alignment on WB_ControllerIconWithActionName_C_GetColor_2");
static_assert(sizeof(WB_ControllerIconWithActionName_C_GetColor_2) == 0x000028, "Wrong size on WB_ControllerIconWithActionName_C_GetColor_2");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetColor_2, ReturnValue) == 0x000000, "Member 'WB_ControllerIconWithActionName_C_GetColor_2::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetColor_2, CallFunc_GetColorForIndex_ReturnValue) == 0x000014, "Member 'WB_ControllerIconWithActionName_C_GetColor_2::CallFunc_GetColorForIndex_ReturnValue' has a wrong offset!");

// Function WB_ControllerIconWithActionName.WB_ControllerIconWithActionName_C.GetColorForIndex
// 0x0074 (0x0074 - 0x0000)
struct WB_ControllerIconWithActionName_C_GetColorForIndex final
{
public:
	int32                                         Index_0;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            ReturnValue;                                       // 0x0004(0x0014)(Parm, OutParm, ReturnParm)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0018(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x002C(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0040(0x0014)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x005C(0x0014)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ControllerIconWithActionName_C_GetColorForIndex) == 0x000004, "Wrong alignment on WB_ControllerIconWithActionName_C_GetColorForIndex");
static_assert(sizeof(WB_ControllerIconWithActionName_C_GetColorForIndex) == 0x000074, "Wrong size on WB_ControllerIconWithActionName_C_GetColorForIndex");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetColorForIndex, Index_0) == 0x000000, "Member 'WB_ControllerIconWithActionName_C_GetColorForIndex::Index_0' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetColorForIndex, ReturnValue) == 0x000004, "Member 'WB_ControllerIconWithActionName_C_GetColorForIndex::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetColorForIndex, K2Node_MakeStruct_SlateColor) == 0x000018, "Member 'WB_ControllerIconWithActionName_C_GetColorForIndex::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetColorForIndex, K2Node_MakeStruct_SlateColor_1) == 0x00002C, "Member 'WB_ControllerIconWithActionName_C_GetColorForIndex::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetColorForIndex, K2Node_MakeStruct_SlateColor_2) == 0x000040, "Member 'WB_ControllerIconWithActionName_C_GetColorForIndex::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetColorForIndex, K2Node_SwitchEnum_CmpSuccess) == 0x000054, "Member 'WB_ControllerIconWithActionName_C_GetColorForIndex::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetColorForIndex, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'WB_ControllerIconWithActionName_C_GetColorForIndex::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetColorForIndex, K2Node_MakeStruct_SlateColor_3) == 0x00005C, "Member 'WB_ControllerIconWithActionName_C_GetColorForIndex::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetColorForIndex, CallFunc_Less_IntInt_ReturnValue) == 0x000070, "Member 'WB_ControllerIconWithActionName_C_GetColorForIndex::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function WB_ControllerIconWithActionName.WB_ControllerIconWithActionName_C.GetText_0
// 0x0040 (0x0040 - 0x0000)
struct WB_ControllerIconWithActionName_C_GetText_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm)
	int32                                         Index_0;                                           // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ActionName;                                        // 0x0014(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ActionNameLocalized;                               // 0x0020(0x0010)(Edit, BlueprintVisible)
	class FText                                   CallFunc_GetActionTextForIndex_ReturnValue;        // 0x0030(0x0010)()
};
static_assert(alignof(WB_ControllerIconWithActionName_C_GetText_0) == 0x000008, "Wrong alignment on WB_ControllerIconWithActionName_C_GetText_0");
static_assert(sizeof(WB_ControllerIconWithActionName_C_GetText_0) == 0x000040, "Wrong size on WB_ControllerIconWithActionName_C_GetText_0");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetText_0, ReturnValue) == 0x000000, "Member 'WB_ControllerIconWithActionName_C_GetText_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetText_0, Index_0) == 0x000010, "Member 'WB_ControllerIconWithActionName_C_GetText_0::Index_0' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetText_0, ActionName) == 0x000014, "Member 'WB_ControllerIconWithActionName_C_GetText_0::ActionName' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetText_0, ActionNameLocalized) == 0x000020, "Member 'WB_ControllerIconWithActionName_C_GetText_0::ActionNameLocalized' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetText_0, CallFunc_GetActionTextForIndex_ReturnValue) == 0x000030, "Member 'WB_ControllerIconWithActionName_C_GetText_0::CallFunc_GetActionTextForIndex_ReturnValue' has a wrong offset!");

// Function WB_ControllerIconWithActionName.WB_ControllerIconWithActionName_C.GetText_1
// 0x0020 (0x0020 - 0x0000)
struct WB_ControllerIconWithActionName_C_GetText_1 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm)
	class FText                                   CallFunc_GetActionTextForIndex_ReturnValue;        // 0x0010(0x0010)()
};
static_assert(alignof(WB_ControllerIconWithActionName_C_GetText_1) == 0x000008, "Wrong alignment on WB_ControllerIconWithActionName_C_GetText_1");
static_assert(sizeof(WB_ControllerIconWithActionName_C_GetText_1) == 0x000020, "Wrong size on WB_ControllerIconWithActionName_C_GetText_1");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetText_1, ReturnValue) == 0x000000, "Member 'WB_ControllerIconWithActionName_C_GetText_1::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetText_1, CallFunc_GetActionTextForIndex_ReturnValue) == 0x000010, "Member 'WB_ControllerIconWithActionName_C_GetText_1::CallFunc_GetActionTextForIndex_ReturnValue' has a wrong offset!");

// Function WB_ControllerIconWithActionName.WB_ControllerIconWithActionName_C.GetText_2
// 0x0010 (0x0010 - 0x0000)
struct WB_ControllerIconWithActionName_C_GetText_2 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(WB_ControllerIconWithActionName_C_GetText_2) == 0x000008, "Wrong alignment on WB_ControllerIconWithActionName_C_GetText_2");
static_assert(sizeof(WB_ControllerIconWithActionName_C_GetText_2) == 0x000010, "Wrong size on WB_ControllerIconWithActionName_C_GetText_2");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetText_2, ReturnValue) == 0x000000, "Member 'WB_ControllerIconWithActionName_C_GetText_2::ReturnValue' has a wrong offset!");

// Function WB_ControllerIconWithActionName.WB_ControllerIconWithActionName_C.GetTextVisibility_0
// 0x0002 (0x0002 - 0x0000)
struct WB_ControllerIconWithActionName_C_GetTextVisibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetVisibilityForIndex_ReturnValue;        // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ControllerIconWithActionName_C_GetTextVisibility_0) == 0x000001, "Wrong alignment on WB_ControllerIconWithActionName_C_GetTextVisibility_0");
static_assert(sizeof(WB_ControllerIconWithActionName_C_GetTextVisibility_0) == 0x000002, "Wrong size on WB_ControllerIconWithActionName_C_GetTextVisibility_0");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetTextVisibility_0, ReturnValue) == 0x000000, "Member 'WB_ControllerIconWithActionName_C_GetTextVisibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetTextVisibility_0, CallFunc_GetVisibilityForIndex_ReturnValue) == 0x000001, "Member 'WB_ControllerIconWithActionName_C_GetTextVisibility_0::CallFunc_GetVisibilityForIndex_ReturnValue' has a wrong offset!");

// Function WB_ControllerIconWithActionName.WB_ControllerIconWithActionName_C.GetTextVisibility_1
// 0x0002 (0x0002 - 0x0000)
struct WB_ControllerIconWithActionName_C_GetTextVisibility_1 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetVisibilityForIndex_ReturnValue;        // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ControllerIconWithActionName_C_GetTextVisibility_1) == 0x000001, "Wrong alignment on WB_ControllerIconWithActionName_C_GetTextVisibility_1");
static_assert(sizeof(WB_ControllerIconWithActionName_C_GetTextVisibility_1) == 0x000002, "Wrong size on WB_ControllerIconWithActionName_C_GetTextVisibility_1");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetTextVisibility_1, ReturnValue) == 0x000000, "Member 'WB_ControllerIconWithActionName_C_GetTextVisibility_1::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetTextVisibility_1, CallFunc_GetVisibilityForIndex_ReturnValue) == 0x000001, "Member 'WB_ControllerIconWithActionName_C_GetTextVisibility_1::CallFunc_GetVisibilityForIndex_ReturnValue' has a wrong offset!");

// Function WB_ControllerIconWithActionName.WB_ControllerIconWithActionName_C.GetTextVisibility_2
// 0x0002 (0x0002 - 0x0000)
struct WB_ControllerIconWithActionName_C_GetTextVisibility_2 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetVisibilityForIndex_ReturnValue;        // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ControllerIconWithActionName_C_GetTextVisibility_2) == 0x000001, "Wrong alignment on WB_ControllerIconWithActionName_C_GetTextVisibility_2");
static_assert(sizeof(WB_ControllerIconWithActionName_C_GetTextVisibility_2) == 0x000002, "Wrong size on WB_ControllerIconWithActionName_C_GetTextVisibility_2");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetTextVisibility_2, ReturnValue) == 0x000000, "Member 'WB_ControllerIconWithActionName_C_GetTextVisibility_2::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetTextVisibility_2, CallFunc_GetVisibilityForIndex_ReturnValue) == 0x000001, "Member 'WB_ControllerIconWithActionName_C_GetTextVisibility_2::CallFunc_GetVisibilityForIndex_ReturnValue' has a wrong offset!");

// Function WB_ControllerIconWithActionName.WB_ControllerIconWithActionName_C.GetVisibilityForIndex
// 0x0014 (0x0014 - 0x0000)
struct WB_ControllerIconWithActionName_C_GetVisibilityForIndex final
{
public:
	int32                                         Index_0;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCollapse;                                         // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              ReturnValue;                                       // 0x0005(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ControllerIconWithActionName_C_GetVisibilityForIndex) == 0x000004, "Wrong alignment on WB_ControllerIconWithActionName_C_GetVisibilityForIndex");
static_assert(sizeof(WB_ControllerIconWithActionName_C_GetVisibilityForIndex) == 0x000014, "Wrong size on WB_ControllerIconWithActionName_C_GetVisibilityForIndex");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetVisibilityForIndex, Index_0) == 0x000000, "Member 'WB_ControllerIconWithActionName_C_GetVisibilityForIndex::Index_0' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetVisibilityForIndex, bCollapse) == 0x000004, "Member 'WB_ControllerIconWithActionName_C_GetVisibilityForIndex::bCollapse' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetVisibilityForIndex, ReturnValue) == 0x000005, "Member 'WB_ControllerIconWithActionName_C_GetVisibilityForIndex::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetVisibilityForIndex, Temp_bool_Variable) == 0x000006, "Member 'WB_ControllerIconWithActionName_C_GetVisibilityForIndex::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetVisibilityForIndex, Temp_byte_Variable) == 0x000007, "Member 'WB_ControllerIconWithActionName_C_GetVisibilityForIndex::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetVisibilityForIndex, Temp_byte_Variable_1) == 0x000008, "Member 'WB_ControllerIconWithActionName_C_GetVisibilityForIndex::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetVisibilityForIndex, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'WB_ControllerIconWithActionName_C_GetVisibilityForIndex::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetVisibilityForIndex, CallFunc_Less_IntInt_ReturnValue) == 0x000010, "Member 'WB_ControllerIconWithActionName_C_GetVisibilityForIndex::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_GetVisibilityForIndex, K2Node_Select_Default) == 0x000011, "Member 'WB_ControllerIconWithActionName_C_GetVisibilityForIndex::K2Node_Select_Default' has a wrong offset!");

// Function WB_ControllerIconWithActionName.WB_ControllerIconWithActionName_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WB_ControllerIconWithActionName_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ControllerIconWithActionName_C_PreConstruct) == 0x000001, "Wrong alignment on WB_ControllerIconWithActionName_C_PreConstruct");
static_assert(sizeof(WB_ControllerIconWithActionName_C_PreConstruct) == 0x000001, "Wrong size on WB_ControllerIconWithActionName_C_PreConstruct");
static_assert(offsetof(WB_ControllerIconWithActionName_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WB_ControllerIconWithActionName_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WB_ControllerIconWithActionName.WB_ControllerIconWithActionName_C.UpdateStyle
// 0x0088 (0x0088 - 0x0000)
struct WB_ControllerIconWithActionName_C_UpdateStyle final
{
public:
	TArray<class UTextBlock*>                     Slashes;                                           // 0x0000(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<class UTextBlock*>                     Texts;                                             // 0x0010(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         CurrentIndex;                                      // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextBlock*                             CurrentText;                                       // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextBlock*                             CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            CallFunc_GetColorForIndex_ReturnValue;             // 0x0048(0x0014)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetVisibilityForIndex_ReturnValue;        // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62[0x6];                                       // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetActionTextForIndex_ReturnValue;        // 0x0068(0x0010)()
	TArray<class UTextBlock*>                     K2Node_MakeArray_Array;                            // 0x0078(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(WB_ControllerIconWithActionName_C_UpdateStyle) == 0x000008, "Wrong alignment on WB_ControllerIconWithActionName_C_UpdateStyle");
static_assert(sizeof(WB_ControllerIconWithActionName_C_UpdateStyle) == 0x000088, "Wrong size on WB_ControllerIconWithActionName_C_UpdateStyle");
static_assert(offsetof(WB_ControllerIconWithActionName_C_UpdateStyle, Slashes) == 0x000000, "Member 'WB_ControllerIconWithActionName_C_UpdateStyle::Slashes' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_UpdateStyle, Texts) == 0x000010, "Member 'WB_ControllerIconWithActionName_C_UpdateStyle::Texts' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_UpdateStyle, CurrentIndex) == 0x000020, "Member 'WB_ControllerIconWithActionName_C_UpdateStyle::CurrentIndex' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_UpdateStyle, CurrentText) == 0x000028, "Member 'WB_ControllerIconWithActionName_C_UpdateStyle::CurrentText' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_UpdateStyle, Temp_int_Array_Index_Variable) == 0x000030, "Member 'WB_ControllerIconWithActionName_C_UpdateStyle::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_UpdateStyle, Temp_int_Loop_Counter_Variable) == 0x000034, "Member 'WB_ControllerIconWithActionName_C_UpdateStyle::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_UpdateStyle, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'WB_ControllerIconWithActionName_C_UpdateStyle::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_UpdateStyle, CallFunc_Array_Get_Item) == 0x000040, "Member 'WB_ControllerIconWithActionName_C_UpdateStyle::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_UpdateStyle, CallFunc_GetColorForIndex_ReturnValue) == 0x000048, "Member 'WB_ControllerIconWithActionName_C_UpdateStyle::CallFunc_GetColorForIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_UpdateStyle, CallFunc_Array_Length_ReturnValue) == 0x00005C, "Member 'WB_ControllerIconWithActionName_C_UpdateStyle::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_UpdateStyle, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'WB_ControllerIconWithActionName_C_UpdateStyle::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_UpdateStyle, CallFunc_GetVisibilityForIndex_ReturnValue) == 0x000061, "Member 'WB_ControllerIconWithActionName_C_UpdateStyle::CallFunc_GetVisibilityForIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_UpdateStyle, CallFunc_GetActionTextForIndex_ReturnValue) == 0x000068, "Member 'WB_ControllerIconWithActionName_C_UpdateStyle::CallFunc_GetActionTextForIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ControllerIconWithActionName_C_UpdateStyle, K2Node_MakeArray_Array) == 0x000078, "Member 'WB_ControllerIconWithActionName_C_UpdateStyle::K2Node_MakeArray_Array' has a wrong offset!");

}
