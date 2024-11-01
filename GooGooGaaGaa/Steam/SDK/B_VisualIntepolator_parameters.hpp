#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_VisualIntepolator

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function B_VisualIntepolator.B_VisualIntepolator_C.ExecuteUbergraph_B_VisualIntepolator
// 0x02C0 (0x02C0 - 0x0000)
struct B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMeshComponent*>                 CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMeshComponent*                         CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize_ReturnValue;                        // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A8[0x8];                                       // 0x00A8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTargetTransform_Transform;             // 0x00B0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorTransform_SweepHitResult;      // 0x0110(0x00F8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorTransform_ReturnValue;         // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_209[0x7];                                      // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0218(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_231[0x7];                                      // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_3;        // 0x0238(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue_1;       // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x0258(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Divide_VectorFloat_ReturnValue;           // 0x0270(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0288(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VInterpTo_ReturnValue;                    // 0x0290(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_StaticMeshProp_C*                    K2Node_DynamicCast_AsB_Static_Mesh_Prop;           // 0x02A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B1[0x3];                                      // 0x02B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_VInterpTo_DeltaTime_ImplicitCast;         // 0x02B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast; // 0x02B8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator) == 0x000010, "Wrong alignment on B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator");
static_assert(sizeof(B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator) == 0x0002C0, "Wrong size on B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator");
static_assert(offsetof(B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator, EntryPoint) == 0x000000, "Member 'B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000008, "Member 'B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator, Temp_int_Variable) == 0x00001C, "Member 'B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator, CallFunc_Array_Get_Item) == 0x000028, "Member 'B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator, K2Node_Event_DeltaSeconds) == 0x000034, "Member 'B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000038, "Member 'B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000050, "Member 'B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000068, "Member 'B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000070, "Member 'B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator, CallFunc_VSize_ReturnValue) == 0x000088, "Member 'B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000090, "Member 'B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000098, "Member 'B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0000A0, "Member 'B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator, CallFunc_GetTargetTransform_Transform) == 0x0000B0, "Member 'B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator::CallFunc_GetTargetTransform_Transform' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator, CallFunc_K2_SetActorTransform_SweepHitResult) == 0x000110, "Member 'B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator::CallFunc_K2_SetActorTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator, CallFunc_K2_SetActorTransform_ReturnValue) == 0x000208, "Member 'B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator::CallFunc_K2_SetActorTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000210, "Member 'B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000218, "Member 'B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000230, "Member 'B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator, CallFunc_K2_GetActorLocation_ReturnValue_3) == 0x000238, "Member 'B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator::CallFunc_K2_GetActorLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator, CallFunc_GetWorldDeltaSeconds_ReturnValue_1) == 0x000250, "Member 'B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator::CallFunc_GetWorldDeltaSeconds_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x000258, "Member 'B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator, CallFunc_Divide_VectorFloat_ReturnValue) == 0x000270, "Member 'B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator::CallFunc_Divide_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator, CallFunc_GetOwner_ReturnValue) == 0x000288, "Member 'B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator, CallFunc_VInterpTo_ReturnValue) == 0x000290, "Member 'B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator::CallFunc_VInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator, K2Node_DynamicCast_AsB_Static_Mesh_Prop) == 0x0002A8, "Member 'B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator::K2Node_DynamicCast_AsB_Static_Mesh_Prop' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator, K2Node_DynamicCast_bSuccess) == 0x0002B0, "Member 'B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator, CallFunc_VInterpTo_DeltaTime_ImplicitCast) == 0x0002B4, "Member 'B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator::CallFunc_VInterpTo_DeltaTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator, CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast) == 0x0002B8, "Member 'B_VisualIntepolator_C_ExecuteUbergraph_B_VisualIntepolator::CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast' has a wrong offset!");

// Function B_VisualIntepolator.B_VisualIntepolator_C.GetTargetTransform
// 0x01A0 (0x01A0 - 0x0000)
struct B_VisualIntepolator_C_GetTargetTransform final
{
public:
	struct FTransform                             Transform;                                         // 0x0000(0x0060)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0060(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x00C0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_121[0xF];                                      // 0x0121(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0130(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_VisualIntepolator_C_GetTargetTransform) == 0x000010, "Wrong alignment on B_VisualIntepolator_C_GetTargetTransform");
static_assert(sizeof(B_VisualIntepolator_C_GetTargetTransform) == 0x0001A0, "Wrong size on B_VisualIntepolator_C_GetTargetTransform");
static_assert(offsetof(B_VisualIntepolator_C_GetTargetTransform, Transform) == 0x000000, "Member 'B_VisualIntepolator_C_GetTargetTransform::Transform' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_GetTargetTransform, CallFunc_MakeTransform_ReturnValue) == 0x000060, "Member 'B_VisualIntepolator_C_GetTargetTransform::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_GetTargetTransform, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x0000C0, "Member 'B_VisualIntepolator_C_GetTargetTransform::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_GetTargetTransform, CallFunc_IsValid_ReturnValue) == 0x000120, "Member 'B_VisualIntepolator_C_GetTargetTransform::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_GetTargetTransform, CallFunc_GetTransform_ReturnValue) == 0x000130, "Member 'B_VisualIntepolator_C_GetTargetTransform::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_GetTargetTransform, CallFunc_IsValid_ReturnValue_1) == 0x000190, "Member 'B_VisualIntepolator_C_GetTargetTransform::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function B_VisualIntepolator.B_VisualIntepolator_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct B_VisualIntepolator_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_VisualIntepolator_C_ReceiveTick) == 0x000004, "Wrong alignment on B_VisualIntepolator_C_ReceiveTick");
static_assert(sizeof(B_VisualIntepolator_C_ReceiveTick) == 0x000004, "Wrong size on B_VisualIntepolator_C_ReceiveTick");
static_assert(offsetof(B_VisualIntepolator_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'B_VisualIntepolator_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function B_VisualIntepolator.B_VisualIntepolator_C.UpdateInterpolation
// 0x0230 (0x0230 - 0x0000)
struct B_VisualIntepolator_C_UpdateInterpolation final
{
public:
	struct FTransform                             CallFunc_GetTargetTransform_Transform;             // 0x0000(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0060(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_TInterpTo_ReturnValue;                    // 0x00C0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorTransform_SweepHitResult;      // 0x0120(0x00F8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorTransform_ReturnValue;         // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_219[0x3];                                      // 0x0219(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_TInterpTo_InterpSpeed_ImplicitCast;       // 0x021C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_TInterpTo_DeltaTime_ImplicitCast;         // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_VisualIntepolator_C_UpdateInterpolation) == 0x000010, "Wrong alignment on B_VisualIntepolator_C_UpdateInterpolation");
static_assert(sizeof(B_VisualIntepolator_C_UpdateInterpolation) == 0x000230, "Wrong size on B_VisualIntepolator_C_UpdateInterpolation");
static_assert(offsetof(B_VisualIntepolator_C_UpdateInterpolation, CallFunc_GetTargetTransform_Transform) == 0x000000, "Member 'B_VisualIntepolator_C_UpdateInterpolation::CallFunc_GetTargetTransform_Transform' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_UpdateInterpolation, CallFunc_GetTransform_ReturnValue) == 0x000060, "Member 'B_VisualIntepolator_C_UpdateInterpolation::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_UpdateInterpolation, CallFunc_TInterpTo_ReturnValue) == 0x0000C0, "Member 'B_VisualIntepolator_C_UpdateInterpolation::CallFunc_TInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_UpdateInterpolation, CallFunc_K2_SetActorTransform_SweepHitResult) == 0x000120, "Member 'B_VisualIntepolator_C_UpdateInterpolation::CallFunc_K2_SetActorTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_UpdateInterpolation, CallFunc_K2_SetActorTransform_ReturnValue) == 0x000218, "Member 'B_VisualIntepolator_C_UpdateInterpolation::CallFunc_K2_SetActorTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_UpdateInterpolation, CallFunc_TInterpTo_InterpSpeed_ImplicitCast) == 0x00021C, "Member 'B_VisualIntepolator_C_UpdateInterpolation::CallFunc_TInterpTo_InterpSpeed_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_VisualIntepolator_C_UpdateInterpolation, CallFunc_TInterpTo_DeltaTime_ImplicitCast) == 0x000220, "Member 'B_VisualIntepolator_C_UpdateInterpolation::CallFunc_TInterpTo_DeltaTime_ImplicitCast' has a wrong offset!");

}

