#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_RandomSelectionScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_RandomSelectionScreen.WB_RandomSelectionScreen_C
// 0x0098 (0x0378 - 0x02E0)
class UWB_RandomSelectionScreen_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             GameModeText;                                      // 0x02F0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             GameNameText;                                      // 0x02F8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             HunterSkillsText;                                  // 0x0300(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_IngameSkinConfigMenu_C*             HunterSkinConfigSelection;                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_SkillSelectionBlock_C*              HunterUtilitySkills;                               // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_C*                           Menu;                                              // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PlayersText;                                       // 0x0320(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_C*                           Ready;                                             // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_C*                           SpectatorReady;                                    // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_2;                                     // 0x0338(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_3;                                     // 0x0340(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_GameStartTimer_C*                   WB_GameStartTimer_61;                              // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_PlayerListBlock_C*                  WB_PlayerListBlock;                                // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             WitchSkillsText;                                   // 0x0358(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_IngameSkinConfigMenu_C*             WitchSkinConfigSelection;                          // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_SkillSelectionBlock_C*              WitchUtilitySkills;                                // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserWidget*                            InitialFocusWidget;                                // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__Menu_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature();
	void BndEvt__SpectatorReady_K2Node_ComponentBoundEvent_55_Clicked__DelegateSignature();
	void BndEvt__WB_Button_K2Node_ComponentBoundEvent_26_Clicked__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_WB_RandomSelectionScreen(int32 EntryPoint);
	class FText Get_GameModeText_Text_0();
	class FText Get_GameNameText_Text_0();
	struct FSlateColor Get_HunterSkillsText_ColorAndOpacity_0();
	ESlateVisibility Get_HunterSkillsText_Visibility();
	class FText Get_PlayersText_Text_0();
	struct FSlateColor Get_WitchSkillsText_ColorAndOpacity_0();
	ESlateVisibility Get_WitchSkillsText_Visibility();
	void GetInitialFocusWidget(class UUserWidget** InitialFocusWidget_0);
	ESlateVisibility GetVisibility_0();
	class UWidget* HunterSkillsLeftNavigation(EUINavigation Navigation_0);
	void InitializeFocus();
	void OnApply();
	void OnBack();
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void OnSpecialAction();
	void SetReady(bool WantsToSpectate);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_RandomSelectionScreen_C">();
	}
	static class UWB_RandomSelectionScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_RandomSelectionScreen_C>();
	}
};
static_assert(alignof(UWB_RandomSelectionScreen_C) == 0x000008, "Wrong alignment on UWB_RandomSelectionScreen_C");
static_assert(sizeof(UWB_RandomSelectionScreen_C) == 0x000378, "Wrong size on UWB_RandomSelectionScreen_C");
static_assert(offsetof(UWB_RandomSelectionScreen_C, UberGraphFrame) == 0x0002E0, "Member 'UWB_RandomSelectionScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_RandomSelectionScreen_C, CanvasPanel_0) == 0x0002E8, "Member 'UWB_RandomSelectionScreen_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UWB_RandomSelectionScreen_C, GameModeText) == 0x0002F0, "Member 'UWB_RandomSelectionScreen_C::GameModeText' has a wrong offset!");
static_assert(offsetof(UWB_RandomSelectionScreen_C, GameNameText) == 0x0002F8, "Member 'UWB_RandomSelectionScreen_C::GameNameText' has a wrong offset!");
static_assert(offsetof(UWB_RandomSelectionScreen_C, HunterSkillsText) == 0x000300, "Member 'UWB_RandomSelectionScreen_C::HunterSkillsText' has a wrong offset!");
static_assert(offsetof(UWB_RandomSelectionScreen_C, HunterSkinConfigSelection) == 0x000308, "Member 'UWB_RandomSelectionScreen_C::HunterSkinConfigSelection' has a wrong offset!");
static_assert(offsetof(UWB_RandomSelectionScreen_C, HunterUtilitySkills) == 0x000310, "Member 'UWB_RandomSelectionScreen_C::HunterUtilitySkills' has a wrong offset!");
static_assert(offsetof(UWB_RandomSelectionScreen_C, Menu) == 0x000318, "Member 'UWB_RandomSelectionScreen_C::Menu' has a wrong offset!");
static_assert(offsetof(UWB_RandomSelectionScreen_C, PlayersText) == 0x000320, "Member 'UWB_RandomSelectionScreen_C::PlayersText' has a wrong offset!");
static_assert(offsetof(UWB_RandomSelectionScreen_C, Ready) == 0x000328, "Member 'UWB_RandomSelectionScreen_C::Ready' has a wrong offset!");
static_assert(offsetof(UWB_RandomSelectionScreen_C, SpectatorReady) == 0x000330, "Member 'UWB_RandomSelectionScreen_C::SpectatorReady' has a wrong offset!");
static_assert(offsetof(UWB_RandomSelectionScreen_C, VerticalBox_2) == 0x000338, "Member 'UWB_RandomSelectionScreen_C::VerticalBox_2' has a wrong offset!");
static_assert(offsetof(UWB_RandomSelectionScreen_C, VerticalBox_3) == 0x000340, "Member 'UWB_RandomSelectionScreen_C::VerticalBox_3' has a wrong offset!");
static_assert(offsetof(UWB_RandomSelectionScreen_C, WB_GameStartTimer_61) == 0x000348, "Member 'UWB_RandomSelectionScreen_C::WB_GameStartTimer_61' has a wrong offset!");
static_assert(offsetof(UWB_RandomSelectionScreen_C, WB_PlayerListBlock) == 0x000350, "Member 'UWB_RandomSelectionScreen_C::WB_PlayerListBlock' has a wrong offset!");
static_assert(offsetof(UWB_RandomSelectionScreen_C, WitchSkillsText) == 0x000358, "Member 'UWB_RandomSelectionScreen_C::WitchSkillsText' has a wrong offset!");
static_assert(offsetof(UWB_RandomSelectionScreen_C, WitchSkinConfigSelection) == 0x000360, "Member 'UWB_RandomSelectionScreen_C::WitchSkinConfigSelection' has a wrong offset!");
static_assert(offsetof(UWB_RandomSelectionScreen_C, WitchUtilitySkills) == 0x000368, "Member 'UWB_RandomSelectionScreen_C::WitchUtilitySkills' has a wrong offset!");
static_assert(offsetof(UWB_RandomSelectionScreen_C, InitialFocusWidget) == 0x000370, "Member 'UWB_RandomSelectionScreen_C::InitialFocusWidget' has a wrong offset!");

}

