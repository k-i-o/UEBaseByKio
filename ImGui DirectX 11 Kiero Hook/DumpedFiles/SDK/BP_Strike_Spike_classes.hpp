#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Strike_Spike

#include "Basic.hpp"

#include "CrabChampions_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Strike_Spike.BP_Strike_Spike_C
// 0x0008 (0x0278 - 0x0270)
class ABP_Strike_Spike_C final : public ACrabStrike
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Strike_Spike_C">();
	}
	static class ABP_Strike_Spike_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Strike_Spike_C>();
	}
};
static_assert(alignof(ABP_Strike_Spike_C) == 0x000008, "Wrong alignment on ABP_Strike_Spike_C");
static_assert(sizeof(ABP_Strike_Spike_C) == 0x000278, "Wrong size on ABP_Strike_Spike_C");
static_assert(offsetof(ABP_Strike_Spike_C, DefaultSceneRoot) == 0x000270, "Member 'ABP_Strike_Spike_C::DefaultSceneRoot' has a wrong offset!");

}

