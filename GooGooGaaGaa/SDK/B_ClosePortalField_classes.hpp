#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_ClosePortalField

#include "Basic.hpp"

#include "B_TaskField_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_ClosePortalField.B_ClosePortalField_C
// 0x0008 (0x0340 - 0x0338)
class AB_ClosePortalField_C final : public AB_TaskField_C
{
public:
	class UStaticMeshComponent*                   Portal;                                            // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_ClosePortalField_C">();
	}
	static class AB_ClosePortalField_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_ClosePortalField_C>();
	}
};
static_assert(alignof(AB_ClosePortalField_C) == 0x000008, "Wrong alignment on AB_ClosePortalField_C");
static_assert(sizeof(AB_ClosePortalField_C) == 0x000340, "Wrong size on AB_ClosePortalField_C");
static_assert(offsetof(AB_ClosePortalField_C, Portal) == 0x000338, "Member 'AB_ClosePortalField_C::Portal' has a wrong offset!");

}

