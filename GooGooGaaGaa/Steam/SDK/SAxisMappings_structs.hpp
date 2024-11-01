#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SAxisMappings

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// UserDefinedStruct SAxisMappings.SAxisMappings
// 0x0018 (0x0018 - 0x0000)
struct FSAxisMappings final
{
public:
	float                                         Scale_15_A6A151BD4EBED5EAE5BE12ABE084374A;         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FInputAxisKeyMapping>           Mappings_11_3D71A57B4637E42390A6A19A665EA214;      // 0x0008(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FSAxisMappings) == 0x000008, "Wrong alignment on FSAxisMappings");
static_assert(sizeof(FSAxisMappings) == 0x000018, "Wrong size on FSAxisMappings");
static_assert(offsetof(FSAxisMappings, Scale_15_A6A151BD4EBED5EAE5BE12ABE084374A) == 0x000000, "Member 'FSAxisMappings::Scale_15_A6A151BD4EBED5EAE5BE12ABE084374A' has a wrong offset!");
static_assert(offsetof(FSAxisMappings, Mappings_11_3D71A57B4637E42390A6A19A665EA214) == 0x000008, "Member 'FSAxisMappings::Mappings_11_3D71A57B4637E42390A6A19A665EA214' has a wrong offset!");

}

