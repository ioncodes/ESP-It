#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_MenuCamera

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_MenuCamera.B_MenuCamera_C
// 0x00A0 (0x0330 - 0x0290)
class AB_MenuCamera_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                   PointLight;                                        // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        LightPos;                                          // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        LookAt;                                            // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                    SpringArm;                                         // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       Camera;                                            // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        LookAtDistance;                                    // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CameraRotationY;                                   // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               WantedRot;                                         // 0x02D8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                DesiredLightPos;                                   // 0x02F0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FieldOfView;                                       // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LightIntensity;                                    // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CameraRotationZ;                                   // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AutoactivateCamera;                                // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HideDirectionalLight;                              // 0x0321(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_322[0x6];                                      // 0x0322(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ULightComponent*                        DirectionalLight;                                  // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void ForwardInputToMenuPC();
	double Remap(double Value);
	void CalculateDesiredLightPos(const struct FVector& ImpactPoint, struct FVector* DesiredLightPos_0);
	void UpdateCameraRotation(double DeltaT);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveDestroyed();
	void ExecuteUbergraph_B_MenuCamera(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_MenuCamera_C">();
	}
	static class AB_MenuCamera_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_MenuCamera_C>();
	}
};
static_assert(alignof(AB_MenuCamera_C) == 0x000008, "Wrong alignment on AB_MenuCamera_C");
static_assert(sizeof(AB_MenuCamera_C) == 0x000330, "Wrong size on AB_MenuCamera_C");
static_assert(offsetof(AB_MenuCamera_C, UberGraphFrame) == 0x000290, "Member 'AB_MenuCamera_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_MenuCamera_C, PointLight) == 0x000298, "Member 'AB_MenuCamera_C::PointLight' has a wrong offset!");
static_assert(offsetof(AB_MenuCamera_C, LightPos) == 0x0002A0, "Member 'AB_MenuCamera_C::LightPos' has a wrong offset!");
static_assert(offsetof(AB_MenuCamera_C, LookAt) == 0x0002A8, "Member 'AB_MenuCamera_C::LookAt' has a wrong offset!");
static_assert(offsetof(AB_MenuCamera_C, Scene) == 0x0002B0, "Member 'AB_MenuCamera_C::Scene' has a wrong offset!");
static_assert(offsetof(AB_MenuCamera_C, SpringArm) == 0x0002B8, "Member 'AB_MenuCamera_C::SpringArm' has a wrong offset!");
static_assert(offsetof(AB_MenuCamera_C, Camera) == 0x0002C0, "Member 'AB_MenuCamera_C::Camera' has a wrong offset!");
static_assert(offsetof(AB_MenuCamera_C, LookAtDistance) == 0x0002C8, "Member 'AB_MenuCamera_C::LookAtDistance' has a wrong offset!");
static_assert(offsetof(AB_MenuCamera_C, CameraRotationY) == 0x0002D0, "Member 'AB_MenuCamera_C::CameraRotationY' has a wrong offset!");
static_assert(offsetof(AB_MenuCamera_C, WantedRot) == 0x0002D8, "Member 'AB_MenuCamera_C::WantedRot' has a wrong offset!");
static_assert(offsetof(AB_MenuCamera_C, DesiredLightPos) == 0x0002F0, "Member 'AB_MenuCamera_C::DesiredLightPos' has a wrong offset!");
static_assert(offsetof(AB_MenuCamera_C, FieldOfView) == 0x000308, "Member 'AB_MenuCamera_C::FieldOfView' has a wrong offset!");
static_assert(offsetof(AB_MenuCamera_C, LightIntensity) == 0x000310, "Member 'AB_MenuCamera_C::LightIntensity' has a wrong offset!");
static_assert(offsetof(AB_MenuCamera_C, CameraRotationZ) == 0x000318, "Member 'AB_MenuCamera_C::CameraRotationZ' has a wrong offset!");
static_assert(offsetof(AB_MenuCamera_C, AutoactivateCamera) == 0x000320, "Member 'AB_MenuCamera_C::AutoactivateCamera' has a wrong offset!");
static_assert(offsetof(AB_MenuCamera_C, HideDirectionalLight) == 0x000321, "Member 'AB_MenuCamera_C::HideDirectionalLight' has a wrong offset!");
static_assert(offsetof(AB_MenuCamera_C, DirectionalLight) == 0x000328, "Member 'AB_MenuCamera_C::DirectionalLight' has a wrong offset!");

}
