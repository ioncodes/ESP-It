#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Seperator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_Seperator.WB_Seperator_C
// 0x0018 (0x02D8 - 0x02C0)
class UWB_Seperator_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                SeparatorGraphic;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Last;                                              // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_Seperator(int32 EntryPoint);
	ESlateVisibility Get_Fill_1_Visibility_0();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_Seperator_C">();
	}
	static class UWB_Seperator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_Seperator_C>();
	}
};
static_assert(alignof(UWB_Seperator_C) == 0x000008, "Wrong alignment on UWB_Seperator_C");
static_assert(sizeof(UWB_Seperator_C) == 0x0002D8, "Wrong size on UWB_Seperator_C");
static_assert(offsetof(UWB_Seperator_C, UberGraphFrame) == 0x0002C0, "Member 'UWB_Seperator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_Seperator_C, SeparatorGraphic) == 0x0002C8, "Member 'UWB_Seperator_C::SeparatorGraphic' has a wrong offset!");
static_assert(offsetof(UWB_Seperator_C, Last) == 0x0002D0, "Member 'UWB_Seperator_C::Last' has a wrong offset!");

}
