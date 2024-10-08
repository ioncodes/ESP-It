#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Task

#include "Basic.hpp"


namespace SDK::Params
{

// Function B_Task.B_Task_C.ExecuteUbergraph_B_Task
// 0x0028 (0x0028 - 0x0000)
struct B_Task_C_ExecuteUbergraph_B_Task final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetFirstLocalPlayerController_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AB_ImpostorPlayerState_C*               K2Node_DynamicCast_AsB_Impostor_Player_State;      // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Task_C_ExecuteUbergraph_B_Task) == 0x000008, "Wrong alignment on B_Task_C_ExecuteUbergraph_B_Task");
static_assert(sizeof(B_Task_C_ExecuteUbergraph_B_Task) == 0x000028, "Wrong size on B_Task_C_ExecuteUbergraph_B_Task");
static_assert(offsetof(B_Task_C_ExecuteUbergraph_B_Task, EntryPoint) == 0x000000, "Member 'B_Task_C_ExecuteUbergraph_B_Task::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Task_C_ExecuteUbergraph_B_Task, CallFunc_GetGameInstance_ReturnValue) == 0x000008, "Member 'B_Task_C_ExecuteUbergraph_B_Task::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Task_C_ExecuteUbergraph_B_Task, CallFunc_GetFirstLocalPlayerController_ReturnValue) == 0x000010, "Member 'B_Task_C_ExecuteUbergraph_B_Task::CallFunc_GetFirstLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Task_C_ExecuteUbergraph_B_Task, K2Node_DynamicCast_AsB_Impostor_Player_State) == 0x000018, "Member 'B_Task_C_ExecuteUbergraph_B_Task::K2Node_DynamicCast_AsB_Impostor_Player_State' has a wrong offset!");
static_assert(offsetof(B_Task_C_ExecuteUbergraph_B_Task, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'B_Task_C_ExecuteUbergraph_B_Task::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function B_Task.B_Task_C.CompleteTask
// 0x0030 (0x0030 - 0x0000)
struct B_Task_C_CompleteTask final
{
public:
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_ImpostorHUD_C*                      K2Node_DynamicCast_AsWB_Impostor_HUD;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Task_C_CompleteTask) == 0x000008, "Wrong alignment on B_Task_C_CompleteTask");
static_assert(sizeof(B_Task_C_CompleteTask) == 0x000030, "Wrong size on B_Task_C_CompleteTask");
static_assert(offsetof(B_Task_C_CompleteTask, CallFunc_GetGameInstance_ReturnValue) == 0x000000, "Member 'B_Task_C_CompleteTask::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Task_C_CompleteTask, K2Node_DynamicCast_AsB_Game_Instance) == 0x000008, "Member 'B_Task_C_CompleteTask::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(B_Task_C_CompleteTask, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'B_Task_C_CompleteTask::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_Task_C_CompleteTask, CallFunc_Not_PreBool_ReturnValue) == 0x000011, "Member 'B_Task_C_CompleteTask::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Task_C_CompleteTask, K2Node_DynamicCast_AsWB_Impostor_HUD) == 0x000018, "Member 'B_Task_C_CompleteTask::K2Node_DynamicCast_AsWB_Impostor_HUD' has a wrong offset!");
static_assert(offsetof(B_Task_C_CompleteTask, K2Node_DynamicCast_bSuccess_1) == 0x000020, "Member 'B_Task_C_CompleteTask::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(B_Task_C_CompleteTask, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'B_Task_C_CompleteTask::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function B_Task.B_Task_C.StopTask
// 0x0002 (0x0002 - 0x0000)
struct B_Task_C_StopTask final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Task_C_StopTask) == 0x000001, "Wrong alignment on B_Task_C_StopTask");
static_assert(sizeof(B_Task_C_StopTask) == 0x000002, "Wrong size on B_Task_C_StopTask");
static_assert(offsetof(B_Task_C_StopTask, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'B_Task_C_StopTask::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Task_C_StopTask, CallFunc_Array_RemoveItem_ReturnValue) == 0x000001, "Member 'B_Task_C_StopTask::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");

}

