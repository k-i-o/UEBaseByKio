#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WorldPositionInventoryEquipSlot

#include "Basic.hpp"

#include "WorldPositionInventoryEquipSlot_classes.hpp"
#include "WorldPositionInventoryEquipSlot_parameters.hpp"


namespace SDK
{

// Function WorldPositionInventoryEquipSlot.WorldPositionInventoryEquipSlot_C.ExecuteUbergraph_WorldPositionInventoryEquipSlot
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWorldPositionInventoryEquipSlot_C::ExecuteUbergraph_WorldPositionInventoryEquipSlot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WorldPositionInventoryEquipSlot_C", "ExecuteUbergraph_WorldPositionInventoryEquipSlot");

	Params::WorldPositionInventoryEquipSlot_C_ExecuteUbergraph_WorldPositionInventoryEquipSlot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WorldPositionInventoryEquipSlot.WorldPositionInventoryEquipSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWorldPositionInventoryEquipSlot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WorldPositionInventoryEquipSlot_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WorldPositionInventoryEquipSlot.WorldPositionInventoryEquipSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWorldPositionInventoryEquipSlot_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WorldPositionInventoryEquipSlot_C", "PreConstruct");

	Params::WorldPositionInventoryEquipSlot_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
