#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_MapVoteScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_MapVoteScreen.WB_MapVoteScreen_C
// 0x0018 (0x02D8 - 0x02C0)
class UWB_MapVoteScreen_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_MapVoteBar_C*                       WB_MapVoteBar;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ResultScreenBase_C*                 WB_ResultScreenBase;                               // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_MapVoteScreen(int32 EntryPoint);
	void GetInitialFocusWidget(class UUserWidget** InitialFocusWidget);
	void OnApply();
	void OnBack();
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void OnSpecialAction();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_MapVoteScreen_C">();
	}
	static class UWB_MapVoteScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_MapVoteScreen_C>();
	}
};
static_assert(alignof(UWB_MapVoteScreen_C) == 0x000008, "Wrong alignment on UWB_MapVoteScreen_C");
static_assert(sizeof(UWB_MapVoteScreen_C) == 0x0002D8, "Wrong size on UWB_MapVoteScreen_C");
static_assert(offsetof(UWB_MapVoteScreen_C, UberGraphFrame) == 0x0002C0, "Member 'UWB_MapVoteScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_MapVoteScreen_C, WB_MapVoteBar) == 0x0002C8, "Member 'UWB_MapVoteScreen_C::WB_MapVoteBar' has a wrong offset!");
static_assert(offsetof(UWB_MapVoteScreen_C, WB_ResultScreenBase) == 0x0002D0, "Member 'UWB_MapVoteScreen_C::WB_ResultScreenBase' has a wrong offset!");

}
