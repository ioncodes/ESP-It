#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_EnterPassword

#include "Basic.hpp"

#include "OnlineSubsystemBlueprints_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_EnterPassword.WB_EnterPassword_C
// 0x01E8 (0x04C8 - 0x02E0)
class UWB_EnterPassword_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_Button_C*                           Back;                                              // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ActionIcon_C*                       ControllerFocusIcon;                               // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ControllerIcon;                                    // 0x02F8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_C*                           FindGame;                                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_PasswordField_C*                    WB_PasswordField;                                  // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FOnlineSessionSearchResultBP           SearchResultToJoin;                                // 0x0310(0x01B8)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void BndEvt__Back_K2Node_ComponentBoundEvent_94_Clicked__DelegateSignature();
	void BndEvt__FindGame_K2Node_ComponentBoundEvent_96_Clicked__DelegateSignature();
	void Close();
	void ExecuteUbergraph_WB_EnterPassword(int32 EntryPoint);
	ESlateVisibility Get_ControllerIcon_Visibility();
	void GetInitialFocusWidget(class UUserWidget** InitialFocusWidget);
	void OnApply();
	void OnBack();
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void OnSpecialAction();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_EnterPassword_C">();
	}
	static class UWB_EnterPassword_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_EnterPassword_C>();
	}
};
static_assert(alignof(UWB_EnterPassword_C) == 0x000008, "Wrong alignment on UWB_EnterPassword_C");
static_assert(sizeof(UWB_EnterPassword_C) == 0x0004C8, "Wrong size on UWB_EnterPassword_C");
static_assert(offsetof(UWB_EnterPassword_C, UberGraphFrame) == 0x0002E0, "Member 'UWB_EnterPassword_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_EnterPassword_C, Back) == 0x0002E8, "Member 'UWB_EnterPassword_C::Back' has a wrong offset!");
static_assert(offsetof(UWB_EnterPassword_C, ControllerFocusIcon) == 0x0002F0, "Member 'UWB_EnterPassword_C::ControllerFocusIcon' has a wrong offset!");
static_assert(offsetof(UWB_EnterPassword_C, ControllerIcon) == 0x0002F8, "Member 'UWB_EnterPassword_C::ControllerIcon' has a wrong offset!");
static_assert(offsetof(UWB_EnterPassword_C, FindGame) == 0x000300, "Member 'UWB_EnterPassword_C::FindGame' has a wrong offset!");
static_assert(offsetof(UWB_EnterPassword_C, WB_PasswordField) == 0x000308, "Member 'UWB_EnterPassword_C::WB_PasswordField' has a wrong offset!");
static_assert(offsetof(UWB_EnterPassword_C, SearchResultToJoin) == 0x000310, "Member 'UWB_EnterPassword_C::SearchResultToJoin' has a wrong offset!");

}
