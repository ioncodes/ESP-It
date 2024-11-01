#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Cable

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function B_Cable.B_Cable_C.CreateNodes
// 0x0020 (0x0020 - 0x0000)
struct B_Cable_C_CreateNodes final
{
public:
	int32                                         LocalSteps;                                        // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Cable_C_CreateNodes) == 0x000004, "Wrong alignment on B_Cable_C_CreateNodes");
static_assert(sizeof(B_Cable_C_CreateNodes) == 0x000020, "Wrong size on B_Cable_C_CreateNodes");
static_assert(offsetof(B_Cable_C_CreateNodes, LocalSteps) == 0x000000, "Member 'B_Cable_C_CreateNodes::LocalSteps' has a wrong offset!");
static_assert(offsetof(B_Cable_C_CreateNodes, Temp_int_Variable) == 0x000004, "Member 'B_Cable_C_CreateNodes::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(B_Cable_C_CreateNodes, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'B_Cable_C_CreateNodes::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Cable_C_CreateNodes, CallFunc_Multiply_IntInt_ReturnValue) == 0x00000C, "Member 'B_Cable_C_CreateNodes::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Cable_C_CreateNodes, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000010, "Member 'B_Cable_C_CreateNodes::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Cable_C_CreateNodes, CallFunc_Array_Add_ReturnValue) == 0x000014, "Member 'B_Cable_C_CreateNodes::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Cable_C_CreateNodes, CallFunc_Add_IntInt_ReturnValue_1) == 0x000018, "Member 'B_Cable_C_CreateNodes::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Cable_C_CreateNodes, CallFunc_Divide_IntInt_ReturnValue) == 0x00001C, "Member 'B_Cable_C_CreateNodes::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");

// Function B_Cable.B_Cable_C.ExecuteUbergraph_B_Cable
// 0x0420 (0x0420 - 0x0000)
struct B_Cable_C_ExecuteUbergraph_B_Cable final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AWindDirectionalSource*>         CallFunc_GetAllActorsOfClass_OutActors;            // 0x0020(0x0010)(ReferenceParm)
	class AWindDirectionalSource*                 CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_RandomUnitVectorInConeInRadians_ReturnValue; // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        CallFunc_GetCableParticleLocations_Locations;      // 0x00A0(0x0010)(ReferenceParm)
	TArray<struct FVector>                        CallFunc_GetCableParticleLocations_Locations_1;    // 0x00B0(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Get_Item_1;                         // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Array_Get_Item_2;                         // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_SmallLantern_C*                      CallFunc_Array_Get_Item_3;                         // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item_4;                         // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F4[0x4];                                       // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x00F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Array_Get_Item_5;                         // 0x0110(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x0128(0x00F8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_224[0xC];                                      // 0x0224(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_Conv_VectorToTransform_ReturnValue;       // 0x0230(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0294(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_295[0x3];                                      // 0x0295(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Array_Get_Item_6;                         // 0x0298(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x02B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x02B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_SmallLantern_C*                      CallFunc_FinishSpawningActor_ReturnValue;          // 0x02D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_RotatorFromAxisAndAngle_ReturnValue;      // 0x02D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x02F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F4[0x4];                                      // 0x02F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_RInterpTo_ReturnValue;                    // 0x02F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x0310(0x00F8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x0408(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x0410(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_Force_ImplicitCast;             // 0x0418(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Cable_C_ExecuteUbergraph_B_Cable) == 0x000010, "Wrong alignment on B_Cable_C_ExecuteUbergraph_B_Cable");
static_assert(sizeof(B_Cable_C_ExecuteUbergraph_B_Cable) == 0x000420, "Wrong size on B_Cable_C_ExecuteUbergraph_B_Cable");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, EntryPoint) == 0x000000, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, Temp_int_Array_Index_Variable) == 0x000008, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, Temp_int_Loop_Counter_Variable_1) == 0x000010, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, CallFunc_Add_IntInt_ReturnValue_1) == 0x000014, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, Temp_int_Array_Index_Variable_1) == 0x000018, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, K2Node_Event_DeltaSeconds) == 0x00001C, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, CallFunc_GetAllActorsOfClass_OutActors) == 0x000020, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, CallFunc_Array_Get_Item) == 0x000030, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, CallFunc_RandomUnitVectorInConeInRadians_ReturnValue) == 0x000038, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::CallFunc_RandomUnitVectorInConeInRadians_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, CallFunc_GetActorForwardVector_ReturnValue) == 0x000050, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000068, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, CallFunc_RandomFloatInRange_ReturnValue) == 0x000070, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000078, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000080, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000098, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, CallFunc_GetCableParticleLocations_Locations) == 0x0000A0, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::CallFunc_GetCableParticleLocations_Locations' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, CallFunc_GetCableParticleLocations_Locations_1) == 0x0000B0, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::CallFunc_GetCableParticleLocations_Locations_1' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, CallFunc_Array_Get_Item_1) == 0x0000C0, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, CallFunc_Array_Length_ReturnValue) == 0x0000C4, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, CallFunc_Array_Get_Item_2) == 0x0000C8, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, CallFunc_Less_IntInt_ReturnValue) == 0x0000E0, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, CallFunc_Array_Get_Item_3) == 0x0000E8, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, CallFunc_Array_Get_Item_4) == 0x0000F0, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x0000F8, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, CallFunc_Array_Get_Item_5) == 0x000110, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::CallFunc_Array_Get_Item_5' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000128, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, CallFunc_Array_Add_ReturnValue) == 0x000220, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, CallFunc_Conv_VectorToTransform_ReturnValue) == 0x000230, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::CallFunc_Conv_VectorToTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, CallFunc_Array_Length_ReturnValue_1) == 0x000290, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, CallFunc_Less_IntInt_ReturnValue_1) == 0x000294, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, CallFunc_Array_Get_Item_6) == 0x000298, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::CallFunc_Array_Get_Item_6' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0002B0, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0002B8, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, CallFunc_FinishSpawningActor_ReturnValue) == 0x0002D0, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, CallFunc_RotatorFromAxisAndAngle_ReturnValue) == 0x0002D8, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::CallFunc_RotatorFromAxisAndAngle_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, CallFunc_Array_Add_ReturnValue_1) == 0x0002F0, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, CallFunc_RInterpTo_ReturnValue) == 0x0002F8, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::CallFunc_RInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x000310, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000408, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000410, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Cable_C_ExecuteUbergraph_B_Cable, K2Node_VariableSet_Force_ImplicitCast) == 0x000418, "Member 'B_Cable_C_ExecuteUbergraph_B_Cable::K2Node_VariableSet_Force_ImplicitCast' has a wrong offset!");

// Function B_Cable.B_Cable_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct B_Cable_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Cable_C_ReceiveTick) == 0x000004, "Wrong alignment on B_Cable_C_ReceiveTick");
static_assert(sizeof(B_Cable_C_ReceiveTick) == 0x000004, "Wrong size on B_Cable_C_ReceiveTick");
static_assert(offsetof(B_Cable_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'B_Cable_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function B_Cable.B_Cable_C.UserConstructionScript
// 0x0004 (0x0004 - 0x0000)
struct B_Cable_C_UserConstructionScript final
{
public:
	float                                         K2Node_VariableSet_CableLength_ImplicitCast;       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Cable_C_UserConstructionScript) == 0x000004, "Wrong alignment on B_Cable_C_UserConstructionScript");
static_assert(sizeof(B_Cable_C_UserConstructionScript) == 0x000004, "Wrong size on B_Cable_C_UserConstructionScript");
static_assert(offsetof(B_Cable_C_UserConstructionScript, K2Node_VariableSet_CableLength_ImplicitCast) == 0x000000, "Member 'B_Cable_C_UserConstructionScript::K2Node_VariableSet_CableLength_ImplicitCast' has a wrong offset!");

}

