#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_VaseJug

#include "Basic.hpp"

#include "B_StaticMeshProp_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_VaseJug.B_VaseJug_C
// 0x0000 (0x0590 - 0x0590)
class AB_VaseJug_C final : public AB_StaticMeshProp_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_VaseJug_C">();
	}
	static class AB_VaseJug_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_VaseJug_C>();
	}
};
static_assert(alignof(AB_VaseJug_C) == 0x000010, "Wrong alignment on AB_VaseJug_C");
static_assert(sizeof(AB_VaseJug_C) == 0x000590, "Wrong size on AB_VaseJug_C");

}
