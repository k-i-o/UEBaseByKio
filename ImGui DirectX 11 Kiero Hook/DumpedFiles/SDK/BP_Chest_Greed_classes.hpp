#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Chest_Greed

#include "Basic.hpp"

#include "CrabChampions_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Chest_Greed.BP_Chest_Greed_C
// 0x0000 (0x0340 - 0x0340)
class ABP_Chest_Greed_C final : public ACrabChest
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Chest_Greed_C">();
	}
	static class ABP_Chest_Greed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Chest_Greed_C>();
	}
};
static_assert(alignof(ABP_Chest_Greed_C) == 0x000008, "Wrong alignment on ABP_Chest_Greed_C");
static_assert(sizeof(ABP_Chest_Greed_C) == 0x000340, "Wrong size on ABP_Chest_Greed_C");

}

