#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PoliceGun_Glock

#include "Basic.hpp"

#include "PoliceGunBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PoliceGun_Glock.PoliceGun_Glock_C
// 0x0000 (0x0278 - 0x0278)
class APoliceGun_Glock_C final : public APoliceGunBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PoliceGun_Glock_C">();
	}
	static class APoliceGun_Glock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APoliceGun_Glock_C>();
	}
};
static_assert(alignof(APoliceGun_Glock_C) == 0x000008, "Wrong alignment on APoliceGun_Glock_C");
static_assert(sizeof(APoliceGun_Glock_C) == 0x000278, "Wrong size on APoliceGun_Glock_C");

}
