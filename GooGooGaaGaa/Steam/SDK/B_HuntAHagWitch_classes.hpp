#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_HuntAHagWitch

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_Witch_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_HuntAHagWitch.B_HuntAHagWitch_C
// 0x0010 (0x0980 - 0x0970)
class AB_HuntAHagWitch_C final : public AB_Witch_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_HuntAHagWitch_C;                  // 0x0970(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ClientPossessed();
	void ExecuteUbergraph_B_HuntAHagWitch(int32 EntryPoint);
	void Fire();
	void LoadSkills(class AController* Controller_0);
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_HuntAHagWitch_C">();
	}
	static class AB_HuntAHagWitch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_HuntAHagWitch_C>();
	}
};
static_assert(alignof(AB_HuntAHagWitch_C) == 0x000010, "Wrong alignment on AB_HuntAHagWitch_C");
static_assert(sizeof(AB_HuntAHagWitch_C) == 0x000980, "Wrong size on AB_HuntAHagWitch_C");
static_assert(offsetof(AB_HuntAHagWitch_C, UberGraphFrame_B_HuntAHagWitch_C) == 0x000970, "Member 'AB_HuntAHagWitch_C::UberGraphFrame_B_HuntAHagWitch_C' has a wrong offset!");

}
