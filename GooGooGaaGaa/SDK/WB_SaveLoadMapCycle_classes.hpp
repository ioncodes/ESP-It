#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_SaveLoadMapCycle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_SaveLoadMapCycle.WB_SaveLoadMapCycle_C
// 0x0020 (0x02E0 - 0x02C0)
class UWB_SaveLoadMapCycle_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_MapCyclePreview_C*                  WB_MapCyclePreview;                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_SaveLoadScreen_C*                   WB_SaveLoadScreen;                                 // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UB_MapCycleObject_C*                    SelectedMapCycle;                                  // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ChangeMenuOnBack();
	void Construct();
	void ExecuteUbergraph_WB_SaveLoadMapCycle(int32 EntryPoint);
	void GetInitialFocusWidget(class UUserWidget** InitialFocusWidget);
	void OnApply();
	void OnBack();
	void OnSpecialAction();
	void SaveMapCycleNameOnFileSaved(const class FString& Filename);
	void SetSelectedMapCycleOnFileSelected(class USaveGame* EntrySaveFile);
	void TryUpdateMapCycleOnFileDeleted();
	void UpdateActiveMapCycleOnFileLoaded(const class FString& Filename, class USaveGame* SaveFile);
	void UpdateSaveButtonEnabledState();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_SaveLoadMapCycle_C">();
	}
	static class UWB_SaveLoadMapCycle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_SaveLoadMapCycle_C>();
	}
};
static_assert(alignof(UWB_SaveLoadMapCycle_C) == 0x000008, "Wrong alignment on UWB_SaveLoadMapCycle_C");
static_assert(sizeof(UWB_SaveLoadMapCycle_C) == 0x0002E0, "Wrong size on UWB_SaveLoadMapCycle_C");
static_assert(offsetof(UWB_SaveLoadMapCycle_C, UberGraphFrame) == 0x0002C0, "Member 'UWB_SaveLoadMapCycle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_SaveLoadMapCycle_C, WB_MapCyclePreview) == 0x0002C8, "Member 'UWB_SaveLoadMapCycle_C::WB_MapCyclePreview' has a wrong offset!");
static_assert(offsetof(UWB_SaveLoadMapCycle_C, WB_SaveLoadScreen) == 0x0002D0, "Member 'UWB_SaveLoadMapCycle_C::WB_SaveLoadScreen' has a wrong offset!");
static_assert(offsetof(UWB_SaveLoadMapCycle_C, SelectedMapCycle) == 0x0002D8, "Member 'UWB_SaveLoadMapCycle_C::SelectedMapCycle' has a wrong offset!");

}
