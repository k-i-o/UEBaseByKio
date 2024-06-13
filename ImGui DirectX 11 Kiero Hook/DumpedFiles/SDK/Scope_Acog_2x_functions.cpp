#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Scope_Acog_2x

#include "Basic.hpp"

#include "Scope_Acog_2x_classes.hpp"
#include "Scope_Acog_2x_parameters.hpp"


namespace SDK
{

// Function Scope_Acog_2x.Scope_Acog_2x_C.ExecuteUbergraph_Scope_Acog_2x
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AScope_Acog_2x_C::ExecuteUbergraph_Scope_Acog_2x(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Scope_Acog_2x_C", "ExecuteUbergraph_Scope_Acog_2x");

	Params::Scope_Acog_2x_C_ExecuteUbergraph_Scope_Acog_2x Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Scope_Acog_2x.Scope_Acog_2x_C.ScopeOut
// (BlueprintCallable, BlueprintEvent)

void AScope_Acog_2x_C::ScopeOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Scope_Acog_2x_C", "ScopeOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Scope_Acog_2x.Scope_Acog_2x_C.ScopeIn
// (BlueprintCallable, BlueprintEvent)

void AScope_Acog_2x_C::ScopeIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Scope_Acog_2x_C", "ScopeIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Scope_Acog_2x.Scope_Acog_2x_C.SetupScope
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void AScope_Acog_2x_C::SetupScope()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Scope_Acog_2x_C", "SetupScope");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Scope_Acog_2x.Scope_Acog_2x_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AScope_Acog_2x_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Scope_Acog_2x_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
