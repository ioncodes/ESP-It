#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_PropPreview

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_PropPreview.B_PropPreview_C
// 0x0020 (0x02B0 - 0x0290)
class AB_PropPreview_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                   B_SkinPreviewRoom;                                 // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AB_StaticMeshProp_C*                    PreviewProp;                                       // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ChangeProp(class UClass* PropClass);
	void ExecuteUbergraph_B_PropPreview(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_PropPreview_C">();
	}
	static class AB_PropPreview_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_PropPreview_C>();
	}
};
static_assert(alignof(AB_PropPreview_C) == 0x000008, "Wrong alignment on AB_PropPreview_C");
static_assert(sizeof(AB_PropPreview_C) == 0x0002B0, "Wrong size on AB_PropPreview_C");
static_assert(offsetof(AB_PropPreview_C, UberGraphFrame) == 0x000290, "Member 'AB_PropPreview_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_PropPreview_C, B_SkinPreviewRoom) == 0x000298, "Member 'AB_PropPreview_C::B_SkinPreviewRoom' has a wrong offset!");
static_assert(offsetof(AB_PropPreview_C, Scene) == 0x0002A0, "Member 'AB_PropPreview_C::Scene' has a wrong offset!");
static_assert(offsetof(AB_PropPreview_C, PreviewProp) == 0x0002A8, "Member 'AB_PropPreview_C::PreviewProp' has a wrong offset!");

}

