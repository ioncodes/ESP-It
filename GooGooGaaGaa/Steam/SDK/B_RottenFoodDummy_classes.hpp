#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_RottenFoodDummy

#include "Basic.hpp"

#include "B_Dummy_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_RottenFoodDummy.B_RottenFoodDummy_C
// 0x0030 (0x0328 - 0x02F8)
class AB_RottenFoodDummy_C final : public AB_Dummy_C
{
public:
	class UStaticMeshComponent*                   StaticMesh6;                                       // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh5;                                       // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh4;                                       // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh3;                                       // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh2;                                       // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh1;                                       // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateMesh();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_RottenFoodDummy_C">();
	}
	static class AB_RottenFoodDummy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_RottenFoodDummy_C>();
	}
};
static_assert(alignof(AB_RottenFoodDummy_C) == 0x000008, "Wrong alignment on AB_RottenFoodDummy_C");
static_assert(sizeof(AB_RottenFoodDummy_C) == 0x000328, "Wrong size on AB_RottenFoodDummy_C");
static_assert(offsetof(AB_RottenFoodDummy_C, StaticMesh6) == 0x0002F8, "Member 'AB_RottenFoodDummy_C::StaticMesh6' has a wrong offset!");
static_assert(offsetof(AB_RottenFoodDummy_C, StaticMesh5) == 0x000300, "Member 'AB_RottenFoodDummy_C::StaticMesh5' has a wrong offset!");
static_assert(offsetof(AB_RottenFoodDummy_C, StaticMesh4) == 0x000308, "Member 'AB_RottenFoodDummy_C::StaticMesh4' has a wrong offset!");
static_assert(offsetof(AB_RottenFoodDummy_C, StaticMesh3) == 0x000310, "Member 'AB_RottenFoodDummy_C::StaticMesh3' has a wrong offset!");
static_assert(offsetof(AB_RottenFoodDummy_C, StaticMesh2) == 0x000318, "Member 'AB_RottenFoodDummy_C::StaticMesh2' has a wrong offset!");
static_assert(offsetof(AB_RottenFoodDummy_C, StaticMesh1) == 0x000320, "Member 'AB_RottenFoodDummy_C::StaticMesh1' has a wrong offset!");

}
