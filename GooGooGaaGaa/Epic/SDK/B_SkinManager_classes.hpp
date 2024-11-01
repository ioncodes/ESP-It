#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_SkinManager

#include "Basic.hpp"

#include "PropWitchHuntModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_SkinManager.B_SkinManager_C
// 0x0000 (0x0030 - 0x0030)
class UB_SkinManager_C final : public UBaseManager
{
public:
	class AB_SkinItem_C* InitAttachedPart(TSoftClassPtr<class UClass> SkinItem, class USkeletalMeshComponent* Parent, class FName SocketName, class AActor* Owner, TArray<class AActor*>& SkinMeshes);
	class AB_SkinBodypart_C* InitBodyPart(TSoftClassPtr<class UClass> SkinItem, class USkeletalMeshComponent* ParentMesh, class AActor* Owner, TArray<class AActor*>& SkinMeshes);
	void LoadSkinHunterData(class USkeletalMeshComponent* Parent, TArray<class AActor*>& SkinMeshes, const struct FHunterSkin& HunterSkin, class AActor* Owner);
	void LoadSkinWitchData(class USkeletalMeshComponent* Parent, TArray<class AActor*>& SkinMeshes, const struct FWitchSkin& WitchSkin, class AActor* Owner);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_SkinManager_C">();
	}
	static class UB_SkinManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_SkinManager_C>();
	}
};
static_assert(alignof(UB_SkinManager_C) == 0x000008, "Wrong alignment on UB_SkinManager_C");
static_assert(sizeof(UB_SkinManager_C) == 0x000030, "Wrong size on UB_SkinManager_C");

}

