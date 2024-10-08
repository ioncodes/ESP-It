#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_SkinManager

#include "Basic.hpp"

#include "B_SkinManager_classes.hpp"
#include "B_SkinManager_parameters.hpp"


namespace SDK
{

// Function B_SkinManager.B_SkinManager_C.InitAttachedPart
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UClass>             SkinItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class USkeletalMeshComponent*           Parent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                             SocketName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Owner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>                   SkinMeshes                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AB_SkinItem_C*                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class AB_SkinItem_C* UB_SkinManager_C::InitAttachedPart(TSoftClassPtr<class UClass> SkinItem, class USkeletalMeshComponent* Parent, class FName SocketName, class AActor* Owner, TArray<class AActor*>& SkinMeshes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SkinManager_C", "InitAttachedPart");

	Params::B_SkinManager_C_InitAttachedPart Parms{};

	Parms.SkinItem = SkinItem;
	Parms.Parent = Parent;
	Parms.SocketName = SocketName;
	Parms.Owner = Owner;
	Parms.SkinMeshes = std::move(SkinMeshes);

	UObject::ProcessEvent(Func, &Parms);

	SkinMeshes = std::move(Parms.SkinMeshes);

	return Parms.ReturnValue;
}


// Function B_SkinManager.B_SkinManager_C.InitBodyPart
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UClass>             SkinItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class USkeletalMeshComponent*           ParentMesh                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Owner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>                   SkinMeshes                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AB_SkinBodypart_C*                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class AB_SkinBodypart_C* UB_SkinManager_C::InitBodyPart(TSoftClassPtr<class UClass> SkinItem, class USkeletalMeshComponent* ParentMesh, class AActor* Owner, TArray<class AActor*>& SkinMeshes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SkinManager_C", "InitBodyPart");

	Params::B_SkinManager_C_InitBodyPart Parms{};

	Parms.SkinItem = SkinItem;
	Parms.ParentMesh = ParentMesh;
	Parms.Owner = Owner;
	Parms.SkinMeshes = std::move(SkinMeshes);

	UObject::ProcessEvent(Func, &Parms);

	SkinMeshes = std::move(Parms.SkinMeshes);

	return Parms.ReturnValue;
}


// Function B_SkinManager.B_SkinManager_C.LoadSkinHunterData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           Parent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>                   SkinMeshes                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FHunterSkin                      HunterSkin                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class AActor*                           Owner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_SkinManager_C::LoadSkinHunterData(class USkeletalMeshComponent* Parent, TArray<class AActor*>& SkinMeshes, const struct FHunterSkin& HunterSkin, class AActor* Owner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SkinManager_C", "LoadSkinHunterData");

	Params::B_SkinManager_C_LoadSkinHunterData Parms{};

	Parms.Parent = Parent;
	Parms.SkinMeshes = std::move(SkinMeshes);
	Parms.HunterSkin = std::move(HunterSkin);
	Parms.Owner = Owner;

	UObject::ProcessEvent(Func, &Parms);

	SkinMeshes = std::move(Parms.SkinMeshes);
}


// Function B_SkinManager.B_SkinManager_C.LoadSkinWitchData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           Parent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>                   SkinMeshes                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FWitchSkin                       WitchSkin                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class AActor*                           Owner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_SkinManager_C::LoadSkinWitchData(class USkeletalMeshComponent* Parent, TArray<class AActor*>& SkinMeshes, const struct FWitchSkin& WitchSkin, class AActor* Owner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SkinManager_C", "LoadSkinWitchData");

	Params::B_SkinManager_C_LoadSkinWitchData Parms{};

	Parms.Parent = Parent;
	Parms.SkinMeshes = std::move(SkinMeshes);
	Parms.WitchSkin = std::move(WitchSkin);
	Parms.Owner = Owner;

	UObject::ProcessEvent(Func, &Parms);

	SkinMeshes = std::move(Parms.SkinMeshes);
}

}

