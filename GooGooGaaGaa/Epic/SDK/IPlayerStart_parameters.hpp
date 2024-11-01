#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IPlayerStart

#include "Basic.hpp"


namespace SDK::Params
{

// Function IPlayerStart.IPlayerStart_C.GetOccupied
// 0x0001 (0x0001 - 0x0000)
struct IPlayerStart_C_GetOccupied final
{
public:
	bool                                          Occupied;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IPlayerStart_C_GetOccupied) == 0x000001, "Wrong alignment on IPlayerStart_C_GetOccupied");
static_assert(sizeof(IPlayerStart_C_GetOccupied) == 0x000001, "Wrong size on IPlayerStart_C_GetOccupied");
static_assert(offsetof(IPlayerStart_C_GetOccupied, Occupied) == 0x000000, "Member 'IPlayerStart_C_GetOccupied::Occupied' has a wrong offset!");

// Function IPlayerStart.IPlayerStart_C.SetOccupied
// 0x0001 (0x0001 - 0x0000)
struct IPlayerStart_C_SetOccupied final
{
public:
	bool                                          Occupied;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IPlayerStart_C_SetOccupied) == 0x000001, "Wrong alignment on IPlayerStart_C_SetOccupied");
static_assert(sizeof(IPlayerStart_C_SetOccupied) == 0x000001, "Wrong size on IPlayerStart_C_SetOccupied");
static_assert(offsetof(IPlayerStart_C_SetOccupied, Occupied) == 0x000000, "Member 'IPlayerStart_C_SetOccupied::Occupied' has a wrong offset!");

}

