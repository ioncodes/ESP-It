#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_SkillSelectionBlock

#include "Basic.hpp"

#include "ESkillCategory_structs.hpp"
#include "Engine_structs.hpp"
#include "ETeamID_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_SkillSelectionBlock.WB_SkillSelectionBlock_C
// 0x0048 (0x0308 - 0x02C0)
class UWB_SkillSelectionBlock_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x02C8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                               SkillListWrap;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ETeamID                                       Team;                                              // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D0C[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CurrentUtilitySkill;                               // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CurrentMovementSkill;                              // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            Parent;                                            // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         FocusIndex;                                        // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D0D[0x4];                                     // 0x02FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_PlayerState_C*                       OwningPlayer;                                      // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateSkillsByGameRulesMidgameJoin();
	void SaveSkill(ETeamID& Param_Team, class AB_PlayerState_C*& PlayerState, class UClass* Skill, ESkillCategory SkillCategory);
	void GetAllowedSkillsByGameRules(ETeamID PlayerTeam, TArray<class UClass*>* AllowedSkills);
	void PickRandomSkills();
	void TryPickRandomSkills();
	void PickRandomSkillByCategory(ESkillCategory SkillCategory, TArray<class UClass*>& AllowedSkills, ETeamID PlayerTeam, class UClass** NewSkill);
	void PickNewSkillIfAvailable(class UClass* SkillClass, ESkillCategory SkillCategory, class UClass** PickedSkill, bool* Success);
	void AddSkillButton(class UClass* SkillClass, ESkillCategory SkillCategory, class UWB_SelectionSkill_C** NewButton);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void SetTeam(ETeamID Param_Team);
	void RefreshSkillList();
	ESlateVisibility Get_CanvasPanel_0_Visibility_0();
	void SkillClicked(class UWB_SelectionSkill_C* SelectionSkill);
	void Construct();
	void ExecuteUbergraph_WB_SkillSelectionBlock(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_SkillSelectionBlock_C">();
	}
	static class UWB_SkillSelectionBlock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_SkillSelectionBlock_C>();
	}
};
static_assert(alignof(UWB_SkillSelectionBlock_C) == 0x000008, "Wrong alignment on UWB_SkillSelectionBlock_C");
static_assert(sizeof(UWB_SkillSelectionBlock_C) == 0x000308, "Wrong size on UWB_SkillSelectionBlock_C");
static_assert(offsetof(UWB_SkillSelectionBlock_C, UberGraphFrame) == 0x0002C0, "Member 'UWB_SkillSelectionBlock_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_SkillSelectionBlock_C, CanvasPanel_0) == 0x0002C8, "Member 'UWB_SkillSelectionBlock_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UWB_SkillSelectionBlock_C, SkillListWrap) == 0x0002D0, "Member 'UWB_SkillSelectionBlock_C::SkillListWrap' has a wrong offset!");
static_assert(offsetof(UWB_SkillSelectionBlock_C, Team) == 0x0002D8, "Member 'UWB_SkillSelectionBlock_C::Team' has a wrong offset!");
static_assert(offsetof(UWB_SkillSelectionBlock_C, CurrentUtilitySkill) == 0x0002E0, "Member 'UWB_SkillSelectionBlock_C::CurrentUtilitySkill' has a wrong offset!");
static_assert(offsetof(UWB_SkillSelectionBlock_C, CurrentMovementSkill) == 0x0002E8, "Member 'UWB_SkillSelectionBlock_C::CurrentMovementSkill' has a wrong offset!");
static_assert(offsetof(UWB_SkillSelectionBlock_C, Parent) == 0x0002F0, "Member 'UWB_SkillSelectionBlock_C::Parent' has a wrong offset!");
static_assert(offsetof(UWB_SkillSelectionBlock_C, FocusIndex) == 0x0002F8, "Member 'UWB_SkillSelectionBlock_C::FocusIndex' has a wrong offset!");
static_assert(offsetof(UWB_SkillSelectionBlock_C, OwningPlayer) == 0x000300, "Member 'UWB_SkillSelectionBlock_C::OwningPlayer' has a wrong offset!");

}
