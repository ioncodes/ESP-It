#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BFL_TeamAndSkillSelection

#include "Basic.hpp"

#include "ESkillCategory_structs.hpp"
#include "Engine_classes.hpp"
#include "ETeamID_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BFL_TeamAndSkillSelection.BFL_TeamAndSkillSelection_C
// 0x0000 (0x0028 - 0x0028)
class UBFL_TeamAndSkillSelection_C final : public UBlueprintFunctionLibrary
{
public:
	static void GetAllowedSkillsByGameRules(ETeamID PlayerTeam, class AB_GameState_C* GameState, class UObject* __WorldContext, TArray<class UClass*>* AllowedSkills);
	static void VerifySkillSelection(class UObject* __WorldContext);
	static void VerifySkillSelectionForTeam(ETeamID Team, class UObject* __WorldContext);
	static void SaveSkillSelection(class UClass*& Skill, ETeamID& Team, ESkillCategory SkillCategory, bool NoSkill, class UObject* __WorldContext);
	static void SelectSkill(ETeamID& Team, class AB_PlayerState_C*& PlayerState, class UClass* Skill, ESkillCategory SkillCategory, class UObject* __WorldContext);
	static void SelectRandomSkill(class AB_GameState_C*& GameState, ETeamID& Team, ESkillCategory& Category, class AB_PlayerState_C*& PlayerState, class UObject* __WorldContext, class UClass** SelectedSkill);
	static TArray<class UClass*> GetAllowedSkills(class AB_GameState_C*& GameState, ETeamID& Team, ESkillCategory& Category, class UObject* __WorldContext);
	static void VerifySkillSelectionForCategory(class AB_GameState_C*& GameState, ETeamID Team, class AB_PlayerState_C*& PlayerState, ESkillCategory SkillCategory, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BFL_TeamAndSkillSelection_C">();
	}
	static class UBFL_TeamAndSkillSelection_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBFL_TeamAndSkillSelection_C>();
	}
};
static_assert(alignof(UBFL_TeamAndSkillSelection_C) == 0x000008, "Wrong alignment on UBFL_TeamAndSkillSelection_C");
static_assert(sizeof(UBFL_TeamAndSkillSelection_C) == 0x000028, "Wrong size on UBFL_TeamAndSkillSelection_C");

}

