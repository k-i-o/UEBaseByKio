#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GuardScanPoint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GuardScanPoint.GuardScanPoint_C
// 0x0038 (0x0258 - 0x0220)
class AGuardScanPoint_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box;                                               // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAlertComponent_C*                      AlertComponent;                                    // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpottedHighlightcomponent_C*           SpottedHighlightcomponent;                         // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Activated_;                                        // 0x0250(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GuardScanPoint(int32 EntryPoint);
	void BndEvt__GuardScanPoint_AlertComponent_K2Node_ComponentBoundEvent_0_OnAlarmtriggered__DelegateSignature();
	void OverlapMulti();
	void OverlapPhone(class AGuardPhone_C* PhoneActor);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuardScanPoint_C">();
	}
	static class AGuardScanPoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGuardScanPoint_C>();
	}
};
static_assert(alignof(AGuardScanPoint_C) == 0x000008, "Wrong alignment on AGuardScanPoint_C");
static_assert(sizeof(AGuardScanPoint_C) == 0x000258, "Wrong size on AGuardScanPoint_C");
static_assert(offsetof(AGuardScanPoint_C, UberGraphFrame) == 0x000220, "Member 'AGuardScanPoint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGuardScanPoint_C, Box) == 0x000228, "Member 'AGuardScanPoint_C::Box' has a wrong offset!");
static_assert(offsetof(AGuardScanPoint_C, AlertComponent) == 0x000230, "Member 'AGuardScanPoint_C::AlertComponent' has a wrong offset!");
static_assert(offsetof(AGuardScanPoint_C, SpottedHighlightcomponent) == 0x000238, "Member 'AGuardScanPoint_C::SpottedHighlightcomponent' has a wrong offset!");
static_assert(offsetof(AGuardScanPoint_C, StaticMesh) == 0x000240, "Member 'AGuardScanPoint_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(AGuardScanPoint_C, DefaultSceneRoot) == 0x000248, "Member 'AGuardScanPoint_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AGuardScanPoint_C, Activated_) == 0x000250, "Member 'AGuardScanPoint_C::Activated_' has a wrong offset!");

}

