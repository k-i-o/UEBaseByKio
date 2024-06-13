#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DisplayBreakableGlass

#include "Basic.hpp"

#include "DisplayBreakableGlass_classes.hpp"
#include "DisplayBreakableGlass_parameters.hpp"


namespace SDK
{

// Function DisplayBreakableGlass.DisplayBreakableGlass_C.GlassDestroyed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ADisplayBreakableGlass_C::GlassDestroyed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DisplayBreakableGlass_C", "GlassDestroyed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DisplayBreakableGlass.DisplayBreakableGlass_C.ExecuteUbergraph_DisplayBreakableGlass
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADisplayBreakableGlass_C::ExecuteUbergraph_DisplayBreakableGlass(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DisplayBreakableGlass_C", "ExecuteUbergraph_DisplayBreakableGlass");

	Params::DisplayBreakableGlass_C_ExecuteUbergraph_DisplayBreakableGlass Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DisplayBreakableGlass.DisplayBreakableGlass_C.BreakGlass
// (Public, BlueprintCallable, BlueprintEvent)

void ADisplayBreakableGlass_C::BreakGlass()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DisplayBreakableGlass_C", "BreakGlass");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DisplayBreakableGlass.DisplayBreakableGlass_C.ForceDestroyGlass
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ADisplayBreakableGlass_C::ForceDestroyGlass()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DisplayBreakableGlass_C", "ForceDestroyGlass");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DisplayBreakableGlass.DisplayBreakableGlass_C.DamageGlass
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ADisplayBreakableGlass_C::DamageGlass()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DisplayBreakableGlass_C", "DamageGlass");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DisplayBreakableGlass.DisplayBreakableGlass_C.BndEvt__BreakableGlass_DamageComponent_K2Node_ComponentBoundEvent_0_Damage__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Bone                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          StartLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Param_Instigator                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADisplayBreakableGlass_C::BndEvt__BreakableGlass_DamageComponent_K2Node_ComponentBoundEvent_0_Damage__DelegateSignature(int32 Amount, class FName Bone, const struct FVector& HitLocation, const struct FVector& StartLocation, class AActor* Param_Instigator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DisplayBreakableGlass_C", "BndEvt__BreakableGlass_DamageComponent_K2Node_ComponentBoundEvent_0_Damage__DelegateSignature");

	Params::DisplayBreakableGlass_C_BndEvt__BreakableGlass_DamageComponent_K2Node_ComponentBoundEvent_0_Damage__DelegateSignature Parms{};

	Parms.Amount = Amount;
	Parms.Bone = Bone;
	Parms.HitLocation = std::move(HitLocation);
	Parms.StartLocation = std::move(StartLocation);
	Parms.Param_Instigator = Param_Instigator;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DisplayBreakableGlass.DisplayBreakableGlass_C.SetShatteredMat
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ADisplayBreakableGlass_C::SetShatteredMat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DisplayBreakableGlass_C", "SetShatteredMat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DisplayBreakableGlass.DisplayBreakableGlass_C.DestroyGlassServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ADisplayBreakableGlass_C::DestroyGlassServer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DisplayBreakableGlass_C", "DestroyGlassServer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DisplayBreakableGlass.DisplayBreakableGlass_C.DestroyGlass
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ADisplayBreakableGlass_C::DestroyGlass()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DisplayBreakableGlass_C", "DestroyGlass");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DisplayBreakableGlass.DisplayBreakableGlass_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADisplayBreakableGlass_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DisplayBreakableGlass_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

