#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_TaskProgressBar

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WB_TaskProgressBar.WB_TaskProgressBar_C.ExecuteUbergraph_WB_TaskProgressBar
// 0x0050 (0x0050 - 0x0000)
struct WB_TaskProgressBar_C_ExecuteUbergraph_WB_TaskProgressBar final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_TaskProgressBar_C_ExecuteUbergraph_WB_TaskProgressBar) == 0x000008, "Wrong alignment on WB_TaskProgressBar_C_ExecuteUbergraph_WB_TaskProgressBar");
static_assert(sizeof(WB_TaskProgressBar_C_ExecuteUbergraph_WB_TaskProgressBar) == 0x000050, "Wrong size on WB_TaskProgressBar_C_ExecuteUbergraph_WB_TaskProgressBar");
static_assert(offsetof(WB_TaskProgressBar_C_ExecuteUbergraph_WB_TaskProgressBar, EntryPoint) == 0x000000, "Member 'WB_TaskProgressBar_C_ExecuteUbergraph_WB_TaskProgressBar::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_TaskProgressBar_C_ExecuteUbergraph_WB_TaskProgressBar, K2Node_Event_MyGeometry) == 0x000004, "Member 'WB_TaskProgressBar_C_ExecuteUbergraph_WB_TaskProgressBar::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_TaskProgressBar_C_ExecuteUbergraph_WB_TaskProgressBar, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'WB_TaskProgressBar_C_ExecuteUbergraph_WB_TaskProgressBar::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WB_TaskProgressBar_C_ExecuteUbergraph_WB_TaskProgressBar, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000040, "Member 'WB_TaskProgressBar_C_ExecuteUbergraph_WB_TaskProgressBar::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TaskProgressBar_C_ExecuteUbergraph_WB_TaskProgressBar, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000048, "Member 'WB_TaskProgressBar_C_ExecuteUbergraph_WB_TaskProgressBar::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

// Function WB_TaskProgressBar.WB_TaskProgressBar_C.Get_TaskProgress_Percent_0
// 0x0058 (0x0058 - 0x0000)
struct WB_TaskProgressBar_C_Get_TaskProgress_Percent_0 final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CB0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AB_ImpostorGameState_C*                 K2Node_DynamicCast_AsB_Impostor_Game_State;        // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CB1[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CB2[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FInterpTo_ReturnValue;                    // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_FunctionResult_ReturnValue_ImplicitCast;    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_FunctionResult_ReturnValue_ImplicitCast_1;  // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_TaskProgressBar_C_Get_TaskProgress_Percent_0) == 0x000008, "Wrong alignment on WB_TaskProgressBar_C_Get_TaskProgress_Percent_0");
static_assert(sizeof(WB_TaskProgressBar_C_Get_TaskProgress_Percent_0) == 0x000058, "Wrong size on WB_TaskProgressBar_C_Get_TaskProgress_Percent_0");
static_assert(offsetof(WB_TaskProgressBar_C_Get_TaskProgress_Percent_0, ReturnValue) == 0x000000, "Member 'WB_TaskProgressBar_C_Get_TaskProgress_Percent_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TaskProgressBar_C_Get_TaskProgress_Percent_0, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000008, "Member 'WB_TaskProgressBar_C_Get_TaskProgress_Percent_0::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TaskProgressBar_C_Get_TaskProgress_Percent_0, CallFunc_GetGameState_ReturnValue) == 0x000010, "Member 'WB_TaskProgressBar_C_Get_TaskProgress_Percent_0::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TaskProgressBar_C_Get_TaskProgress_Percent_0, K2Node_DynamicCast_AsB_Impostor_Game_State) == 0x000018, "Member 'WB_TaskProgressBar_C_Get_TaskProgress_Percent_0::K2Node_DynamicCast_AsB_Impostor_Game_State' has a wrong offset!");
static_assert(offsetof(WB_TaskProgressBar_C_Get_TaskProgress_Percent_0, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WB_TaskProgressBar_C_Get_TaskProgress_Percent_0::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_TaskProgressBar_C_Get_TaskProgress_Percent_0, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000028, "Member 'WB_TaskProgressBar_C_Get_TaskProgress_Percent_0::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TaskProgressBar_C_Get_TaskProgress_Percent_0, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000030, "Member 'WB_TaskProgressBar_C_Get_TaskProgress_Percent_0::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TaskProgressBar_C_Get_TaskProgress_Percent_0, CallFunc_Conv_IntToDouble_ReturnValue_1) == 0x000038, "Member 'WB_TaskProgressBar_C_Get_TaskProgress_Percent_0::CallFunc_Conv_IntToDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_TaskProgressBar_C_Get_TaskProgress_Percent_0, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000040, "Member 'WB_TaskProgressBar_C_Get_TaskProgress_Percent_0::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TaskProgressBar_C_Get_TaskProgress_Percent_0, CallFunc_FInterpTo_ReturnValue) == 0x000048, "Member 'WB_TaskProgressBar_C_Get_TaskProgress_Percent_0::CallFunc_FInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TaskProgressBar_C_Get_TaskProgress_Percent_0, K2Node_FunctionResult_ReturnValue_ImplicitCast) == 0x000050, "Member 'WB_TaskProgressBar_C_Get_TaskProgress_Percent_0::K2Node_FunctionResult_ReturnValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WB_TaskProgressBar_C_Get_TaskProgress_Percent_0, K2Node_FunctionResult_ReturnValue_ImplicitCast_1) == 0x000054, "Member 'WB_TaskProgressBar_C_Get_TaskProgress_Percent_0::K2Node_FunctionResult_ReturnValue_ImplicitCast_1' has a wrong offset!");

// Function WB_TaskProgressBar.WB_TaskProgressBar_C.Tick
// 0x003C (0x003C - 0x0000)
struct WB_TaskProgressBar_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_TaskProgressBar_C_Tick) == 0x000004, "Wrong alignment on WB_TaskProgressBar_C_Tick");
static_assert(sizeof(WB_TaskProgressBar_C_Tick) == 0x00003C, "Wrong size on WB_TaskProgressBar_C_Tick");
static_assert(offsetof(WB_TaskProgressBar_C_Tick, MyGeometry) == 0x000000, "Member 'WB_TaskProgressBar_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_TaskProgressBar_C_Tick, InDeltaTime) == 0x000038, "Member 'WB_TaskProgressBar_C_Tick::InDeltaTime' has a wrong offset!");

// Function WB_TaskProgressBar.WB_TaskProgressBar_C.UpdateSeparators
// 0x0090 (0x0090 - 0x0000)
struct WB_TaskProgressBar_C_UpdateSeparators final
{
public:
	int32                                         SeparatorCount;                                    // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateChildSize                        K2Node_MakeStruct_SlateChildSize;                  // 0x0004(0x0008)(NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CB3[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_Seperator_C*                        CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CB4[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_Seperator_C*                        CallFunc_Create_ReturnValue_1;                     // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CB5[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FSlateChildSize                        K2Node_MakeStruct_SlateChildSize_1;                // 0x0048(0x0008)(NoDestructor)
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue_1;    // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CB6[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CB7[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerState*                           CallFunc_Array_Get_Item;                           // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CB8[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_ImpostorPlayerState_C*               K2Node_DynamicCast_AsB_Impostor_Player_State;      // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x008B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_TaskProgressBar_C_UpdateSeparators) == 0x000008, "Wrong alignment on WB_TaskProgressBar_C_UpdateSeparators");
static_assert(sizeof(WB_TaskProgressBar_C_UpdateSeparators) == 0x000090, "Wrong size on WB_TaskProgressBar_C_UpdateSeparators");
static_assert(offsetof(WB_TaskProgressBar_C_UpdateSeparators, SeparatorCount) == 0x000000, "Member 'WB_TaskProgressBar_C_UpdateSeparators::SeparatorCount' has a wrong offset!");
static_assert(offsetof(WB_TaskProgressBar_C_UpdateSeparators, K2Node_MakeStruct_SlateChildSize) == 0x000004, "Member 'WB_TaskProgressBar_C_UpdateSeparators::K2Node_MakeStruct_SlateChildSize' has a wrong offset!");
static_assert(offsetof(WB_TaskProgressBar_C_UpdateSeparators, Temp_int_Variable) == 0x00000C, "Member 'WB_TaskProgressBar_C_UpdateSeparators::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WB_TaskProgressBar_C_UpdateSeparators, Temp_int_Variable_1) == 0x000010, "Member 'WB_TaskProgressBar_C_UpdateSeparators::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_TaskProgressBar_C_UpdateSeparators, CallFunc_Create_ReturnValue) == 0x000018, "Member 'WB_TaskProgressBar_C_UpdateSeparators::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TaskProgressBar_C_UpdateSeparators, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'WB_TaskProgressBar_C_UpdateSeparators::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TaskProgressBar_C_UpdateSeparators, CallFunc_Create_ReturnValue_1) == 0x000028, "Member 'WB_TaskProgressBar_C_UpdateSeparators::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_TaskProgressBar_C_UpdateSeparators, Temp_int_Loop_Counter_Variable) == 0x000030, "Member 'WB_TaskProgressBar_C_UpdateSeparators::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WB_TaskProgressBar_C_UpdateSeparators, CallFunc_Add_IntInt_ReturnValue_1) == 0x000034, "Member 'WB_TaskProgressBar_C_UpdateSeparators::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_TaskProgressBar_C_UpdateSeparators, Temp_int_Array_Index_Variable) == 0x000038, "Member 'WB_TaskProgressBar_C_UpdateSeparators::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WB_TaskProgressBar_C_UpdateSeparators, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000040, "Member 'WB_TaskProgressBar_C_UpdateSeparators::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TaskProgressBar_C_UpdateSeparators, K2Node_MakeStruct_SlateChildSize_1) == 0x000048, "Member 'WB_TaskProgressBar_C_UpdateSeparators::K2Node_MakeStruct_SlateChildSize_1' has a wrong offset!");
static_assert(offsetof(WB_TaskProgressBar_C_UpdateSeparators, CallFunc_AddChildToHorizontalBox_ReturnValue_1) == 0x000050, "Member 'WB_TaskProgressBar_C_UpdateSeparators::CallFunc_AddChildToHorizontalBox_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_TaskProgressBar_C_UpdateSeparators, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000058, "Member 'WB_TaskProgressBar_C_UpdateSeparators::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TaskProgressBar_C_UpdateSeparators, CallFunc_Add_IntInt_ReturnValue_2) == 0x00005C, "Member 'WB_TaskProgressBar_C_UpdateSeparators::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_TaskProgressBar_C_UpdateSeparators, CallFunc_GetGameState_ReturnValue) == 0x000060, "Member 'WB_TaskProgressBar_C_UpdateSeparators::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TaskProgressBar_C_UpdateSeparators, CallFunc_Array_Length_ReturnValue) == 0x000068, "Member 'WB_TaskProgressBar_C_UpdateSeparators::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TaskProgressBar_C_UpdateSeparators, CallFunc_Array_Get_Item) == 0x000070, "Member 'WB_TaskProgressBar_C_UpdateSeparators::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_TaskProgressBar_C_UpdateSeparators, CallFunc_Less_IntInt_ReturnValue) == 0x000078, "Member 'WB_TaskProgressBar_C_UpdateSeparators::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TaskProgressBar_C_UpdateSeparators, K2Node_DynamicCast_AsB_Impostor_Player_State) == 0x000080, "Member 'WB_TaskProgressBar_C_UpdateSeparators::K2Node_DynamicCast_AsB_Impostor_Player_State' has a wrong offset!");
static_assert(offsetof(WB_TaskProgressBar_C_UpdateSeparators, K2Node_DynamicCast_bSuccess) == 0x000088, "Member 'WB_TaskProgressBar_C_UpdateSeparators::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_TaskProgressBar_C_UpdateSeparators, CallFunc_Not_PreBool_ReturnValue) == 0x000089, "Member 'WB_TaskProgressBar_C_UpdateSeparators::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TaskProgressBar_C_UpdateSeparators, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00008A, "Member 'WB_TaskProgressBar_C_UpdateSeparators::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TaskProgressBar_C_UpdateSeparators, CallFunc_BooleanAND_ReturnValue) == 0x00008B, "Member 'WB_TaskProgressBar_C_UpdateSeparators::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}
