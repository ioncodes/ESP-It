#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_PropTooltipContent

#include "Basic.hpp"

#include "S_PropData_structs.hpp"
#include "Engine_structs.hpp"
#include "E_PropSet_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_PropTooltipContent.WB_PropTooltipContent_C
// 0x0088 (0x0368 - 0x02E0)
class UWB_PropTooltipContent_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             HP;                                                // 0x02E8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Name_0;                                            // 0x02F8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SetcompletedText;                                  // 0x0300(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           SetProgress;                                       // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SetProgressText;                                   // 0x0310(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Speed;                                             // 0x0318(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_56;                                      // 0x0320(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FS_PropData                            PropData;                                          // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsSetProp;                                         // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_339[0x7];                                      // 0x0339(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FS_PropData>                    PropDatas;                                         // 0x0340(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	E_PropSet                                     PropSet;                                           // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_351[0x3];                                      // 0x0351(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SetCountMax;                                       // 0x0354(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SetCount;                                          // 0x0358(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Owns;                                              // 0x035C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_35D[0x3];                                      // 0x035D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               GrayscaleMaterial;                                 // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WB_PropTooltipContent(int32 EntryPoint);
	class FText Get_HP_Text_0();
	class FText Get_Name_Text_0();
	ESlateVisibility Get_Name_Visibility_0();
	ESlateVisibility Get_SetcompletedText_Visibility_0();
	float Get_SetProgress_Percent_0();
	class FText Get_SetProgressText_Text_0();
	class FText Get_Speed_Text_0();
	void GetPropIcon(class UObject** Prop_Data_Icon);
	ESlateVisibility GetVisibility_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_PropTooltipContent_C">();
	}
	static class UWB_PropTooltipContent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_PropTooltipContent_C>();
	}
};
static_assert(alignof(UWB_PropTooltipContent_C) == 0x000008, "Wrong alignment on UWB_PropTooltipContent_C");
static_assert(sizeof(UWB_PropTooltipContent_C) == 0x000368, "Wrong size on UWB_PropTooltipContent_C");
static_assert(offsetof(UWB_PropTooltipContent_C, UberGraphFrame) == 0x0002E0, "Member 'UWB_PropTooltipContent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_PropTooltipContent_C, HP) == 0x0002E8, "Member 'UWB_PropTooltipContent_C::HP' has a wrong offset!");
static_assert(offsetof(UWB_PropTooltipContent_C, Image_0) == 0x0002F0, "Member 'UWB_PropTooltipContent_C::Image_0' has a wrong offset!");
static_assert(offsetof(UWB_PropTooltipContent_C, Name_0) == 0x0002F8, "Member 'UWB_PropTooltipContent_C::Name_0' has a wrong offset!");
static_assert(offsetof(UWB_PropTooltipContent_C, SetcompletedText) == 0x000300, "Member 'UWB_PropTooltipContent_C::SetcompletedText' has a wrong offset!");
static_assert(offsetof(UWB_PropTooltipContent_C, SetProgress) == 0x000308, "Member 'UWB_PropTooltipContent_C::SetProgress' has a wrong offset!");
static_assert(offsetof(UWB_PropTooltipContent_C, SetProgressText) == 0x000310, "Member 'UWB_PropTooltipContent_C::SetProgressText' has a wrong offset!");
static_assert(offsetof(UWB_PropTooltipContent_C, Speed) == 0x000318, "Member 'UWB_PropTooltipContent_C::Speed' has a wrong offset!");
static_assert(offsetof(UWB_PropTooltipContent_C, TextBlock_56) == 0x000320, "Member 'UWB_PropTooltipContent_C::TextBlock_56' has a wrong offset!");
static_assert(offsetof(UWB_PropTooltipContent_C, PropData) == 0x000328, "Member 'UWB_PropTooltipContent_C::PropData' has a wrong offset!");
static_assert(offsetof(UWB_PropTooltipContent_C, IsSetProp) == 0x000338, "Member 'UWB_PropTooltipContent_C::IsSetProp' has a wrong offset!");
static_assert(offsetof(UWB_PropTooltipContent_C, PropDatas) == 0x000340, "Member 'UWB_PropTooltipContent_C::PropDatas' has a wrong offset!");
static_assert(offsetof(UWB_PropTooltipContent_C, PropSet) == 0x000350, "Member 'UWB_PropTooltipContent_C::PropSet' has a wrong offset!");
static_assert(offsetof(UWB_PropTooltipContent_C, SetCountMax) == 0x000354, "Member 'UWB_PropTooltipContent_C::SetCountMax' has a wrong offset!");
static_assert(offsetof(UWB_PropTooltipContent_C, SetCount) == 0x000358, "Member 'UWB_PropTooltipContent_C::SetCount' has a wrong offset!");
static_assert(offsetof(UWB_PropTooltipContent_C, Owns) == 0x00035C, "Member 'UWB_PropTooltipContent_C::Owns' has a wrong offset!");
static_assert(offsetof(UWB_PropTooltipContent_C, GrayscaleMaterial) == 0x000360, "Member 'UWB_PropTooltipContent_C::GrayscaleMaterial' has a wrong offset!");

}
