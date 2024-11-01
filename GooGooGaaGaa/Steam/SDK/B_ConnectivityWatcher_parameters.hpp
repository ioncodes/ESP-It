#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_ConnectivityWatcher

#include "Basic.hpp"

#include "E_ConnectivityType_structs.hpp"
#include "E_ConnectivityState_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function B_ConnectivityWatcher.B_ConnectivityWatcher_C.ConnectivityChangedHandler
// 0x0003 (0x0003 - 0x0000)
struct B_ConnectivityWatcher_C_ConnectivityChangedHandler final
{
public:
	E_ConnectivityType                            Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ConnectivityState                           OldState;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ConnectivityState                           NewState;                                          // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_ConnectivityWatcher_C_ConnectivityChangedHandler) == 0x000001, "Wrong alignment on B_ConnectivityWatcher_C_ConnectivityChangedHandler");
static_assert(sizeof(B_ConnectivityWatcher_C_ConnectivityChangedHandler) == 0x000003, "Wrong size on B_ConnectivityWatcher_C_ConnectivityChangedHandler");
static_assert(offsetof(B_ConnectivityWatcher_C_ConnectivityChangedHandler, Type) == 0x000000, "Member 'B_ConnectivityWatcher_C_ConnectivityChangedHandler::Type' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_ConnectivityChangedHandler, OldState) == 0x000001, "Member 'B_ConnectivityWatcher_C_ConnectivityChangedHandler::OldState' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_ConnectivityChangedHandler, NewState) == 0x000002, "Member 'B_ConnectivityWatcher_C_ConnectivityChangedHandler::NewState' has a wrong offset!");

// Function B_ConnectivityWatcher.B_ConnectivityWatcher_C.ExecuteUbergraph_B_ConnectivityWatcher
// 0x0180 (0x0180 - 0x0000)
struct B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ConnectivityState                           Temp_byte_Variable;                                // 0x0004(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ConnectivityState                           Temp_byte_Variable_1;                              // 0x0005(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ConnectivityType                            Temp_byte_Variable_2;                              // 0x0006(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(E_ConnectivityType Type, E_ConnectivityState OldState, E_ConnectivityState NewState)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          K2Node_Event_InGameInstance;                       // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	E_ConnectivityType                            K2Node_CustomEvent_type;                           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ConnectivityState                           K2Node_CustomEvent_OldState;                       // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ConnectivityState                           K2Node_CustomEvent_NewState;                       // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ConnectivityType                            Temp_byte_Variable_3;                              // 0x0023(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0010)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0048(0x0048)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1; // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2; // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00B0(0x0010)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x00C0(0x0010)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00D0(0x0048)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0118(0x0048)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0160(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0170(0x0010)()
};
static_assert(alignof(B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher) == 0x000008, "Wrong alignment on B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher");
static_assert(sizeof(B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher) == 0x000180, "Wrong size on B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher");
static_assert(offsetof(B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher, EntryPoint) == 0x000000, "Member 'B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher, Temp_byte_Variable) == 0x000004, "Member 'B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher, Temp_byte_Variable_1) == 0x000005, "Member 'B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher, Temp_byte_Variable_2) == 0x000006, "Member 'B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher, K2Node_Event_InGameInstance) == 0x000018, "Member 'B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher::K2Node_Event_InGameInstance' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher, K2Node_CustomEvent_type) == 0x000020, "Member 'B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher::K2Node_CustomEvent_type' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher, K2Node_CustomEvent_OldState) == 0x000021, "Member 'B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher::K2Node_CustomEvent_OldState' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher, K2Node_CustomEvent_NewState) == 0x000022, "Member 'B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher::K2Node_CustomEvent_NewState' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher, Temp_byte_Variable_3) == 0x000023, "Member 'B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000028, "Member 'B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher, K2Node_MakeStruct_FormatArgumentData) == 0x000048, "Member 'B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1) == 0x000090, "Member 'B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2) == 0x0000A0, "Member 'B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000B0, "Member 'B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0000C0, "Member 'B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000D0, "Member 'B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher, K2Node_MakeStruct_FormatArgumentData_2) == 0x000118, "Member 'B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher, K2Node_MakeArray_Array) == 0x000160, "Member 'B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher, CallFunc_Format_ReturnValue) == 0x000170, "Member 'B_ConnectivityWatcher_C_ExecuteUbergraph_B_ConnectivityWatcher::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function B_ConnectivityWatcher.B_ConnectivityWatcher_C.Initialize
// 0x0008 (0x0008 - 0x0000)
struct B_ConnectivityWatcher_C_Initialize final
{
public:
	class UGameInstance*                          InGameInstance;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_ConnectivityWatcher_C_Initialize) == 0x000008, "Wrong alignment on B_ConnectivityWatcher_C_Initialize");
static_assert(sizeof(B_ConnectivityWatcher_C_Initialize) == 0x000008, "Wrong size on B_ConnectivityWatcher_C_Initialize");
static_assert(offsetof(B_ConnectivityWatcher_C_Initialize, InGameInstance) == 0x000000, "Member 'B_ConnectivityWatcher_C_Initialize::InGameInstance' has a wrong offset!");

// Function B_ConnectivityWatcher.B_ConnectivityWatcher_C.OnConnectivityChanged__DelegateSignature
// 0x0003 (0x0003 - 0x0000)
struct B_ConnectivityWatcher_C_OnConnectivityChanged__DelegateSignature final
{
public:
	E_ConnectivityType                            Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ConnectivityState                           OldState;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ConnectivityState                           NewState;                                          // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_ConnectivityWatcher_C_OnConnectivityChanged__DelegateSignature) == 0x000001, "Wrong alignment on B_ConnectivityWatcher_C_OnConnectivityChanged__DelegateSignature");
static_assert(sizeof(B_ConnectivityWatcher_C_OnConnectivityChanged__DelegateSignature) == 0x000003, "Wrong size on B_ConnectivityWatcher_C_OnConnectivityChanged__DelegateSignature");
static_assert(offsetof(B_ConnectivityWatcher_C_OnConnectivityChanged__DelegateSignature, Type) == 0x000000, "Member 'B_ConnectivityWatcher_C_OnConnectivityChanged__DelegateSignature::Type' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_OnConnectivityChanged__DelegateSignature, OldState) == 0x000001, "Member 'B_ConnectivityWatcher_C_OnConnectivityChanged__DelegateSignature::OldState' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_OnConnectivityChanged__DelegateSignature, NewState) == 0x000002, "Member 'B_ConnectivityWatcher_C_OnConnectivityChanged__DelegateSignature::NewState' has a wrong offset!");

// Function B_ConnectivityWatcher.B_ConnectivityWatcher_C.SetConnectivityState
// 0x0170 (0x0170 - 0x0000)
struct B_ConnectivityWatcher_C_SetConnectivityState final
{
public:
	E_ConnectivityType                            Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ConnectivityState                           NewState;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ConnectivityState                           OldState;                                          // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UCustomLogSubsystem*                    CallFunc_GetEngineSubsystem_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1; // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0010)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0040(0x0010)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0050(0x0048)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0098(0x0048)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2; // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x00F0(0x0010)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0100(0x0048)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0148(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0158(0x0010)()
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ConnectivityState                           CallFunc_Map_Find_Value;                           // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x016A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_ConnectivityWatcher_C_SetConnectivityState) == 0x000008, "Wrong alignment on B_ConnectivityWatcher_C_SetConnectivityState");
static_assert(sizeof(B_ConnectivityWatcher_C_SetConnectivityState) == 0x000170, "Wrong size on B_ConnectivityWatcher_C_SetConnectivityState");
static_assert(offsetof(B_ConnectivityWatcher_C_SetConnectivityState, Type) == 0x000000, "Member 'B_ConnectivityWatcher_C_SetConnectivityState::Type' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_SetConnectivityState, NewState) == 0x000001, "Member 'B_ConnectivityWatcher_C_SetConnectivityState::NewState' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_SetConnectivityState, OldState) == 0x000002, "Member 'B_ConnectivityWatcher_C_SetConnectivityState::OldState' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_SetConnectivityState, CallFunc_GetEngineSubsystem_ReturnValue) == 0x000008, "Member 'B_ConnectivityWatcher_C_SetConnectivityState::CallFunc_GetEngineSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_SetConnectivityState, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000010, "Member 'B_ConnectivityWatcher_C_SetConnectivityState::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_SetConnectivityState, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1) == 0x000020, "Member 'B_ConnectivityWatcher_C_SetConnectivityState::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_SetConnectivityState, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'B_ConnectivityWatcher_C_SetConnectivityState::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_SetConnectivityState, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000040, "Member 'B_ConnectivityWatcher_C_SetConnectivityState::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_SetConnectivityState, K2Node_MakeStruct_FormatArgumentData) == 0x000050, "Member 'B_ConnectivityWatcher_C_SetConnectivityState::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_SetConnectivityState, K2Node_MakeStruct_FormatArgumentData_1) == 0x000098, "Member 'B_ConnectivityWatcher_C_SetConnectivityState::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_SetConnectivityState, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2) == 0x0000E0, "Member 'B_ConnectivityWatcher_C_SetConnectivityState::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_SetConnectivityState, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0000F0, "Member 'B_ConnectivityWatcher_C_SetConnectivityState::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_SetConnectivityState, K2Node_MakeStruct_FormatArgumentData_2) == 0x000100, "Member 'B_ConnectivityWatcher_C_SetConnectivityState::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_SetConnectivityState, K2Node_MakeArray_Array) == 0x000148, "Member 'B_ConnectivityWatcher_C_SetConnectivityState::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_SetConnectivityState, CallFunc_Format_ReturnValue) == 0x000158, "Member 'B_ConnectivityWatcher_C_SetConnectivityState::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_SetConnectivityState, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000168, "Member 'B_ConnectivityWatcher_C_SetConnectivityState::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_SetConnectivityState, CallFunc_Map_Find_Value) == 0x000169, "Member 'B_ConnectivityWatcher_C_SetConnectivityState::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_SetConnectivityState, CallFunc_Map_Find_ReturnValue) == 0x00016A, "Member 'B_ConnectivityWatcher_C_SetConnectivityState::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function B_ConnectivityWatcher.B_ConnectivityWatcher_C.GetConnectivityState
// 0x0004 (0x0004 - 0x0000)
struct B_ConnectivityWatcher_C_GetConnectivityState final
{
public:
	E_ConnectivityType                            Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ConnectivityState                           State;                                             // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ConnectivityState                           CallFunc_Map_Find_Value;                           // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_ConnectivityWatcher_C_GetConnectivityState) == 0x000001, "Wrong alignment on B_ConnectivityWatcher_C_GetConnectivityState");
static_assert(sizeof(B_ConnectivityWatcher_C_GetConnectivityState) == 0x000004, "Wrong size on B_ConnectivityWatcher_C_GetConnectivityState");
static_assert(offsetof(B_ConnectivityWatcher_C_GetConnectivityState, Type) == 0x000000, "Member 'B_ConnectivityWatcher_C_GetConnectivityState::Type' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_GetConnectivityState, State) == 0x000001, "Member 'B_ConnectivityWatcher_C_GetConnectivityState::State' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_GetConnectivityState, CallFunc_Map_Find_Value) == 0x000002, "Member 'B_ConnectivityWatcher_C_GetConnectivityState::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_GetConnectivityState, CallFunc_Map_Find_ReturnValue) == 0x000003, "Member 'B_ConnectivityWatcher_C_GetConnectivityState::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function B_ConnectivityWatcher.B_ConnectivityWatcher_C.IsConnectedTo
// 0x0004 (0x0004 - 0x0000)
struct B_ConnectivityWatcher_C_IsConnectedTo final
{
public:
	E_ConnectivityType                            Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsConnected;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ConnectivityState                           CallFunc_GetConnectivityState_State;               // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_ConnectivityWatcher_C_IsConnectedTo) == 0x000001, "Wrong alignment on B_ConnectivityWatcher_C_IsConnectedTo");
static_assert(sizeof(B_ConnectivityWatcher_C_IsConnectedTo) == 0x000004, "Wrong size on B_ConnectivityWatcher_C_IsConnectedTo");
static_assert(offsetof(B_ConnectivityWatcher_C_IsConnectedTo, Type) == 0x000000, "Member 'B_ConnectivityWatcher_C_IsConnectedTo::Type' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_IsConnectedTo, IsConnected) == 0x000001, "Member 'B_ConnectivityWatcher_C_IsConnectedTo::IsConnected' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_IsConnectedTo, CallFunc_GetConnectivityState_State) == 0x000002, "Member 'B_ConnectivityWatcher_C_IsConnectedTo::CallFunc_GetConnectivityState_State' has a wrong offset!");
static_assert(offsetof(B_ConnectivityWatcher_C_IsConnectedTo, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000003, "Member 'B_ConnectivityWatcher_C_IsConnectedTo::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

}

