#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Death

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function B_Death.B_Death_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct B_Death_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_513B[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(B_Death_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on B_Death_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(B_Death_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on B_Death_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(B_Death_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'B_Death_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(B_Death_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'B_Death_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(B_Death_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'B_Death_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(B_Death_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'B_Death_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(B_Death_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'B_Death_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(B_Death_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'B_Death_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function B_Death.B_Death_C.ExecuteUbergraph_B_Death
// 0x0298 (0x0298 - 0x0000)
struct B_Death_C_ExecuteUbergraph_B_Death final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_513C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetActorScale3D_ReturnValue;              // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_513D[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_513E[0x2];                                     // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_real_Variable;                                // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_real_Variable_1;                              // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_513F[0x2];                                     // 0x0046(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5140[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0080(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_ActorHasTag_ReturnValue;                  // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5141[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0170(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0192(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5142[0x1];                                     // 0x0193(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5143[0x4];                                     // 0x019C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x01B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x01B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5144[0x7];                                     // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x01C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UMeshComponent*>                 CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x01D0(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5145[0x4];                                     // 0x01E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMeshComponent*                         CallFunc_Array_Get_Item_1;                         // 0x01E8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5146[0x3];                                     // 0x01F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x01F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5147[0x7];                                     // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5148[0x4];                                     // 0x0214(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5149[0x4];                                     // 0x0224(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item_2;                         // 0x0228(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_514A[0x7];                                     // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             K2Node_Select_Default_1;                           // 0x0238(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0240(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         K2Node_Select_Default_2;                           // 0x0258(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0260(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0278(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetLifeSpan_InLifespan_ImplicitCast;      // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_514B[0x4];                                     // 0x0284(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast; // 0x0290(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Death_C_ExecuteUbergraph_B_Death) == 0x000008, "Wrong alignment on B_Death_C_ExecuteUbergraph_B_Death");
static_assert(sizeof(B_Death_C_ExecuteUbergraph_B_Death) == 0x000298, "Wrong size on B_Death_C_ExecuteUbergraph_B_Death");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, EntryPoint) == 0x000000, "Member 'B_Death_C_ExecuteUbergraph_B_Death::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, CallFunc_GetActorScale3D_ReturnValue) == 0x000008, "Member 'B_Death_C_ExecuteUbergraph_B_Death::CallFunc_GetActorScale3D_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, Temp_int_Variable) == 0x000020, "Member 'B_Death_C_ExecuteUbergraph_B_Death::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, Temp_bool_Variable) == 0x000024, "Member 'B_Death_C_ExecuteUbergraph_B_Death::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'B_Death_C_ExecuteUbergraph_B_Death::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, Temp_bool_Variable_1) == 0x00002C, "Member 'B_Death_C_ExecuteUbergraph_B_Death::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, Temp_bool_Variable_2) == 0x00002D, "Member 'B_Death_C_ExecuteUbergraph_B_Death::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, Temp_real_Variable) == 0x000030, "Member 'B_Death_C_ExecuteUbergraph_B_Death::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, Temp_real_Variable_1) == 0x000034, "Member 'B_Death_C_ExecuteUbergraph_B_Death::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, Temp_int_Loop_Counter_Variable) == 0x000038, "Member 'B_Death_C_ExecuteUbergraph_B_Death::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, CallFunc_Add_IntInt_ReturnValue_1) == 0x00003C, "Member 'B_Death_C_ExecuteUbergraph_B_Death::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, Temp_int_Array_Index_Variable) == 0x000040, "Member 'B_Death_C_ExecuteUbergraph_B_Death::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, CallFunc_IsDedicatedServer_ReturnValue) == 0x000044, "Member 'B_Death_C_ExecuteUbergraph_B_Death::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, CallFunc_HasAuthority_ReturnValue) == 0x000045, "Member 'B_Death_C_ExecuteUbergraph_B_Death::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000048, "Member 'B_Death_C_ExecuteUbergraph_B_Death::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000060, "Member 'B_Death_C_ExecuteUbergraph_B_Death::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, K2Node_ComponentBoundEvent_OtherActor) == 0x000068, "Member 'B_Death_C_ExecuteUbergraph_B_Death::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, K2Node_ComponentBoundEvent_OtherComp) == 0x000070, "Member 'B_Death_C_ExecuteUbergraph_B_Death::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000078, "Member 'B_Death_C_ExecuteUbergraph_B_Death::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, K2Node_ComponentBoundEvent_bFromSweep) == 0x00007C, "Member 'B_Death_C_ExecuteUbergraph_B_Death::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, K2Node_ComponentBoundEvent_SweepResult) == 0x000080, "Member 'B_Death_C_ExecuteUbergraph_B_Death::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, CallFunc_ActorHasTag_ReturnValue) == 0x000168, "Member 'B_Death_C_ExecuteUbergraph_B_Death::CallFunc_ActorHasTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000170, "Member 'B_Death_C_ExecuteUbergraph_B_Death::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, K2Node_Select_Default) == 0x000188, "Member 'B_Death_C_ExecuteUbergraph_B_Death::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, CallFunc_Array_Add_ReturnValue) == 0x00018C, "Member 'B_Death_C_ExecuteUbergraph_B_Death::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, CallFunc_Array_Contains_ReturnValue) == 0x000190, "Member 'B_Death_C_ExecuteUbergraph_B_Death::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, CallFunc_Not_PreBool_ReturnValue) == 0x000191, "Member 'B_Death_C_ExecuteUbergraph_B_Death::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, CallFunc_BooleanAND_ReturnValue) == 0x000192, "Member 'B_Death_C_ExecuteUbergraph_B_Death::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, CallFunc_Array_Length_ReturnValue) == 0x000194, "Member 'B_Death_C_ExecuteUbergraph_B_Death::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, K2Node_Event_DeltaSeconds) == 0x000198, "Member 'B_Death_C_ExecuteUbergraph_B_Death::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0001A0, "Member 'B_Death_C_ExecuteUbergraph_B_Death::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0001A8, "Member 'B_Death_C_ExecuteUbergraph_B_Death::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, CallFunc_GetGameInstance_ReturnValue) == 0x0001B0, "Member 'B_Death_C_ExecuteUbergraph_B_Death::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, K2Node_DynamicCast_AsB_Game_Instance) == 0x0001B8, "Member 'B_Death_C_ExecuteUbergraph_B_Death::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, K2Node_DynamicCast_bSuccess) == 0x0001C0, "Member 'B_Death_C_ExecuteUbergraph_B_Death::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, CallFunc_Array_Get_Item) == 0x0001C8, "Member 'B_Death_C_ExecuteUbergraph_B_Death::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x0001D0, "Member 'B_Death_C_ExecuteUbergraph_B_Death::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, CallFunc_Array_Length_ReturnValue_1) == 0x0001E0, "Member 'B_Death_C_ExecuteUbergraph_B_Death::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, CallFunc_Array_Get_Item_1) == 0x0001E8, "Member 'B_Death_C_ExecuteUbergraph_B_Death::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, CallFunc_Less_IntInt_ReturnValue) == 0x0001F0, "Member 'B_Death_C_ExecuteUbergraph_B_Death::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, CallFunc_Array_Length_ReturnValue_2) == 0x0001F4, "Member 'B_Death_C_ExecuteUbergraph_B_Death::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001F8, "Member 'B_Death_C_ExecuteUbergraph_B_Death::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000200, "Member 'B_Death_C_ExecuteUbergraph_B_Death::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000208, "Member 'B_Death_C_ExecuteUbergraph_B_Death::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, Temp_int_Variable_1) == 0x000210, "Member 'B_Death_C_ExecuteUbergraph_B_Death::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, CallFunc_FClamp_ReturnValue) == 0x000218, "Member 'B_Death_C_ExecuteUbergraph_B_Death::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, CallFunc_Add_IntInt_ReturnValue_2) == 0x000220, "Member 'B_Death_C_ExecuteUbergraph_B_Death::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, CallFunc_Array_Get_Item_2) == 0x000228, "Member 'B_Death_C_ExecuteUbergraph_B_Death::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, CallFunc_Less_IntInt_ReturnValue_2) == 0x000230, "Member 'B_Death_C_ExecuteUbergraph_B_Death::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, K2Node_Select_Default_1) == 0x000238, "Member 'B_Death_C_ExecuteUbergraph_B_Death::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000240, "Member 'B_Death_C_ExecuteUbergraph_B_Death::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, K2Node_Select_Default_2) == 0x000258, "Member 'B_Death_C_ExecuteUbergraph_B_Death::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000260, "Member 'B_Death_C_ExecuteUbergraph_B_Death::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000278, "Member 'B_Death_C_ExecuteUbergraph_B_Death::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, CallFunc_SetLifeSpan_InLifespan_ImplicitCast) == 0x000280, "Member 'B_Death_C_ExecuteUbergraph_B_Death::CallFunc_SetLifeSpan_InLifespan_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000288, "Member 'B_Death_C_ExecuteUbergraph_B_Death::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Death_C_ExecuteUbergraph_B_Death, CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast) == 0x000290, "Member 'B_Death_C_ExecuteUbergraph_B_Death::CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast' has a wrong offset!");

// Function B_Death.B_Death_C.LoadHunterRagdoll
// 0x0018 (0x0018 - 0x0000)
struct B_Death_C_LoadHunterRagdoll final
{
public:
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Death_C_LoadHunterRagdoll) == 0x000008, "Wrong alignment on B_Death_C_LoadHunterRagdoll");
static_assert(sizeof(B_Death_C_LoadHunterRagdoll) == 0x000018, "Wrong size on B_Death_C_LoadHunterRagdoll");
static_assert(offsetof(B_Death_C_LoadHunterRagdoll, CallFunc_GetGameInstance_ReturnValue) == 0x000000, "Member 'B_Death_C_LoadHunterRagdoll::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Death_C_LoadHunterRagdoll, K2Node_DynamicCast_AsB_Game_Instance) == 0x000008, "Member 'B_Death_C_LoadHunterRagdoll::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(B_Death_C_LoadHunterRagdoll, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'B_Death_C_LoadHunterRagdoll::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function B_Death.B_Death_C.OnRep_PlayerState
// 0x0018 (0x0018 - 0x0000)
struct B_Death_C_OnRep_PlayerState final
{
public:
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Death_C_OnRep_PlayerState) == 0x000008, "Wrong alignment on B_Death_C_OnRep_PlayerState");
static_assert(sizeof(B_Death_C_OnRep_PlayerState) == 0x000018, "Wrong size on B_Death_C_OnRep_PlayerState");
static_assert(offsetof(B_Death_C_OnRep_PlayerState, CallFunc_GetGameInstance_ReturnValue) == 0x000000, "Member 'B_Death_C_OnRep_PlayerState::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Death_C_OnRep_PlayerState, K2Node_DynamicCast_AsB_Game_Instance) == 0x000008, "Member 'B_Death_C_OnRep_PlayerState::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(B_Death_C_OnRep_PlayerState, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'B_Death_C_OnRep_PlayerState::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function B_Death.B_Death_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct B_Death_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Death_C_ReceiveTick) == 0x000004, "Wrong alignment on B_Death_C_ReceiveTick");
static_assert(sizeof(B_Death_C_ReceiveTick) == 0x000004, "Wrong size on B_Death_C_ReceiveTick");
static_assert(offsetof(B_Death_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'B_Death_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}
