#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_VoodooShootActor

#include "Basic.hpp"

#include "B_VoodooShootActor_classes.hpp"
#include "B_VoodooShootActor_parameters.hpp"


namespace SDK
{

// Function B_VoodooShootActor.B_VoodooShootActor_C.Act
// (Public, BlueprintCallable, BlueprintEvent)

void AB_VoodooShootActor_C::Act()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_VoodooShootActor_C", "Act");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_VoodooShootActor.B_VoodooShootActor_C.Highlight
// (Public, BlueprintCallable, BlueprintEvent)

void AB_VoodooShootActor_C::Highlight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_VoodooShootActor_C", "Highlight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_VoodooShootActor.B_VoodooShootActor_C.React
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_VoodooShootActor_C::React()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_VoodooShootActor_C", "React");

	UObject::ProcessEvent(Func, nullptr);
}

}
