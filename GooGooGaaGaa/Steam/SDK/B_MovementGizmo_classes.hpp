#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_MovementGizmo

#include "Basic.hpp"

#include "B_BaseGizmo_classes.hpp"
#include "E_Axis_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_MovementGizmo.B_MovementGizmo_C
// 0x0020 (0x0348 - 0x0328)
class AB_MovementGizmo_C final : public AB_BaseGizmo_C
{
public:
	class UStaticMeshComponent*                   Uniform;                                           // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Z;                                                 // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Y;                                                 // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   X;                                                 // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void SetHighlightAxis(E_Axis Axis, bool* ForcedBool);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_MovementGizmo_C">();
	}
	static class AB_MovementGizmo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_MovementGizmo_C>();
	}
};
static_assert(alignof(AB_MovementGizmo_C) == 0x000008, "Wrong alignment on AB_MovementGizmo_C");
static_assert(sizeof(AB_MovementGizmo_C) == 0x000348, "Wrong size on AB_MovementGizmo_C");
static_assert(offsetof(AB_MovementGizmo_C, Uniform) == 0x000328, "Member 'AB_MovementGizmo_C::Uniform' has a wrong offset!");
static_assert(offsetof(AB_MovementGizmo_C, Z) == 0x000330, "Member 'AB_MovementGizmo_C::Z' has a wrong offset!");
static_assert(offsetof(AB_MovementGizmo_C, Y) == 0x000338, "Member 'AB_MovementGizmo_C::Y' has a wrong offset!");
static_assert(offsetof(AB_MovementGizmo_C, X) == 0x000340, "Member 'AB_MovementGizmo_C::X' has a wrong offset!");

}

