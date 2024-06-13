#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: JewelryStand

#include "Basic.hpp"

#include "JewelryStand_classes.hpp"
#include "JewelryStand_parameters.hpp"


namespace SDK
{

// Function JewelryStand.JewelryStand_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AJewelryStand_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JewelryStand_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JewelryStand.JewelryStand_C.BndEvt__JewelryStand_InteractComponent_K2Node_ComponentBoundEvent_0_Interact__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                           Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AJewelryStand_C::BndEvt__JewelryStand_InteractComponent_K2Node_ComponentBoundEvent_0_Interact__DelegateSignature(class AActor* Player, class UPrimitiveComponent* HitComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JewelryStand_C", "BndEvt__JewelryStand_InteractComponent_K2Node_ComponentBoundEvent_0_Interact__DelegateSignature");

	Params::JewelryStand_C_BndEvt__JewelryStand_InteractComponent_K2Node_ComponentBoundEvent_0_Interact__DelegateSignature Parms{};

	Parms.Player = Player;
	Parms.HitComponent = HitComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JewelryStand.JewelryStand_C.SpawnJewelry
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter_C*               Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AJewelryStand_C::SpawnJewelry(class APlayerCharacter_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JewelryStand_C", "SpawnJewelry");

	Params::JewelryStand_C_SpawnJewelry Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JewelryStand.JewelryStand_C.SetMesh
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AJewelryStand_C::SetMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JewelryStand_C", "SetMesh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JewelryStand.JewelryStand_C.ExecuteUbergraph_JewelryStand
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AJewelryStand_C::ExecuteUbergraph_JewelryStand(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JewelryStand_C", "ExecuteUbergraph_JewelryStand");

	Params::JewelryStand_C_ExecuteUbergraph_JewelryStand Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
