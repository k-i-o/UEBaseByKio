#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPCInterface

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function NPCInterface.NPCInterface_C.RagdollPickedUp
// 0x0001 (0x0001 - 0x0000)
struct NPCInterface_C_RagdollPickedUp final
{
public:
	bool                                          Picked_up_;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NPCInterface_C_RagdollPickedUp) == 0x000001, "Wrong alignment on NPCInterface_C_RagdollPickedUp");
static_assert(sizeof(NPCInterface_C_RagdollPickedUp) == 0x000001, "Wrong size on NPCInterface_C_RagdollPickedUp");
static_assert(offsetof(NPCInterface_C_RagdollPickedUp, Picked_up_) == 0x000000, "Member 'NPCInterface_C_RagdollPickedUp::Picked_up_' has a wrong offset!");

// Function NPCInterface.NPCInterface_C.SpawnAmmo
// 0x0010 (0x0010 - 0x0000)
struct NPCInterface_C_SpawnAmmo final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Amount;                                            // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NPCInterface_C_SpawnAmmo) == 0x000004, "Wrong alignment on NPCInterface_C_SpawnAmmo");
static_assert(sizeof(NPCInterface_C_SpawnAmmo) == 0x000010, "Wrong size on NPCInterface_C_SpawnAmmo");
static_assert(offsetof(NPCInterface_C_SpawnAmmo, Location) == 0x000000, "Member 'NPCInterface_C_SpawnAmmo::Location' has a wrong offset!");
static_assert(offsetof(NPCInterface_C_SpawnAmmo, Amount) == 0x00000C, "Member 'NPCInterface_C_SpawnAmmo::Amount' has a wrong offset!");

}
