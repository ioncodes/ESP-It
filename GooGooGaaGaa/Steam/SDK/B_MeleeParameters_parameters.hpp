#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_MeleeParameters

#include "Basic.hpp"


namespace SDK::Params
{

// Function B_MeleeParameters.B_MeleeParameters_C.GetFormattedTooltip
// 0x0010 (0x0010 - 0x0000)
struct B_MeleeParameters_C_GetFormattedTooltip final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(B_MeleeParameters_C_GetFormattedTooltip) == 0x000008, "Wrong alignment on B_MeleeParameters_C_GetFormattedTooltip");
static_assert(sizeof(B_MeleeParameters_C_GetFormattedTooltip) == 0x000010, "Wrong size on B_MeleeParameters_C_GetFormattedTooltip");
static_assert(offsetof(B_MeleeParameters_C_GetFormattedTooltip, ReturnValue) == 0x000000, "Member 'B_MeleeParameters_C_GetFormattedTooltip::ReturnValue' has a wrong offset!");

}

