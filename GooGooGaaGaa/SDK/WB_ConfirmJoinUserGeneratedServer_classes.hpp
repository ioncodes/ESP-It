#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ConfirmJoinUserGeneratedServer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ConfirmJoinUserGeneratedServer.WB_ConfirmJoinUserGeneratedServer_C
// 0x0040 (0x0300 - 0x02C0)
class UWB_ConfirmJoinUserGeneratedServer_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCheckBox*                              CheckBox;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DescriptiveLabelText;                              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_C*                           No;                                                // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_0;                                         // 0x02E0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ControllerIcon_C*                   WB_ControllerIcon;                                 // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_C*                           Yes;                                               // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ServerRow_C*                        ServerToJoin;                                      // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__No_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
	void BndEvt__Yes_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
	void CheckForHide();
	void ExecuteUbergraph_WB_ConfirmJoinUserGeneratedServer(int32 EntryPoint);
	void GetInitialFocusWidget(class UUserWidget** InitialFocusWidget);
	ESlateVisibility GetVisibility_0();
	void InteractButtonPressed();
	void OnApply();
	void OnBack();
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void OnSpecialAction();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ConfirmJoinUserGeneratedServer_C">();
	}
	static class UWB_ConfirmJoinUserGeneratedServer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ConfirmJoinUserGeneratedServer_C>();
	}
};
static_assert(alignof(UWB_ConfirmJoinUserGeneratedServer_C) == 0x000008, "Wrong alignment on UWB_ConfirmJoinUserGeneratedServer_C");
static_assert(sizeof(UWB_ConfirmJoinUserGeneratedServer_C) == 0x000300, "Wrong size on UWB_ConfirmJoinUserGeneratedServer_C");
static_assert(offsetof(UWB_ConfirmJoinUserGeneratedServer_C, UberGraphFrame) == 0x0002C0, "Member 'UWB_ConfirmJoinUserGeneratedServer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_ConfirmJoinUserGeneratedServer_C, CheckBox) == 0x0002C8, "Member 'UWB_ConfirmJoinUserGeneratedServer_C::CheckBox' has a wrong offset!");
static_assert(offsetof(UWB_ConfirmJoinUserGeneratedServer_C, DescriptiveLabelText) == 0x0002D0, "Member 'UWB_ConfirmJoinUserGeneratedServer_C::DescriptiveLabelText' has a wrong offset!");
static_assert(offsetof(UWB_ConfirmJoinUserGeneratedServer_C, No) == 0x0002D8, "Member 'UWB_ConfirmJoinUserGeneratedServer_C::No' has a wrong offset!");
static_assert(offsetof(UWB_ConfirmJoinUserGeneratedServer_C, SizeBox_0) == 0x0002E0, "Member 'UWB_ConfirmJoinUserGeneratedServer_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(UWB_ConfirmJoinUserGeneratedServer_C, WB_ControllerIcon) == 0x0002E8, "Member 'UWB_ConfirmJoinUserGeneratedServer_C::WB_ControllerIcon' has a wrong offset!");
static_assert(offsetof(UWB_ConfirmJoinUserGeneratedServer_C, Yes) == 0x0002F0, "Member 'UWB_ConfirmJoinUserGeneratedServer_C::Yes' has a wrong offset!");
static_assert(offsetof(UWB_ConfirmJoinUserGeneratedServer_C, ServerToJoin) == 0x0002F8, "Member 'UWB_ConfirmJoinUserGeneratedServer_C::ServerToJoin' has a wrong offset!");

}
