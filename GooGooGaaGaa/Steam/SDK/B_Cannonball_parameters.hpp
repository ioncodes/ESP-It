#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Cannonball

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function B_Cannonball.B_Cannonball_C.ExecuteUbergraph_B_Cannonball
// 0x0030 (0x0030 - 0x0000)
struct B_Cannonball_C_ExecuteUbergraph_B_Cannonball final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_CustomEvent_Impulse;                        // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Cannonball_C_ExecuteUbergraph_B_Cannonball) == 0x000008, "Wrong alignment on B_Cannonball_C_ExecuteUbergraph_B_Cannonball");
static_assert(sizeof(B_Cannonball_C_ExecuteUbergraph_B_Cannonball) == 0x000030, "Wrong size on B_Cannonball_C_ExecuteUbergraph_B_Cannonball");
static_assert(offsetof(B_Cannonball_C_ExecuteUbergraph_B_Cannonball, EntryPoint) == 0x000000, "Member 'B_Cannonball_C_ExecuteUbergraph_B_Cannonball::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Cannonball_C_ExecuteUbergraph_B_Cannonball, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'B_Cannonball_C_ExecuteUbergraph_B_Cannonball::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Cannonball_C_ExecuteUbergraph_B_Cannonball, K2Node_Event_DeltaSeconds) == 0x000008, "Member 'B_Cannonball_C_ExecuteUbergraph_B_Cannonball::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(B_Cannonball_C_ExecuteUbergraph_B_Cannonball, K2Node_CustomEvent_Impulse) == 0x000010, "Member 'B_Cannonball_C_ExecuteUbergraph_B_Cannonball::K2Node_CustomEvent_Impulse' has a wrong offset!");
static_assert(offsetof(B_Cannonball_C_ExecuteUbergraph_B_Cannonball, K2Node_Event_OtherActor) == 0x000028, "Member 'B_Cannonball_C_ExecuteUbergraph_B_Cannonball::K2Node_Event_OtherActor' has a wrong offset!");

// Function B_Cannonball.B_Cannonball_C.OnFired
// 0x0018 (0x0018 - 0x0000)
struct B_Cannonball_C_OnFired final
{
public:
	struct FVector                                Impulse;                                           // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Cannonball_C_OnFired) == 0x000008, "Wrong alignment on B_Cannonball_C_OnFired");
static_assert(sizeof(B_Cannonball_C_OnFired) == 0x000018, "Wrong size on B_Cannonball_C_OnFired");
static_assert(offsetof(B_Cannonball_C_OnFired, Impulse) == 0x000000, "Member 'B_Cannonball_C_OnFired::Impulse' has a wrong offset!");

// Function B_Cannonball.B_Cannonball_C.ReceiveActorBeginOverlap
// 0x0008 (0x0008 - 0x0000)
struct B_Cannonball_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Cannonball_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong alignment on B_Cannonball_C_ReceiveActorBeginOverlap");
static_assert(sizeof(B_Cannonball_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong size on B_Cannonball_C_ReceiveActorBeginOverlap");
static_assert(offsetof(B_Cannonball_C_ReceiveActorBeginOverlap, OtherActor) == 0x000000, "Member 'B_Cannonball_C_ReceiveActorBeginOverlap::OtherActor' has a wrong offset!");

// Function B_Cannonball.B_Cannonball_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct B_Cannonball_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Cannonball_C_ReceiveTick) == 0x000004, "Wrong alignment on B_Cannonball_C_ReceiveTick");
static_assert(sizeof(B_Cannonball_C_ReceiveTick) == 0x000004, "Wrong size on B_Cannonball_C_ReceiveTick");
static_assert(offsetof(B_Cannonball_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'B_Cannonball_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}
