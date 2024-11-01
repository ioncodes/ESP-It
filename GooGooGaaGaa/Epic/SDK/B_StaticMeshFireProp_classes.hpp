#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_StaticMeshFireProp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_StaticMeshLightProp_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_StaticMeshFireProp.B_StaticMeshFireProp_C
// 0x0070 (0x0670 - 0x0600)
class AB_StaticMeshFireProp_C : public AB_StaticMeshLightProp_C
{
public:
	uint8                                         Pad_5F1[0x7];                                      // 0x05F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_B_StaticMeshFireProp_C;             // 0x05F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Fire;                                              // 0x0600(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         FireFlickerTimeline_Light_37BE88AA4DE7EB644660EC81F16F9A77; // 0x0608(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            FireFlickerTimeline__Direction_37BE88AA4DE7EB644660EC81F16F9A77; // 0x060C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60D[0x3];                                      // 0x060D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     FireFlickerTimeline;                               // 0x0610(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               FireMaterial;                                      // 0x0618(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMeshComponent*>           Fires;                                             // 0x0620(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class AB_VisualIntepolator_C*>         InterpolatedFires;                                 // 0x0630(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<double>                                LightAttenuationRadiuses;                          // 0x0640(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<double>                                LightIntensities;                                  // 0x0650(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class APlayerController*                      CachedLocalPlayer;                                 // 0x0660(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        MaxDistanceForFlickering;                          // 0x0668(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ResetVisualInterpolation();
	void Action(bool* ForcedBoolean);
	void UpdateActionProp();
	void InitializeActionProp();
	void StoreLightValues();
	void ApplyDynamicFireMaterial();
	void FireFlicker(double LightValue);
	void FireInterpolation();
	void CreateDynamicFireMaterial();
	void UpdateFireVisuals();
	void GetVisualInterpolators(TArray<class AB_VisualIntepolator_C*>* VisualInterpolators);
	void FireFlickerTimeline__FinishedFunc();
	void FireFlickerTimeline__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void EnterWaterWithFlame();
	void LeaveWaterWithFlame();
	void ExecuteUbergraph_B_StaticMeshFireProp(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_StaticMeshFireProp_C">();
	}
	static class AB_StaticMeshFireProp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_StaticMeshFireProp_C>();
	}
};
static_assert(alignof(AB_StaticMeshFireProp_C) == 0x000010, "Wrong alignment on AB_StaticMeshFireProp_C");
static_assert(sizeof(AB_StaticMeshFireProp_C) == 0x000670, "Wrong size on AB_StaticMeshFireProp_C");
static_assert(offsetof(AB_StaticMeshFireProp_C, UberGraphFrame_B_StaticMeshFireProp_C) == 0x0005F8, "Member 'AB_StaticMeshFireProp_C::UberGraphFrame_B_StaticMeshFireProp_C' has a wrong offset!");
static_assert(offsetof(AB_StaticMeshFireProp_C, Fire) == 0x000600, "Member 'AB_StaticMeshFireProp_C::Fire' has a wrong offset!");
static_assert(offsetof(AB_StaticMeshFireProp_C, FireFlickerTimeline_Light_37BE88AA4DE7EB644660EC81F16F9A77) == 0x000608, "Member 'AB_StaticMeshFireProp_C::FireFlickerTimeline_Light_37BE88AA4DE7EB644660EC81F16F9A77' has a wrong offset!");
static_assert(offsetof(AB_StaticMeshFireProp_C, FireFlickerTimeline__Direction_37BE88AA4DE7EB644660EC81F16F9A77) == 0x00060C, "Member 'AB_StaticMeshFireProp_C::FireFlickerTimeline__Direction_37BE88AA4DE7EB644660EC81F16F9A77' has a wrong offset!");
static_assert(offsetof(AB_StaticMeshFireProp_C, FireFlickerTimeline) == 0x000610, "Member 'AB_StaticMeshFireProp_C::FireFlickerTimeline' has a wrong offset!");
static_assert(offsetof(AB_StaticMeshFireProp_C, FireMaterial) == 0x000618, "Member 'AB_StaticMeshFireProp_C::FireMaterial' has a wrong offset!");
static_assert(offsetof(AB_StaticMeshFireProp_C, Fires) == 0x000620, "Member 'AB_StaticMeshFireProp_C::Fires' has a wrong offset!");
static_assert(offsetof(AB_StaticMeshFireProp_C, InterpolatedFires) == 0x000630, "Member 'AB_StaticMeshFireProp_C::InterpolatedFires' has a wrong offset!");
static_assert(offsetof(AB_StaticMeshFireProp_C, LightAttenuationRadiuses) == 0x000640, "Member 'AB_StaticMeshFireProp_C::LightAttenuationRadiuses' has a wrong offset!");
static_assert(offsetof(AB_StaticMeshFireProp_C, LightIntensities) == 0x000650, "Member 'AB_StaticMeshFireProp_C::LightIntensities' has a wrong offset!");
static_assert(offsetof(AB_StaticMeshFireProp_C, CachedLocalPlayer) == 0x000660, "Member 'AB_StaticMeshFireProp_C::CachedLocalPlayer' has a wrong offset!");
static_assert(offsetof(AB_StaticMeshFireProp_C, MaxDistanceForFlickering) == 0x000668, "Member 'AB_StaticMeshFireProp_C::MaxDistanceForFlickering' has a wrong offset!");

}

