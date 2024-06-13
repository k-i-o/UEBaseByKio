#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Duffelbag

#include "Basic.hpp"

#include "PickupItem_base_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Duffelbag.Duffelbag_C
// 0x0040 (0x0298 - 0x0258)
class ADuffelbag_C final : public APickupItem_base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Duffelbag_C;                        // 0x0258(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHighlightInRangeComponent_C*           HighlightInRangeComponent;                         // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box1;                                              // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Duffelbag_Straps1;                                 // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Duffelbag_Straps;                                  // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         AttachedActors;                                    // 0x0288(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void ExecuteUbergraph_Duffelbag(int32 EntryPoint);
	void DetachMoney();
	void BndEvt__Duffelbag_PickupItemComponent_K2Node_ComponentBoundEvent_2_DropItem__DelegateSignature(class AActor* Player);
	void AttachMoney(class AActor* Player);
	void BndEvt__Duffelbag_PickupItemComponent_K2Node_ComponentBoundEvent_0_PickUpItem__DelegateSignature(class AActor* Player, const struct FVector& Pickuplocation, const struct FRotator& PickupRotation, const struct FVector& HitLocation);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Duffelbag_C">();
	}
	static class ADuffelbag_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADuffelbag_C>();
	}
};
static_assert(alignof(ADuffelbag_C) == 0x000008, "Wrong alignment on ADuffelbag_C");
static_assert(sizeof(ADuffelbag_C) == 0x000298, "Wrong size on ADuffelbag_C");
static_assert(offsetof(ADuffelbag_C, UberGraphFrame_Duffelbag_C) == 0x000258, "Member 'ADuffelbag_C::UberGraphFrame_Duffelbag_C' has a wrong offset!");
static_assert(offsetof(ADuffelbag_C, HighlightInRangeComponent) == 0x000260, "Member 'ADuffelbag_C::HighlightInRangeComponent' has a wrong offset!");
static_assert(offsetof(ADuffelbag_C, Box) == 0x000268, "Member 'ADuffelbag_C::Box' has a wrong offset!");
static_assert(offsetof(ADuffelbag_C, Box1) == 0x000270, "Member 'ADuffelbag_C::Box1' has a wrong offset!");
static_assert(offsetof(ADuffelbag_C, Duffelbag_Straps1) == 0x000278, "Member 'ADuffelbag_C::Duffelbag_Straps1' has a wrong offset!");
static_assert(offsetof(ADuffelbag_C, Duffelbag_Straps) == 0x000280, "Member 'ADuffelbag_C::Duffelbag_Straps' has a wrong offset!");
static_assert(offsetof(ADuffelbag_C, AttachedActors) == 0x000288, "Member 'ADuffelbag_C::AttachedActors' has a wrong offset!");

}

