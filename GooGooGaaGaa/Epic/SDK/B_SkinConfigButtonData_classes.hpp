#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_SkinConfigButtonData

#include "Basic.hpp"

#include "B_TileViewData_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_SkinConfigButtonData.B_SkinConfigButtonData_C
// 0x0008 (0x0040 - 0x0038)
class UB_SkinConfigButtonData_C final : public UB_TileViewData_C
{
public:
	int32                                         ConfigNr;                                          // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_SkinConfigButtonData_C">();
	}
	static class UB_SkinConfigButtonData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_SkinConfigButtonData_C>();
	}
};
static_assert(alignof(UB_SkinConfigButtonData_C) == 0x000008, "Wrong alignment on UB_SkinConfigButtonData_C");
static_assert(sizeof(UB_SkinConfigButtonData_C) == 0x000040, "Wrong size on UB_SkinConfigButtonData_C");
static_assert(offsetof(UB_SkinConfigButtonData_C, ConfigNr) == 0x000038, "Member 'UB_SkinConfigButtonData_C::ConfigNr' has a wrong offset!");

}
