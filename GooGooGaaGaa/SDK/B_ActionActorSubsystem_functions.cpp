#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_ActionActorSubsystem

#include "Basic.hpp"

#include "B_ActionActorSubsystem_classes.hpp"
#include "B_ActionActorSubsystem_parameters.hpp"


namespace SDK
{

// Function B_ActionActorSubsystem.B_ActionActorSubsystem_C.ArrayContainsParentClass
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UClass*>                   Array                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TSubclassOf<class UObject>              TestClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                                    Contains                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_ActionActorSubsystem_C::ArrayContainsParentClass(TArray<class UClass*>& Array, TSubclassOf<class UObject> TestClass, bool* Contains)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ActionActorSubsystem_C", "ArrayContainsParentClass");

	Params::B_ActionActorSubsystem_C_ArrayContainsParentClass Parms{};

	Parms.Array = std::move(Array);
	Parms.TestClass = TestClass;

	UObject::ProcessEvent(Func, &Parms);

	Array = std::move(Parms.Array);

	if (Contains != nullptr)
		*Contains = Parms.Contains;
}


// Function B_ActionActorSubsystem.B_ActionActorSubsystem_C.GetActionBool
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           Test_Actor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Activated                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_ActionActorSubsystem_C::GetActionBool(class AActor* Test_Actor, bool* Activated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ActionActorSubsystem_C", "GetActionBool");

	Params::B_ActionActorSubsystem_C_GetActionBool Parms{};

	Parms.Test_Actor = Test_Actor;

	UObject::ProcessEvent(Func, &Parms);

	if (Activated != nullptr)
		*Activated = Parms.Activated;
}


// Function B_ActionActorSubsystem.B_ActionActorSubsystem_C.IsActionActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_IsActionActor                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_ActionActorSubsystem_C::IsActionActor(class AActor* Actor, bool* Param_IsActionActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ActionActorSubsystem_C", "IsActionActor");

	Params::B_ActionActorSubsystem_C_IsActionActor Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsActionActor != nullptr)
		*Param_IsActionActor = Parms.Param_IsActionActor;
}


// Function B_ActionActorSubsystem.B_ActionActorSubsystem_C.IsActorReadyForActivation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           ActorToTest                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Togglable                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_ActionActorSubsystem_C::IsActorReadyForActivation(class AActor* ActorToTest, bool* Togglable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ActionActorSubsystem_C", "IsActorReadyForActivation");

	Params::B_ActionActorSubsystem_C_IsActorReadyForActivation Parms{};

	Parms.ActorToTest = ActorToTest;

	UObject::ProcessEvent(Func, &Parms);

	if (Togglable != nullptr)
		*Togglable = Parms.Togglable;
}


// Function B_ActionActorSubsystem.B_ActionActorSubsystem_C.IsActorSwitchable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           ActorToTest                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UB_ActionActorSubsystem_C::IsActorSwitchable(class AActor* ActorToTest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ActionActorSubsystem_C", "IsActorSwitchable");

	Params::B_ActionActorSubsystem_C_IsActorSwitchable Parms{};

	Parms.ActorToTest = ActorToTest;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function B_ActionActorSubsystem.B_ActionActorSubsystem_C.ToggleActionActorReplication
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           TargetActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Replicates                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Always_Relevant                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_ActionActorSubsystem_C::ToggleActionActorReplication(class AActor* TargetActor, bool Replicates, bool Always_Relevant)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ActionActorSubsystem_C", "ToggleActionActorReplication");

	Params::B_ActionActorSubsystem_C_ToggleActionActorReplication Parms{};

	Parms.TargetActor = TargetActor;
	Parms.Replicates = Replicates;
	Parms.Always_Relevant = Always_Relevant;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ActionActorSubsystem.B_ActionActorSubsystem_C.UpdateActionActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_ActionActorSubsystem_C::UpdateActionActor(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ActionActorSubsystem_C", "UpdateActionActor");

	Params::B_ActionActorSubsystem_C_UpdateActionActor Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ActionActorSubsystem.B_ActionActorSubsystem_C.UpdateActionActorBool
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Activated                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_ActionActorSubsystem_C::UpdateActionActorBool(class AActor* Actor, bool Activated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ActionActorSubsystem_C", "UpdateActionActorBool");

	Params::B_ActionActorSubsystem_C_UpdateActionActorBool Parms{};

	Parms.Actor = Actor;
	Parms.Activated = Activated;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ActionActorSubsystem.B_ActionActorSubsystem_C.GetActionType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                           TestActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// E_ActionPropType                        ActionType                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_ActionActorSubsystem_C::GetActionType(class AActor* TestActor, E_ActionPropType* ActionType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ActionActorSubsystem_C", "GetActionType");

	Params::B_ActionActorSubsystem_C_GetActionType Parms{};

	Parms.TestActor = TestActor;

	UObject::ProcessEvent(Func, &Parms);

	if (ActionType != nullptr)
		*ActionType = Parms.ActionType;
}

}
