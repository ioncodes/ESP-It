#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_SocialMediaButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_SocialMediaButton.WB_SocialMediaButton_C
// 0x0030 (0x0310 - 0x02E0)
class UWB_SocialMediaButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Hover;                                             // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                MediaButton;                                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                             Image;                                             // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             Clicked;                                           // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__MediaButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MediaButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void Clicked__DelegateSignature();
	void ExecuteUbergraph_WB_SocialMediaButton(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_SocialMediaButton_C">();
	}
	static class UWB_SocialMediaButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_SocialMediaButton_C>();
	}
};
static_assert(alignof(UWB_SocialMediaButton_C) == 0x000008, "Wrong alignment on UWB_SocialMediaButton_C");
static_assert(sizeof(UWB_SocialMediaButton_C) == 0x000310, "Wrong size on UWB_SocialMediaButton_C");
static_assert(offsetof(UWB_SocialMediaButton_C, UberGraphFrame) == 0x0002E0, "Member 'UWB_SocialMediaButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_SocialMediaButton_C, Hover) == 0x0002E8, "Member 'UWB_SocialMediaButton_C::Hover' has a wrong offset!");
static_assert(offsetof(UWB_SocialMediaButton_C, MediaButton) == 0x0002F0, "Member 'UWB_SocialMediaButton_C::MediaButton' has a wrong offset!");
static_assert(offsetof(UWB_SocialMediaButton_C, Image) == 0x0002F8, "Member 'UWB_SocialMediaButton_C::Image' has a wrong offset!");
static_assert(offsetof(UWB_SocialMediaButton_C, Clicked) == 0x000300, "Member 'UWB_SocialMediaButton_C::Clicked' has a wrong offset!");

}

