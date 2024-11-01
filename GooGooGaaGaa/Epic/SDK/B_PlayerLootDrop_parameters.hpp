#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_PlayerLootDrop

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AdvancedSessions_structs.hpp"


namespace SDK::Params
{

// Function B_PlayerLootDrop.B_PlayerLootDrop_C.ClampItemDropExperience
// 0x0010 (0x0010 - 0x0000)
struct B_PlayerLootDrop_C_ClampItemDropExperience final
{
public:
	int32                                         UnclampedAmount;                                   // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CalculateAmountOfItemsToGrant_NumberOfItems; // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_PlayerLootDrop_C_ClampItemDropExperience) == 0x000004, "Wrong alignment on B_PlayerLootDrop_C_ClampItemDropExperience");
static_assert(sizeof(B_PlayerLootDrop_C_ClampItemDropExperience) == 0x000010, "Wrong size on B_PlayerLootDrop_C_ClampItemDropExperience");
static_assert(offsetof(B_PlayerLootDrop_C_ClampItemDropExperience, UnclampedAmount) == 0x000000, "Member 'B_PlayerLootDrop_C_ClampItemDropExperience::UnclampedAmount' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_ClampItemDropExperience, CallFunc_CalculateAmountOfItemsToGrant_NumberOfItems) == 0x000004, "Member 'B_PlayerLootDrop_C_ClampItemDropExperience::CallFunc_CalculateAmountOfItemsToGrant_NumberOfItems' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_ClampItemDropExperience, CallFunc_Multiply_IntInt_ReturnValue) == 0x000008, "Member 'B_PlayerLootDrop_C_ClampItemDropExperience::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_ClampItemDropExperience, CallFunc_Subtract_IntInt_ReturnValue) == 0x00000C, "Member 'B_PlayerLootDrop_C_ClampItemDropExperience::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");

// Function B_PlayerLootDrop.B_PlayerLootDrop_C.GrantExp
// 0x0358 (0x0358 - 0x0000)
struct B_PlayerLootDrop_C_GrantExp final
{
public:
	int32                                         Exp;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AmountOfExpToSubtract;                             // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsInFaultState;                                   // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         UnclampedAmountOfItemsToGrant;                     // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AmountOfItemsToGrant;                              // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCustomLogSubsystem*                    CallFunc_GetEngineSubsystem_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0030(0x0048)(HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CalculateAmountOfItemsToGrant_NumberOfItems; // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x3];                                       // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBPUniqueNetId                         CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId; // 0x0088(0x0020)()
	class FString                                 CallFunc_UniqueNetIdToString_String;               // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B8(0x0010)()
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00D0(0x0048)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0118(0x0048)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0160(0x0010)(ReferenceParm)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_171[0x7];                                      // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0178(0x0010)()
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_2;            // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_191[0x7];                                      // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x0198(0x0048)(HasGetValueTypeHash)
	class UCustomLogSubsystem*                    CallFunc_GetEngineSubsystem_ReturnValue_1;         // 0x01E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x01EC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F4[0x4];                                      // 0x01F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBPUniqueNetId                         CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId_1; // 0x01F8(0x0020)()
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x0218(0x0010)()
	class FString                                 CallFunc_UniqueNetIdToString_String_1;             // 0x0228(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;            // 0x0238(0x0048)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0280(0x0010)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_5;            // 0x0290(0x0048)(HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x02D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x02E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E1[0x7];                                      // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x02E8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x02F8(0x0010)()
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_30C[0x4];                                      // 0x030C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UB_NewStatsAndAchievementsManager_C*    CallFunc_GetStatsAndAchievementsManager_Result;    // 0x0310(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0318(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x031C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31D[0x3];                                      // 0x031D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_3;            // 0x0320(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_1;            // 0x0328(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetGSStat_Result;                         // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetGSStat_ReturnValue;                    // 0x0331(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_332[0x6];                                      // 0x0332(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 K2Node_Select_Default;                             // 0x0338(0x0010)(ReferenceParm)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance_1;            // 0x0348(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0350(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_351[0x3];                                      // 0x0351(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0354(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_PlayerLootDrop_C_GrantExp) == 0x000008, "Wrong alignment on B_PlayerLootDrop_C_GrantExp");
static_assert(sizeof(B_PlayerLootDrop_C_GrantExp) == 0x000358, "Wrong size on B_PlayerLootDrop_C_GrantExp");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, Exp) == 0x000000, "Member 'B_PlayerLootDrop_C_GrantExp::Exp' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, AmountOfExpToSubtract) == 0x000004, "Member 'B_PlayerLootDrop_C_GrantExp::AmountOfExpToSubtract' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, bIsInFaultState) == 0x000008, "Member 'B_PlayerLootDrop_C_GrantExp::bIsInFaultState' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, UnclampedAmountOfItemsToGrant) == 0x00000C, "Member 'B_PlayerLootDrop_C_GrantExp::UnclampedAmountOfItemsToGrant' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, AmountOfItemsToGrant) == 0x000010, "Member 'B_PlayerLootDrop_C_GrantExp::AmountOfItemsToGrant' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, Temp_bool_Variable) == 0x000014, "Member 'B_PlayerLootDrop_C_GrantExp::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_GetEngineSubsystem_ReturnValue) == 0x000018, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_GetEngineSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, Temp_int_Variable) == 0x000020, "Member 'B_PlayerLootDrop_C_GrantExp::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, Temp_int_Variable_1) == 0x000024, "Member 'B_PlayerLootDrop_C_GrantExp::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000028, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, K2Node_MakeStruct_FormatArgumentData) == 0x000030, "Member 'B_PlayerLootDrop_C_GrantExp::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_Add_IntInt_ReturnValue) == 0x000078, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_CalculateAmountOfItemsToGrant_NumberOfItems) == 0x00007C, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_CalculateAmountOfItemsToGrant_NumberOfItems' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_Greater_IntInt_ReturnValue) == 0x000080, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_Multiply_IntInt_ReturnValue) == 0x000084, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId) == 0x000088, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_UniqueNetIdToString_String) == 0x0000A8, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_UniqueNetIdToString_String' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_Conv_StringToText_ReturnValue) == 0x0000B8, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_Conv_IntToInt64_ReturnValue_1) == 0x0000C8, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_Conv_IntToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000D0, "Member 'B_PlayerLootDrop_C_GrantExp::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, K2Node_MakeStruct_FormatArgumentData_2) == 0x000118, "Member 'B_PlayerLootDrop_C_GrantExp::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, K2Node_MakeArray_Array) == 0x000160, "Member 'B_PlayerLootDrop_C_GrantExp::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000170, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_Format_ReturnValue) == 0x000178, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_Conv_IntToInt64_ReturnValue_2) == 0x000188, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_Conv_IntToInt64_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000190, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, K2Node_MakeStruct_FormatArgumentData_3) == 0x000198, "Member 'B_PlayerLootDrop_C_GrantExp::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_GetEngineSubsystem_ReturnValue_1) == 0x0001E0, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_GetEngineSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_Clamp_ReturnValue) == 0x0001E8, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_MakeLiteralName_ReturnValue) == 0x0001EC, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId_1) == 0x0001F8, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId_1' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_Conv_NameToText_ReturnValue) == 0x000218, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_UniqueNetIdToString_String_1) == 0x000228, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_UniqueNetIdToString_String_1' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, K2Node_MakeStruct_FormatArgumentData_4) == 0x000238, "Member 'B_PlayerLootDrop_C_GrantExp::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000280, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, K2Node_MakeStruct_FormatArgumentData_5) == 0x000290, "Member 'B_PlayerLootDrop_C_GrantExp::K2Node_MakeStruct_FormatArgumentData_5' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, K2Node_DynamicCast_AsB_Game_Instance) == 0x0002D8, "Member 'B_PlayerLootDrop_C_GrantExp::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, K2Node_DynamicCast_bSuccess) == 0x0002E0, "Member 'B_PlayerLootDrop_C_GrantExp::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, K2Node_MakeArray_Array_1) == 0x0002E8, "Member 'B_PlayerLootDrop_C_GrantExp::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_Format_ReturnValue_1) == 0x0002F8, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_Add_IntInt_ReturnValue_1) == 0x000308, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_GetStatsAndAchievementsManager_Result) == 0x000310, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_GetStatsAndAchievementsManager_Result' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_Array_Length_ReturnValue) == 0x000318, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_Greater_IntInt_ReturnValue_2) == 0x00031C, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_Conv_IntToInt64_ReturnValue_3) == 0x000320, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_Conv_IntToInt64_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_MakeLiteralName_ReturnValue_1) == 0x000328, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_MakeLiteralName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_SetGSStat_Result) == 0x000330, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_SetGSStat_Result' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_SetGSStat_ReturnValue) == 0x000331, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_SetGSStat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, K2Node_Select_Default) == 0x000338, "Member 'B_PlayerLootDrop_C_GrantExp::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, K2Node_DynamicCast_AsB_Game_Instance_1) == 0x000348, "Member 'B_PlayerLootDrop_C_GrantExp::K2Node_DynamicCast_AsB_Game_Instance_1' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, K2Node_DynamicCast_bSuccess_1) == 0x000350, "Member 'B_PlayerLootDrop_C_GrantExp::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_Add_IntInt_ReturnValue_2) == 0x000354, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");

// Function B_PlayerLootDrop.B_PlayerLootDrop_C.HandleDropSuccess
// 0x0038 (0x0038 - 0x0000)
struct B_PlayerLootDrop_C_HandleDropSuccess final
{
public:
	class UB_NewStatsAndAchievementsManager_C*    CallFunc_GetStatsAndAchievementsManager_Result;    // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AB_PlayerState_C*                       K2Node_DynamicCast_AsB_Player_State;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UB_NewStatsAndAchievementsManager_C*    CallFunc_GetStatsAndAchievementsManager_Result_1;  // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetGSStat_Result;                         // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetGSStat_ReturnValue;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x2];                                       // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_PlayerLootDrop_C_HandleDropSuccess) == 0x000008, "Wrong alignment on B_PlayerLootDrop_C_HandleDropSuccess");
static_assert(sizeof(B_PlayerLootDrop_C_HandleDropSuccess) == 0x000038, "Wrong size on B_PlayerLootDrop_C_HandleDropSuccess");
static_assert(offsetof(B_PlayerLootDrop_C_HandleDropSuccess, CallFunc_GetStatsAndAchievementsManager_Result) == 0x000000, "Member 'B_PlayerLootDrop_C_HandleDropSuccess::CallFunc_GetStatsAndAchievementsManager_Result' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_HandleDropSuccess, K2Node_DynamicCast_AsB_Player_State) == 0x000008, "Member 'B_PlayerLootDrop_C_HandleDropSuccess::K2Node_DynamicCast_AsB_Player_State' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_HandleDropSuccess, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'B_PlayerLootDrop_C_HandleDropSuccess::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_HandleDropSuccess, CallFunc_GetStatsAndAchievementsManager_Result_1) == 0x000018, "Member 'B_PlayerLootDrop_C_HandleDropSuccess::CallFunc_GetStatsAndAchievementsManager_Result_1' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_HandleDropSuccess, CallFunc_MakeLiteralName_ReturnValue) == 0x000020, "Member 'B_PlayerLootDrop_C_HandleDropSuccess::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_HandleDropSuccess, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000028, "Member 'B_PlayerLootDrop_C_HandleDropSuccess::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_HandleDropSuccess, CallFunc_SetGSStat_Result) == 0x000030, "Member 'B_PlayerLootDrop_C_HandleDropSuccess::CallFunc_SetGSStat_Result' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_HandleDropSuccess, CallFunc_SetGSStat_ReturnValue) == 0x000031, "Member 'B_PlayerLootDrop_C_HandleDropSuccess::CallFunc_SetGSStat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_HandleDropSuccess, CallFunc_Subtract_IntInt_ReturnValue) == 0x000034, "Member 'B_PlayerLootDrop_C_HandleDropSuccess::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");

// Function B_PlayerLootDrop.B_PlayerLootDrop_C.InitializeGS
// 0x0028 (0x0028 - 0x0000)
struct B_PlayerLootDrop_C_InitializeGS final
{
public:
	class UGameInstance*                          GameInstance_0;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                           PlayerState_0;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_NewStatsAndAchievementsManager_C*    CallFunc_GetStatsAndAchievementsManager_Result;    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_GetGSStat_ResultValue;                    // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGSStat_ResultWasFound;                 // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_Int64ToInt_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_PlayerLootDrop_C_InitializeGS) == 0x000008, "Wrong alignment on B_PlayerLootDrop_C_InitializeGS");
static_assert(sizeof(B_PlayerLootDrop_C_InitializeGS) == 0x000028, "Wrong size on B_PlayerLootDrop_C_InitializeGS");
static_assert(offsetof(B_PlayerLootDrop_C_InitializeGS, GameInstance_0) == 0x000000, "Member 'B_PlayerLootDrop_C_InitializeGS::GameInstance_0' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_InitializeGS, PlayerState_0) == 0x000008, "Member 'B_PlayerLootDrop_C_InitializeGS::PlayerState_0' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_InitializeGS, CallFunc_GetStatsAndAchievementsManager_Result) == 0x000010, "Member 'B_PlayerLootDrop_C_InitializeGS::CallFunc_GetStatsAndAchievementsManager_Result' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_InitializeGS, CallFunc_GetGSStat_ResultValue) == 0x000018, "Member 'B_PlayerLootDrop_C_InitializeGS::CallFunc_GetGSStat_ResultValue' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_InitializeGS, CallFunc_GetGSStat_ResultWasFound) == 0x000020, "Member 'B_PlayerLootDrop_C_InitializeGS::CallFunc_GetGSStat_ResultWasFound' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_InitializeGS, CallFunc_Conv_Int64ToInt_ReturnValue) == 0x000024, "Member 'B_PlayerLootDrop_C_InitializeGS::CallFunc_Conv_Int64ToInt_ReturnValue' has a wrong offset!");

// Function B_PlayerLootDrop.B_PlayerLootDrop_C.CalculateAmountOfItemsToGrant
// 0x0008 (0x0008 - 0x0000)
struct B_PlayerLootDrop_C_CalculateAmountOfItemsToGrant final
{
public:
	int32                                         NumberOfItems;                                     // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_PlayerLootDrop_C_CalculateAmountOfItemsToGrant) == 0x000004, "Wrong alignment on B_PlayerLootDrop_C_CalculateAmountOfItemsToGrant");
static_assert(sizeof(B_PlayerLootDrop_C_CalculateAmountOfItemsToGrant) == 0x000008, "Wrong size on B_PlayerLootDrop_C_CalculateAmountOfItemsToGrant");
static_assert(offsetof(B_PlayerLootDrop_C_CalculateAmountOfItemsToGrant, NumberOfItems) == 0x000000, "Member 'B_PlayerLootDrop_C_CalculateAmountOfItemsToGrant::NumberOfItems' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_CalculateAmountOfItemsToGrant, CallFunc_Divide_IntInt_ReturnValue) == 0x000004, "Member 'B_PlayerLootDrop_C_CalculateAmountOfItemsToGrant::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");

// Function B_PlayerLootDrop.B_PlayerLootDrop_C.GetStatsAndAchievementsManager
// 0x0018 (0x0018 - 0x0000)
struct B_PlayerLootDrop_C_GetStatsAndAchievementsManager final
{
public:
	class UB_NewStatsAndAchievementsManager_C*    Result;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_PlayerLootDrop_C_GetStatsAndAchievementsManager) == 0x000008, "Wrong alignment on B_PlayerLootDrop_C_GetStatsAndAchievementsManager");
static_assert(sizeof(B_PlayerLootDrop_C_GetStatsAndAchievementsManager) == 0x000018, "Wrong size on B_PlayerLootDrop_C_GetStatsAndAchievementsManager");
static_assert(offsetof(B_PlayerLootDrop_C_GetStatsAndAchievementsManager, Result) == 0x000000, "Member 'B_PlayerLootDrop_C_GetStatsAndAchievementsManager::Result' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GetStatsAndAchievementsManager, K2Node_DynamicCast_AsB_Game_Instance) == 0x000008, "Member 'B_PlayerLootDrop_C_GetStatsAndAchievementsManager::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GetStatsAndAchievementsManager, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'B_PlayerLootDrop_C_GetStatsAndAchievementsManager::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

