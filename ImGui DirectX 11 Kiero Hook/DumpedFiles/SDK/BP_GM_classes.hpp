#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GM

#include "Basic.hpp"

#include "CrabChampions_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GM.BP_GM_C
// 0x0008 (0x0378 - 0x0370)
class ABP_GM_C final : public ACrabGM
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GM_C">();
	}
	static class ABP_GM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GM_C>();
	}
};
static_assert(alignof(ABP_GM_C) == 0x000008, "Wrong alignment on ABP_GM_C");
static_assert(sizeof(ABP_GM_C) == 0x000378, "Wrong size on ABP_GM_C");
static_assert(offsetof(ABP_GM_C, DefaultSceneRoot) == 0x000370, "Member 'ABP_GM_C::DefaultSceneRoot' has a wrong offset!");

}

