#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Mask_GladiatorHelmet

#include "Basic.hpp"

#include "Mask_GladiatorHelmet_classes.hpp"
#include "Mask_GladiatorHelmet_parameters.hpp"


namespace SDK
{

// Function Mask_GladiatorHelmet.Mask_GladiatorHelmet_C.ExecuteUbergraph_Mask_GladiatorHelmet
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMask_GladiatorHelmet_C::ExecuteUbergraph_Mask_GladiatorHelmet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Mask_GladiatorHelmet_C", "ExecuteUbergraph_Mask_GladiatorHelmet");

	Params::Mask_GladiatorHelmet_C_ExecuteUbergraph_Mask_GladiatorHelmet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Mask_GladiatorHelmet.Mask_GladiatorHelmet_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMask_GladiatorHelmet_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Mask_GladiatorHelmet_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
