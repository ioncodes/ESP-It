#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_TextWithIcons

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_TextWithIcons.WB_TextWithIcons_C
// 0x0078 (0x0358 - 0x02E0)
class UWB_TextWithIcons_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWrapBox*                               Wrap;                                              // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Format;                                            // 0x02F0(0x0010)(Edit, BlueprintVisible)
	class UB_LocalizationManager_C*               LocalizationManager;                               // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, class UWB_ControllerIcon_C*> ControllerIconsByActionName;                       // 0x0308(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void AddControllerIconWidget(const struct FKey& BoundKey, class FName ActionName);
	class UWB_Text_C* AddTextWidget(const class FString& TextString);
	void Construct();
	void CreateWidgets();
	void ExecuteUbergraph_WB_TextWithIcons(int32 EntryPoint);
	class UB_LocalizationManager_C* GetLocalizationManager();
	class FString GetStringInRange(TArray<class FString>& Array, int32 FirstIndex, int32 LastIndex);
	void OnGamePadModeChanged(bool bGamePadMode);
	void PreConstruct(bool IsDesignTime);
	void SetFormat(const class FText& Format_0);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateIcons();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_TextWithIcons_C">();
	}
	static class UWB_TextWithIcons_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_TextWithIcons_C>();
	}
};
static_assert(alignof(UWB_TextWithIcons_C) == 0x000008, "Wrong alignment on UWB_TextWithIcons_C");
static_assert(sizeof(UWB_TextWithIcons_C) == 0x000358, "Wrong size on UWB_TextWithIcons_C");
static_assert(offsetof(UWB_TextWithIcons_C, UberGraphFrame) == 0x0002E0, "Member 'UWB_TextWithIcons_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_TextWithIcons_C, Wrap) == 0x0002E8, "Member 'UWB_TextWithIcons_C::Wrap' has a wrong offset!");
static_assert(offsetof(UWB_TextWithIcons_C, Format) == 0x0002F0, "Member 'UWB_TextWithIcons_C::Format' has a wrong offset!");
static_assert(offsetof(UWB_TextWithIcons_C, LocalizationManager) == 0x000300, "Member 'UWB_TextWithIcons_C::LocalizationManager' has a wrong offset!");
static_assert(offsetof(UWB_TextWithIcons_C, ControllerIconsByActionName) == 0x000308, "Member 'UWB_TextWithIcons_C::ControllerIconsByActionName' has a wrong offset!");

}
