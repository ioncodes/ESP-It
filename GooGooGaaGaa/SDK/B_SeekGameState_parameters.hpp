#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_SeekGameState

#include "Basic.hpp"


namespace SDK::Params
{

// Function B_SeekGameState.B_SeekGameState_C.ShowResult
// 0x0018 (0x0018 - 0x0000)
struct B_SeekGameState_C_ShowResult final
{
public:
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_SeekGameState_C_ShowResult) == 0x000008, "Wrong alignment on B_SeekGameState_C_ShowResult");
static_assert(sizeof(B_SeekGameState_C_ShowResult) == 0x000018, "Wrong size on B_SeekGameState_C_ShowResult");
static_assert(offsetof(B_SeekGameState_C_ShowResult, CallFunc_GetGameInstance_ReturnValue) == 0x000000, "Member 'B_SeekGameState_C_ShowResult::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SeekGameState_C_ShowResult, K2Node_DynamicCast_AsB_Game_Instance) == 0x000008, "Member 'B_SeekGameState_C_ShowResult::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(B_SeekGameState_C_ShowResult, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'B_SeekGameState_C_ShowResult::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function B_SeekGameState.B_SeekGameState_C.HasTrackingStarted
// 0x0002 (0x0002 - 0x0000)
struct B_SeekGameState_C_HasTrackingStarted final
{
public:
	bool                                          Param_HasTrackingStarted;                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_SeekGameState_C_HasTrackingStarted) == 0x000001, "Wrong alignment on B_SeekGameState_C_HasTrackingStarted");
static_assert(sizeof(B_SeekGameState_C_HasTrackingStarted) == 0x000002, "Wrong size on B_SeekGameState_C_HasTrackingStarted");
static_assert(offsetof(B_SeekGameState_C_HasTrackingStarted, Param_HasTrackingStarted) == 0x000000, "Member 'B_SeekGameState_C_HasTrackingStarted::Param_HasTrackingStarted' has a wrong offset!");
static_assert(offsetof(B_SeekGameState_C_HasTrackingStarted, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000001, "Member 'B_SeekGameState_C_HasTrackingStarted::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function B_SeekGameState.B_SeekGameState_C.OnRep_State
// 0x00A8 (0x00A8 - 0x0000)
struct B_SeekGameState_C_OnRep_State final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_376F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3770[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3771[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UUserWidget*>                    K2Node_MakeArray_Array;                            // 0x0028(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetFirstLocalPlayerController_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3772[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_PlayerState_C*                       K2Node_DynamicCast_AsB_Player_State;               // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3773[0x5];                                     // 0x005B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetAllActorsOfClass_OutActors;            // 0x0060(0x0010)(ReferenceParm)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3774[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       CallFunc_GetComponentByClass_ReturnValue;          // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3775[0x2];                                     // 0x008E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue;          // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWB_PlayerName_C*                       K2Node_DynamicCast_AsWB_Player_Name;               // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_SeekGameState_C_OnRep_State) == 0x000008, "Wrong alignment on B_SeekGameState_C_OnRep_State");
static_assert(sizeof(B_SeekGameState_C_OnRep_State) == 0x0000A8, "Wrong size on B_SeekGameState_C_OnRep_State");
static_assert(offsetof(B_SeekGameState_C_OnRep_State, Temp_int_Array_Index_Variable) == 0x000000, "Member 'B_SeekGameState_C_OnRep_State::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(B_SeekGameState_C_OnRep_State, CallFunc_GetGameInstance_ReturnValue) == 0x000008, "Member 'B_SeekGameState_C_OnRep_State::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SeekGameState_C_OnRep_State, K2Node_DynamicCast_AsB_Game_Instance) == 0x000010, "Member 'B_SeekGameState_C_OnRep_State::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(B_SeekGameState_C_OnRep_State, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'B_SeekGameState_C_OnRep_State::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_SeekGameState_C_OnRep_State, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'B_SeekGameState_C_OnRep_State::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(B_SeekGameState_C_OnRep_State, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'B_SeekGameState_C_OnRep_State::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SeekGameState_C_OnRep_State, K2Node_MakeArray_Array) == 0x000028, "Member 'B_SeekGameState_C_OnRep_State::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(B_SeekGameState_C_OnRep_State, CallFunc_GetGameInstance_ReturnValue_1) == 0x000038, "Member 'B_SeekGameState_C_OnRep_State::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_SeekGameState_C_OnRep_State, CallFunc_GetFirstLocalPlayerController_ReturnValue) == 0x000040, "Member 'B_SeekGameState_C_OnRep_State::CallFunc_GetFirstLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SeekGameState_C_OnRep_State, K2Node_SwitchEnum_CmpSuccess) == 0x000048, "Member 'B_SeekGameState_C_OnRep_State::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(B_SeekGameState_C_OnRep_State, K2Node_DynamicCast_AsB_Player_State) == 0x000050, "Member 'B_SeekGameState_C_OnRep_State::K2Node_DynamicCast_AsB_Player_State' has a wrong offset!");
static_assert(offsetof(B_SeekGameState_C_OnRep_State, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'B_SeekGameState_C_OnRep_State::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(B_SeekGameState_C_OnRep_State, CallFunc_Not_PreBool_ReturnValue) == 0x000059, "Member 'B_SeekGameState_C_OnRep_State::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SeekGameState_C_OnRep_State, CallFunc_Not_PreBool_ReturnValue_1) == 0x00005A, "Member 'B_SeekGameState_C_OnRep_State::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_SeekGameState_C_OnRep_State, CallFunc_GetAllActorsOfClass_OutActors) == 0x000060, "Member 'B_SeekGameState_C_OnRep_State::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(B_SeekGameState_C_OnRep_State, CallFunc_BooleanAND_ReturnValue) == 0x000070, "Member 'B_SeekGameState_C_OnRep_State::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SeekGameState_C_OnRep_State, CallFunc_Array_Get_Item) == 0x000078, "Member 'B_SeekGameState_C_OnRep_State::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_SeekGameState_C_OnRep_State, CallFunc_GetComponentByClass_ReturnValue) == 0x000080, "Member 'B_SeekGameState_C_OnRep_State::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SeekGameState_C_OnRep_State, CallFunc_Array_Length_ReturnValue) == 0x000088, "Member 'B_SeekGameState_C_OnRep_State::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SeekGameState_C_OnRep_State, CallFunc_IsValid_ReturnValue) == 0x00008C, "Member 'B_SeekGameState_C_OnRep_State::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SeekGameState_C_OnRep_State, CallFunc_Less_IntInt_ReturnValue) == 0x00008D, "Member 'B_SeekGameState_C_OnRep_State::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SeekGameState_C_OnRep_State, CallFunc_GetUserWidgetObject_ReturnValue) == 0x000090, "Member 'B_SeekGameState_C_OnRep_State::CallFunc_GetUserWidgetObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SeekGameState_C_OnRep_State, K2Node_DynamicCast_AsWB_Player_Name) == 0x000098, "Member 'B_SeekGameState_C_OnRep_State::K2Node_DynamicCast_AsWB_Player_Name' has a wrong offset!");
static_assert(offsetof(B_SeekGameState_C_OnRep_State, K2Node_DynamicCast_bSuccess_2) == 0x0000A0, "Member 'B_SeekGameState_C_OnRep_State::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(B_SeekGameState_C_OnRep_State, K2Node_SwitchEnum_CmpSuccess_1) == 0x0000A1, "Member 'B_SeekGameState_C_OnRep_State::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(B_SeekGameState_C_OnRep_State, CallFunc_IsDedicatedServer_ReturnValue) == 0x0000A2, "Member 'B_SeekGameState_C_OnRep_State::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");

// Function B_SeekGameState.B_SeekGameState_C.HasRoundStarted
// 0x0002 (0x0002 - 0x0000)
struct B_SeekGameState_C_HasRoundStarted final
{
public:
	bool                                          RoundHasStarted;                                   // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_SeekGameState_C_HasRoundStarted) == 0x000001, "Wrong alignment on B_SeekGameState_C_HasRoundStarted");
static_assert(sizeof(B_SeekGameState_C_HasRoundStarted) == 0x000002, "Wrong size on B_SeekGameState_C_HasRoundStarted");
static_assert(offsetof(B_SeekGameState_C_HasRoundStarted, RoundHasStarted) == 0x000000, "Member 'B_SeekGameState_C_HasRoundStarted::RoundHasStarted' has a wrong offset!");
static_assert(offsetof(B_SeekGameState_C_HasRoundStarted, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000001, "Member 'B_SeekGameState_C_HasRoundStarted::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function B_SeekGameState.B_SeekGameState_C.IsRoundEnd
// 0x0002 (0x0002 - 0x0000)
struct B_SeekGameState_C_IsRoundEnd final
{
public:
	bool                                          RoundIsEnd;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_SeekGameState_C_IsRoundEnd) == 0x000001, "Wrong alignment on B_SeekGameState_C_IsRoundEnd");
static_assert(sizeof(B_SeekGameState_C_IsRoundEnd) == 0x000002, "Wrong size on B_SeekGameState_C_IsRoundEnd");
static_assert(offsetof(B_SeekGameState_C_IsRoundEnd, RoundIsEnd) == 0x000000, "Member 'B_SeekGameState_C_IsRoundEnd::RoundIsEnd' has a wrong offset!");
static_assert(offsetof(B_SeekGameState_C_IsRoundEnd, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000001, "Member 'B_SeekGameState_C_IsRoundEnd::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

}
