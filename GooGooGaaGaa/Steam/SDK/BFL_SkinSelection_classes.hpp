#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BFL_SkinSelection

#include "Basic.hpp"

#include "E_Slot_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BFL_SkinSelection.BFL_SkinSelection_C
// 0x0000 (0x0028 - 0x0028)
class UBFL_SkinSelection_C final : public UBlueprintFunctionLibrary
{
public:
	static void GetRandomSkin(E_Slot Slot, class UObject* __WorldContext, int32* ItemId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BFL_SkinSelection_C">();
	}
	static class UBFL_SkinSelection_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBFL_SkinSelection_C>();
	}
};
static_assert(alignof(UBFL_SkinSelection_C) == 0x000008, "Wrong alignment on UBFL_SkinSelection_C");
static_assert(sizeof(UBFL_SkinSelection_C) == 0x000028, "Wrong size on UBFL_SkinSelection_C");

}

