#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_HelpIntro

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WB_HelpTabBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_HelpIntro.WB_HelpIntro_C
// 0x0018 (0x0310 - 0x02F8)
class UWB_HelpIntro_C final : public UWB_HelpTabBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WB_HelpIntro_C;                     // 0x02F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_Button_C*                           BackButton;                                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_BinkMoviePlayer_C*                  WB_BinkMoviePlayer;                                // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Activate();
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
	void Deactivate();
	void ExecuteUbergraph_WB_HelpIntro(int32 EntryPoint);
	void GetInitialFocusWidget(class UUserWidget** InitialFocusWidget);
	void OnApply();
	void OnBack();
	void OnSpecialAction();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_HelpIntro_C">();
	}
	static class UWB_HelpIntro_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_HelpIntro_C>();
	}
};
static_assert(alignof(UWB_HelpIntro_C) == 0x000008, "Wrong alignment on UWB_HelpIntro_C");
static_assert(sizeof(UWB_HelpIntro_C) == 0x000310, "Wrong size on UWB_HelpIntro_C");
static_assert(offsetof(UWB_HelpIntro_C, UberGraphFrame_WB_HelpIntro_C) == 0x0002F8, "Member 'UWB_HelpIntro_C::UberGraphFrame_WB_HelpIntro_C' has a wrong offset!");
static_assert(offsetof(UWB_HelpIntro_C, BackButton) == 0x000300, "Member 'UWB_HelpIntro_C::BackButton' has a wrong offset!");
static_assert(offsetof(UWB_HelpIntro_C, WB_BinkMoviePlayer) == 0x000308, "Member 'UWB_HelpIntro_C::WB_BinkMoviePlayer' has a wrong offset!");

}
