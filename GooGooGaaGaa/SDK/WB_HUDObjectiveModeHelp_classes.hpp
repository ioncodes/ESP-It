#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_HUDObjectiveModeHelp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ETeamID_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_HUDObjectiveModeHelp.WB_HUDObjectiveModeHelp_C
// 0x0048 (0x0308 - 0x02C0)
class UWB_HUDObjectiveModeHelp_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           HelpEntryBox;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bShowHelp;                                         // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31AE[0x7];                                     // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_ObjectiveGameMode_C*                 ObjectiveGameMode;                                 // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	ETeamID                                       Team;                                              // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31AF[0x7];                                     // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UB_SettingsSave_C*                      SettingsSave;                                      // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UWB_ObjectiveHelpEntry_C*               CauldronActivationHelpWidget;                      // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWB_ObjectiveHelpEntry_C*               RevivePropHelpWidget;                              // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        HelpShowDuration;                                  // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WB_HUDObjectiveModeHelp(int32 EntryPoint);
	ESlateVisibility GetHelpVisibility();
	void On30SecondsLeft_Event();
	void On60SecondsLeft_Event();
	void OnCauldronFilled_Event();
	void OnGameStarted_Event();
	void OnOverTimeStarted_Event(class UClass* WantedPropClass);
	void OnPropMovedToInactiveCauldron_Event(class APlayerController* PlayerController);
	void OnPropMovedToReviveCircle_Event(class APlayerController* PlayerController);
	void OnRevivePossible_Event(class APlayerState* KilledPlayer);
	void OnTransformedIntoWantedProp_Event();
	void SetLocalShowHelpFromSave();
	void ShowObjective();
	class UWB_ObjectiveHelpEntry_C* SpawnHelpEntry(const class FText& HelpText, double ShowDuration);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	bool WitchIsWantedProp();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_HUDObjectiveModeHelp_C">();
	}
	static class UWB_HUDObjectiveModeHelp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_HUDObjectiveModeHelp_C>();
	}
};
static_assert(alignof(UWB_HUDObjectiveModeHelp_C) == 0x000008, "Wrong alignment on UWB_HUDObjectiveModeHelp_C");
static_assert(sizeof(UWB_HUDObjectiveModeHelp_C) == 0x000308, "Wrong size on UWB_HUDObjectiveModeHelp_C");
static_assert(offsetof(UWB_HUDObjectiveModeHelp_C, UberGraphFrame) == 0x0002C0, "Member 'UWB_HUDObjectiveModeHelp_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_HUDObjectiveModeHelp_C, HelpEntryBox) == 0x0002C8, "Member 'UWB_HUDObjectiveModeHelp_C::HelpEntryBox' has a wrong offset!");
static_assert(offsetof(UWB_HUDObjectiveModeHelp_C, bShowHelp) == 0x0002D0, "Member 'UWB_HUDObjectiveModeHelp_C::bShowHelp' has a wrong offset!");
static_assert(offsetof(UWB_HUDObjectiveModeHelp_C, ObjectiveGameMode) == 0x0002D8, "Member 'UWB_HUDObjectiveModeHelp_C::ObjectiveGameMode' has a wrong offset!");
static_assert(offsetof(UWB_HUDObjectiveModeHelp_C, Team) == 0x0002E0, "Member 'UWB_HUDObjectiveModeHelp_C::Team' has a wrong offset!");
static_assert(offsetof(UWB_HUDObjectiveModeHelp_C, SettingsSave) == 0x0002E8, "Member 'UWB_HUDObjectiveModeHelp_C::SettingsSave' has a wrong offset!");
static_assert(offsetof(UWB_HUDObjectiveModeHelp_C, CauldronActivationHelpWidget) == 0x0002F0, "Member 'UWB_HUDObjectiveModeHelp_C::CauldronActivationHelpWidget' has a wrong offset!");
static_assert(offsetof(UWB_HUDObjectiveModeHelp_C, RevivePropHelpWidget) == 0x0002F8, "Member 'UWB_HUDObjectiveModeHelp_C::RevivePropHelpWidget' has a wrong offset!");
static_assert(offsetof(UWB_HUDObjectiveModeHelp_C, HelpShowDuration) == 0x000300, "Member 'UWB_HUDObjectiveModeHelp_C::HelpShowDuration' has a wrong offset!");

}
