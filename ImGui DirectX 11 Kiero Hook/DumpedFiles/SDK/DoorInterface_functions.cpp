#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DoorInterface

#include "Basic.hpp"

#include "DoorInterface_classes.hpp"
#include "DoorInterface_parameters.hpp"


namespace SDK
{

// Function DoorInterface.DoorInterface_C.IsDoorOpenInterfaceCall
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsOpen_                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IDoorInterface_C::IsDoorOpenInterfaceCall(bool* IsOpen_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorInterface_C", "IsDoorOpenInterfaceCall");

	Params::DoorInterface_C_IsDoorOpenInterfaceCall Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsOpen_ != nullptr)
		*IsOpen_ = Parms.IsOpen_;
}

}
