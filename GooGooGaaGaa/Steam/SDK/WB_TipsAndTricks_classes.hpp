#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_TipsAndTricks

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_TipsAndTricks.WB_TipsAndTricks_C
// 0x0018 (0x02F8 - 0x02E0)
class UWB_TipsAndTricks_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_0;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_0;                                       // 0x02F0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_WB_TipsAndTricks(int32 EntryPoint);
	class FText GetText_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_TipsAndTricks_C">();
	}
	static class UWB_TipsAndTricks_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_TipsAndTricks_C>();
	}
};
static_assert(alignof(UWB_TipsAndTricks_C) == 0x000008, "Wrong alignment on UWB_TipsAndTricks_C");
static_assert(sizeof(UWB_TipsAndTricks_C) == 0x0002F8, "Wrong size on UWB_TipsAndTricks_C");
static_assert(offsetof(UWB_TipsAndTricks_C, UberGraphFrame) == 0x0002E0, "Member 'UWB_TipsAndTricks_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_TipsAndTricks_C, Button_0) == 0x0002E8, "Member 'UWB_TipsAndTricks_C::Button_0' has a wrong offset!");
static_assert(offsetof(UWB_TipsAndTricks_C, TextBlock_0) == 0x0002F0, "Member 'UWB_TipsAndTricks_C::TextBlock_0' has a wrong offset!");

}
