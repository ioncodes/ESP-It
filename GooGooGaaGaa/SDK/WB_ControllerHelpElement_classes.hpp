#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ControllerHelpElement

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "InputCore_structs.hpp"
#include "UMG_classes.hpp"
#include "ETeamID_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ControllerHelpElement.WB_ControllerHelpElement_C
// 0x0060 (0x0320 - 0x02C0)
class UWB_ControllerHelpElement_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_ControllerIconWithLabel_C*          WB_ControllerIconWithLabel;                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FKey                                   InputKey;                                          // 0x02D0(0x0018)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FKey                                   AlternateInputKey;                                 // 0x02E8(0x0018)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          IconToTheRight;                                    // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CBD[0x7];                                     // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   OverwriteText;                                     // 0x0308(0x0018)(Edit, BlueprintVisible)

public:
	void Construct();
	void ExecuteUbergraph_WB_ControllerHelpElement(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void UpdateActionName(const TMap<struct FKey, class FName>& Bindings, ETeamID Team);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ControllerHelpElement_C">();
	}
	static class UWB_ControllerHelpElement_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ControllerHelpElement_C>();
	}
};
static_assert(alignof(UWB_ControllerHelpElement_C) == 0x000008, "Wrong alignment on UWB_ControllerHelpElement_C");
static_assert(sizeof(UWB_ControllerHelpElement_C) == 0x000320, "Wrong size on UWB_ControllerHelpElement_C");
static_assert(offsetof(UWB_ControllerHelpElement_C, UberGraphFrame) == 0x0002C0, "Member 'UWB_ControllerHelpElement_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_ControllerHelpElement_C, WB_ControllerIconWithLabel) == 0x0002C8, "Member 'UWB_ControllerHelpElement_C::WB_ControllerIconWithLabel' has a wrong offset!");
static_assert(offsetof(UWB_ControllerHelpElement_C, InputKey) == 0x0002D0, "Member 'UWB_ControllerHelpElement_C::InputKey' has a wrong offset!");
static_assert(offsetof(UWB_ControllerHelpElement_C, AlternateInputKey) == 0x0002E8, "Member 'UWB_ControllerHelpElement_C::AlternateInputKey' has a wrong offset!");
static_assert(offsetof(UWB_ControllerHelpElement_C, IconToTheRight) == 0x000300, "Member 'UWB_ControllerHelpElement_C::IconToTheRight' has a wrong offset!");
static_assert(offsetof(UWB_ControllerHelpElement_C, OverwriteText) == 0x000308, "Member 'UWB_ControllerHelpElement_C::OverwriteText' has a wrong offset!");

}
