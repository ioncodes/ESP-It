#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_BigText

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_BigText.WB_BigText_C
// 0x0018 (0x02D8 - 0x02C0)
class UWB_BigText_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Blend;                                             // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             Text;                                              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_BigText(int32 EntryPoint);
	void Play(const class FText& Param_Text);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_BigText_C">();
	}
	static class UWB_BigText_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_BigText_C>();
	}
};
static_assert(alignof(UWB_BigText_C) == 0x000008, "Wrong alignment on UWB_BigText_C");
static_assert(sizeof(UWB_BigText_C) == 0x0002D8, "Wrong size on UWB_BigText_C");
static_assert(offsetof(UWB_BigText_C, UberGraphFrame) == 0x0002C0, "Member 'UWB_BigText_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_BigText_C, Blend) == 0x0002C8, "Member 'UWB_BigText_C::Blend' has a wrong offset!");
static_assert(offsetof(UWB_BigText_C, Text) == 0x0002D0, "Member 'UWB_BigText_C::Text' has a wrong offset!");

}
