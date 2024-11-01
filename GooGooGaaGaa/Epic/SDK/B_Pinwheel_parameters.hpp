#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Pinwheel

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function B_Pinwheel.B_Pinwheel_C.UpdatePinWheelRotation
// 0x0268 (0x0268 - 0x0000)
struct B_Pinwheel_C_UpdatePinWheelRotation final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MovementTolerance;                                 // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ExtraVelocity;                                     // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DirectionTolerance;                                // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        WindMultiplier;                                    // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_DoubleDouble_ReturnValue;        // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Vector_GetAbs_ReturnValue;                // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_2;           // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_3;      // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_NegateVector_ReturnValue;                 // 0x00F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_4;      // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0110(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0128(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_AddRelativeRotation_SweepHitResult;    // 0x0140(0x00F8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_EqualEqual_VectorVector_ReturnValue;      // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_239[0x7];                                      // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetForwardVector_ReturnValue_1;           // 0x0240(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_VectorVector_ReturnValue_1;    // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_259[0x3];                                      // 0x0259(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_EqualEqual_VectorVector_ErrorTolerance_ImplicitCast; // 0x025C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_EqualEqual_VectorVector_ErrorTolerance_ImplicitCast_1; // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Roll_ImplicitCast;            // 0x0264(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Pinwheel_C_UpdatePinWheelRotation) == 0x000008, "Wrong alignment on B_Pinwheel_C_UpdatePinWheelRotation");
static_assert(sizeof(B_Pinwheel_C_UpdatePinWheelRotation) == 0x000268, "Wrong size on B_Pinwheel_C_UpdatePinWheelRotation");
static_assert(offsetof(B_Pinwheel_C_UpdatePinWheelRotation, DeltaTime) == 0x000000, "Member 'B_Pinwheel_C_UpdatePinWheelRotation::DeltaTime' has a wrong offset!");
static_assert(offsetof(B_Pinwheel_C_UpdatePinWheelRotation, MovementTolerance) == 0x000008, "Member 'B_Pinwheel_C_UpdatePinWheelRotation::MovementTolerance' has a wrong offset!");
static_assert(offsetof(B_Pinwheel_C_UpdatePinWheelRotation, ExtraVelocity) == 0x000010, "Member 'B_Pinwheel_C_UpdatePinWheelRotation::ExtraVelocity' has a wrong offset!");
static_assert(offsetof(B_Pinwheel_C_UpdatePinWheelRotation, DirectionTolerance) == 0x000018, "Member 'B_Pinwheel_C_UpdatePinWheelRotation::DirectionTolerance' has a wrong offset!");
static_assert(offsetof(B_Pinwheel_C_UpdatePinWheelRotation, WindMultiplier) == 0x000020, "Member 'B_Pinwheel_C_UpdatePinWheelRotation::WindMultiplier' has a wrong offset!");
static_assert(offsetof(B_Pinwheel_C_UpdatePinWheelRotation, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000028, "Member 'B_Pinwheel_C_UpdatePinWheelRotation::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pinwheel_C_UpdatePinWheelRotation, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000030, "Member 'B_Pinwheel_C_UpdatePinWheelRotation::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pinwheel_C_UpdatePinWheelRotation, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x000048, "Member 'B_Pinwheel_C_UpdatePinWheelRotation::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Pinwheel_C_UpdatePinWheelRotation, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000060, "Member 'B_Pinwheel_C_UpdatePinWheelRotation::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pinwheel_C_UpdatePinWheelRotation, CallFunc_NotEqual_DoubleDouble_ReturnValue) == 0x000078, "Member 'B_Pinwheel_C_UpdatePinWheelRotation::CallFunc_NotEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pinwheel_C_UpdatePinWheelRotation, CallFunc_Vector_GetAbs_ReturnValue) == 0x000080, "Member 'B_Pinwheel_C_UpdatePinWheelRotation::CallFunc_Vector_GetAbs_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pinwheel_C_UpdatePinWheelRotation, CallFunc_SelectFloat_ReturnValue) == 0x000098, "Member 'B_Pinwheel_C_UpdatePinWheelRotation::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pinwheel_C_UpdatePinWheelRotation, CallFunc_BreakVector_X) == 0x0000A0, "Member 'B_Pinwheel_C_UpdatePinWheelRotation::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(B_Pinwheel_C_UpdatePinWheelRotation, CallFunc_BreakVector_Y) == 0x0000A8, "Member 'B_Pinwheel_C_UpdatePinWheelRotation::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(B_Pinwheel_C_UpdatePinWheelRotation, CallFunc_BreakVector_Z) == 0x0000B0, "Member 'B_Pinwheel_C_UpdatePinWheelRotation::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(B_Pinwheel_C_UpdatePinWheelRotation, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0000B8, "Member 'B_Pinwheel_C_UpdatePinWheelRotation::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pinwheel_C_UpdatePinWheelRotation, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x0000C0, "Member 'B_Pinwheel_C_UpdatePinWheelRotation::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Pinwheel_C_UpdatePinWheelRotation, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x0000C8, "Member 'B_Pinwheel_C_UpdatePinWheelRotation::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Pinwheel_C_UpdatePinWheelRotation, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0000D0, "Member 'B_Pinwheel_C_UpdatePinWheelRotation::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pinwheel_C_UpdatePinWheelRotation, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x0000D8, "Member 'B_Pinwheel_C_UpdatePinWheelRotation::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Pinwheel_C_UpdatePinWheelRotation, CallFunc_Add_DoubleDouble_ReturnValue_2) == 0x0000E0, "Member 'B_Pinwheel_C_UpdatePinWheelRotation::CallFunc_Add_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Pinwheel_C_UpdatePinWheelRotation, CallFunc_Multiply_DoubleDouble_ReturnValue_3) == 0x0000E8, "Member 'B_Pinwheel_C_UpdatePinWheelRotation::CallFunc_Multiply_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_Pinwheel_C_UpdatePinWheelRotation, CallFunc_NegateVector_ReturnValue) == 0x0000F0, "Member 'B_Pinwheel_C_UpdatePinWheelRotation::CallFunc_NegateVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pinwheel_C_UpdatePinWheelRotation, CallFunc_Multiply_DoubleDouble_ReturnValue_4) == 0x000108, "Member 'B_Pinwheel_C_UpdatePinWheelRotation::CallFunc_Multiply_DoubleDouble_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(B_Pinwheel_C_UpdatePinWheelRotation, CallFunc_MakeRotator_ReturnValue) == 0x000110, "Member 'B_Pinwheel_C_UpdatePinWheelRotation::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pinwheel_C_UpdatePinWheelRotation, CallFunc_GetForwardVector_ReturnValue) == 0x000128, "Member 'B_Pinwheel_C_UpdatePinWheelRotation::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pinwheel_C_UpdatePinWheelRotation, CallFunc_K2_AddRelativeRotation_SweepHitResult) == 0x000140, "Member 'B_Pinwheel_C_UpdatePinWheelRotation::CallFunc_K2_AddRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(B_Pinwheel_C_UpdatePinWheelRotation, CallFunc_EqualEqual_VectorVector_ReturnValue) == 0x000238, "Member 'B_Pinwheel_C_UpdatePinWheelRotation::CallFunc_EqualEqual_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pinwheel_C_UpdatePinWheelRotation, CallFunc_GetForwardVector_ReturnValue_1) == 0x000240, "Member 'B_Pinwheel_C_UpdatePinWheelRotation::CallFunc_GetForwardVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Pinwheel_C_UpdatePinWheelRotation, CallFunc_EqualEqual_VectorVector_ReturnValue_1) == 0x000258, "Member 'B_Pinwheel_C_UpdatePinWheelRotation::CallFunc_EqualEqual_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Pinwheel_C_UpdatePinWheelRotation, CallFunc_EqualEqual_VectorVector_ErrorTolerance_ImplicitCast) == 0x00025C, "Member 'B_Pinwheel_C_UpdatePinWheelRotation::CallFunc_EqualEqual_VectorVector_ErrorTolerance_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Pinwheel_C_UpdatePinWheelRotation, CallFunc_EqualEqual_VectorVector_ErrorTolerance_ImplicitCast_1) == 0x000260, "Member 'B_Pinwheel_C_UpdatePinWheelRotation::CallFunc_EqualEqual_VectorVector_ErrorTolerance_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(B_Pinwheel_C_UpdatePinWheelRotation, CallFunc_MakeRotator_Roll_ImplicitCast) == 0x000264, "Member 'B_Pinwheel_C_UpdatePinWheelRotation::CallFunc_MakeRotator_Roll_ImplicitCast' has a wrong offset!");

// Function B_Pinwheel.B_Pinwheel_C.InitializeWindForceDirection
// 0x0038 (0x0038 - 0x0000)
struct B_Pinwheel_C_InitializeWindForceDirection final
{
public:
	TArray<class AWindDirectionalSource*>         CallFunc_GetAllActorsOfClass_OutActors;            // 0x0000(0x0010)(ReferenceParm)
	class AWindDirectionalSource*                 CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Pinwheel_C_InitializeWindForceDirection) == 0x000008, "Wrong alignment on B_Pinwheel_C_InitializeWindForceDirection");
static_assert(sizeof(B_Pinwheel_C_InitializeWindForceDirection) == 0x000038, "Wrong size on B_Pinwheel_C_InitializeWindForceDirection");
static_assert(offsetof(B_Pinwheel_C_InitializeWindForceDirection, CallFunc_GetAllActorsOfClass_OutActors) == 0x000000, "Member 'B_Pinwheel_C_InitializeWindForceDirection::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(B_Pinwheel_C_InitializeWindForceDirection, CallFunc_Array_Get_Item) == 0x000010, "Member 'B_Pinwheel_C_InitializeWindForceDirection::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_Pinwheel_C_InitializeWindForceDirection, CallFunc_GetActorForwardVector_ReturnValue) == 0x000018, "Member 'B_Pinwheel_C_InitializeWindForceDirection::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pinwheel_C_InitializeWindForceDirection, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'B_Pinwheel_C_InitializeWindForceDirection::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function B_Pinwheel.B_Pinwheel_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct B_Pinwheel_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Pinwheel_C_ReceiveTick) == 0x000004, "Wrong alignment on B_Pinwheel_C_ReceiveTick");
static_assert(sizeof(B_Pinwheel_C_ReceiveTick) == 0x000004, "Wrong size on B_Pinwheel_C_ReceiveTick");
static_assert(offsetof(B_Pinwheel_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'B_Pinwheel_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function B_Pinwheel.B_Pinwheel_C.ExecuteUbergraph_B_Pinwheel
// 0x0030 (0x0030 - 0x0000)
struct B_Pinwheel_C_ExecuteUbergraph_B_Pinwheel final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_UpdatePinWheelRotation_DeltaTime_ImplicitCast; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Pinwheel_C_ExecuteUbergraph_B_Pinwheel) == 0x000008, "Wrong alignment on B_Pinwheel_C_ExecuteUbergraph_B_Pinwheel");
static_assert(sizeof(B_Pinwheel_C_ExecuteUbergraph_B_Pinwheel) == 0x000030, "Wrong size on B_Pinwheel_C_ExecuteUbergraph_B_Pinwheel");
static_assert(offsetof(B_Pinwheel_C_ExecuteUbergraph_B_Pinwheel, EntryPoint) == 0x000000, "Member 'B_Pinwheel_C_ExecuteUbergraph_B_Pinwheel::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Pinwheel_C_ExecuteUbergraph_B_Pinwheel, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000008, "Member 'B_Pinwheel_C_ExecuteUbergraph_B_Pinwheel::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pinwheel_C_ExecuteUbergraph_B_Pinwheel, K2Node_Event_DeltaSeconds) == 0x000020, "Member 'B_Pinwheel_C_ExecuteUbergraph_B_Pinwheel::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(B_Pinwheel_C_ExecuteUbergraph_B_Pinwheel, CallFunc_UpdatePinWheelRotation_DeltaTime_ImplicitCast) == 0x000028, "Member 'B_Pinwheel_C_ExecuteUbergraph_B_Pinwheel::CallFunc_UpdatePinWheelRotation_DeltaTime_ImplicitCast' has a wrong offset!");

}

