#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_WardrobeHUD

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_WardrobeHUD.WB_WardrobeHUD_C
// 0x0018 (0x02F8 - 0x02E0)
class UWB_WardrobeHUD_C final : public UUserWidget
{
public:
	class UWidgetAnimation*                       FadeOut;                                           // 0x02E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeIn;                                            // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWB_ActionIcon_C*                       WB_ActionIcon;                                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_WardrobeHUD_C">();
	}
	static class UWB_WardrobeHUD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_WardrobeHUD_C>();
	}
};
static_assert(alignof(UWB_WardrobeHUD_C) == 0x000008, "Wrong alignment on UWB_WardrobeHUD_C");
static_assert(sizeof(UWB_WardrobeHUD_C) == 0x0002F8, "Wrong size on UWB_WardrobeHUD_C");
static_assert(offsetof(UWB_WardrobeHUD_C, FadeOut) == 0x0002E0, "Member 'UWB_WardrobeHUD_C::FadeOut' has a wrong offset!");
static_assert(offsetof(UWB_WardrobeHUD_C, FadeIn) == 0x0002E8, "Member 'UWB_WardrobeHUD_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UWB_WardrobeHUD_C, WB_ActionIcon) == 0x0002F0, "Member 'UWB_WardrobeHUD_C::WB_ActionIcon' has a wrong offset!");

}
