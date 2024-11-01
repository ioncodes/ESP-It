#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ActionkeyHelpMovement

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ActionkeyHelpMovement.WB_ActionkeyHelpMovement_C
// 0x0028 (0x0308 - 0x02E0)
class UWB_ActionkeyHelpMovement_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_AxisIcon_C*                         Backward;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_AxisIcon_C*                         Forward;                                           // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_AxisIcon_C*                         Left;                                              // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_AxisIcon_C*                         Right;                                             // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WB_ActionkeyHelpMovement(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ActionkeyHelpMovement_C">();
	}
	static class UWB_ActionkeyHelpMovement_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ActionkeyHelpMovement_C>();
	}
};
static_assert(alignof(UWB_ActionkeyHelpMovement_C) == 0x000008, "Wrong alignment on UWB_ActionkeyHelpMovement_C");
static_assert(sizeof(UWB_ActionkeyHelpMovement_C) == 0x000308, "Wrong size on UWB_ActionkeyHelpMovement_C");
static_assert(offsetof(UWB_ActionkeyHelpMovement_C, UberGraphFrame) == 0x0002E0, "Member 'UWB_ActionkeyHelpMovement_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_ActionkeyHelpMovement_C, Backward) == 0x0002E8, "Member 'UWB_ActionkeyHelpMovement_C::Backward' has a wrong offset!");
static_assert(offsetof(UWB_ActionkeyHelpMovement_C, Forward) == 0x0002F0, "Member 'UWB_ActionkeyHelpMovement_C::Forward' has a wrong offset!");
static_assert(offsetof(UWB_ActionkeyHelpMovement_C, Left) == 0x0002F8, "Member 'UWB_ActionkeyHelpMovement_C::Left' has a wrong offset!");
static_assert(offsetof(UWB_ActionkeyHelpMovement_C, Right) == 0x000300, "Member 'UWB_ActionkeyHelpMovement_C::Right' has a wrong offset!");

}

