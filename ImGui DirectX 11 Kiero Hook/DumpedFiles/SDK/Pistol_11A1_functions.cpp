#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Pistol_11A1

#include "Basic.hpp"

#include "Pistol_11A1_classes.hpp"
#include "Pistol_11A1_parameters.hpp"


namespace SDK
{

// Function Pistol_11A1.Pistol_11A1_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APistol_11A1_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Pistol_11A1_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

