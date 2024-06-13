#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ClosebuildingBlolckBase

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ClosebuildingBlolckBase.ClosebuildingBlolckBase_C
// 0x0058 (0x0278 - 0x0220)
class AClosebuildingBlolckBase_C final : public AActor
{
public:
	class UChildActorComponent*                   ChildActor1;                                       // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ChildActor;                                        // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRandomStream                          Random_Stream;                                     // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn)
	int32                                         Floors;                                            // 0x0240(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_2540[0x4];                                     // 0x0244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UClass*>                         Walls;                                             // 0x0248(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<class UMaterialInterface*>             Material;                                          // 0x0258(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<class UStaticMesh*>                    StaticMesh;                                        // 0x0268(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ClosebuildingBlolckBase_C">();
	}
	static class AClosebuildingBlolckBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AClosebuildingBlolckBase_C>();
	}
};
static_assert(alignof(AClosebuildingBlolckBase_C) == 0x000008, "Wrong alignment on AClosebuildingBlolckBase_C");
static_assert(sizeof(AClosebuildingBlolckBase_C) == 0x000278, "Wrong size on AClosebuildingBlolckBase_C");
static_assert(offsetof(AClosebuildingBlolckBase_C, ChildActor1) == 0x000220, "Member 'AClosebuildingBlolckBase_C::ChildActor1' has a wrong offset!");
static_assert(offsetof(AClosebuildingBlolckBase_C, ChildActor) == 0x000228, "Member 'AClosebuildingBlolckBase_C::ChildActor' has a wrong offset!");
static_assert(offsetof(AClosebuildingBlolckBase_C, DefaultSceneRoot) == 0x000230, "Member 'AClosebuildingBlolckBase_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AClosebuildingBlolckBase_C, Random_Stream) == 0x000238, "Member 'AClosebuildingBlolckBase_C::Random_Stream' has a wrong offset!");
static_assert(offsetof(AClosebuildingBlolckBase_C, Floors) == 0x000240, "Member 'AClosebuildingBlolckBase_C::Floors' has a wrong offset!");
static_assert(offsetof(AClosebuildingBlolckBase_C, Walls) == 0x000248, "Member 'AClosebuildingBlolckBase_C::Walls' has a wrong offset!");
static_assert(offsetof(AClosebuildingBlolckBase_C, Material) == 0x000258, "Member 'AClosebuildingBlolckBase_C::Material' has a wrong offset!");
static_assert(offsetof(AClosebuildingBlolckBase_C, StaticMesh) == 0x000268, "Member 'AClosebuildingBlolckBase_C::StaticMesh' has a wrong offset!");

}
