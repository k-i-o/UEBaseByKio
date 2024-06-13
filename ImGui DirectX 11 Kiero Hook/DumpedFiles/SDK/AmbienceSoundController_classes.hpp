#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AmbienceSoundController

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AmbienceSoundController.AmbienceSoundController_C
// 0x0030 (0x0250 - 0x0220)
class AAmbienceSoundController_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             OutsideAmbience;                                   // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UAudioComponent*                        AmbientSoundComponent;                             // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MusicPlaying_;                                     // 0x0240(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F04[0x7];                                     // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        Music;                                             // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AmbienceSoundController(int32 EntryPoint);
	void StartMusic();
	void AlarmTriggeredInterfaceCall();
	void StartSound(class APlayerCharacter_C* Player);
	void StopOutsideSound(class APlayerCharacter_C* Player);
	void ReceiveBeginPlay();
	void AlarmDisabledInterfaceCall();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AmbienceSoundController_C">();
	}
	static class AAmbienceSoundController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAmbienceSoundController_C>();
	}
};
static_assert(alignof(AAmbienceSoundController_C) == 0x000008, "Wrong alignment on AAmbienceSoundController_C");
static_assert(sizeof(AAmbienceSoundController_C) == 0x000250, "Wrong size on AAmbienceSoundController_C");
static_assert(offsetof(AAmbienceSoundController_C, UberGraphFrame) == 0x000220, "Member 'AAmbienceSoundController_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AAmbienceSoundController_C, DefaultSceneRoot) == 0x000228, "Member 'AAmbienceSoundController_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AAmbienceSoundController_C, OutsideAmbience) == 0x000230, "Member 'AAmbienceSoundController_C::OutsideAmbience' has a wrong offset!");
static_assert(offsetof(AAmbienceSoundController_C, AmbientSoundComponent) == 0x000238, "Member 'AAmbienceSoundController_C::AmbientSoundComponent' has a wrong offset!");
static_assert(offsetof(AAmbienceSoundController_C, MusicPlaying_) == 0x000240, "Member 'AAmbienceSoundController_C::MusicPlaying_' has a wrong offset!");
static_assert(offsetof(AAmbienceSoundController_C, Music) == 0x000248, "Member 'AAmbienceSoundController_C::Music' has a wrong offset!");

}
