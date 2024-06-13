#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShopItemPreview

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "ShopItemCategory_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass ShopItemPreview.ShopItemPreview_C
// 0x0080 (0x02A0 - 0x0220)
class AShopItemPreview_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                   EmoteChildActor;                                   // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   MaskPreview;                                       // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ArmorPreviewMesh;                                  // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        RotatorArrow;                                      // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CharacterPreview;                                  // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ItemActor;                                         // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             DefaultChildLocation;                              // 0x0260(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class ARobberController_C*                    As_Robber_Controller;                              // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 PreviewItemInfo;                                   // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ShopItemPreview(int32 EntryPoint);
	void LoadController();
	void ReceiveBeginPlay();
	void Remove();
	void UpdateItemScale();
	void ReceiveTick(float DeltaSeconds);
	void PreviewItem(class UClass* ItemInfo, int32 SalePrice);
	void CancelDrag();
	void DragItemFromCategory(EShopItemCategory Category);
	void ChangeCategory(EShopItemCategory Category);
	void RemoveloadoutCategory();
	void RefreshInventory();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShopItemPreview_C">();
	}
	static class AShopItemPreview_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AShopItemPreview_C>();
	}
};
static_assert(alignof(AShopItemPreview_C) == 0x000010, "Wrong alignment on AShopItemPreview_C");
static_assert(sizeof(AShopItemPreview_C) == 0x0002A0, "Wrong size on AShopItemPreview_C");
static_assert(offsetof(AShopItemPreview_C, UberGraphFrame) == 0x000220, "Member 'AShopItemPreview_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AShopItemPreview_C, EmoteChildActor) == 0x000228, "Member 'AShopItemPreview_C::EmoteChildActor' has a wrong offset!");
static_assert(offsetof(AShopItemPreview_C, MaskPreview) == 0x000230, "Member 'AShopItemPreview_C::MaskPreview' has a wrong offset!");
static_assert(offsetof(AShopItemPreview_C, ArmorPreviewMesh) == 0x000238, "Member 'AShopItemPreview_C::ArmorPreviewMesh' has a wrong offset!");
static_assert(offsetof(AShopItemPreview_C, RotatorArrow) == 0x000240, "Member 'AShopItemPreview_C::RotatorArrow' has a wrong offset!");
static_assert(offsetof(AShopItemPreview_C, CharacterPreview) == 0x000248, "Member 'AShopItemPreview_C::CharacterPreview' has a wrong offset!");
static_assert(offsetof(AShopItemPreview_C, ItemActor) == 0x000250, "Member 'AShopItemPreview_C::ItemActor' has a wrong offset!");
static_assert(offsetof(AShopItemPreview_C, DefaultSceneRoot) == 0x000258, "Member 'AShopItemPreview_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AShopItemPreview_C, DefaultChildLocation) == 0x000260, "Member 'AShopItemPreview_C::DefaultChildLocation' has a wrong offset!");
static_assert(offsetof(AShopItemPreview_C, As_Robber_Controller) == 0x000290, "Member 'AShopItemPreview_C::As_Robber_Controller' has a wrong offset!");
static_assert(offsetof(AShopItemPreview_C, PreviewItemInfo) == 0x000298, "Member 'AShopItemPreview_C::PreviewItemInfo' has a wrong offset!");

}

