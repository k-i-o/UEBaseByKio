#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Mag

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Mag.Mag_C
// 0x0008 (0x0228 - 0x0220)
class AMag_C : public AActor
{
public:
	class UStaticMeshComponent*                   Mag;                                               // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Mag_C">();
	}
	static class AMag_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMag_C>();
	}
};
static_assert(alignof(AMag_C) == 0x000008, "Wrong alignment on AMag_C");
static_assert(sizeof(AMag_C) == 0x000228, "Wrong size on AMag_C");
static_assert(offsetof(AMag_C, Mag) == 0x000220, "Member 'AMag_C::Mag' has a wrong offset!");

}
