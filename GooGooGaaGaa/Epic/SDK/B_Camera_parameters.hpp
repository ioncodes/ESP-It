#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Camera

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function B_Camera.B_Camera_C.ActivateActionProp
// 0x0010 (0x0010 - 0x0000)
struct B_Camera_C_ActivateActionProp final
{
public:
	bool                                          Override;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlaying_ReturnValue;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Test_For_AchievementTarget_Valid_Target;  // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnSystemAttached_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Camera_C_ActivateActionProp) == 0x000008, "Wrong alignment on B_Camera_C_ActivateActionProp");
static_assert(sizeof(B_Camera_C_ActivateActionProp) == 0x000010, "Wrong size on B_Camera_C_ActivateActionProp");
static_assert(offsetof(B_Camera_C_ActivateActionProp, Override) == 0x000000, "Member 'B_Camera_C_ActivateActionProp::Override' has a wrong offset!");
static_assert(offsetof(B_Camera_C_ActivateActionProp, CallFunc_IsPlaying_ReturnValue) == 0x000001, "Member 'B_Camera_C_ActivateActionProp::CallFunc_IsPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Camera_C_ActivateActionProp, CallFunc_Not_PreBool_ReturnValue) == 0x000002, "Member 'B_Camera_C_ActivateActionProp::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Camera_C_ActivateActionProp, CallFunc_Test_For_AchievementTarget_Valid_Target) == 0x000003, "Member 'B_Camera_C_ActivateActionProp::CallFunc_Test_For_AchievementTarget_Valid_Target' has a wrong offset!");
static_assert(offsetof(B_Camera_C_ActivateActionProp, CallFunc_SpawnSystemAttached_ReturnValue) == 0x000008, "Member 'B_Camera_C_ActivateActionProp::CallFunc_SpawnSystemAttached_ReturnValue' has a wrong offset!");

// Function B_Camera.B_Camera_C.Test For AchievementTarget
// 0x0260 (0x0260 - 0x0000)
struct B_Camera_C_Test_For_AchievementTarget final
{
public:
	bool                                          Valid_Target;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0008(0x0010)(ConstParm, ReferenceParm)
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;                            // 0x0018(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingleForObjects_OutHit;         // 0x0070(0x00F8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingleForObjects_ReturnValue;    // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x016A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16B[0x1];                                      // 0x016B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_174[0x4];                                      // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0178(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0190(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x01A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x01C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x01D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x01E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x01E8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0204(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_20C[0x4];                                      // 0x020C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0210(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0228(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_241[0x7];                                      // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_AchievementTestVolume_C*             K2Node_DynamicCast_AsB_Achievement_Test_Volume;    // 0x0248(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_251[0x7];                                      // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Camera_C_Test_For_AchievementTarget) == 0x000008, "Wrong alignment on B_Camera_C_Test_For_AchievementTarget");
static_assert(sizeof(B_Camera_C_Test_For_AchievementTarget) == 0x000260, "Wrong size on B_Camera_C_Test_For_AchievementTarget");
static_assert(offsetof(B_Camera_C_Test_For_AchievementTarget, Valid_Target) == 0x000000, "Member 'B_Camera_C_Test_For_AchievementTarget::Valid_Target' has a wrong offset!");
static_assert(offsetof(B_Camera_C_Test_For_AchievementTarget, Temp_object_Variable) == 0x000008, "Member 'B_Camera_C_Test_For_AchievementTarget::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(B_Camera_C_Test_For_AchievementTarget, K2Node_MakeArray_Array) == 0x000018, "Member 'B_Camera_C_Test_For_AchievementTarget::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(B_Camera_C_Test_For_AchievementTarget, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'B_Camera_C_Test_For_AchievementTarget::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Camera_C_Test_For_AchievementTarget, CallFunc_GetActorForwardVector_ReturnValue) == 0x000040, "Member 'B_Camera_C_Test_For_AchievementTarget::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Camera_C_Test_For_AchievementTarget, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000058, "Member 'B_Camera_C_Test_For_AchievementTarget::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Camera_C_Test_For_AchievementTarget, CallFunc_LineTraceSingleForObjects_OutHit) == 0x000070, "Member 'B_Camera_C_Test_For_AchievementTarget::CallFunc_LineTraceSingleForObjects_OutHit' has a wrong offset!");
static_assert(offsetof(B_Camera_C_Test_For_AchievementTarget, CallFunc_LineTraceSingleForObjects_ReturnValue) == 0x000168, "Member 'B_Camera_C_Test_For_AchievementTarget::CallFunc_LineTraceSingleForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Camera_C_Test_For_AchievementTarget, CallFunc_BreakHitResult_bBlockingHit) == 0x000169, "Member 'B_Camera_C_Test_For_AchievementTarget::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(B_Camera_C_Test_For_AchievementTarget, CallFunc_BreakHitResult_bInitialOverlap) == 0x00016A, "Member 'B_Camera_C_Test_For_AchievementTarget::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(B_Camera_C_Test_For_AchievementTarget, CallFunc_BreakHitResult_Time) == 0x00016C, "Member 'B_Camera_C_Test_For_AchievementTarget::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(B_Camera_C_Test_For_AchievementTarget, CallFunc_BreakHitResult_Distance) == 0x000170, "Member 'B_Camera_C_Test_For_AchievementTarget::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(B_Camera_C_Test_For_AchievementTarget, CallFunc_BreakHitResult_Location) == 0x000178, "Member 'B_Camera_C_Test_For_AchievementTarget::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(B_Camera_C_Test_For_AchievementTarget, CallFunc_BreakHitResult_ImpactPoint) == 0x000190, "Member 'B_Camera_C_Test_For_AchievementTarget::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(B_Camera_C_Test_For_AchievementTarget, CallFunc_BreakHitResult_Normal) == 0x0001A8, "Member 'B_Camera_C_Test_For_AchievementTarget::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(B_Camera_C_Test_For_AchievementTarget, CallFunc_BreakHitResult_ImpactNormal) == 0x0001C0, "Member 'B_Camera_C_Test_For_AchievementTarget::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(B_Camera_C_Test_For_AchievementTarget, CallFunc_BreakHitResult_PhysMat) == 0x0001D8, "Member 'B_Camera_C_Test_For_AchievementTarget::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(B_Camera_C_Test_For_AchievementTarget, CallFunc_BreakHitResult_HitActor) == 0x0001E0, "Member 'B_Camera_C_Test_For_AchievementTarget::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(B_Camera_C_Test_For_AchievementTarget, CallFunc_BreakHitResult_HitComponent) == 0x0001E8, "Member 'B_Camera_C_Test_For_AchievementTarget::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(B_Camera_C_Test_For_AchievementTarget, CallFunc_BreakHitResult_HitBoneName) == 0x0001F0, "Member 'B_Camera_C_Test_For_AchievementTarget::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(B_Camera_C_Test_For_AchievementTarget, CallFunc_BreakHitResult_BoneName) == 0x0001F8, "Member 'B_Camera_C_Test_For_AchievementTarget::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(B_Camera_C_Test_For_AchievementTarget, CallFunc_BreakHitResult_HitItem) == 0x000200, "Member 'B_Camera_C_Test_For_AchievementTarget::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(B_Camera_C_Test_For_AchievementTarget, CallFunc_BreakHitResult_ElementIndex) == 0x000204, "Member 'B_Camera_C_Test_For_AchievementTarget::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(B_Camera_C_Test_For_AchievementTarget, CallFunc_BreakHitResult_FaceIndex) == 0x000208, "Member 'B_Camera_C_Test_For_AchievementTarget::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(B_Camera_C_Test_For_AchievementTarget, CallFunc_BreakHitResult_TraceStart) == 0x000210, "Member 'B_Camera_C_Test_For_AchievementTarget::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(B_Camera_C_Test_For_AchievementTarget, CallFunc_BreakHitResult_TraceEnd) == 0x000228, "Member 'B_Camera_C_Test_For_AchievementTarget::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(B_Camera_C_Test_For_AchievementTarget, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000240, "Member 'B_Camera_C_Test_For_AchievementTarget::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Camera_C_Test_For_AchievementTarget, K2Node_DynamicCast_AsB_Achievement_Test_Volume) == 0x000248, "Member 'B_Camera_C_Test_For_AchievementTarget::K2Node_DynamicCast_AsB_Achievement_Test_Volume' has a wrong offset!");
static_assert(offsetof(B_Camera_C_Test_For_AchievementTarget, K2Node_DynamicCast_bSuccess) == 0x000250, "Member 'B_Camera_C_Test_For_AchievementTarget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_Camera_C_Test_For_AchievementTarget, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x000258, "Member 'B_Camera_C_Test_For_AchievementTarget::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");

}

