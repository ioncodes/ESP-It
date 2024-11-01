#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_ModButtonData

#include "Basic.hpp"

#include "E_GameModifierType_structs.hpp"
#include "B_TileViewData_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_ModButtonData.B_ModButtonData_C
// 0x0008 (0x0040 - 0x0038)
class UB_ModButtonData_C final : public UB_TileViewData_C
{
public:
	E_GameModifierType                            ModifierType;                                      // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_ModButtonData_C">();
	}
	static class UB_ModButtonData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_ModButtonData_C>();
	}
};
static_assert(alignof(UB_ModButtonData_C) == 0x000008, "Wrong alignment on UB_ModButtonData_C");
static_assert(sizeof(UB_ModButtonData_C) == 0x000040, "Wrong size on UB_ModButtonData_C");
static_assert(offsetof(UB_ModButtonData_C, ModifierType) == 0x000038, "Member 'UB_ModButtonData_C::ModifierType' has a wrong offset!");

}

