#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_SquareButtonWithIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "WB_BaseButton_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_SquareButtonWithIcon.WB_SquareButtonWithIcon_C
// 0x0800 (0x0F60 - 0x0760)
class UWB_SquareButtonWithIcon_C final : public UWB_BaseButton_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WB_SquareButtonWithIcon_C;          // 0x0758(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Icon;                                              // 0x0760(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                MyButton;                                          // 0x0768(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FButtonStyle                           ButtonStyleInactive;                               // 0x0770(0x03F0)(Edit, BlueprintVisible)
	struct FButtonStyle                           ButtonStyleActive;                                 // 0x0B60(0x03F0)(Edit, BlueprintVisible)
	bool                                          bActive;                                           // 0x0F50(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F51[0x7];                                      // 0x0F51(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             ButtonIcon;                                        // 0x0F58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	void Update_Button_Icon(class UObject* NewIcon);
	struct FLinearColor Get_Label_ColorAndOpacity_0();
	void SetActiveState(bool IsActive);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__MyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_WB_SquareButtonWithIcon(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_SquareButtonWithIcon_C">();
	}
	static class UWB_SquareButtonWithIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_SquareButtonWithIcon_C>();
	}
};
static_assert(alignof(UWB_SquareButtonWithIcon_C) == 0x000010, "Wrong alignment on UWB_SquareButtonWithIcon_C");
static_assert(sizeof(UWB_SquareButtonWithIcon_C) == 0x000F60, "Wrong size on UWB_SquareButtonWithIcon_C");
static_assert(offsetof(UWB_SquareButtonWithIcon_C, UberGraphFrame_WB_SquareButtonWithIcon_C) == 0x000758, "Member 'UWB_SquareButtonWithIcon_C::UberGraphFrame_WB_SquareButtonWithIcon_C' has a wrong offset!");
static_assert(offsetof(UWB_SquareButtonWithIcon_C, Icon) == 0x000760, "Member 'UWB_SquareButtonWithIcon_C::Icon' has a wrong offset!");
static_assert(offsetof(UWB_SquareButtonWithIcon_C, MyButton) == 0x000768, "Member 'UWB_SquareButtonWithIcon_C::MyButton' has a wrong offset!");
static_assert(offsetof(UWB_SquareButtonWithIcon_C, ButtonStyleInactive) == 0x000770, "Member 'UWB_SquareButtonWithIcon_C::ButtonStyleInactive' has a wrong offset!");
static_assert(offsetof(UWB_SquareButtonWithIcon_C, ButtonStyleActive) == 0x000B60, "Member 'UWB_SquareButtonWithIcon_C::ButtonStyleActive' has a wrong offset!");
static_assert(offsetof(UWB_SquareButtonWithIcon_C, bActive) == 0x000F50, "Member 'UWB_SquareButtonWithIcon_C::bActive' has a wrong offset!");
static_assert(offsetof(UWB_SquareButtonWithIcon_C, ButtonIcon) == 0x000F58, "Member 'UWB_SquareButtonWithIcon_C::ButtonIcon' has a wrong offset!");

}
