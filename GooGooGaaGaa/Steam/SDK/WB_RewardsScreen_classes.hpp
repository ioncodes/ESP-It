#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_RewardsScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_RewardsScreen.WB_RewardsScreen_C
// 0x0028 (0x0308 - 0x02E0)
class UWB_RewardsScreen_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_ExpBar_C*                           WB_ExpBar;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ResultScreenBase_C*                 WB_ResultScreenBase;                               // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_UnlockBar_C*                        WB_UnlockBar;                                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        NextScreenTime;                                    // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WB_RewardsScreen(int32 EntryPoint);
	class FText Get_NextGameText_Text_0();
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void TickNextScreen();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_RewardsScreen_C">();
	}
	static class UWB_RewardsScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_RewardsScreen_C>();
	}
};
static_assert(alignof(UWB_RewardsScreen_C) == 0x000008, "Wrong alignment on UWB_RewardsScreen_C");
static_assert(sizeof(UWB_RewardsScreen_C) == 0x000308, "Wrong size on UWB_RewardsScreen_C");
static_assert(offsetof(UWB_RewardsScreen_C, UberGraphFrame) == 0x0002E0, "Member 'UWB_RewardsScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_RewardsScreen_C, WB_ExpBar) == 0x0002E8, "Member 'UWB_RewardsScreen_C::WB_ExpBar' has a wrong offset!");
static_assert(offsetof(UWB_RewardsScreen_C, WB_ResultScreenBase) == 0x0002F0, "Member 'UWB_RewardsScreen_C::WB_ResultScreenBase' has a wrong offset!");
static_assert(offsetof(UWB_RewardsScreen_C, WB_UnlockBar) == 0x0002F8, "Member 'UWB_RewardsScreen_C::WB_UnlockBar' has a wrong offset!");
static_assert(offsetof(UWB_RewardsScreen_C, NextScreenTime) == 0x000300, "Member 'UWB_RewardsScreen_C::NextScreenTime' has a wrong offset!");

}
