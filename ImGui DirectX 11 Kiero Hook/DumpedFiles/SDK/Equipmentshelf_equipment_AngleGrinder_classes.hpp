#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Equipmentshelf_equipment_AngleGrinder

#include "Basic.hpp"

#include "Equipmentshelf_equipment_base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Equipmentshelf_equipment_AngleGrinder.Equipmentshelf_equipment_AngleGrinder_C
// 0x0008 (0x0248 - 0x0240)
class AEquipmentshelf_equipment_AngleGrinder_C final : public AEquipmentshelf_equipment_base_C
{
public:
	class UChildActorComponent*                   ChildActor;                                        // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Equipmentshelf_equipment_AngleGrinder_C">();
	}
	static class AEquipmentshelf_equipment_AngleGrinder_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEquipmentshelf_equipment_AngleGrinder_C>();
	}
};
static_assert(alignof(AEquipmentshelf_equipment_AngleGrinder_C) == 0x000008, "Wrong alignment on AEquipmentshelf_equipment_AngleGrinder_C");
static_assert(sizeof(AEquipmentshelf_equipment_AngleGrinder_C) == 0x000248, "Wrong size on AEquipmentshelf_equipment_AngleGrinder_C");
static_assert(offsetof(AEquipmentshelf_equipment_AngleGrinder_C, ChildActor) == 0x000240, "Member 'AEquipmentshelf_equipment_AngleGrinder_C::ChildActor' has a wrong offset!");

}

