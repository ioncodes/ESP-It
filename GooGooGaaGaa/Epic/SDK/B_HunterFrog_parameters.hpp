#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_HunterFrog

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function B_HunterFrog.B_HunterFrog_C.ExecuteUbergraph_B_HunterFrog
// 0x00C0 (0x00C0 - 0x0000)
struct B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue_1;               // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AB_ImpostorGameState_C*                 K2Node_DynamicCast_AsB_Impostor_Game_State;        // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_ImpostorGameState_C*                 K2Node_DynamicCast_AsB_Impostor_Game_State_1;      // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B[0x5];                                       // 0x003B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue_2;               // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomInteger_ReturnValue;                // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_ImpostorGameState_C*                 K2Node_DynamicCast_AsB_Impostor_Game_State_2;      // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetPlayerColor_ReturnValue;               // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetPlayerColor_ReturnValue_1;             // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue;          // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWB_ImpostorPlayerName_C*               K2Node_DynamicCast_AsWB_Impostor_Player_Name;      // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPlayRate_Rate_ImplicitCast;            // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPosition_InPos_ImplicitCast;           // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog) == 0x000008, "Wrong alignment on B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog");
static_assert(sizeof(B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog) == 0x0000C0, "Wrong size on B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog");
static_assert(offsetof(B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog, EntryPoint) == 0x000000, "Member 'B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog, CallFunc_RandomFloatInRange_ReturnValue) == 0x000008, "Member 'B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog, CallFunc_GetGameState_ReturnValue) == 0x000010, "Member 'B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog, CallFunc_GetGameState_ReturnValue_1) == 0x000018, "Member 'B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog::CallFunc_GetGameState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog, K2Node_DynamicCast_AsB_Impostor_Game_State) == 0x000020, "Member 'B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog::K2Node_DynamicCast_AsB_Impostor_Game_State' has a wrong offset!");
static_assert(offsetof(B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog, K2Node_DynamicCast_AsB_Impostor_Game_State_1) == 0x000030, "Member 'B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog::K2Node_DynamicCast_AsB_Impostor_Game_State_1' has a wrong offset!");
static_assert(offsetof(B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000039, "Member 'B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog, CallFunc_IsValid_ReturnValue) == 0x00003A, "Member 'B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog, CallFunc_GetGameState_ReturnValue_2) == 0x000040, "Member 'B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog::CallFunc_GetGameState_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog, CallFunc_RandomInteger_ReturnValue) == 0x000048, "Member 'B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog::CallFunc_RandomInteger_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog, K2Node_DynamicCast_AsB_Impostor_Game_State_2) == 0x000050, "Member 'B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog::K2Node_DynamicCast_AsB_Impostor_Game_State_2' has a wrong offset!");
static_assert(offsetof(B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog, K2Node_DynamicCast_bSuccess_2) == 0x000058, "Member 'B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog, CallFunc_GetPlayerColor_ReturnValue) == 0x000060, "Member 'B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog::CallFunc_GetPlayerColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog, CallFunc_GetPlayerColor_ReturnValue_1) == 0x000078, "Member 'B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog::CallFunc_GetPlayerColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog, K2Node_Event_DeltaSeconds) == 0x000090, "Member 'B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog, CallFunc_GetUserWidgetObject_ReturnValue) == 0x000098, "Member 'B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog::CallFunc_GetUserWidgetObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog, K2Node_DynamicCast_AsWB_Impostor_Player_Name) == 0x0000A0, "Member 'B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog::K2Node_DynamicCast_AsWB_Impostor_Player_Name' has a wrong offset!");
static_assert(offsetof(B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog, K2Node_DynamicCast_bSuccess_3) == 0x0000A8, "Member 'B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x0000B0, "Member 'B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog, CallFunc_SetPlayRate_Rate_ImplicitCast) == 0x0000B8, "Member 'B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog::CallFunc_SetPlayRate_Rate_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog, CallFunc_SetPosition_InPos_ImplicitCast) == 0x0000BC, "Member 'B_HunterFrog_C_ExecuteUbergraph_B_HunterFrog::CallFunc_SetPosition_InPos_ImplicitCast' has a wrong offset!");

// Function B_HunterFrog.B_HunterFrog_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct B_HunterFrog_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_HunterFrog_C_ReceiveTick) == 0x000004, "Wrong alignment on B_HunterFrog_C_ReceiveTick");
static_assert(sizeof(B_HunterFrog_C_ReceiveTick) == 0x000004, "Wrong size on B_HunterFrog_C_ReceiveTick");
static_assert(offsetof(B_HunterFrog_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'B_HunterFrog_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function B_HunterFrog.B_HunterFrog_C.Report
// 0x0010 (0x0010 - 0x0000)
struct B_HunterFrog_C_Report final
{
public:
	class AB_ImpostorPlayerState_C*               ReporterPlayerState;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_HunterFrog_C_Report) == 0x000008, "Wrong alignment on B_HunterFrog_C_Report");
static_assert(sizeof(B_HunterFrog_C_Report) == 0x000010, "Wrong size on B_HunterFrog_C_Report");
static_assert(offsetof(B_HunterFrog_C_Report, ReporterPlayerState) == 0x000000, "Member 'B_HunterFrog_C_Report::ReporterPlayerState' has a wrong offset!");
static_assert(offsetof(B_HunterFrog_C_Report, CallFunc_Not_PreBool_ReturnValue) == 0x000008, "Member 'B_HunterFrog_C_Report::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}

