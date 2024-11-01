#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_TeamSelectionCreative

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SSelectedSkills_structs.hpp"
#include "UMG_classes.hpp"
#include "ETeamID_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_TeamSelectionCreative.WB_TeamSelectionCreative_C
// 0x0080 (0x0360 - 0x02E0)
class UWB_TeamSelectionCreative_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             GameModeText;                                      // 0x02E8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             GameNameText;                                      // 0x02F0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_C*                           HunterButton;                                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_C*                           KeepCharacterButton;                               // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_C*                           Menu;                                              // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_SkillSelectionBlock_C*              SkillSelectionBlockHunter;                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_SkillSelectionBlock_C*              SkillSelectionBlockWitch;                          // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_C*                           SpectatorReady;                                    // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_PLayerListBlockCreative_C*          WB_PLayerListBlockCreative;                        // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_C*                           WitchButton;                                       // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AB_CreativePlayerController_C*          OwningCreativePlayerController;                    // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FSSelectedSkills                       CurrentSkills;                                     // 0x0340(0x0020)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BackWithNecessaryUpdates();
	void BndEvt__WB_Button_0_K2Node_ComponentBoundEvent_52_Clicked__DelegateSignature();
	void BndEvt__WB_Button_1_K2Node_ComponentBoundEvent_76_Clicked__DelegateSignature();
	void BndEvt__WB_Button_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature();
	void BndEvt__WB_TeamSelectionCreative_Back_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
	void BndEvt__WB_TeamSelectionCreative_SpectatorReady_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
	void Close();
	void Construct();
	void ExecuteUbergraph_WB_TeamSelectionCreative(int32 EntryPoint);
	class FText Get_GameModeText_Text_0();
	class FText Get_GameNameText_Text_0();
	void GetInitialFocusWidget(class UUserWidget** InitialFocusWidget);
	void OnApply();
	void OnBack();
	void OnSpecialAction();
	void SelectPlayerTeam(ETeamID SelectedTeam);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void TryInitializeSkillDisplay(bool* Succsses);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_TeamSelectionCreative_C">();
	}
	static class UWB_TeamSelectionCreative_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_TeamSelectionCreative_C>();
	}
};
static_assert(alignof(UWB_TeamSelectionCreative_C) == 0x000008, "Wrong alignment on UWB_TeamSelectionCreative_C");
static_assert(sizeof(UWB_TeamSelectionCreative_C) == 0x000360, "Wrong size on UWB_TeamSelectionCreative_C");
static_assert(offsetof(UWB_TeamSelectionCreative_C, UberGraphFrame) == 0x0002E0, "Member 'UWB_TeamSelectionCreative_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_TeamSelectionCreative_C, GameModeText) == 0x0002E8, "Member 'UWB_TeamSelectionCreative_C::GameModeText' has a wrong offset!");
static_assert(offsetof(UWB_TeamSelectionCreative_C, GameNameText) == 0x0002F0, "Member 'UWB_TeamSelectionCreative_C::GameNameText' has a wrong offset!");
static_assert(offsetof(UWB_TeamSelectionCreative_C, HunterButton) == 0x0002F8, "Member 'UWB_TeamSelectionCreative_C::HunterButton' has a wrong offset!");
static_assert(offsetof(UWB_TeamSelectionCreative_C, KeepCharacterButton) == 0x000300, "Member 'UWB_TeamSelectionCreative_C::KeepCharacterButton' has a wrong offset!");
static_assert(offsetof(UWB_TeamSelectionCreative_C, Menu) == 0x000308, "Member 'UWB_TeamSelectionCreative_C::Menu' has a wrong offset!");
static_assert(offsetof(UWB_TeamSelectionCreative_C, SkillSelectionBlockHunter) == 0x000310, "Member 'UWB_TeamSelectionCreative_C::SkillSelectionBlockHunter' has a wrong offset!");
static_assert(offsetof(UWB_TeamSelectionCreative_C, SkillSelectionBlockWitch) == 0x000318, "Member 'UWB_TeamSelectionCreative_C::SkillSelectionBlockWitch' has a wrong offset!");
static_assert(offsetof(UWB_TeamSelectionCreative_C, SpectatorReady) == 0x000320, "Member 'UWB_TeamSelectionCreative_C::SpectatorReady' has a wrong offset!");
static_assert(offsetof(UWB_TeamSelectionCreative_C, WB_PLayerListBlockCreative) == 0x000328, "Member 'UWB_TeamSelectionCreative_C::WB_PLayerListBlockCreative' has a wrong offset!");
static_assert(offsetof(UWB_TeamSelectionCreative_C, WitchButton) == 0x000330, "Member 'UWB_TeamSelectionCreative_C::WitchButton' has a wrong offset!");
static_assert(offsetof(UWB_TeamSelectionCreative_C, OwningCreativePlayerController) == 0x000338, "Member 'UWB_TeamSelectionCreative_C::OwningCreativePlayerController' has a wrong offset!");
static_assert(offsetof(UWB_TeamSelectionCreative_C, CurrentSkills) == 0x000340, "Member 'UWB_TeamSelectionCreative_C::CurrentSkills' has a wrong offset!");

}

