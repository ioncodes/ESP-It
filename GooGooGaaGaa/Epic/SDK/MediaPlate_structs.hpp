#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MediaPlate

#include "Basic.hpp"


namespace SDK
{

// Enum MediaPlate.EMediaPlateEventState
// NumValues: 0x0008
enum class EMediaPlateEventState : uint8
{
	Play                                     = 0,
	Open                                     = 1,
	Close                                    = 2,
	Pause                                    = 3,
	Reverse                                  = 4,
	Forward                                  = 5,
	Rewind                                   = 6,
	MAX                                      = 7,
};

// ScriptStruct MediaPlate.MediaTextureResourceSettings
// 0x0002 (0x0002 - 0x0000)
struct FMediaTextureResourceSettings final
{
public:
	bool                                          bEnableGenMips;                                    // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         CurrentNumMips;                                    // 0x0001(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMediaTextureResourceSettings) == 0x000001, "Wrong alignment on FMediaTextureResourceSettings");
static_assert(sizeof(FMediaTextureResourceSettings) == 0x000002, "Wrong size on FMediaTextureResourceSettings");
static_assert(offsetof(FMediaTextureResourceSettings, bEnableGenMips) == 0x000000, "Member 'FMediaTextureResourceSettings::bEnableGenMips' has a wrong offset!");
static_assert(offsetof(FMediaTextureResourceSettings, CurrentNumMips) == 0x000001, "Member 'FMediaTextureResourceSettings::CurrentNumMips' has a wrong offset!");

}
