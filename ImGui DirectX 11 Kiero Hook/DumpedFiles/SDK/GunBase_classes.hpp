#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GunBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AttachmentArrayStructure_structs.hpp"
#include "ShopItemCategory_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GunBase.GunBase_C
// 0x00F0 (0x0310 - 0x0220)
class AGunBase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                   Attachment_Mag;                                    // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Attachment_Grip;                                   // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Attachment_light;                                  // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Attachment_scope;                                  // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Attachment_barrel;                                 // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Mag;                                               // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CollisionBox;                                      // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Slide;                                             // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Muzzle;                                            // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Gunmesh;                                           // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter_C*                     OwnerPlayer;                                       // 0x0280(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int32                                         Damage;                                            // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Range;                                             // 0x028C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          ShootAnimation;                                    // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            CasingMesh;                                        // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundWave*                             Sound;                                             // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CoolDownTime;                                      // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanShoot_;                                         // 0x02AC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Auto_;                                             // 0x02AD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22ED[0x2];                                     // 0x02AE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RecoilStrength;                                    // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         GunKickMultiplier;                                 // 0x02B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MagSize;                                           // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BulletsLeft;                                       // 0x02BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Magactor;                                          // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TagName;                                           // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BackAttach_;                                       // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22EE[0x7];                                     // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 AttachedBackGun;                                   // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAttachmentArrayStructure              Attachments;                                       // 0x02E0(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         Reload_time;                                       // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Accuracy;                                          // 0x02F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             ReloadEjectSound;                                  // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             ReloadInsertSound;                                 // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CalculatedReloadTime;                              // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GunBase(int32 EntryPoint);
	void ReloadGunClient();
	void Add_arm_force();
	void MuzzleFlash();
	void SetupAttachmentsMulti(const struct FAttachmentArrayStructure& Param_Attachments);
	void ReloadGunServer();
	void Cooldown();
	void SetupGun();
	void ShootClient();
	void ReceiveBeginPlay();
	void SetupAttachments();
	void CalculateBullets();
	void AddAmmoToGun(int32 Amount, bool Check_only_, int32 GunSlot, int32 GunBullet, bool* Ammo_added_);
	void Get_Any_Gun_Stats(const struct FAttachmentArrayStructure& AttachmentArrayStructure, class UClass* GunClass, float* Zoom, float* Recoil, float* Param_Accuracy, float* Param_Reload_time, float* Param_Damage, int32* Bullets);
	void GetThisGunStats(float* Zoom, float* Recoil, float* Param_Accuracy, float* Param_Reload_time, float* Param_Damage, int32* Bullets);
	void GetAttachmentFromCategory(EShopItemCategory Category, class UClass** Param_Class);
	void GetUpgradeStats(class UClass* Upgrade, float* Recoil, float* Param_Accuracy, float* Param_Damage, int32* Bullets, float* Param_Reload_time);
	void PreviewAttachment(class UClass* Attachment);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GunBase_C">();
	}
	static class AGunBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGunBase_C>();
	}
};
static_assert(alignof(AGunBase_C) == 0x000008, "Wrong alignment on AGunBase_C");
static_assert(sizeof(AGunBase_C) == 0x000310, "Wrong size on AGunBase_C");
static_assert(offsetof(AGunBase_C, UberGraphFrame) == 0x000220, "Member 'AGunBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGunBase_C, Attachment_Mag) == 0x000228, "Member 'AGunBase_C::Attachment_Mag' has a wrong offset!");
static_assert(offsetof(AGunBase_C, Attachment_Grip) == 0x000230, "Member 'AGunBase_C::Attachment_Grip' has a wrong offset!");
static_assert(offsetof(AGunBase_C, Attachment_light) == 0x000238, "Member 'AGunBase_C::Attachment_light' has a wrong offset!");
static_assert(offsetof(AGunBase_C, Attachment_scope) == 0x000240, "Member 'AGunBase_C::Attachment_scope' has a wrong offset!");
static_assert(offsetof(AGunBase_C, Attachment_barrel) == 0x000248, "Member 'AGunBase_C::Attachment_barrel' has a wrong offset!");
static_assert(offsetof(AGunBase_C, Mag) == 0x000250, "Member 'AGunBase_C::Mag' has a wrong offset!");
static_assert(offsetof(AGunBase_C, CollisionBox) == 0x000258, "Member 'AGunBase_C::CollisionBox' has a wrong offset!");
static_assert(offsetof(AGunBase_C, PointLight) == 0x000260, "Member 'AGunBase_C::PointLight' has a wrong offset!");
static_assert(offsetof(AGunBase_C, Slide) == 0x000268, "Member 'AGunBase_C::Slide' has a wrong offset!");
static_assert(offsetof(AGunBase_C, Muzzle) == 0x000270, "Member 'AGunBase_C::Muzzle' has a wrong offset!");
static_assert(offsetof(AGunBase_C, Gunmesh) == 0x000278, "Member 'AGunBase_C::Gunmesh' has a wrong offset!");
static_assert(offsetof(AGunBase_C, OwnerPlayer) == 0x000280, "Member 'AGunBase_C::OwnerPlayer' has a wrong offset!");
static_assert(offsetof(AGunBase_C, Damage) == 0x000288, "Member 'AGunBase_C::Damage' has a wrong offset!");
static_assert(offsetof(AGunBase_C, Range) == 0x00028C, "Member 'AGunBase_C::Range' has a wrong offset!");
static_assert(offsetof(AGunBase_C, ShootAnimation) == 0x000290, "Member 'AGunBase_C::ShootAnimation' has a wrong offset!");
static_assert(offsetof(AGunBase_C, CasingMesh) == 0x000298, "Member 'AGunBase_C::CasingMesh' has a wrong offset!");
static_assert(offsetof(AGunBase_C, Sound) == 0x0002A0, "Member 'AGunBase_C::Sound' has a wrong offset!");
static_assert(offsetof(AGunBase_C, CoolDownTime) == 0x0002A8, "Member 'AGunBase_C::CoolDownTime' has a wrong offset!");
static_assert(offsetof(AGunBase_C, CanShoot_) == 0x0002AC, "Member 'AGunBase_C::CanShoot_' has a wrong offset!");
static_assert(offsetof(AGunBase_C, Auto_) == 0x0002AD, "Member 'AGunBase_C::Auto_' has a wrong offset!");
static_assert(offsetof(AGunBase_C, RecoilStrength) == 0x0002B0, "Member 'AGunBase_C::RecoilStrength' has a wrong offset!");
static_assert(offsetof(AGunBase_C, GunKickMultiplier) == 0x0002B4, "Member 'AGunBase_C::GunKickMultiplier' has a wrong offset!");
static_assert(offsetof(AGunBase_C, MagSize) == 0x0002B8, "Member 'AGunBase_C::MagSize' has a wrong offset!");
static_assert(offsetof(AGunBase_C, BulletsLeft) == 0x0002BC, "Member 'AGunBase_C::BulletsLeft' has a wrong offset!");
static_assert(offsetof(AGunBase_C, Magactor) == 0x0002C0, "Member 'AGunBase_C::Magactor' has a wrong offset!");
static_assert(offsetof(AGunBase_C, TagName) == 0x0002C8, "Member 'AGunBase_C::TagName' has a wrong offset!");
static_assert(offsetof(AGunBase_C, BackAttach_) == 0x0002D0, "Member 'AGunBase_C::BackAttach_' has a wrong offset!");
static_assert(offsetof(AGunBase_C, AttachedBackGun) == 0x0002D8, "Member 'AGunBase_C::AttachedBackGun' has a wrong offset!");
static_assert(offsetof(AGunBase_C, Attachments) == 0x0002E0, "Member 'AGunBase_C::Attachments' has a wrong offset!");
static_assert(offsetof(AGunBase_C, Reload_time) == 0x0002F0, "Member 'AGunBase_C::Reload_time' has a wrong offset!");
static_assert(offsetof(AGunBase_C, Accuracy) == 0x0002F4, "Member 'AGunBase_C::Accuracy' has a wrong offset!");
static_assert(offsetof(AGunBase_C, ReloadEjectSound) == 0x0002F8, "Member 'AGunBase_C::ReloadEjectSound' has a wrong offset!");
static_assert(offsetof(AGunBase_C, ReloadInsertSound) == 0x000300, "Member 'AGunBase_C::ReloadInsertSound' has a wrong offset!");
static_assert(offsetof(AGunBase_C, CalculatedReloadTime) == 0x000308, "Member 'AGunBase_C::CalculatedReloadTime' has a wrong offset!");

}

