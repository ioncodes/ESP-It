#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Snowglobe

#include "Basic.hpp"

#include "B_StaticMeshProp_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Snowglobe.B_Snowglobe_C
// 0x0000 (0x0590 - 0x0590)
class AB_Snowglobe_C final : public AB_StaticMeshProp_C
{
public:
	class UNiagaraComponent*                      NS_SnowGlobe;                                      // 0x0588(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void GetVisualInterpolators(TArray<class AB_VisualIntepolator_C*>* VisualInterpolators);
	void ResetVisualInterpolation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Snowglobe_C">();
	}
	static class AB_Snowglobe_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Snowglobe_C>();
	}
};
static_assert(alignof(AB_Snowglobe_C) == 0x000010, "Wrong alignment on AB_Snowglobe_C");
static_assert(sizeof(AB_Snowglobe_C) == 0x000590, "Wrong size on AB_Snowglobe_C");
static_assert(offsetof(AB_Snowglobe_C, NS_SnowGlobe) == 0x000588, "Member 'AB_Snowglobe_C::NS_SnowGlobe' has a wrong offset!");

}
