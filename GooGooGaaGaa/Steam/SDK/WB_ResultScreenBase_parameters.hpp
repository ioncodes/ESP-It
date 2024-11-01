#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ResultScreenBase

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WB_ResultScreenBase.WB_ResultScreenBase_C.GetText_0
// 0x0120 (0x0120 - 0x0000)
struct WB_ResultScreenBase_C_GetText_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AB_GameState_C*                         K2Node_DynamicCast_AsB_Game_State;                 // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0038(0x0048)(HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0088(0x0010)(ReferenceParm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0098(0x0048)(HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00E0(0x0010)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x00F0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0100(0x0010)()
	class FText                                   K2Node_Select_Default;                             // 0x0110(0x0010)()
};
static_assert(alignof(WB_ResultScreenBase_C_GetText_0) == 0x000008, "Wrong alignment on WB_ResultScreenBase_C_GetText_0");
static_assert(sizeof(WB_ResultScreenBase_C_GetText_0) == 0x000120, "Wrong size on WB_ResultScreenBase_C_GetText_0");
static_assert(offsetof(WB_ResultScreenBase_C_GetText_0, ReturnValue) == 0x000000, "Member 'WB_ResultScreenBase_C_GetText_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ResultScreenBase_C_GetText_0, Temp_bool_Variable) == 0x000010, "Member 'WB_ResultScreenBase_C_GetText_0::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WB_ResultScreenBase_C_GetText_0, CallFunc_GetGameState_ReturnValue) == 0x000018, "Member 'WB_ResultScreenBase_C_GetText_0::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ResultScreenBase_C_GetText_0, K2Node_DynamicCast_AsB_Game_State) == 0x000020, "Member 'WB_ResultScreenBase_C_GetText_0::K2Node_DynamicCast_AsB_Game_State' has a wrong offset!");
static_assert(offsetof(WB_ResultScreenBase_C_GetText_0, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WB_ResultScreenBase_C_GetText_0::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_ResultScreenBase_C_GetText_0, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000030, "Member 'WB_ResultScreenBase_C_GetText_0::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ResultScreenBase_C_GetText_0, K2Node_MakeStruct_FormatArgumentData) == 0x000038, "Member 'WB_ResultScreenBase_C_GetText_0::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WB_ResultScreenBase_C_GetText_0, CallFunc_Conv_IntToInt64_ReturnValue_1) == 0x000080, "Member 'WB_ResultScreenBase_C_GetText_0::CallFunc_Conv_IntToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_ResultScreenBase_C_GetText_0, K2Node_MakeArray_Array) == 0x000088, "Member 'WB_ResultScreenBase_C_GetText_0::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WB_ResultScreenBase_C_GetText_0, K2Node_MakeStruct_FormatArgumentData_1) == 0x000098, "Member 'WB_ResultScreenBase_C_GetText_0::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WB_ResultScreenBase_C_GetText_0, CallFunc_Format_ReturnValue) == 0x0000E0, "Member 'WB_ResultScreenBase_C_GetText_0::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ResultScreenBase_C_GetText_0, K2Node_MakeArray_Array_1) == 0x0000F0, "Member 'WB_ResultScreenBase_C_GetText_0::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WB_ResultScreenBase_C_GetText_0, CallFunc_Format_ReturnValue_1) == 0x000100, "Member 'WB_ResultScreenBase_C_GetText_0::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_ResultScreenBase_C_GetText_0, K2Node_Select_Default) == 0x000110, "Member 'WB_ResultScreenBase_C_GetText_0::K2Node_Select_Default' has a wrong offset!");

// Function WB_ResultScreenBase.WB_ResultScreenBase_C.ExecuteUbergraph_WB_ResultScreenBase
// 0x0020 (0x0020 - 0x0000)
struct WB_ResultScreenBase_C_ExecuteUbergraph_WB_ResultScreenBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ResultScreenBase_C_ExecuteUbergraph_WB_ResultScreenBase) == 0x000008, "Wrong alignment on WB_ResultScreenBase_C_ExecuteUbergraph_WB_ResultScreenBase");
static_assert(sizeof(WB_ResultScreenBase_C_ExecuteUbergraph_WB_ResultScreenBase) == 0x000020, "Wrong size on WB_ResultScreenBase_C_ExecuteUbergraph_WB_ResultScreenBase");
static_assert(offsetof(WB_ResultScreenBase_C_ExecuteUbergraph_WB_ResultScreenBase, EntryPoint) == 0x000000, "Member 'WB_ResultScreenBase_C_ExecuteUbergraph_WB_ResultScreenBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_ResultScreenBase_C_ExecuteUbergraph_WB_ResultScreenBase, CallFunc_GetGameInstance_ReturnValue) == 0x000008, "Member 'WB_ResultScreenBase_C_ExecuteUbergraph_WB_ResultScreenBase::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ResultScreenBase_C_ExecuteUbergraph_WB_ResultScreenBase, K2Node_DynamicCast_AsB_Game_Instance) == 0x000010, "Member 'WB_ResultScreenBase_C_ExecuteUbergraph_WB_ResultScreenBase::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(WB_ResultScreenBase_C_ExecuteUbergraph_WB_ResultScreenBase, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WB_ResultScreenBase_C_ExecuteUbergraph_WB_ResultScreenBase::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

