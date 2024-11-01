#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_DecalSelector

#include "Basic.hpp"


namespace SDK::Params
{

// Function B_DecalSelector.B_DecalSelector_C.UpdateValues
// 0x0048 (0x0048 - 0x0000)
struct B_DecalSelector_C_UpdateValues final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_2;           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1; // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_2; // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_DecalSelector_C_UpdateValues) == 0x000008, "Wrong alignment on B_DecalSelector_C_UpdateValues");
static_assert(sizeof(B_DecalSelector_C_UpdateValues) == 0x000048, "Wrong size on B_DecalSelector_C_UpdateValues");
static_assert(offsetof(B_DecalSelector_C_UpdateValues, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000000, "Member 'B_DecalSelector_C_UpdateValues::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_DecalSelector_C_UpdateValues, CallFunc_Multiply_IntInt_ReturnValue) == 0x000008, "Member 'B_DecalSelector_C_UpdateValues::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_DecalSelector_C_UpdateValues, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000010, "Member 'B_DecalSelector_C_UpdateValues::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_DecalSelector_C_UpdateValues, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000018, "Member 'B_DecalSelector_C_UpdateValues::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_DecalSelector_C_UpdateValues, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000020, "Member 'B_DecalSelector_C_UpdateValues::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_DecalSelector_C_UpdateValues, CallFunc_Conv_IntToDouble_ReturnValue_1) == 0x000028, "Member 'B_DecalSelector_C_UpdateValues::CallFunc_Conv_IntToDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_DecalSelector_C_UpdateValues, CallFunc_Conv_IntToDouble_ReturnValue_2) == 0x000030, "Member 'B_DecalSelector_C_UpdateValues::CallFunc_Conv_IntToDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_DecalSelector_C_UpdateValues, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000038, "Member 'B_DecalSelector_C_UpdateValues::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_DecalSelector_C_UpdateValues, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x00003C, "Member 'B_DecalSelector_C_UpdateValues::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(B_DecalSelector_C_UpdateValues, CallFunc_SetScalarParameterValue_Value_ImplicitCast_2) == 0x000040, "Member 'B_DecalSelector_C_UpdateValues::CallFunc_SetScalarParameterValue_Value_ImplicitCast_2' has a wrong offset!");

// Function B_DecalSelector.B_DecalSelector_C.ExecuteUbergraph_B_DecalSelector
// 0x0004 (0x0004 - 0x0000)
struct B_DecalSelector_C_ExecuteUbergraph_B_DecalSelector final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_DecalSelector_C_ExecuteUbergraph_B_DecalSelector) == 0x000004, "Wrong alignment on B_DecalSelector_C_ExecuteUbergraph_B_DecalSelector");
static_assert(sizeof(B_DecalSelector_C_ExecuteUbergraph_B_DecalSelector) == 0x000004, "Wrong size on B_DecalSelector_C_ExecuteUbergraph_B_DecalSelector");
static_assert(offsetof(B_DecalSelector_C_ExecuteUbergraph_B_DecalSelector, EntryPoint) == 0x000000, "Member 'B_DecalSelector_C_ExecuteUbergraph_B_DecalSelector::EntryPoint' has a wrong offset!");

}

