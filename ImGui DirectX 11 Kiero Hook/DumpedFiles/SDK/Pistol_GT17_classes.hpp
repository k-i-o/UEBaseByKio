#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Pistol_GT17

#include "Basic.hpp"

#include "GunBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Pistol_GT17.Pistol_GT17_C
// 0x0000 (0x0310 - 0x0310)
class APistol_GT17_C final : public AGunBase_C
{
public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Pistol_GT17_C">();
	}
	static class APistol_GT17_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APistol_GT17_C>();
	}
};
static_assert(alignof(APistol_GT17_C) == 0x000008, "Wrong alignment on APistol_GT17_C");
static_assert(sizeof(APistol_GT17_C) == 0x000310, "Wrong size on APistol_GT17_C");

}

