#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_PlacePropCheckerCube

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_PlacePropCheckerCube.B_PlacePropCheckerCube_C
// 0x0010 (0x02A0 - 0x0290)
class AB_PlacePropCheckerCube_C final : public AActor
{
public:
	class UBoxComponent*                          Box;                                               // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube;                                              // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void SetBounds(class AActor* OtherActor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_PlacePropCheckerCube_C">();
	}
	static class AB_PlacePropCheckerCube_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_PlacePropCheckerCube_C>();
	}
};
static_assert(alignof(AB_PlacePropCheckerCube_C) == 0x000008, "Wrong alignment on AB_PlacePropCheckerCube_C");
static_assert(sizeof(AB_PlacePropCheckerCube_C) == 0x0002A0, "Wrong size on AB_PlacePropCheckerCube_C");
static_assert(offsetof(AB_PlacePropCheckerCube_C, Box) == 0x000290, "Member 'AB_PlacePropCheckerCube_C::Box' has a wrong offset!");
static_assert(offsetof(AB_PlacePropCheckerCube_C, Cube) == 0x000298, "Member 'AB_PlacePropCheckerCube_C::Cube' has a wrong offset!");

}
