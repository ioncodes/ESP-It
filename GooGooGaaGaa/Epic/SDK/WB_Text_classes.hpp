#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Text

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_Text.WB_Text_C
// 0x0028 (0x0308 - 0x02E0)
class UWB_Text_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             Label;                                             // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x02F0(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          AutoWrap;                                          // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WB_Text(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_Text_C">();
	}
	static class UWB_Text_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_Text_C>();
	}
};
static_assert(alignof(UWB_Text_C) == 0x000008, "Wrong alignment on UWB_Text_C");
static_assert(sizeof(UWB_Text_C) == 0x000308, "Wrong size on UWB_Text_C");
static_assert(offsetof(UWB_Text_C, UberGraphFrame) == 0x0002E0, "Member 'UWB_Text_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_Text_C, Label) == 0x0002E8, "Member 'UWB_Text_C::Label' has a wrong offset!");
static_assert(offsetof(UWB_Text_C, Text) == 0x0002F0, "Member 'UWB_Text_C::Text' has a wrong offset!");
static_assert(offsetof(UWB_Text_C, AutoWrap) == 0x000300, "Member 'UWB_Text_C::AutoWrap' has a wrong offset!");

}
