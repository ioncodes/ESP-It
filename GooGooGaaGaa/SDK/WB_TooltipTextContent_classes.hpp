#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_TooltipTextContent

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_TooltipTextContent.WB_TooltipTextContent_C
// 0x0020 (0x02E0 - 0x02C0)
class UWB_TooltipTextContent_C final : public UUserWidget
{
public:
	class UTextBlock*                             TextBlock_80;                                      // 0x02C0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x02C8(0x0018)(Edit, BlueprintVisible)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_TooltipTextContent_C">();
	}
	static class UWB_TooltipTextContent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_TooltipTextContent_C>();
	}
};
static_assert(alignof(UWB_TooltipTextContent_C) == 0x000008, "Wrong alignment on UWB_TooltipTextContent_C");
static_assert(sizeof(UWB_TooltipTextContent_C) == 0x0002E0, "Wrong size on UWB_TooltipTextContent_C");
static_assert(offsetof(UWB_TooltipTextContent_C, TextBlock_80) == 0x0002C0, "Member 'UWB_TooltipTextContent_C::TextBlock_80' has a wrong offset!");
static_assert(offsetof(UWB_TooltipTextContent_C, Text) == 0x0002C8, "Member 'UWB_TooltipTextContent_C::Text' has a wrong offset!");

}
