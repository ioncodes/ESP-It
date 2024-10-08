#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_AnvilField

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function B_AnvilField.B_AnvilField_C.ActOnSpawnTransform
// 0x0070 (0x0070 - 0x0000)
struct B_AnvilField_C_ActOnSpawnTransform final
{
public:
	struct FTransform                             Spawn_Transform;                                   // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPossibleTargetIndex;                             // 0x0060(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_AnvilField_C_ActOnSpawnTransform) == 0x000010, "Wrong alignment on B_AnvilField_C_ActOnSpawnTransform");
static_assert(sizeof(B_AnvilField_C_ActOnSpawnTransform) == 0x000070, "Wrong size on B_AnvilField_C_ActOnSpawnTransform");
static_assert(offsetof(B_AnvilField_C_ActOnSpawnTransform, Spawn_Transform) == 0x000000, "Member 'B_AnvilField_C_ActOnSpawnTransform::Spawn_Transform' has a wrong offset!");
static_assert(offsetof(B_AnvilField_C_ActOnSpawnTransform, IsPossibleTargetIndex) == 0x000060, "Member 'B_AnvilField_C_ActOnSpawnTransform::IsPossibleTargetIndex' has a wrong offset!");
static_assert(offsetof(B_AnvilField_C_ActOnSpawnTransform, CallFunc_Array_Add_ReturnValue) == 0x000064, "Member 'B_AnvilField_C_ActOnSpawnTransform::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

}

