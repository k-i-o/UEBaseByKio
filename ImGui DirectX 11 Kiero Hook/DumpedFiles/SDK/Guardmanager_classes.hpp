#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Guardmanager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Guardmanager.Guardmanager_C
// 0x0030 (0x0250 - 0x0220)
class AGuardmanager_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             TriggerAlarm;                                      // 0x0230(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class AActor*>                         DeadNPCS;                                          // 0x0240(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void TriggerAlarm__DelegateSignature();
	void ExecuteUbergraph_Guardmanager(int32 EntryPoint);
	void SpawnAmmo(const struct FVector& Location, int32 Amount);
	void DestroyOldestPoliceBody();
	void PoliceAlerted();
	void RagdollPickedUp(bool Picked_up_);
	void CantOpenDoor();
	void DestroyOldestBody(class AActor* NPC);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Guardmanager_C">();
	}
	static class AGuardmanager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGuardmanager_C>();
	}
};
static_assert(alignof(AGuardmanager_C) == 0x000008, "Wrong alignment on AGuardmanager_C");
static_assert(sizeof(AGuardmanager_C) == 0x000250, "Wrong size on AGuardmanager_C");
static_assert(offsetof(AGuardmanager_C, UberGraphFrame) == 0x000220, "Member 'AGuardmanager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGuardmanager_C, DefaultSceneRoot) == 0x000228, "Member 'AGuardmanager_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AGuardmanager_C, TriggerAlarm) == 0x000230, "Member 'AGuardmanager_C::TriggerAlarm' has a wrong offset!");
static_assert(offsetof(AGuardmanager_C, DeadNPCS) == 0x000240, "Member 'AGuardmanager_C::DeadNPCS' has a wrong offset!");

}

