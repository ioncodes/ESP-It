#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Hotfix

#include "Basic.hpp"

#include "Hotfix_classes.hpp"


namespace SDK
{

// Function Hotfix.OnlineHotfixManager.StartHotfixProcess
// (Native, Public, BlueprintCallable)

void UOnlineHotfixManager::StartHotfixProcess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnlineHotfixManager", "StartHotfixProcess");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
