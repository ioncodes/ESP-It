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
// 0x03B0 (0x03B0 - 0x0000)
struct B_PlayerLootDrop_C_GrantExp final
{
public:
	int32                                         Exp;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AmountOfExpToSubtract;                             // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsInFaultState;                                   // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34EE[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         UnclampedAmountOfItemsToGrant;                     // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AmountOfItemsToGrant;                              // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34EF[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCustomLogSubsystem*                    CallFunc_GetEngineSubsystem_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0030(0x0050)(HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CalculateAmountOfItemsToGrant_NumberOfItems; // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34F0[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBPUniqueNetId                         CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId; // 0x0090(0x0020)()
	class FString                                 CallFunc_UniqueNetIdToString_String;               // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00C0(0x0018)()
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00E0(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0130(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0180(0x0010)(ReferenceParm)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34F1[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0198(0x0018)()
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_2;            // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34F2[0x7];                                     // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x01C0(0x0050)(HasGetValueTypeHash)
	class UCustomLogSubsystem*                    CallFunc_GetEngineSubsystem_ReturnValue_1;         // 0x0210(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x021C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34F3[0x4];                                     // 0x0224(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBPUniqueNetId                         CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId_1; // 0x0228(0x0020)()
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x0248(0x0018)()
	class FString                                 CallFunc_UniqueNetIdToString_String_1;             // 0x0260(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;            // 0x0270(0x0050)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x02C0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_5;            // 0x02D8(0x0050)(HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0328(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34F4[0x7];                                     // 0x0331(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0338(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0348(0x0018)()
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0360(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34F5[0x4];                                     // 0x0364(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UB_NewStatsAndAchievementsManager_C*    CallFunc_GetStatsAndAchievementsManager_Result;    // 0x0368(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0370(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x0374(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34F6[0x3];                                     // 0x0375(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_3;            // 0x0378(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_1;            // 0x0380(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetGSStat_Result;                         // 0x0388(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetGSStat_ReturnValue;                    // 0x0389(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34F7[0x6];                                     // 0x038A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 K2Node_Select_Default;                             // 0x0390(0x0010)(ReferenceParm)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance_1;            // 0x03A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x03A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34F8[0x3];                                     // 0x03A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x03AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_PlayerLootDrop_C_GrantExp) == 0x000008, "Wrong alignment on B_PlayerLootDrop_C_GrantExp");
static_assert(sizeof(B_PlayerLootDrop_C_GrantExp) == 0x0003B0, "Wrong size on B_PlayerLootDrop_C_GrantExp");
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
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_Add_IntInt_ReturnValue) == 0x000080, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_CalculateAmountOfItemsToGrant_NumberOfItems) == 0x000084, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_CalculateAmountOfItemsToGrant_NumberOfItems' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_Greater_IntInt_ReturnValue) == 0x000088, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_Multiply_IntInt_ReturnValue) == 0x00008C, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId) == 0x000090, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_UniqueNetIdToString_String) == 0x0000B0, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_UniqueNetIdToString_String' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_Conv_StringToText_ReturnValue) == 0x0000C0, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_Conv_IntToInt64_ReturnValue_1) == 0x0000D8, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_Conv_IntToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000E0, "Member 'B_PlayerLootDrop_C_GrantExp::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, K2Node_MakeStruct_FormatArgumentData_2) == 0x000130, "Member 'B_PlayerLootDrop_C_GrantExp::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, K2Node_MakeArray_Array) == 0x000180, "Member 'B_PlayerLootDrop_C_GrantExp::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000190, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_Format_ReturnValue) == 0x000198, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_Conv_IntToInt64_ReturnValue_2) == 0x0001B0, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_Conv_IntToInt64_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0001B8, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, K2Node_MakeStruct_FormatArgumentData_3) == 0x0001C0, "Member 'B_PlayerLootDrop_C_GrantExp::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_GetEngineSubsystem_ReturnValue_1) == 0x000210, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_GetEngineSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_Clamp_ReturnValue) == 0x000218, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_MakeLiteralName_ReturnValue) == 0x00021C, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId_1) == 0x000228, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId_1' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_Conv_NameToText_ReturnValue) == 0x000248, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_UniqueNetIdToString_String_1) == 0x000260, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_UniqueNetIdToString_String_1' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, K2Node_MakeStruct_FormatArgumentData_4) == 0x000270, "Member 'B_PlayerLootDrop_C_GrantExp::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0002C0, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, K2Node_MakeStruct_FormatArgumentData_5) == 0x0002D8, "Member 'B_PlayerLootDrop_C_GrantExp::K2Node_MakeStruct_FormatArgumentData_5' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, K2Node_DynamicCast_AsB_Game_Instance) == 0x000328, "Member 'B_PlayerLootDrop_C_GrantExp::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, K2Node_DynamicCast_bSuccess) == 0x000330, "Member 'B_PlayerLootDrop_C_GrantExp::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, K2Node_MakeArray_Array_1) == 0x000338, "Member 'B_PlayerLootDrop_C_GrantExp::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_Format_ReturnValue_1) == 0x000348, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_Add_IntInt_ReturnValue_1) == 0x000360, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_GetStatsAndAchievementsManager_Result) == 0x000368, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_GetStatsAndAchievementsManager_Result' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_Array_Length_ReturnValue) == 0x000370, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_Greater_IntInt_ReturnValue_2) == 0x000374, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_Conv_IntToInt64_ReturnValue_3) == 0x000378, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_Conv_IntToInt64_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_MakeLiteralName_ReturnValue_1) == 0x000380, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_MakeLiteralName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_SetGSStat_Result) == 0x000388, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_SetGSStat_Result' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_SetGSStat_ReturnValue) == 0x000389, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_SetGSStat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, K2Node_Select_Default) == 0x000390, "Member 'B_PlayerLootDrop_C_GrantExp::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, K2Node_DynamicCast_AsB_Game_Instance_1) == 0x0003A0, "Member 'B_PlayerLootDrop_C_GrantExp::K2Node_DynamicCast_AsB_Game_Instance_1' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, K2Node_DynamicCast_bSuccess_1) == 0x0003A8, "Member 'B_PlayerLootDrop_C_GrantExp::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_GrantExp, CallFunc_Add_IntInt_ReturnValue_2) == 0x0003AC, "Member 'B_PlayerLootDrop_C_GrantExp::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");

// Function B_PlayerLootDrop.B_PlayerLootDrop_C.HandleDropSuccess
// 0x0038 (0x0038 - 0x0000)
struct B_PlayerLootDrop_C_HandleDropSuccess final
{
public:
	class UB_NewStatsAndAchievementsManager_C*    CallFunc_GetStatsAndAchievementsManager_Result;    // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AB_PlayerState_C*                       K2Node_DynamicCast_AsB_Player_State;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34F9[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UB_NewStatsAndAchievementsManager_C*    CallFunc_GetStatsAndAchievementsManager_Result_1;  // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetGSStat_Result;                         // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetGSStat_ReturnValue;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34FA[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
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
	class UGameInstance*                          Param_GameInstance;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                           Param_PlayerState;                                 // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_NewStatsAndAchievementsManager_C*    CallFunc_GetStatsAndAchievementsManager_Result;    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_GetGSStat_ResultValue;                    // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGSStat_ResultWasFound;                 // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34FB[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_Int64ToInt_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_PlayerLootDrop_C_InitializeGS) == 0x000008, "Wrong alignment on B_PlayerLootDrop_C_InitializeGS");
static_assert(sizeof(B_PlayerLootDrop_C_InitializeGS) == 0x000028, "Wrong size on B_PlayerLootDrop_C_InitializeGS");
static_assert(offsetof(B_PlayerLootDrop_C_InitializeGS, Param_GameInstance) == 0x000000, "Member 'B_PlayerLootDrop_C_InitializeGS::Param_GameInstance' has a wrong offset!");
static_assert(offsetof(B_PlayerLootDrop_C_InitializeGS, Param_PlayerState) == 0x000008, "Member 'B_PlayerLootDrop_C_InitializeGS::Param_PlayerState' has a wrong offset!");
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
