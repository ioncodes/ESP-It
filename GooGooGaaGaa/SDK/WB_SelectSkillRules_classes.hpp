#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_SelectSkillRules

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_SkillType_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_SelectSkillRules.WB_SelectSkillRules_C
// 0x0020 (0x02E0 - 0x02C0)
class UWB_SelectSkillRules_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_GridButtonGrid_C*                   SKillGridHunter;                                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_GridButtonGrid_C*                   SkillGridWitch;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	E_SkillType                                   CurrentType;                                       // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ApplyChanges();
	void ExecuteUbergraph_WB_SelectSkillRules(int32 EntryPoint);
	ESlateVisibility Get_LeftShoulderIcon_Visibility_0();
	class UUserWidget* GetInitialFocusWidget();
	class UPanelWidget* GetPanelWidget();
	void Init();
	void PopulateSkillList(TArray<class UClass*>& Array, class UWB_GridButtonGrid_C* SkillGrid);
	void RefreshSkillList();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_SelectSkillRules_C">();
	}
	static class UWB_SelectSkillRules_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_SelectSkillRules_C>();
	}
};
static_assert(alignof(UWB_SelectSkillRules_C) == 0x000008, "Wrong alignment on UWB_SelectSkillRules_C");
static_assert(sizeof(UWB_SelectSkillRules_C) == 0x0002E0, "Wrong size on UWB_SelectSkillRules_C");
static_assert(offsetof(UWB_SelectSkillRules_C, UberGraphFrame) == 0x0002C0, "Member 'UWB_SelectSkillRules_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_SelectSkillRules_C, SKillGridHunter) == 0x0002C8, "Member 'UWB_SelectSkillRules_C::SKillGridHunter' has a wrong offset!");
static_assert(offsetof(UWB_SelectSkillRules_C, SkillGridWitch) == 0x0002D0, "Member 'UWB_SelectSkillRules_C::SkillGridWitch' has a wrong offset!");
static_assert(offsetof(UWB_SelectSkillRules_C, CurrentType) == 0x0002D8, "Member 'UWB_SelectSkillRules_C::CurrentType' has a wrong offset!");

}
