#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: I_FriendWindow

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass I_FriendWindow.I_FriendWindow_C
// 0x0000 (0x0028 - 0x0028)
class II_FriendWindow_C final : public IInterface
{
public:
	void AcceptButtonPressed();
	void Deinit();
	void GetCurrentlyFocusedWidget(class UWidget** FocusedWidget);
	void Init();
	void PresenceUpdated();
	void SpecialButtonPressed();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"I_FriendWindow_C">();
	}
	static class II_FriendWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<II_FriendWindow_C>();
	}
};
static_assert(alignof(II_FriendWindow_C) == 0x000008, "Wrong alignment on II_FriendWindow_C");
static_assert(sizeof(II_FriendWindow_C) == 0x000028, "Wrong size on II_FriendWindow_C");

}
