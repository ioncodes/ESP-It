#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_IngameMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"
#include "ETeamID_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_IngameMenu.WB_IngameMenu_C
// 0x0080 (0x0360 - 0x02E0)
class UWB_IngameMenu_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_Button_C*                           AdvancedOptions;                                   // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Authority;                                         // 0x02F0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_C*                           Continue;                                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_C*                           DevModeBtn;                                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_C*                           Exit;                                              // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_C*                           Invite;                                            // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_C*                           MutePlayer;                                        // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_C*                           NextMatchSettings;                                 // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NotEnoughPlayers;                                  // 0x0330(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_C*                           PropCollection;                                    // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_QuestBlock_C*                       QuestBlock;                                        // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_C*                           Settings;                                          // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_C*                           VoteKick;                                          // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          WantToExitToMainMenu;                              // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          WantToSurrender;                                   // 0x0359(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__NextMatchSettings_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
	void BndEvt__PropCollection_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
	void BndEvt__WB_Button_0_K2Node_ComponentBoundEvent_374_Clicked__DelegateSignature();
	void BndEvt__WB_Button_1_K2Node_ComponentBoundEvent_425_Clicked__DelegateSignature();
	void BndEvt__WB_Button_2_K2Node_ComponentBoundEvent_486_Clicked__DelegateSignature();
	void BndEvt__WB_Button_K2Node_ComponentBoundEvent_118_Clicked__DelegateSignature();
	void BndEvt__WB_Button_K2Node_ComponentBoundEvent_190_Clicked__DelegateSignature();
	void BndEvt__WB_Button_K2Node_ComponentBoundEvent_315_Clicked__DelegateSignature();
	void BndEvt__WB_IngameMenu_AdvancedOptions_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
	void BndEvt__WB_IngameMenu_DevModeBtn_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature();
	void ConfirmAction();
	void Construct();
	void DiscardChanges();
	void ExecuteUbergraph_WB_IngameMenu(int32 EntryPoint);
	ESlateVisibility Get_AdvancedOptions_Visibility_0();
	class FText Get_Authority_Text_0();
	ESlateVisibility Get_LoadLayout_Visibility_0();
	ESlateVisibility Get_NextMatchSettings_Visibility_0();
	ESlateVisibility Get_NotEnoughPlayers_Visibility_0();
	ESlateVisibility Get_ShareLayout_Visibility_0();
	bool Get_StartVoteKick_bIsEnabled_0();
	ESlateVisibility Get_StartVoteKick_Visibility_0();
	bool Get_Surrender_bIsEnabled_0();
	ESlateVisibility Get_Surrender_Visibility_0();
	void GetInitialFocusWidget(class UUserWidget** InitialFocusWidget);
	void Init();
	void IsDirty(bool* bDirty);
	class UWidget* NavigateToQuests(EUINavigation Navigation_0);
	void NoQuestFocusFound();
	void OnApply();
	void OnBack();
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void OnSpecialAction();
	void RequestConfirmableAction();
	void RevertChanges();
	void ShouldVoteKickBeVisible(bool* ShouldBeVisible);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ToggleDevModeButton();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_IngameMenu_C">();
	}
	static class UWB_IngameMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_IngameMenu_C>();
	}
};
static_assert(alignof(UWB_IngameMenu_C) == 0x000008, "Wrong alignment on UWB_IngameMenu_C");
static_assert(sizeof(UWB_IngameMenu_C) == 0x000360, "Wrong size on UWB_IngameMenu_C");
static_assert(offsetof(UWB_IngameMenu_C, UberGraphFrame) == 0x0002E0, "Member 'UWB_IngameMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_IngameMenu_C, AdvancedOptions) == 0x0002E8, "Member 'UWB_IngameMenu_C::AdvancedOptions' has a wrong offset!");
static_assert(offsetof(UWB_IngameMenu_C, Authority) == 0x0002F0, "Member 'UWB_IngameMenu_C::Authority' has a wrong offset!");
static_assert(offsetof(UWB_IngameMenu_C, CanvasPanel_0) == 0x0002F8, "Member 'UWB_IngameMenu_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UWB_IngameMenu_C, Continue) == 0x000300, "Member 'UWB_IngameMenu_C::Continue' has a wrong offset!");
static_assert(offsetof(UWB_IngameMenu_C, DevModeBtn) == 0x000308, "Member 'UWB_IngameMenu_C::DevModeBtn' has a wrong offset!");
static_assert(offsetof(UWB_IngameMenu_C, Exit) == 0x000310, "Member 'UWB_IngameMenu_C::Exit' has a wrong offset!");
static_assert(offsetof(UWB_IngameMenu_C, Invite) == 0x000318, "Member 'UWB_IngameMenu_C::Invite' has a wrong offset!");
static_assert(offsetof(UWB_IngameMenu_C, MutePlayer) == 0x000320, "Member 'UWB_IngameMenu_C::MutePlayer' has a wrong offset!");
static_assert(offsetof(UWB_IngameMenu_C, NextMatchSettings) == 0x000328, "Member 'UWB_IngameMenu_C::NextMatchSettings' has a wrong offset!");
static_assert(offsetof(UWB_IngameMenu_C, NotEnoughPlayers) == 0x000330, "Member 'UWB_IngameMenu_C::NotEnoughPlayers' has a wrong offset!");
static_assert(offsetof(UWB_IngameMenu_C, PropCollection) == 0x000338, "Member 'UWB_IngameMenu_C::PropCollection' has a wrong offset!");
static_assert(offsetof(UWB_IngameMenu_C, QuestBlock) == 0x000340, "Member 'UWB_IngameMenu_C::QuestBlock' has a wrong offset!");
static_assert(offsetof(UWB_IngameMenu_C, Settings) == 0x000348, "Member 'UWB_IngameMenu_C::Settings' has a wrong offset!");
static_assert(offsetof(UWB_IngameMenu_C, VoteKick) == 0x000350, "Member 'UWB_IngameMenu_C::VoteKick' has a wrong offset!");
static_assert(offsetof(UWB_IngameMenu_C, WantToExitToMainMenu) == 0x000358, "Member 'UWB_IngameMenu_C::WantToExitToMainMenu' has a wrong offset!");
static_assert(offsetof(UWB_IngameMenu_C, WantToSurrender) == 0x000359, "Member 'UWB_IngameMenu_C::WantToSurrender' has a wrong offset!");

}

