#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Pickup_Lobby

#include "Basic.hpp"

#include "CrabChampions_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Pickup_Lobby.BP_Pickup_Lobby_C
// 0x0000 (0x0310 - 0x0310)
class ABP_Pickup_Lobby_C final : public ACrabInteractPickup
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Pickup_Lobby_C">();
	}
	static class ABP_Pickup_Lobby_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Pickup_Lobby_C>();
	}
};
static_assert(alignof(ABP_Pickup_Lobby_C) == 0x000008, "Wrong alignment on ABP_Pickup_Lobby_C");
static_assert(sizeof(ABP_Pickup_Lobby_C) == 0x000310, "Wrong size on ABP_Pickup_Lobby_C");

}

