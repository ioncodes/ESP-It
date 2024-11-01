#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IPoolObject

#include "Basic.hpp"

#include "IPoolObject_classes.hpp"
#include "IPoolObject_parameters.hpp"


namespace SDK
{

// Function IPoolObject.IPoolObject_C.TearDownPoolObject
// (Public, BlueprintCallable, BlueprintEvent)

void IIPoolObject_C::TearDownPoolObject()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IPoolObject_C", "TearDownPoolObject");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IPoolObject.IPoolObject_C.TearUpPoolObject
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       SpawnTransform                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Owner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            Instigator                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IIPoolObject_C::TearUpPoolObject(const struct FTransform& SpawnTransform, class AActor* Owner, class APawn* Instigator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IPoolObject_C", "TearUpPoolObject");

	Params::IPoolObject_C_TearUpPoolObject Parms{};

	Parms.SpawnTransform = std::move(SpawnTransform);
	Parms.Owner = Owner;
	Parms.Instigator = Instigator;

	UObject::ProcessEvent(Func, &Parms);
}

}

