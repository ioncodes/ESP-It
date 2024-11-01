#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_VerificationManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PropWitchHuntModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_VerificationManager.B_VerificationManager_C
// 0x0010 (0x0040 - 0x0030)
class UB_VerificationManager_C final : public UBaseManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          IsVerified;                                        // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_VerificationManager(int32 EntryPoint);
	void FullVerify();
	void VerifySteamConnection();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_VerificationManager_C">();
	}
	static class UB_VerificationManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_VerificationManager_C>();
	}
};
static_assert(alignof(UB_VerificationManager_C) == 0x000008, "Wrong alignment on UB_VerificationManager_C");
static_assert(sizeof(UB_VerificationManager_C) == 0x000040, "Wrong size on UB_VerificationManager_C");
static_assert(offsetof(UB_VerificationManager_C, UberGraphFrame) == 0x000030, "Member 'UB_VerificationManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UB_VerificationManager_C, IsVerified) == 0x000038, "Member 'UB_VerificationManager_C::IsVerified' has a wrong offset!");

}

