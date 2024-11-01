#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_KeyBindings

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_KeyBindings.WB_KeyBindings_C
// 0x0028 (0x0308 - 0x02E0)
class UWB_KeyBindings_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_ControllerLayout_C*                 Bindings_Controller;                               // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_KeyBindingList_C*                   Bindings_Keyboard;                                 // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_C*                           Button_Back;                                       // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher_ControllerKeyboardBindings;               // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__Back_K2Node_ComponentBoundEvent_15_Clicked__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_WB_KeyBindings(int32 EntryPoint);
	void GetInitialFocusWidget(class UUserWidget** InitialFocusWidget);
	void OnApply();
	void OnBack();
	void OnGamePadModeChanged(bool bGamePadMode);
	void OnSpecialAction();
	void SetActiveWidget(bool bGamePadMode);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_KeyBindings_C">();
	}
	static class UWB_KeyBindings_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_KeyBindings_C>();
	}
};
static_assert(alignof(UWB_KeyBindings_C) == 0x000008, "Wrong alignment on UWB_KeyBindings_C");
static_assert(sizeof(UWB_KeyBindings_C) == 0x000308, "Wrong size on UWB_KeyBindings_C");
static_assert(offsetof(UWB_KeyBindings_C, UberGraphFrame) == 0x0002E0, "Member 'UWB_KeyBindings_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_KeyBindings_C, Bindings_Controller) == 0x0002E8, "Member 'UWB_KeyBindings_C::Bindings_Controller' has a wrong offset!");
static_assert(offsetof(UWB_KeyBindings_C, Bindings_Keyboard) == 0x0002F0, "Member 'UWB_KeyBindings_C::Bindings_Keyboard' has a wrong offset!");
static_assert(offsetof(UWB_KeyBindings_C, Button_Back) == 0x0002F8, "Member 'UWB_KeyBindings_C::Button_Back' has a wrong offset!");
static_assert(offsetof(UWB_KeyBindings_C, Switcher_ControllerKeyboardBindings) == 0x000300, "Member 'UWB_KeyBindings_C::Switcher_ControllerKeyboardBindings' has a wrong offset!");

}

