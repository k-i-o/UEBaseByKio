#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AlertComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AlertComponent.AlertComponent_C
// 0x0028 (0x00D8 - 0x00B0)
class UAlertComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_             OnAlarmtriggered;                                  // 0x00B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             NearbyNoise;                                       // 0x00C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnAlarmtriggered__DelegateSignature();
	void NearbyNoise__DelegateSignature(const struct FVector& Location);
	void ExecuteUbergraph_AlertComponent(int32 EntryPoint);
	void AlertNearestGuard(const struct FVector& AlertLocation);
	void ForceAlarm();
	void TriggerAlarm();
	void AlertNearbyGuards(float Max_distance, bool MustBeVisible_, const struct FVector& Location);
	void OnAlarm();
	void ReceiveBeginPlay();
	void AlertAllGuards(const class FString& Alert_reason);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AlertComponent_C">();
	}
	static class UAlertComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAlertComponent_C>();
	}
};
static_assert(alignof(UAlertComponent_C) == 0x000008, "Wrong alignment on UAlertComponent_C");
static_assert(sizeof(UAlertComponent_C) == 0x0000D8, "Wrong size on UAlertComponent_C");
static_assert(offsetof(UAlertComponent_C, UberGraphFrame) == 0x0000B0, "Member 'UAlertComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAlertComponent_C, OnAlarmtriggered) == 0x0000B8, "Member 'UAlertComponent_C::OnAlarmtriggered' has a wrong offset!");
static_assert(offsetof(UAlertComponent_C, NearbyNoise) == 0x0000C8, "Member 'UAlertComponent_C::NearbyNoise' has a wrong offset!");

}

