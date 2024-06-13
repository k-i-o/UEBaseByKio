#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WallBase_Windows_Aircon

#include "Basic.hpp"

#include "WallBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WallBase_Windows_Aircon.WallBase_Windows_Aircon_C
// 0x0018 (0x02F0 - 0x02D8)
class AWallBase_Windows_Aircon_C final : public AWallBase_C
{
public:
	class UStaticMeshComponent*                   SM_Prop_AirVent_03;                                // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Prop_AirVent_02;                                // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Prop_AirVent_01;                                // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WallBase_Windows_Aircon_C">();
	}
	static class AWallBase_Windows_Aircon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWallBase_Windows_Aircon_C>();
	}
};
static_assert(alignof(AWallBase_Windows_Aircon_C) == 0x000008, "Wrong alignment on AWallBase_Windows_Aircon_C");
static_assert(sizeof(AWallBase_Windows_Aircon_C) == 0x0002F0, "Wrong size on AWallBase_Windows_Aircon_C");
static_assert(offsetof(AWallBase_Windows_Aircon_C, SM_Prop_AirVent_03) == 0x0002D8, "Member 'AWallBase_Windows_Aircon_C::SM_Prop_AirVent_03' has a wrong offset!");
static_assert(offsetof(AWallBase_Windows_Aircon_C, SM_Prop_AirVent_02) == 0x0002E0, "Member 'AWallBase_Windows_Aircon_C::SM_Prop_AirVent_02' has a wrong offset!");
static_assert(offsetof(AWallBase_Windows_Aircon_C, SM_Prop_AirVent_01) == 0x0002E8, "Member 'AWallBase_Windows_Aircon_C::SM_Prop_AirVent_01' has a wrong offset!");

}

