#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ControllerTabIcon

#include "Basic.hpp"

#include "WB_ControllerIcon_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ControllerTabIcon.WB_ControllerTabIcon_C
// 0x0000 (0x0338 - 0x0338)
class UWB_ControllerTabIcon_C final : public UWB_ControllerIcon_C
{
public:
	ESlateVisibility Get_ControllerIcon_Visibility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ControllerTabIcon_C">();
	}
	static class UWB_ControllerTabIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ControllerTabIcon_C>();
	}
};
static_assert(alignof(UWB_ControllerTabIcon_C) == 0x000008, "Wrong alignment on UWB_ControllerTabIcon_C");
static_assert(sizeof(UWB_ControllerTabIcon_C) == 0x000338, "Wrong size on UWB_ControllerTabIcon_C");

}
