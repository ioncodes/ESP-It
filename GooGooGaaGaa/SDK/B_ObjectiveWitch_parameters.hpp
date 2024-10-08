#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_ObjectiveWitch

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function B_ObjectiveWitch.B_ObjectiveWitch_C.AfterPossess
// 0x0008 (0x0008 - 0x0000)
struct B_ObjectiveWitch_C_AfterPossess final
{
public:
	double                                        Rotation;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_ObjectiveWitch_C_AfterPossess) == 0x000008, "Wrong alignment on B_ObjectiveWitch_C_AfterPossess");
static_assert(sizeof(B_ObjectiveWitch_C_AfterPossess) == 0x000008, "Wrong size on B_ObjectiveWitch_C_AfterPossess");
static_assert(offsetof(B_ObjectiveWitch_C_AfterPossess, Rotation) == 0x000000, "Member 'B_ObjectiveWitch_C_AfterPossess::Rotation' has a wrong offset!");

// Function B_ObjectiveWitch.B_ObjectiveWitch_C.ExecuteUbergraph_B_ObjectiveWitch
// 0x00E8 (0x00E8 - 0x0000)
struct B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetFirstLocalPlayerController_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_PlayerState_C*                       K2Node_DynamicCast_AsB_Player_State;               // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A[0x6];                                       // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance_1;            // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_HUD_C*                              K2Node_DynamicCast_AsWB_HUD;                       // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetNumMaterials_ReturnValue;              // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x3];                                       // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x007C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0090(0x0008)(NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_CustomEvent_Rotation;                       // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_1;                // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x3];                                       // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast_1;           // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch) == 0x000008, "Wrong alignment on B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch");
static_assert(sizeof(B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch) == 0x0000E8, "Wrong size on B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch");
static_assert(offsetof(B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch, EntryPoint) == 0x000000, "Member 'B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch, CallFunc_GetGameInstance_ReturnValue) == 0x000008, "Member 'B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch, CallFunc_HasAuthority_ReturnValue) == 0x000010, "Member 'B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch, K2Node_DynamicCast_AsB_Game_Instance) == 0x000018, "Member 'B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch, CallFunc_GetFirstLocalPlayerController_ReturnValue) == 0x000028, "Member 'B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch::CallFunc_GetFirstLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch, Temp_int_Variable) == 0x000030, "Member 'B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch, K2Node_DynamicCast_AsB_Player_State) == 0x000038, "Member 'B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch::K2Node_DynamicCast_AsB_Player_State' has a wrong offset!");
static_assert(offsetof(B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000048, "Member 'B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch, CallFunc_IsDedicatedServer_ReturnValue) == 0x000049, "Member 'B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch, CallFunc_GetGameInstance_ReturnValue_1) == 0x000050, "Member 'B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch, K2Node_DynamicCast_AsB_Game_Instance_1) == 0x000058, "Member 'B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch::K2Node_DynamicCast_AsB_Game_Instance_1' has a wrong offset!");
static_assert(offsetof(B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch, K2Node_DynamicCast_bSuccess_2) == 0x000060, "Member 'B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch, K2Node_DynamicCast_AsWB_HUD) == 0x000068, "Member 'B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch::K2Node_DynamicCast_AsWB_HUD' has a wrong offset!");
static_assert(offsetof(B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch, K2Node_DynamicCast_bSuccess_3) == 0x000070, "Member 'B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch, CallFunc_GetNumMaterials_ReturnValue) == 0x000074, "Member 'B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch::CallFunc_GetNumMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000078, "Member 'B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch, K2Node_CreateDelegate_OutputDelegate) == 0x00007C, "Member 'B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000090, "Member 'B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch, K2Node_CustomEvent_Rotation) == 0x000098, "Member 'B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch::K2Node_CustomEvent_Rotation' has a wrong offset!");
static_assert(offsetof(B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch, CallFunc_GetController_ReturnValue) == 0x0000A0, "Member 'B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch, CallFunc_MakeRotator_ReturnValue) == 0x0000A8, "Member 'B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch, CallFunc_MakeRotator_ReturnValue_1) == 0x0000C0, "Member 'B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch::CallFunc_MakeRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch, CallFunc_K2_SetActorRotation_ReturnValue) == 0x0000D8, "Member 'B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x0000DC, "Member 'B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x0000E0, "Member 'B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch, CallFunc_MakeRotator_Yaw_ImplicitCast_1) == 0x0000E4, "Member 'B_ObjectiveWitch_C_ExecuteUbergraph_B_ObjectiveWitch::CallFunc_MakeRotator_Yaw_ImplicitCast_1' has a wrong offset!");

}

