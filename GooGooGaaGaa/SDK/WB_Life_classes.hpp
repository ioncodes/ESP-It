#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Life

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_Life.WB_Life_C
// 0x0010 (0x02D0 - 0x02C0)
class UWB_Life_C final : public UUserWidget
{
public:
	class UImage*                                 LifeImage;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Life;                                              // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	struct FSlateBrush Get_LifeImage_Brush_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_Life_C">();
	}
	static class UWB_Life_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_Life_C>();
	}
};
static_assert(alignof(UWB_Life_C) == 0x000008, "Wrong alignment on UWB_Life_C");
static_assert(sizeof(UWB_Life_C) == 0x0002D0, "Wrong size on UWB_Life_C");
static_assert(offsetof(UWB_Life_C, LifeImage) == 0x0002C0, "Member 'UWB_Life_C::LifeImage' has a wrong offset!");
static_assert(offsetof(UWB_Life_C, Life) == 0x0002C8, "Member 'UWB_Life_C::Life' has a wrong offset!");

}
