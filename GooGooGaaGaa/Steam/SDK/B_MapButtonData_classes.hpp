#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_MapButtonData

#include "Basic.hpp"

#include "B_TileViewData_classes.hpp"
#include "SMapData_structs.hpp"
#include "S_PropLayoutData_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_MapButtonData.B_MapButtonData_C
// 0x0090 (0x00C8 - 0x0038)
class UB_MapButtonData_C final : public UB_TileViewData_C
{
public:
	struct FSMapData                              MapData;                                           // 0x0038(0x0040)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FS_PropLayoutData                      LayoutData;                                        // 0x0078(0x0048)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          MapCycleIsEditable;                                // 0x00C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_MapButtonData_C">();
	}
	static class UB_MapButtonData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_MapButtonData_C>();
	}
};
static_assert(alignof(UB_MapButtonData_C) == 0x000008, "Wrong alignment on UB_MapButtonData_C");
static_assert(sizeof(UB_MapButtonData_C) == 0x0000C8, "Wrong size on UB_MapButtonData_C");
static_assert(offsetof(UB_MapButtonData_C, MapData) == 0x000038, "Member 'UB_MapButtonData_C::MapData' has a wrong offset!");
static_assert(offsetof(UB_MapButtonData_C, LayoutData) == 0x000078, "Member 'UB_MapButtonData_C::LayoutData' has a wrong offset!");
static_assert(offsetof(UB_MapButtonData_C, MapCycleIsEditable) == 0x0000C0, "Member 'UB_MapButtonData_C::MapCycleIsEditable' has a wrong offset!");

}

