#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IPlayerStart

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass IPlayerStart.IPlayerStart_C
// 0x0000 (0x0028 - 0x0028)
class IIPlayerStart_C final : public IInterface
{
public:
	void GetOccupied(bool* Occupied);
	void SetOccupied(bool Occupied);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IPlayerStart_C">();
	}
	static class IIPlayerStart_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IIPlayerStart_C>();
	}
};
static_assert(alignof(IIPlayerStart_C) == 0x000008, "Wrong alignment on IIPlayerStart_C");
static_assert(sizeof(IIPlayerStart_C) == 0x000028, "Wrong size on IIPlayerStart_C");

}
