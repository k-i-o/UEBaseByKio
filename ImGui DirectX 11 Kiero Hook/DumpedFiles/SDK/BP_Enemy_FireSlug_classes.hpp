#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Enemy_FireSlug

#include "Basic.hpp"

#include "BP_Enemy_Slug_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Enemy_FireSlug.BP_Enemy_FireSlug_C
// 0x0000 (0x0960 - 0x0960)
class ABP_Enemy_FireSlug_C final : public ABP_Enemy_Slug_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Enemy_FireSlug_C">();
	}
	static class ABP_Enemy_FireSlug_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Enemy_FireSlug_C>();
	}
};
static_assert(alignof(ABP_Enemy_FireSlug_C) == 0x000010, "Wrong alignment on ABP_Enemy_FireSlug_C");
static_assert(sizeof(ABP_Enemy_FireSlug_C) == 0x000960, "Wrong size on ABP_Enemy_FireSlug_C");

}

