#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_CauldronBombTaskEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WB_CauldronBombTaskEntry.WB_CauldronBombTaskEntry_C.ExecuteUbergraph_WB_CauldronBombTaskEntry
// 0x0100 (0x0100 - 0x0000)
struct WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetExplodeText_ExplodeText;               // 0x0008(0x0010)()
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0040(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AB_SabotageBomb_C*>              CallFunc_GetAllActorsOfClass_OutActors;            // 0x0080(0x0010)(ReferenceParm)
	bool                                          Temp_bool_Variable;                                // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_SabotageBomb_C*                      CallFunc_Array_Get_Item;                           // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class AB_SabotagePortal_C*>            CallFunc_GetAllActorsOfClass_OutActors_1;          // 0x00A0(0x0010)(ReferenceParm)
	int32                                         CallFunc_GetExplodeTime_ExplodeTime;               // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_SabotagePortal_C*                    CallFunc_Array_Get_Item_1;                         // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_MathExpression_ReturnValue;                 // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D5[0x3];                                       // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x00D8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x00E8(0x0014)()
};
static_assert(alignof(WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry) == 0x000008, "Wrong alignment on WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry");
static_assert(sizeof(WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry) == 0x000100, "Wrong size on WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry, EntryPoint) == 0x000000, "Member 'WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry, CallFunc_GetExplodeText_ExplodeText) == 0x000008, "Member 'WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry::CallFunc_GetExplodeText_ExplodeText' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry, Temp_struct_Variable) == 0x000018, "Member 'WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry, Temp_struct_Variable_1) == 0x000028, "Member 'WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000038, "Member 'WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry, K2Node_Event_MyGeometry) == 0x000040, "Member 'WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry, K2Node_Event_InDeltaTime) == 0x000078, "Member 'WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry, CallFunc_GetAllActorsOfClass_OutActors) == 0x000080, "Member 'WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry, Temp_bool_Variable) == 0x000090, "Member 'WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry, CallFunc_Array_Get_Item) == 0x000098, "Member 'WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry, CallFunc_GetAllActorsOfClass_OutActors_1) == 0x0000A0, "Member 'WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry::CallFunc_GetAllActorsOfClass_OutActors_1' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry, CallFunc_GetExplodeTime_ExplodeTime) == 0x0000B0, "Member 'WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry::CallFunc_GetExplodeTime_ExplodeTime' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry, CallFunc_Array_Get_Item_1) == 0x0000B8, "Member 'WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry, CallFunc_Conv_IntToDouble_ReturnValue_1) == 0x0000C0, "Member 'WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry::CallFunc_Conv_IntToDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry, K2Node_MathExpression_ReturnValue) == 0x0000C8, "Member 'WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry::K2Node_MathExpression_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry, CallFunc_FTrunc_ReturnValue) == 0x0000D0, "Member 'WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000D4, "Member 'WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry, K2Node_Select_Default) == 0x0000D8, "Member 'WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry, K2Node_MakeStruct_SlateColor) == 0x0000E8, "Member 'WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function WB_CauldronBombTaskEntry.WB_CauldronBombTaskEntry_C.GetExplodeText
// 0x0110 (0x0110 - 0x0000)
struct WB_CauldronBombTaskEntry_C_GetExplodeText final
{
public:
	class FText                                   ExplodeText;                                       // 0x0000(0x0010)(Parm, OutParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0020(0x0048)(HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0070(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0080(0x0010)()
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00A0(0x0048)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x00E8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x00F8(0x0010)()
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_CauldronBombTaskEntry_C_GetExplodeText) == 0x000008, "Wrong alignment on WB_CauldronBombTaskEntry_C_GetExplodeText");
static_assert(sizeof(WB_CauldronBombTaskEntry_C_GetExplodeText) == 0x000110, "Wrong size on WB_CauldronBombTaskEntry_C_GetExplodeText");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_GetExplodeText, ExplodeText) == 0x000000, "Member 'WB_CauldronBombTaskEntry_C_GetExplodeText::ExplodeText' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_GetExplodeText, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WB_CauldronBombTaskEntry_C_GetExplodeText::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_GetExplodeText, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000018, "Member 'WB_CauldronBombTaskEntry_C_GetExplodeText::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_GetExplodeText, K2Node_MakeStruct_FormatArgumentData) == 0x000020, "Member 'WB_CauldronBombTaskEntry_C_GetExplodeText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_GetExplodeText, CallFunc_Greater_IntInt_ReturnValue) == 0x000068, "Member 'WB_CauldronBombTaskEntry_C_GetExplodeText::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_GetExplodeText, K2Node_MakeArray_Array) == 0x000070, "Member 'WB_CauldronBombTaskEntry_C_GetExplodeText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_GetExplodeText, CallFunc_Format_ReturnValue) == 0x000080, "Member 'WB_CauldronBombTaskEntry_C_GetExplodeText::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_GetExplodeText, CallFunc_Conv_IntToInt64_ReturnValue_1) == 0x000090, "Member 'WB_CauldronBombTaskEntry_C_GetExplodeText::CallFunc_Conv_IntToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_GetExplodeText, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000098, "Member 'WB_CauldronBombTaskEntry_C_GetExplodeText::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_GetExplodeText, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000A0, "Member 'WB_CauldronBombTaskEntry_C_GetExplodeText::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_GetExplodeText, K2Node_MakeArray_Array_1) == 0x0000E8, "Member 'WB_CauldronBombTaskEntry_C_GetExplodeText::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_GetExplodeText, CallFunc_Format_ReturnValue_1) == 0x0000F8, "Member 'WB_CauldronBombTaskEntry_C_GetExplodeText::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_GetExplodeText, CallFunc_IsValid_ReturnValue_1) == 0x000108, "Member 'WB_CauldronBombTaskEntry_C_GetExplodeText::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WB_CauldronBombTaskEntry.WB_CauldronBombTaskEntry_C.GetExplodeTime
// 0x0008 (0x0008 - 0x0000)
struct WB_CauldronBombTaskEntry_C_GetExplodeTime final
{
public:
	int32                                         ExplodeTime;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_CauldronBombTaskEntry_C_GetExplodeTime) == 0x000004, "Wrong alignment on WB_CauldronBombTaskEntry_C_GetExplodeTime");
static_assert(sizeof(WB_CauldronBombTaskEntry_C_GetExplodeTime) == 0x000008, "Wrong size on WB_CauldronBombTaskEntry_C_GetExplodeTime");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_GetExplodeTime, ExplodeTime) == 0x000000, "Member 'WB_CauldronBombTaskEntry_C_GetExplodeTime::ExplodeTime' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_GetExplodeTime, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'WB_CauldronBombTaskEntry_C_GetExplodeTime::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_GetExplodeTime, CallFunc_Greater_IntInt_ReturnValue) == 0x000005, "Member 'WB_CauldronBombTaskEntry_C_GetExplodeTime::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_GetExplodeTime, CallFunc_IsValid_ReturnValue_1) == 0x000006, "Member 'WB_CauldronBombTaskEntry_C_GetExplodeTime::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_GetExplodeTime, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000007, "Member 'WB_CauldronBombTaskEntry_C_GetExplodeTime::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");

// Function WB_CauldronBombTaskEntry.WB_CauldronBombTaskEntry_C.GetVisibility_0
// 0x000C (0x000C - 0x0000)
struct WB_CauldronBombTaskEntry_C_GetVisibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetExplodeTime_ExplodeTime;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_CauldronBombTaskEntry_C_GetVisibility_0) == 0x000004, "Wrong alignment on WB_CauldronBombTaskEntry_C_GetVisibility_0");
static_assert(sizeof(WB_CauldronBombTaskEntry_C_GetVisibility_0) == 0x00000C, "Wrong size on WB_CauldronBombTaskEntry_C_GetVisibility_0");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_GetVisibility_0, ReturnValue) == 0x000000, "Member 'WB_CauldronBombTaskEntry_C_GetVisibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_GetVisibility_0, Temp_bool_Variable) == 0x000001, "Member 'WB_CauldronBombTaskEntry_C_GetVisibility_0::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_GetVisibility_0, Temp_byte_Variable) == 0x000002, "Member 'WB_CauldronBombTaskEntry_C_GetVisibility_0::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_GetVisibility_0, Temp_byte_Variable_1) == 0x000003, "Member 'WB_CauldronBombTaskEntry_C_GetVisibility_0::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_GetVisibility_0, CallFunc_GetExplodeTime_ExplodeTime) == 0x000004, "Member 'WB_CauldronBombTaskEntry_C_GetVisibility_0::CallFunc_GetExplodeTime_ExplodeTime' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_GetVisibility_0, CallFunc_Greater_IntInt_ReturnValue) == 0x000008, "Member 'WB_CauldronBombTaskEntry_C_GetVisibility_0::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_GetVisibility_0, K2Node_Select_Default) == 0x000009, "Member 'WB_CauldronBombTaskEntry_C_GetVisibility_0::K2Node_Select_Default' has a wrong offset!");

// Function WB_CauldronBombTaskEntry.WB_CauldronBombTaskEntry_C.Tick
// 0x003C (0x003C - 0x0000)
struct WB_CauldronBombTaskEntry_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_CauldronBombTaskEntry_C_Tick) == 0x000004, "Wrong alignment on WB_CauldronBombTaskEntry_C_Tick");
static_assert(sizeof(WB_CauldronBombTaskEntry_C_Tick) == 0x00003C, "Wrong size on WB_CauldronBombTaskEntry_C_Tick");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_Tick, MyGeometry) == 0x000000, "Member 'WB_CauldronBombTaskEntry_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_CauldronBombTaskEntry_C_Tick, InDeltaTime) == 0x000038, "Member 'WB_CauldronBombTaskEntry_C_Tick::InDeltaTime' has a wrong offset!");

}
