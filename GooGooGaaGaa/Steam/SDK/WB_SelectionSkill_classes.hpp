#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_SelectionSkill

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ETeamID_structs.hpp"
#include "ESkillCategory_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_SelectionSkill.WB_SelectionSkill_C
// 0x0078 (0x0358 - 0x02E0)
class UWB_SelectionSkill_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_20;                                         // 0x02E8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ActionIcon_C*                       WB_ActionIcon;                                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_GridButton_C*                       WB_GridButton;                                     // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                 SkillClass;                                        // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UB_BaseSkill_C*                         SkillDefaultObject;                                // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	ETeamID                                       SkillTeam;                                         // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_311[0x7];                                      // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               GrayscaleMaterial;                                 // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UWB_SkillTooltipContent_C*              ToolTipContent;                                    // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           UpdateTimerHandle;                                 // 0x0328(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             Clicked;                                           // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	ESkillCategory                                SkillCategory;                                     // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          CanBeSelected;                                     // 0x0341(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_342[0x6];                                      // 0x0342(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            Parent;                                            // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          ForceAvailableRegardlessOfPlayedRounds;            // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          ShowInputIcon;                                     // 0x0351(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	class UWB_GridButton_C* GetGridButton();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void SetGridButtonValues();
	bool IsSelected();
	void GetTooltip(class UWB_SkillTooltipContent_C** ToolTip);
	class FText GetSkillTooltipText();
	TSoftObjectPtr<class UObject> GetSkillImage();
	struct FLinearColor GetTeamColor(ETeamID Team);
	void GetSkillTeam(class UClass* SkillClass_0, ETeamID* SkillTeam_0);
	bool IsEnabled();
	void SelectSkill(class UClass* Skill);
	void GetSelectedSkill(class AB_PlayerState_C* PlayerState, class UClass** Skill);
	ESlateVisibility Get_SkillSelected_Visibility_0();
	ESlateVisibility GetVisibility_0();
	class FText Get_ChickenText_Text_0();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void BndEvt__WB_GridButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
	void CheckIfSkillUnlocked();
	void Destruct();
	void Clicked__DelegateSignature(class UWB_SelectionSkill_C* SelectionSkill);
	void ExecuteUbergraph_WB_SelectionSkill(int32 EntryPoint);

	void GetStatsAndAchievementsManager(class UB_NewStatsAndAchievementsManager_C** Result) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_SelectionSkill_C">();
	}
	static class UWB_SelectionSkill_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_SelectionSkill_C>();
	}
};
static_assert(alignof(UWB_SelectionSkill_C) == 0x000008, "Wrong alignment on UWB_SelectionSkill_C");
static_assert(sizeof(UWB_SelectionSkill_C) == 0x000358, "Wrong size on UWB_SelectionSkill_C");
static_assert(offsetof(UWB_SelectionSkill_C, UberGraphFrame) == 0x0002E0, "Member 'UWB_SelectionSkill_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_SelectionSkill_C, Border_20) == 0x0002E8, "Member 'UWB_SelectionSkill_C::Border_20' has a wrong offset!");
static_assert(offsetof(UWB_SelectionSkill_C, WB_ActionIcon) == 0x0002F0, "Member 'UWB_SelectionSkill_C::WB_ActionIcon' has a wrong offset!");
static_assert(offsetof(UWB_SelectionSkill_C, WB_GridButton) == 0x0002F8, "Member 'UWB_SelectionSkill_C::WB_GridButton' has a wrong offset!");
static_assert(offsetof(UWB_SelectionSkill_C, SkillClass) == 0x000300, "Member 'UWB_SelectionSkill_C::SkillClass' has a wrong offset!");
static_assert(offsetof(UWB_SelectionSkill_C, SkillDefaultObject) == 0x000308, "Member 'UWB_SelectionSkill_C::SkillDefaultObject' has a wrong offset!");
static_assert(offsetof(UWB_SelectionSkill_C, SkillTeam) == 0x000310, "Member 'UWB_SelectionSkill_C::SkillTeam' has a wrong offset!");
static_assert(offsetof(UWB_SelectionSkill_C, GrayscaleMaterial) == 0x000318, "Member 'UWB_SelectionSkill_C::GrayscaleMaterial' has a wrong offset!");
static_assert(offsetof(UWB_SelectionSkill_C, ToolTipContent) == 0x000320, "Member 'UWB_SelectionSkill_C::ToolTipContent' has a wrong offset!");
static_assert(offsetof(UWB_SelectionSkill_C, UpdateTimerHandle) == 0x000328, "Member 'UWB_SelectionSkill_C::UpdateTimerHandle' has a wrong offset!");
static_assert(offsetof(UWB_SelectionSkill_C, Clicked) == 0x000330, "Member 'UWB_SelectionSkill_C::Clicked' has a wrong offset!");
static_assert(offsetof(UWB_SelectionSkill_C, SkillCategory) == 0x000340, "Member 'UWB_SelectionSkill_C::SkillCategory' has a wrong offset!");
static_assert(offsetof(UWB_SelectionSkill_C, CanBeSelected) == 0x000341, "Member 'UWB_SelectionSkill_C::CanBeSelected' has a wrong offset!");
static_assert(offsetof(UWB_SelectionSkill_C, Parent) == 0x000348, "Member 'UWB_SelectionSkill_C::Parent' has a wrong offset!");
static_assert(offsetof(UWB_SelectionSkill_C, ForceAvailableRegardlessOfPlayedRounds) == 0x000350, "Member 'UWB_SelectionSkill_C::ForceAvailableRegardlessOfPlayedRounds' has a wrong offset!");
static_assert(offsetof(UWB_SelectionSkill_C, ShowInputIcon) == 0x000351, "Member 'UWB_SelectionSkill_C::ShowInputIcon' has a wrong offset!");

}
