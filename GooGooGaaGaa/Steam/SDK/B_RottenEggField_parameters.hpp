#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_RottenEggField

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function B_RottenEggField.B_RottenEggField_C.ActOnSpawnTransform
// 0x0160 (0x0160 - 0x0000)
struct B_RottenEggField_C_ActOnSpawnTransform final
{
public:
	struct FTransform                             Spawn_Transform;                                   // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPossibleTargetIndex;                             // 0x0060(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E8[0x8];                                       // 0x00E8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00F0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AB_RottenEggChickenDummy_C*             CallFunc_FinishSpawningActor_ReturnValue;          // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_RottenEggField_C_ActOnSpawnTransform) == 0x000010, "Wrong alignment on B_RottenEggField_C_ActOnSpawnTransform");
static_assert(sizeof(B_RottenEggField_C_ActOnSpawnTransform) == 0x000160, "Wrong size on B_RottenEggField_C_ActOnSpawnTransform");
static_assert(offsetof(B_RottenEggField_C_ActOnSpawnTransform, Spawn_Transform) == 0x000000, "Member 'B_RottenEggField_C_ActOnSpawnTransform::Spawn_Transform' has a wrong offset!");
static_assert(offsetof(B_RottenEggField_C_ActOnSpawnTransform, IsPossibleTargetIndex) == 0x000060, "Member 'B_RottenEggField_C_ActOnSpawnTransform::IsPossibleTargetIndex' has a wrong offset!");
static_assert(offsetof(B_RottenEggField_C_ActOnSpawnTransform, CallFunc_BreakTransform_Location) == 0x000068, "Member 'B_RottenEggField_C_ActOnSpawnTransform::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(B_RottenEggField_C_ActOnSpawnTransform, CallFunc_BreakTransform_Rotation) == 0x000080, "Member 'B_RottenEggField_C_ActOnSpawnTransform::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(B_RottenEggField_C_ActOnSpawnTransform, CallFunc_BreakTransform_Scale) == 0x000098, "Member 'B_RottenEggField_C_ActOnSpawnTransform::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(B_RottenEggField_C_ActOnSpawnTransform, CallFunc_BreakVector_X) == 0x0000B0, "Member 'B_RottenEggField_C_ActOnSpawnTransform::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(B_RottenEggField_C_ActOnSpawnTransform, CallFunc_BreakVector_Y) == 0x0000B8, "Member 'B_RottenEggField_C_ActOnSpawnTransform::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(B_RottenEggField_C_ActOnSpawnTransform, CallFunc_BreakVector_Z) == 0x0000C0, "Member 'B_RottenEggField_C_ActOnSpawnTransform::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(B_RottenEggField_C_ActOnSpawnTransform, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0000C8, "Member 'B_RottenEggField_C_ActOnSpawnTransform::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_RottenEggField_C_ActOnSpawnTransform, CallFunc_MakeVector_ReturnValue) == 0x0000D0, "Member 'B_RottenEggField_C_ActOnSpawnTransform::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_RottenEggField_C_ActOnSpawnTransform, CallFunc_MakeTransform_ReturnValue) == 0x0000F0, "Member 'B_RottenEggField_C_ActOnSpawnTransform::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_RottenEggField_C_ActOnSpawnTransform, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000150, "Member 'B_RottenEggField_C_ActOnSpawnTransform::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_RottenEggField_C_ActOnSpawnTransform, CallFunc_FinishSpawningActor_ReturnValue) == 0x000158, "Member 'B_RottenEggField_C_ActOnSpawnTransform::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function B_RottenEggField.B_RottenEggField_C.SpawnDummy
// 0x0060 (0x0060 - 0x0000)
struct B_RottenEggField_C_SpawnDummy final
{
public:
	struct FTransform                             DummyTransform;                                    // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_RottenEggField_C_SpawnDummy) == 0x000010, "Wrong alignment on B_RottenEggField_C_SpawnDummy");
static_assert(sizeof(B_RottenEggField_C_SpawnDummy) == 0x000060, "Wrong size on B_RottenEggField_C_SpawnDummy");
static_assert(offsetof(B_RottenEggField_C_SpawnDummy, DummyTransform) == 0x000000, "Member 'B_RottenEggField_C_SpawnDummy::DummyTransform' has a wrong offset!");

}
