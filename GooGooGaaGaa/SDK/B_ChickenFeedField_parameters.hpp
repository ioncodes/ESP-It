#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_ChickenFeedField

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function B_ChickenFeedField.B_ChickenFeedField_C.SpawnDummy
// 0x0160 (0x0160 - 0x0000)
struct B_ChickenFeedField_C_SpawnDummy final
{
public:
	struct FTransform                             DummyTransform;                                    // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             RotatedTransform;                                  // 0x0060(0x0060)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38FE[0x8];                                     // 0x00C8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetRotatedTransform_RotatedTransform;     // 0x00D0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_ChickenFeedDoubleDummy_C*            CallFunc_FinishSpawningActor_ReturnValue;          // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RandomBoolWithWeightFromStream_ReturnValue; // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38FF[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AB_Dummy_C*                             CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x0148(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RandomBoolWithWeightFromStream_ReturnValue_1; // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3900[0x3];                                     // 0x0151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RandomBoolWithWeightFromStream_Weight_ImplicitCast; // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_ChickenFeedField_C_SpawnDummy) == 0x000010, "Wrong alignment on B_ChickenFeedField_C_SpawnDummy");
static_assert(sizeof(B_ChickenFeedField_C_SpawnDummy) == 0x000160, "Wrong size on B_ChickenFeedField_C_SpawnDummy");
static_assert(offsetof(B_ChickenFeedField_C_SpawnDummy, DummyTransform) == 0x000000, "Member 'B_ChickenFeedField_C_SpawnDummy::DummyTransform' has a wrong offset!");
static_assert(offsetof(B_ChickenFeedField_C_SpawnDummy, RotatedTransform) == 0x000060, "Member 'B_ChickenFeedField_C_SpawnDummy::RotatedTransform' has a wrong offset!");
static_assert(offsetof(B_ChickenFeedField_C_SpawnDummy, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000C0, "Member 'B_ChickenFeedField_C_SpawnDummy::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ChickenFeedField_C_SpawnDummy, CallFunc_GetRotatedTransform_RotatedTransform) == 0x0000D0, "Member 'B_ChickenFeedField_C_SpawnDummy::CallFunc_GetRotatedTransform_RotatedTransform' has a wrong offset!");
static_assert(offsetof(B_ChickenFeedField_C_SpawnDummy, CallFunc_FinishSpawningActor_ReturnValue) == 0x000130, "Member 'B_ChickenFeedField_C_SpawnDummy::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ChickenFeedField_C_SpawnDummy, CallFunc_RandomBoolWithWeightFromStream_ReturnValue) == 0x000138, "Member 'B_ChickenFeedField_C_SpawnDummy::CallFunc_RandomBoolWithWeightFromStream_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ChickenFeedField_C_SpawnDummy, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1) == 0x000140, "Member 'B_ChickenFeedField_C_SpawnDummy::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_ChickenFeedField_C_SpawnDummy, CallFunc_FinishSpawningActor_ReturnValue_1) == 0x000148, "Member 'B_ChickenFeedField_C_SpawnDummy::CallFunc_FinishSpawningActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_ChickenFeedField_C_SpawnDummy, CallFunc_RandomBoolWithWeightFromStream_ReturnValue_1) == 0x000150, "Member 'B_ChickenFeedField_C_SpawnDummy::CallFunc_RandomBoolWithWeightFromStream_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_ChickenFeedField_C_SpawnDummy, CallFunc_RandomBoolWithWeightFromStream_Weight_ImplicitCast) == 0x000154, "Member 'B_ChickenFeedField_C_SpawnDummy::CallFunc_RandomBoolWithWeightFromStream_Weight_ImplicitCast' has a wrong offset!");

// Function B_ChickenFeedField.B_ChickenFeedField_C.UpdateFieldParameters
// 0x0018 (0x0018 - 0x0000)
struct B_ChickenFeedField_C_UpdateFieldParameters final
{
public:
	class UObject*                                CallFunc_GetDefaultObject_ReturnValue;             // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AB_Dummy_C*                             K2Node_DynamicCast_AsB_Dummy;                      // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_ChickenFeedField_C_UpdateFieldParameters) == 0x000008, "Wrong alignment on B_ChickenFeedField_C_UpdateFieldParameters");
static_assert(sizeof(B_ChickenFeedField_C_UpdateFieldParameters) == 0x000018, "Wrong size on B_ChickenFeedField_C_UpdateFieldParameters");
static_assert(offsetof(B_ChickenFeedField_C_UpdateFieldParameters, CallFunc_GetDefaultObject_ReturnValue) == 0x000000, "Member 'B_ChickenFeedField_C_UpdateFieldParameters::CallFunc_GetDefaultObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ChickenFeedField_C_UpdateFieldParameters, K2Node_DynamicCast_AsB_Dummy) == 0x000008, "Member 'B_ChickenFeedField_C_UpdateFieldParameters::K2Node_DynamicCast_AsB_Dummy' has a wrong offset!");
static_assert(offsetof(B_ChickenFeedField_C_UpdateFieldParameters, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'B_ChickenFeedField_C_UpdateFieldParameters::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}
