#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WP_MutePlayerList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WP_MutePlayerList.WP_MutePlayerList_C
// 0x0020 (0x0300 - 0x02E0)
class UWP_MutePlayerList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_Button_C*                           Back;                                              // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             PlayerListScroll;                                  // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__WB_Button_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_WP_MutePlayerList(int32 EntryPoint);
	void GetInitialFocusWidget(class UUserWidget** InitialFocusWidget);
	void OnApply();
	void OnBack();
	void OnSpecialAction();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WP_MutePlayerList_C">();
	}
	static class UWP_MutePlayerList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWP_MutePlayerList_C>();
	}
};
static_assert(alignof(UWP_MutePlayerList_C) == 0x000008, "Wrong alignment on UWP_MutePlayerList_C");
static_assert(sizeof(UWP_MutePlayerList_C) == 0x000300, "Wrong size on UWP_MutePlayerList_C");
static_assert(offsetof(UWP_MutePlayerList_C, UberGraphFrame) == 0x0002E0, "Member 'UWP_MutePlayerList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWP_MutePlayerList_C, Back) == 0x0002E8, "Member 'UWP_MutePlayerList_C::Back' has a wrong offset!");
static_assert(offsetof(UWP_MutePlayerList_C, CanvasPanel_0) == 0x0002F0, "Member 'UWP_MutePlayerList_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UWP_MutePlayerList_C, PlayerListScroll) == 0x0002F8, "Member 'UWP_MutePlayerList_C::PlayerListScroll' has a wrong offset!");

}
