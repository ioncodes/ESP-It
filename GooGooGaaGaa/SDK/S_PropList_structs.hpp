#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_PropList

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct S_PropList.S_PropList
// 0x0010 (0x0010 - 0x0000)
struct FS_PropList final
{
public:
	TArray<class AB_StaticMeshProp_C*>            MeshList_3_9A021886472783B7C6D4C1A40C1D892E;       // 0x0000(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
};
static_assert(alignof(FS_PropList) == 0x000008, "Wrong alignment on FS_PropList");
static_assert(sizeof(FS_PropList) == 0x000010, "Wrong size on FS_PropList");
static_assert(offsetof(FS_PropList, MeshList_3_9A021886472783B7C6D4C1A40C1D892E) == 0x000000, "Member 'FS_PropList::MeshList_3_9A021886472783B7C6D4C1A40C1D892E' has a wrong offset!");

}
