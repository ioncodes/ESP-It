#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IWaterSplash

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass IWaterSplash.IWaterSplash_C
// 0x0000 (0x0028 - 0x0028)
class IIWaterSplash_C final : public IInterface
{
public:
	void GetRippleEffect(class UNiagaraSystem** RippleEffectNiagara);
	void GetRippleScale(struct FVector* Scale);
	void GetSplashEffect(class UNiagaraSystem** SplashEffectNiagara);
	void GetSplashScale(struct FVector* Scale);
	void GetSplashSound(class USoundCue** Sound);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IWaterSplash_C">();
	}
	static class IIWaterSplash_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IIWaterSplash_C>();
	}
};
static_assert(alignof(IIWaterSplash_C) == 0x000008, "Wrong alignment on IIWaterSplash_C");
static_assert(sizeof(IIWaterSplash_C) == 0x000028, "Wrong size on IIWaterSplash_C");

}
