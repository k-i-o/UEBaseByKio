#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Portal_Shop

#include "Basic.hpp"

#include "CrabChampions_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Portal_Shop.BP_Portal_Shop_C
// 0x0000 (0x02F8 - 0x02F8)
class ABP_Portal_Shop_C final : public ACrabPortal
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Portal_Shop_C">();
	}
	static class ABP_Portal_Shop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Portal_Shop_C>();
	}
};
static_assert(alignof(ABP_Portal_Shop_C) == 0x000008, "Wrong alignment on ABP_Portal_Shop_C");
static_assert(sizeof(ABP_Portal_Shop_C) == 0x0002F8, "Wrong size on ABP_Portal_Shop_C");

}

