#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_WoodChopTask

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function B_WoodChopTask.B_WoodChopTask_C.InitializeIndividualTaskParameters
// 0x00E0 (0x00E0 - 0x0000)
struct B_WoodChopTask_C_InitializeIndividualTaskParameters final
{
public:
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0xC];                                       // 0x0014(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_Array_Get_Item;                           // 0x0020(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   CallFunc_Array_Get_Item_1;                         // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AB_WoodChopField_C*>             CallFunc_GetAllActorsOfClass_OutActors;            // 0x0098(0x0010)(ReferenceParm)
	class AB_WoodChopField_C*                     CallFunc_Array_Get_Item_2;                         // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BA[0x2];                                       // 0x00BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                         K2Node_MakeArray_Array;                            // 0x00C0(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_WoodChopTask_C_InitializeIndividualTaskParameters) == 0x000010, "Wrong alignment on B_WoodChopTask_C_InitializeIndividualTaskParameters");
static_assert(sizeof(B_WoodChopTask_C_InitializeIndividualTaskParameters) == 0x0000E0, "Wrong size on B_WoodChopTask_C_InitializeIndividualTaskParameters");
static_assert(offsetof(B_WoodChopTask_C_InitializeIndividualTaskParameters, Temp_int_Loop_Counter_Variable) == 0x000000, "Member 'B_WoodChopTask_C_InitializeIndividualTaskParameters::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(B_WoodChopTask_C_InitializeIndividualTaskParameters, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'B_WoodChopTask_C_InitializeIndividualTaskParameters::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_WoodChopTask_C_InitializeIndividualTaskParameters, Temp_int_Array_Index_Variable) == 0x000008, "Member 'B_WoodChopTask_C_InitializeIndividualTaskParameters::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(B_WoodChopTask_C_InitializeIndividualTaskParameters, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'B_WoodChopTask_C_InitializeIndividualTaskParameters::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_WoodChopTask_C_InitializeIndividualTaskParameters, Temp_int_Array_Index_Variable_1) == 0x000010, "Member 'B_WoodChopTask_C_InitializeIndividualTaskParameters::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(B_WoodChopTask_C_InitializeIndividualTaskParameters, CallFunc_Array_Get_Item) == 0x000020, "Member 'B_WoodChopTask_C_InitializeIndividualTaskParameters::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_WoodChopTask_C_InitializeIndividualTaskParameters, CallFunc_Add_IntInt_ReturnValue_1) == 0x000080, "Member 'B_WoodChopTask_C_InitializeIndividualTaskParameters::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_WoodChopTask_C_InitializeIndividualTaskParameters, CallFunc_Array_Get_Item_1) == 0x000088, "Member 'B_WoodChopTask_C_InitializeIndividualTaskParameters::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(B_WoodChopTask_C_InitializeIndividualTaskParameters, CallFunc_Array_Add_ReturnValue) == 0x000090, "Member 'B_WoodChopTask_C_InitializeIndividualTaskParameters::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_WoodChopTask_C_InitializeIndividualTaskParameters, CallFunc_GetAllActorsOfClass_OutActors) == 0x000098, "Member 'B_WoodChopTask_C_InitializeIndividualTaskParameters::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(B_WoodChopTask_C_InitializeIndividualTaskParameters, CallFunc_Array_Get_Item_2) == 0x0000A8, "Member 'B_WoodChopTask_C_InitializeIndividualTaskParameters::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(B_WoodChopTask_C_InitializeIndividualTaskParameters, CallFunc_Array_Length_ReturnValue_1) == 0x0000B0, "Member 'B_WoodChopTask_C_InitializeIndividualTaskParameters::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_WoodChopTask_C_InitializeIndividualTaskParameters, Temp_int_Loop_Counter_Variable_1) == 0x0000B4, "Member 'B_WoodChopTask_C_InitializeIndividualTaskParameters::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(B_WoodChopTask_C_InitializeIndividualTaskParameters, CallFunc_Less_IntInt_ReturnValue) == 0x0000B8, "Member 'B_WoodChopTask_C_InitializeIndividualTaskParameters::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_WoodChopTask_C_InitializeIndividualTaskParameters, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000B9, "Member 'B_WoodChopTask_C_InitializeIndividualTaskParameters::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_WoodChopTask_C_InitializeIndividualTaskParameters, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000BC, "Member 'B_WoodChopTask_C_InitializeIndividualTaskParameters::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_WoodChopTask_C_InitializeIndividualTaskParameters, K2Node_MakeArray_Array) == 0x0000C0, "Member 'B_WoodChopTask_C_InitializeIndividualTaskParameters::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(B_WoodChopTask_C_InitializeIndividualTaskParameters, CallFunc_Array_Add_ReturnValue_1) == 0x0000D0, "Member 'B_WoodChopTask_C_InitializeIndividualTaskParameters::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");

// Function B_WoodChopTask.B_WoodChopTask_C.SpawnTargets
// 0x00B0 (0x00B0 - 0x0000)
struct B_WoodChopTask_C_SpawnTargets final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_WoodChopField_C*                     CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_Array_Get_Item_1;                         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0xC];                                       // 0x0024(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_Array_Get_Item_2;                         // 0x0030(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AB_TaskTargetActor_C*                   CallFunc_FinishSpawningActor_ReturnValue;          // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_WoodChopTask_C_SpawnTargets) == 0x000010, "Wrong alignment on B_WoodChopTask_C_SpawnTargets");
static_assert(sizeof(B_WoodChopTask_C_SpawnTargets) == 0x0000B0, "Wrong size on B_WoodChopTask_C_SpawnTargets");
static_assert(offsetof(B_WoodChopTask_C_SpawnTargets, Temp_int_Array_Index_Variable) == 0x000000, "Member 'B_WoodChopTask_C_SpawnTargets::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(B_WoodChopTask_C_SpawnTargets, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'B_WoodChopTask_C_SpawnTargets::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(B_WoodChopTask_C_SpawnTargets, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'B_WoodChopTask_C_SpawnTargets::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_WoodChopTask_C_SpawnTargets, CallFunc_Array_Get_Item) == 0x000010, "Member 'B_WoodChopTask_C_SpawnTargets::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_WoodChopTask_C_SpawnTargets, CallFunc_Array_Get_Item_1) == 0x000018, "Member 'B_WoodChopTask_C_SpawnTargets::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(B_WoodChopTask_C_SpawnTargets, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'B_WoodChopTask_C_SpawnTargets::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_WoodChopTask_C_SpawnTargets, CallFunc_Array_Get_Item_2) == 0x000030, "Member 'B_WoodChopTask_C_SpawnTargets::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(B_WoodChopTask_C_SpawnTargets, CallFunc_Less_IntInt_ReturnValue) == 0x000090, "Member 'B_WoodChopTask_C_SpawnTargets::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_WoodChopTask_C_SpawnTargets, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000098, "Member 'B_WoodChopTask_C_SpawnTargets::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_WoodChopTask_C_SpawnTargets, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000A0, "Member 'B_WoodChopTask_C_SpawnTargets::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function B_WoodChopTask.B_WoodChopTask_C.StopTask
// 0x0020 (0x0020 - 0x0000)
struct B_WoodChopTask_C_StopTask final
{
public:
	class AB_Hunter_C*                            K2Node_DynamicCast_AsB_Hunter;                     // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_Spectator_C*                         K2Node_DynamicCast_AsB_Spectator;                  // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_WoodChopTask_C_StopTask) == 0x000008, "Wrong alignment on B_WoodChopTask_C_StopTask");
static_assert(sizeof(B_WoodChopTask_C_StopTask) == 0x000020, "Wrong size on B_WoodChopTask_C_StopTask");
static_assert(offsetof(B_WoodChopTask_C_StopTask, K2Node_DynamicCast_AsB_Hunter) == 0x000000, "Member 'B_WoodChopTask_C_StopTask::K2Node_DynamicCast_AsB_Hunter' has a wrong offset!");
static_assert(offsetof(B_WoodChopTask_C_StopTask, K2Node_DynamicCast_bSuccess) == 0x000008, "Member 'B_WoodChopTask_C_StopTask::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_WoodChopTask_C_StopTask, K2Node_DynamicCast_AsB_Spectator) == 0x000010, "Member 'B_WoodChopTask_C_StopTask::K2Node_DynamicCast_AsB_Spectator' has a wrong offset!");
static_assert(offsetof(B_WoodChopTask_C_StopTask, K2Node_DynamicCast_bSuccess_1) == 0x000018, "Member 'B_WoodChopTask_C_StopTask::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}
