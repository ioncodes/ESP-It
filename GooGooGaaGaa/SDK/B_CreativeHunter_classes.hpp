#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_CreativeHunter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_Hunter_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_CreativeHunter.B_CreativeHunter_C
// 0x0000 (0x0A30 - 0x0A30)
class AB_CreativeHunter_C final : public AB_Hunter_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_CreativeHunter_C;                 // 0x0A28(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_B_CreativeHunter(int32 EntryPoint);
	void PossessedClient();
	void ReceivePossessed(class AController* NewController);
	void TickVisuals();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_CreativeHunter_C">();
	}
	static class AB_CreativeHunter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_CreativeHunter_C>();
	}
};
static_assert(alignof(AB_CreativeHunter_C) == 0x000010, "Wrong alignment on AB_CreativeHunter_C");
static_assert(sizeof(AB_CreativeHunter_C) == 0x000A30, "Wrong size on AB_CreativeHunter_C");
static_assert(offsetof(AB_CreativeHunter_C, UberGraphFrame_B_CreativeHunter_C) == 0x000A28, "Member 'AB_CreativeHunter_C::UberGraphFrame_B_CreativeHunter_C' has a wrong offset!");

}
