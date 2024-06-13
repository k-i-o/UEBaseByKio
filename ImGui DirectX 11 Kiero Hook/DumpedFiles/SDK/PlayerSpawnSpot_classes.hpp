#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerSpawnSpot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PlayerSpawnSpot.PlayerSpawnSpot_C
// 0x0038 (0x0258 - 0x0220)
class APlayerSpawnSpot_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                        Arrow;                                             // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Taken_;                                            // 0x0238(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1CF9[0x7];                                     // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainMenuPlayer_C*                      Player;                                            // 0x0240(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Index_PlayerSpawnSpot_C;                           // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_1CFA[0x4];                                     // 0x024C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMenuPlayerPreview_C*                   PlayerPreview;                                     // 0x0250(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PlayerSpawnSpot(int32 EntryPoint);
	void SpawnPlayerInSpot(class AMainMenuPlayer_C* Param_Player);
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerSpawnSpot_C">();
	}
	static class APlayerSpawnSpot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlayerSpawnSpot_C>();
	}
};
static_assert(alignof(APlayerSpawnSpot_C) == 0x000008, "Wrong alignment on APlayerSpawnSpot_C");
static_assert(sizeof(APlayerSpawnSpot_C) == 0x000258, "Wrong size on APlayerSpawnSpot_C");
static_assert(offsetof(APlayerSpawnSpot_C, UberGraphFrame) == 0x000220, "Member 'APlayerSpawnSpot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APlayerSpawnSpot_C, Arrow) == 0x000228, "Member 'APlayerSpawnSpot_C::Arrow' has a wrong offset!");
static_assert(offsetof(APlayerSpawnSpot_C, DefaultSceneRoot) == 0x000230, "Member 'APlayerSpawnSpot_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(APlayerSpawnSpot_C, Taken_) == 0x000238, "Member 'APlayerSpawnSpot_C::Taken_' has a wrong offset!");
static_assert(offsetof(APlayerSpawnSpot_C, Player) == 0x000240, "Member 'APlayerSpawnSpot_C::Player' has a wrong offset!");
static_assert(offsetof(APlayerSpawnSpot_C, Index_PlayerSpawnSpot_C) == 0x000248, "Member 'APlayerSpawnSpot_C::Index_PlayerSpawnSpot_C' has a wrong offset!");
static_assert(offsetof(APlayerSpawnSpot_C, PlayerPreview) == 0x000250, "Member 'APlayerSpawnSpot_C::PlayerPreview' has a wrong offset!");

}

