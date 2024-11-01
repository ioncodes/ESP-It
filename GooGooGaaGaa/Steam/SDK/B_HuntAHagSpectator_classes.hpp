#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_HuntAHagSpectator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_Spectator_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_HuntAHagSpectator.B_HuntAHagSpectator_C
// 0x0010 (0x04A0 - 0x0490)
class AB_HuntAHagSpectator_C final : public AB_Spectator_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_HuntAHagSpectator_C;              // 0x0490(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_B_HuntAHagSpectator(int32 EntryPoint);
	void ReceivePossessed(class AController* NewController);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_HuntAHagSpectator_C">();
	}
	static class AB_HuntAHagSpectator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_HuntAHagSpectator_C>();
	}
};
static_assert(alignof(AB_HuntAHagSpectator_C) == 0x000010, "Wrong alignment on AB_HuntAHagSpectator_C");
static_assert(sizeof(AB_HuntAHagSpectator_C) == 0x0004A0, "Wrong size on AB_HuntAHagSpectator_C");
static_assert(offsetof(AB_HuntAHagSpectator_C, UberGraphFrame_B_HuntAHagSpectator_C) == 0x000490, "Member 'AB_HuntAHagSpectator_C::UberGraphFrame_B_HuntAHagSpectator_C' has a wrong offset!");

}

