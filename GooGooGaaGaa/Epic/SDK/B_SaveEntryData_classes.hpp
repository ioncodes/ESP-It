#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_SaveEntryData

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_SaveEntryData.B_SaveEntryData_C
// 0x0010 (0x0038 - 0x0028)
class UB_SaveEntryData_C final : public UObject
{
public:
	class FString                                 SaveName;                                          // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_SaveEntryData_C">();
	}
	static class UB_SaveEntryData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_SaveEntryData_C>();
	}
};
static_assert(alignof(UB_SaveEntryData_C) == 0x000008, "Wrong alignment on UB_SaveEntryData_C");
static_assert(sizeof(UB_SaveEntryData_C) == 0x000038, "Wrong size on UB_SaveEntryData_C");
static_assert(offsetof(UB_SaveEntryData_C, SaveName) == 0x000028, "Member 'UB_SaveEntryData_C::SaveName' has a wrong offset!");

}

