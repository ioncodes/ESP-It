#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_TaskTargetActor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_TaskTargetActor.B_TaskTargetActor_C
// 0x0060 (0x02F0 - 0x0290)
class AB_TaskTargetActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Sphere;                                            // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          ChangableMesh;                                     // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ChangableRotation;                                 // 0x02B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B2[0x2];                                      // 0x02B2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRandomStream                          RandomStream;                                      // 0x02B4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_2BC[0x4];                                      // 0x02BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UStaticMesh*>                    MeshOptions;                                       // 0x02C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 RotationOptions;                                   // 0x02D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UStaticMeshComponent*                   HighlightTargetMesh;                               // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          StaysInWorld;                                      // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Act();
	void PickMesh(class UStaticMesh** Static_Mesh);
	void React();
	void ReceiveBeginPlay();
	void RemoveHighlight();
	void Highlight();
	void UpdateRotation();
	void UpdateMesh();
	void Interact();
	void ExecuteUbergraph_B_TaskTargetActor(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_TaskTargetActor_C">();
	}
	static class AB_TaskTargetActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_TaskTargetActor_C>();
	}
};
static_assert(alignof(AB_TaskTargetActor_C) == 0x000008, "Wrong alignment on AB_TaskTargetActor_C");
static_assert(sizeof(AB_TaskTargetActor_C) == 0x0002F0, "Wrong size on AB_TaskTargetActor_C");
static_assert(offsetof(AB_TaskTargetActor_C, UberGraphFrame) == 0x000290, "Member 'AB_TaskTargetActor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_TaskTargetActor_C, Sphere) == 0x000298, "Member 'AB_TaskTargetActor_C::Sphere' has a wrong offset!");
static_assert(offsetof(AB_TaskTargetActor_C, StaticMesh) == 0x0002A0, "Member 'AB_TaskTargetActor_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(AB_TaskTargetActor_C, DefaultSceneRoot) == 0x0002A8, "Member 'AB_TaskTargetActor_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AB_TaskTargetActor_C, ChangableMesh) == 0x0002B0, "Member 'AB_TaskTargetActor_C::ChangableMesh' has a wrong offset!");
static_assert(offsetof(AB_TaskTargetActor_C, ChangableRotation) == 0x0002B1, "Member 'AB_TaskTargetActor_C::ChangableRotation' has a wrong offset!");
static_assert(offsetof(AB_TaskTargetActor_C, RandomStream) == 0x0002B4, "Member 'AB_TaskTargetActor_C::RandomStream' has a wrong offset!");
static_assert(offsetof(AB_TaskTargetActor_C, MeshOptions) == 0x0002C0, "Member 'AB_TaskTargetActor_C::MeshOptions' has a wrong offset!");
static_assert(offsetof(AB_TaskTargetActor_C, RotationOptions) == 0x0002D0, "Member 'AB_TaskTargetActor_C::RotationOptions' has a wrong offset!");
static_assert(offsetof(AB_TaskTargetActor_C, HighlightTargetMesh) == 0x0002E0, "Member 'AB_TaskTargetActor_C::HighlightTargetMesh' has a wrong offset!");
static_assert(offsetof(AB_TaskTargetActor_C, StaysInWorld) == 0x0002E8, "Member 'AB_TaskTargetActor_C::StaysInWorld' has a wrong offset!");

}
