#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_LightColorButtonData

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "B_TileViewData_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_LightColorButtonData.B_LightColorButtonData_C
// 0x0018 (0x0050 - 0x0038)
class UB_LightColorButtonData_C final : public UB_TileViewData_C
{
public:
	struct FVector                                Color;                                             // 0x0038(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_LightColorButtonData_C">();
	}
	static class UB_LightColorButtonData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_LightColorButtonData_C>();
	}
};
static_assert(alignof(UB_LightColorButtonData_C) == 0x000008, "Wrong alignment on UB_LightColorButtonData_C");
static_assert(sizeof(UB_LightColorButtonData_C) == 0x000050, "Wrong size on UB_LightColorButtonData_C");
static_assert(offsetof(UB_LightColorButtonData_C, Color) == 0x000038, "Member 'UB_LightColorButtonData_C::Color' has a wrong offset!");

}
