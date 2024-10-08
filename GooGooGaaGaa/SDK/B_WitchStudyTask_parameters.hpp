#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_WitchStudyTask

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function B_WitchStudyTask.B_WitchStudyTask_C.InitializeIndividualTaskParameters
// 0x0028 (0x0028 - 0x0000)
struct B_WitchStudyTask_C_InitializeIndividualTaskParameters final
{
public:
	TArray<class AB_WitchStudyField_C*>           CallFunc_GetAllActorsOfClass_OutActors;            // 0x0000(0x0010)(ReferenceParm)
	TArray<class UClass*>                         K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm)
	class AB_WitchStudyField_C*                   CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_WitchStudyTask_C_InitializeIndividualTaskParameters) == 0x000008, "Wrong alignment on B_WitchStudyTask_C_InitializeIndividualTaskParameters");
static_assert(sizeof(B_WitchStudyTask_C_InitializeIndividualTaskParameters) == 0x000028, "Wrong size on B_WitchStudyTask_C_InitializeIndividualTaskParameters");
static_assert(offsetof(B_WitchStudyTask_C_InitializeIndividualTaskParameters, CallFunc_GetAllActorsOfClass_OutActors) == 0x000000, "Member 'B_WitchStudyTask_C_InitializeIndividualTaskParameters::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(B_WitchStudyTask_C_InitializeIndividualTaskParameters, K2Node_MakeArray_Array) == 0x000010, "Member 'B_WitchStudyTask_C_InitializeIndividualTaskParameters::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(B_WitchStudyTask_C_InitializeIndividualTaskParameters, CallFunc_Array_Get_Item) == 0x000020, "Member 'B_WitchStudyTask_C_InitializeIndividualTaskParameters::CallFunc_Array_Get_Item' has a wrong offset!");

// Function B_WitchStudyTask.B_WitchStudyTask_C.SpawnTargets
// 0x00A0 (0x00A0 - 0x0000)
struct B_WitchStudyTask_C_SpawnTargets final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_Array_Get_Item;                           // 0x0010(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CallFunc_Array_Get_Item_1;                         // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D[0x3];                                       // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_Array_Get_Item_2;                         // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AB_TaskTargetActor_C*                   CallFunc_FinishSpawningActor_ReturnValue;          // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_WitchStudyTask_C_SpawnTargets) == 0x000010, "Wrong alignment on B_WitchStudyTask_C_SpawnTargets");
static_assert(sizeof(B_WitchStudyTask_C_SpawnTargets) == 0x0000A0, "Wrong size on B_WitchStudyTask_C_SpawnTargets");
static_assert(offsetof(B_WitchStudyTask_C_SpawnTargets, Temp_int_Array_Index_Variable) == 0x000000, "Member 'B_WitchStudyTask_C_SpawnTargets::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(B_WitchStudyTask_C_SpawnTargets, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'B_WitchStudyTask_C_SpawnTargets::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(B_WitchStudyTask_C_SpawnTargets, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'B_WitchStudyTask_C_SpawnTargets::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_WitchStudyTask_C_SpawnTargets, CallFunc_Array_Get_Item) == 0x000010, "Member 'B_WitchStudyTask_C_SpawnTargets::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_WitchStudyTask_C_SpawnTargets, CallFunc_Array_Get_Item_1) == 0x000070, "Member 'B_WitchStudyTask_C_SpawnTargets::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(B_WitchStudyTask_C_SpawnTargets, CallFunc_Array_Length_ReturnValue) == 0x000078, "Member 'B_WitchStudyTask_C_SpawnTargets::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_WitchStudyTask_C_SpawnTargets, CallFunc_Less_IntInt_ReturnValue) == 0x00007C, "Member 'B_WitchStudyTask_C_SpawnTargets::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_WitchStudyTask_C_SpawnTargets, CallFunc_Array_Get_Item_2) == 0x000080, "Member 'B_WitchStudyTask_C_SpawnTargets::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(B_WitchStudyTask_C_SpawnTargets, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000088, "Member 'B_WitchStudyTask_C_SpawnTargets::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_WitchStudyTask_C_SpawnTargets, CallFunc_FinishSpawningActor_ReturnValue) == 0x000090, "Member 'B_WitchStudyTask_C_SpawnTargets::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

}

