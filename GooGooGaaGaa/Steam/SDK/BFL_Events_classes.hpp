#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BFL_Events

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BFL_Events.BFL_Events_C
// 0x0000 (0x0028 - 0x0028)
class UBFL_Events_C final : public UBlueprintFunctionLibrary
{
public:
	static bool AreAllIngredientsFound(TArray<struct FSNeededIngredient>& NeededIngredients, TArray<int32>& IngredientCounters, class UObject* __WorldContext);
	static void FillIngredientsArray(TArray<struct FBlueprintOnlineItem>& AllItems, TArray<struct FSNeededIngredient>& NeededIngredients, TArray<struct FBlueprintOnlineItem>& IngredientsArrayRef, class UObject* __WorldContext);
	static void InitIngredientCounters(const TArray<int32>& IngredientCountersRef, const TArray<struct FSNeededIngredient>& NeededIngredients, class UObject* __WorldContext);
	static bool WasUsedAsIngredient(TArray<struct FBlueprintOnlineItem>& Ingredients, const struct FBlueprintOnlineItem& Item, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BFL_Events_C">();
	}
	static class UBFL_Events_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBFL_Events_C>();
	}
};
static_assert(alignof(UBFL_Events_C) == 0x000008, "Wrong alignment on UBFL_Events_C");
static_assert(sizeof(UBFL_Events_C) == 0x000028, "Wrong size on UBFL_Events_C");

}

