#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_SelectLayoutEntry

#include "Basic.hpp"

#include "S_PropLayoutData_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_SelectLayoutEntry.WB_SelectLayoutEntry_C
// 0x0058 (0x0338 - 0x02E0)
class UWB_SelectLayoutEntry_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_CheckBoxWithLabel_C*                WB_CheckBoxWithLabel;                              // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FS_PropLayoutData                      LayoutData;                                        // 0x02F0(0x0048)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__WB_CheckBoxWithLabel_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(class UWB_CheckBoxWithLabel_C* Sender, bool IsChecked);
	void Construct();
	void ExecuteUbergraph_WB_SelectLayoutEntry(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_SelectLayoutEntry_C">();
	}
	static class UWB_SelectLayoutEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_SelectLayoutEntry_C>();
	}
};
static_assert(alignof(UWB_SelectLayoutEntry_C) == 0x000008, "Wrong alignment on UWB_SelectLayoutEntry_C");
static_assert(sizeof(UWB_SelectLayoutEntry_C) == 0x000338, "Wrong size on UWB_SelectLayoutEntry_C");
static_assert(offsetof(UWB_SelectLayoutEntry_C, UberGraphFrame) == 0x0002E0, "Member 'UWB_SelectLayoutEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_SelectLayoutEntry_C, WB_CheckBoxWithLabel) == 0x0002E8, "Member 'UWB_SelectLayoutEntry_C::WB_CheckBoxWithLabel' has a wrong offset!");
static_assert(offsetof(UWB_SelectLayoutEntry_C, LayoutData) == 0x0002F0, "Member 'UWB_SelectLayoutEntry_C::LayoutData' has a wrong offset!");

}
