#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_StaminaBar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_StaminaBar.WB_StaminaBar_C
// 0x0028 (0x0308 - 0x02E0)
class UWB_StaminaBar_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Bar;                                               // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBox_0;                                 // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UB_PotatoSkill_C*                       PotatoSkill;                                       // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        VisualPercentage;                                  // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WB_StaminaBar(int32 EntryPoint);
	ESlateVisibility GetVisibility_0();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_StaminaBar_C">();
	}
	static class UWB_StaminaBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_StaminaBar_C>();
	}
};
static_assert(alignof(UWB_StaminaBar_C) == 0x000008, "Wrong alignment on UWB_StaminaBar_C");
static_assert(sizeof(UWB_StaminaBar_C) == 0x000308, "Wrong size on UWB_StaminaBar_C");
static_assert(offsetof(UWB_StaminaBar_C, UberGraphFrame) == 0x0002E0, "Member 'UWB_StaminaBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_StaminaBar_C, Bar) == 0x0002E8, "Member 'UWB_StaminaBar_C::Bar' has a wrong offset!");
static_assert(offsetof(UWB_StaminaBar_C, InvalidationBox_0) == 0x0002F0, "Member 'UWB_StaminaBar_C::InvalidationBox_0' has a wrong offset!");
static_assert(offsetof(UWB_StaminaBar_C, PotatoSkill) == 0x0002F8, "Member 'UWB_StaminaBar_C::PotatoSkill' has a wrong offset!");
static_assert(offsetof(UWB_StaminaBar_C, VisualPercentage) == 0x000300, "Member 'UWB_StaminaBar_C::VisualPercentage' has a wrong offset!");

}

