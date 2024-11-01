#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ComboBoxOverlay

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ComboBoxOverlay.WB_ComboBoxOverlay_C
// 0x0028 (0x0308 - 0x02E0)
class UWB_ComboBoxOverlay_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                             OverlayScrollBox;                                  // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               OverlaySizeBox;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ComboBoxWithLabel_C*                BaseWidget;                                        // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWB_ComboBoxButton_C*                   InitialSelection;                                  // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_ComboBoxOverlay(int32 EntryPoint);
	void GetInitialFocusWidget(class UUserWidget** InitialFocusWidget);
	void GetSizeBox(class USizeBox** SizeBox);
	void OnApply();
	void OnBack();
	void OnSpecialAction();
	void SetBaseWidget(class UWidget* Widget);
	void SetOption(const class FText& Option, int32 Index_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ComboBoxOverlay_C">();
	}
	static class UWB_ComboBoxOverlay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ComboBoxOverlay_C>();
	}
};
static_assert(alignof(UWB_ComboBoxOverlay_C) == 0x000008, "Wrong alignment on UWB_ComboBoxOverlay_C");
static_assert(sizeof(UWB_ComboBoxOverlay_C) == 0x000308, "Wrong size on UWB_ComboBoxOverlay_C");
static_assert(offsetof(UWB_ComboBoxOverlay_C, UberGraphFrame) == 0x0002E0, "Member 'UWB_ComboBoxOverlay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_ComboBoxOverlay_C, OverlayScrollBox) == 0x0002E8, "Member 'UWB_ComboBoxOverlay_C::OverlayScrollBox' has a wrong offset!");
static_assert(offsetof(UWB_ComboBoxOverlay_C, OverlaySizeBox) == 0x0002F0, "Member 'UWB_ComboBoxOverlay_C::OverlaySizeBox' has a wrong offset!");
static_assert(offsetof(UWB_ComboBoxOverlay_C, BaseWidget) == 0x0002F8, "Member 'UWB_ComboBoxOverlay_C::BaseWidget' has a wrong offset!");
static_assert(offsetof(UWB_ComboBoxOverlay_C, InitialSelection) == 0x000300, "Member 'UWB_ComboBoxOverlay_C::InitialSelection' has a wrong offset!");

}

