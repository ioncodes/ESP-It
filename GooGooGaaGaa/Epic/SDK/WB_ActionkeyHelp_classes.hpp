#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ActionkeyHelp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ActionkeyHelp.WB_ActionkeyHelp_C
// 0x0030 (0x0310 - 0x02E0)
class UWB_ActionkeyHelp_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             Loca;                                              // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ActionIcon_C*                       WB_ActionIcon;                                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   ActionName;                                        // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   ActionLoca;                                        // 0x0300(0x0010)(Edit, BlueprintVisible)

public:
	void Construct();
	void ExecuteUbergraph_WB_ActionkeyHelp(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ActionkeyHelp_C">();
	}
	static class UWB_ActionkeyHelp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ActionkeyHelp_C>();
	}
};
static_assert(alignof(UWB_ActionkeyHelp_C) == 0x000008, "Wrong alignment on UWB_ActionkeyHelp_C");
static_assert(sizeof(UWB_ActionkeyHelp_C) == 0x000310, "Wrong size on UWB_ActionkeyHelp_C");
static_assert(offsetof(UWB_ActionkeyHelp_C, UberGraphFrame) == 0x0002E0, "Member 'UWB_ActionkeyHelp_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_ActionkeyHelp_C, Loca) == 0x0002E8, "Member 'UWB_ActionkeyHelp_C::Loca' has a wrong offset!");
static_assert(offsetof(UWB_ActionkeyHelp_C, WB_ActionIcon) == 0x0002F0, "Member 'UWB_ActionkeyHelp_C::WB_ActionIcon' has a wrong offset!");
static_assert(offsetof(UWB_ActionkeyHelp_C, ActionName) == 0x0002F8, "Member 'UWB_ActionkeyHelp_C::ActionName' has a wrong offset!");
static_assert(offsetof(UWB_ActionkeyHelp_C, ActionLoca) == 0x000300, "Member 'UWB_ActionkeyHelp_C::ActionLoca' has a wrong offset!");

}
