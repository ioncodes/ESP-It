#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_EnteredPortalCode

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_EnteredPortalCode.B_EnteredPortalCode_C
// 0x0010 (0x0038 - 0x0028)
class UB_EnteredPortalCode_C final : public UObject
{
public:
	TArray<int32>                                 EnteredCode;                                       // 0x0028(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_EnteredPortalCode_C">();
	}
	static class UB_EnteredPortalCode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_EnteredPortalCode_C>();
	}
};
static_assert(alignof(UB_EnteredPortalCode_C) == 0x000008, "Wrong alignment on UB_EnteredPortalCode_C");
static_assert(sizeof(UB_EnteredPortalCode_C) == 0x000038, "Wrong size on UB_EnteredPortalCode_C");
static_assert(offsetof(UB_EnteredPortalCode_C, EnteredCode) == 0x000028, "Member 'UB_EnteredPortalCode_C::EnteredCode' has a wrong offset!");

}

