#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Totem_Greed

#include "Basic.hpp"

#include "CrabChampions_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Totem_Greed.BP_Totem_Greed_C
// 0x0000 (0x0328 - 0x0328)
class ABP_Totem_Greed_C final : public ACrabTotem
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Totem_Greed_C">();
	}
	static class ABP_Totem_Greed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Totem_Greed_C>();
	}
};
static_assert(alignof(ABP_Totem_Greed_C) == 0x000008, "Wrong alignment on ABP_Totem_Greed_C");
static_assert(sizeof(ABP_Totem_Greed_C) == 0x000328, "Wrong size on ABP_Totem_Greed_C");

}

