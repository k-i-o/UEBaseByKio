#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Vault_DoorRectangle

#include "Basic.hpp"

#include "VaultDoor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Vault_DoorRectangle.Vault_DoorRectangle_C
// 0x0020 (0x0288 - 0x0268)
class AVault_DoorRectangle_C final : public AVaultDoor_C
{
public:
	class UBoxComponent*                          NavCorrecter;                                      // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ChildActor1;                                       // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ChildActor;                                        // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Bld_Base_Wall_Door_01;                          // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Vault_DoorRectangle_C">();
	}
	static class AVault_DoorRectangle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVault_DoorRectangle_C>();
	}
};
static_assert(alignof(AVault_DoorRectangle_C) == 0x000008, "Wrong alignment on AVault_DoorRectangle_C");
static_assert(sizeof(AVault_DoorRectangle_C) == 0x000288, "Wrong size on AVault_DoorRectangle_C");
static_assert(offsetof(AVault_DoorRectangle_C, NavCorrecter) == 0x000268, "Member 'AVault_DoorRectangle_C::NavCorrecter' has a wrong offset!");
static_assert(offsetof(AVault_DoorRectangle_C, ChildActor1) == 0x000270, "Member 'AVault_DoorRectangle_C::ChildActor1' has a wrong offset!");
static_assert(offsetof(AVault_DoorRectangle_C, ChildActor) == 0x000278, "Member 'AVault_DoorRectangle_C::ChildActor' has a wrong offset!");
static_assert(offsetof(AVault_DoorRectangle_C, SM_Bld_Base_Wall_Door_01) == 0x000280, "Member 'AVault_DoorRectangle_C::SM_Bld_Base_Wall_Door_01' has a wrong offset!");

}

