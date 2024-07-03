#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// CrabChampions
// 4.27.2-0+++UE4+Release-4.27

// Includes the entire SDK, include files directly for faster compilation!

#include "SDK/Basic.hpp"
#include "SDK/CoreUObject_classes.hpp"
#include "SDK/CoreUObject_structs.hpp"
#include "SDK/Slate_structs.hpp"
#include "SDK/Engine_structs.hpp"
#include "SDK/Engine_classes.hpp"
#include "SDK/AIModule_structs.hpp"
#include "SDK/InputCore_structs.hpp"
#include "SDK/SlateCore_structs.hpp"
#include "SDK/PacketHandler_classes.hpp"
/*#include "SDK/Basic.hpp"
#include "SDK/CoreUObject_structs.hpp"
#include "SDK/CoreUObject_classes.hpp"
#include "SDK/NiagaraCore_structs.hpp"
#include "SDK/NiagaraCore_classes.hpp"
#include "SDK/InputCore_structs.hpp"
#include "SDK/Chaos_structs.hpp"
#include "SDK/PhysicsCore_structs.hpp"
#include "SDK/Slate_structs.hpp"
#include "SDK/Engine_structs.hpp"
#include "SDK/MovieScene_structs.hpp"
#include "SDK/MovieScene_classes.hpp"
#include "SDK/NiagaraShader_structs.hpp"
#include "SDK/Niagara_structs.hpp"
#include "SDK/PhysicsCore_classes.hpp"
#include "SDK/AudioPlatformConfiguration_structs.hpp"
#include "SDK/SlateCore_structs.hpp"
#include "SDK/PropertyAccess_structs.hpp"
#include "SDK/Engine_classes.hpp"
#include "SDK/Niagara_classes.hpp"
#include "SDK/NiagaraShader_classes.hpp"
#include "SDK/DeveloperSettings_classes.hpp"
#include "SDK/NiagaraAnimNotifies_classes.hpp"
#include "SDK/PacketHandler_classes.hpp"
#include "SDK/OnlineSubsystemSteam_classes.hpp"
#include "SDK/OnlineSubsystemUtils_structs.hpp"
#include "SDK/OnlineSubsystem_structs.hpp"
#include "SDK/OnlineSubsystemUtils_classes.hpp"
#include "SDK/OnlineSubsystem_classes.hpp"
#include "SDK/AudioMixer_structs.hpp"
#include "SDK/AudioMixer_classes.hpp"
#include "SDK/SteamSockets_classes.hpp"
#include "SDK/AnimationCore_structs.hpp"
#include "SDK/ControlRig_structs.hpp"
#include "SDK/MovieSceneTracks_structs.hpp"
#include "SDK/MovieSceneTracks_classes.hpp"
#include "SDK/PropertyPath_structs.hpp"
#include "SDK/ControlRig_classes.hpp"
#include "SDK/LevelSequence_structs.hpp"
#include "SDK/LevelSequence_classes.hpp"
#include "SDK/AnimGraphRuntime_structs.hpp"
#include "SDK/AnimGraphRuntime_classes.hpp"
#include "SDK/GameplayCameras_structs.hpp"
#include "SDK/GameplayCameras_classes.hpp"
#include "SDK/TemplateSequence_structs.hpp"
#include "SDK/CinematicCamera_structs.hpp"
#include "SDK/TemplateSequence_classes.hpp"
#include "SDK/OodleNetworkHandlerComponent_structs.hpp"
#include "SDK/OodleNetworkHandlerComponent_classes.hpp"
#include "SDK/AutomationUtils_classes.hpp"
#include "SDK/MediaAssets_structs.hpp"
#include "SDK/MediaAssets_classes.hpp"
#include "SDK/BP_Destructible_LightningRock_classes.hpp"
#include "SDK/ImgMedia_classes.hpp"
#include "SDK/ImgMediaEngine_classes.hpp"
#include "SDK/BP_Totem_Gold_classes.hpp"
#include "SDK/ImgMediaFactory_classes.hpp"
#include "SDK/MediaCompositing_structs.hpp"
#include "SDK/MediaCompositing_classes.hpp"
#include "SDK/TcpMessaging_classes.hpp"
#include "SDK/UdpMessaging_structs.hpp"
#include "SDK/UdpMessaging_classes.hpp"
#include "SDK/AudioExtensions_classes.hpp"
#include "SDK/SoundFields_classes.hpp"
#include "SDK/Synthesis_structs.hpp"
#include "SDK/Synthesis_classes.hpp"
#include "SDK/UMG_structs.hpp"
#include "SDK/UMG_classes.hpp"
#include "SDK/AudioAnalyzer_classes.hpp"
#include "SDK/AudioSynesthesia_structs.hpp"
#include "SDK/AudioSynesthesia_classes.hpp"
#include "SDK/CrabChampions_structs.hpp"
#include "SDK/AIModule_structs.hpp"
#include "SDK/GameplayTags_structs.hpp"
#include "SDK/AIModule_classes.hpp"
#include "SDK/CrabChampions_classes.hpp"
#include "SDK/BP_Enemy_LaserSkull_classes.hpp"
#include "SDK/InputCore_classes.hpp"
#include "SDK/SlateCore_classes.hpp"
#include "SDK/Slate_classes.hpp"
#include "SDK/ImageWriteQueue_structs.hpp"
#include "SDK/ImageWriteQueue_classes.hpp"
#include "SDK/MaterialShaderQualitySettings_structs.hpp"
#include "SDK/MaterialShaderQualitySettings_classes.hpp"
#include "SDK/EyeTracker_structs.hpp"
#include "SDK/EyeTracker_classes.hpp"
#include "SDK/EngineSettings_structs.hpp"
#include "SDK/EngineSettings_classes.hpp"
#include "SDK/MRMesh_structs.hpp"
#include "SDK/MRMesh_classes.hpp"
#include "SDK/AugmentedReality_structs.hpp"
#include "SDK/AugmentedReality_classes.hpp"
#include "SDK/HeadMountedDisplay_structs.hpp"
#include "SDK/HeadMountedDisplay_classes.hpp"
#include "SDK/BuildPatchServices_structs.hpp"
#include "SDK/BuildPatchServices_classes.hpp"
#include "SDK/Foliage_structs.hpp"
#include "SDK/Foliage_classes.hpp"
#include "SDK/Landscape_structs.hpp"
#include "SDK/Landscape_classes.hpp"
#include "SDK/BP_Strike_EliteFireSkull_classes.hpp"
#include "SDK/TimeManagement_structs.hpp"
#include "SDK/TimeManagement_classes.hpp"
#include "SDK/AnimationCore_classes.hpp"
#include "SDK/CinematicCamera_classes.hpp"
#include "SDK/NetCore_structs.hpp"
#include "SDK/NetCore_classes.hpp"
#include "SDK/AssetRegistry_structs.hpp"
#include "SDK/AssetRegistry_classes.hpp"
#include "SDK/GameplayTags_classes.hpp"
#include "SDK/MeshDescription_structs.hpp"
#include "SDK/MeshDescription_classes.hpp"
#include "SDK/StaticMeshDescription_structs.hpp"
#include "SDK/StaticMeshDescription_classes.hpp"
#include "SDK/PropertyAccess_classes.hpp"
#include "SDK/ClothingSystemRuntimeInterface_structs.hpp"
#include "SDK/ClothingSystemRuntimeInterface_classes.hpp"
#include "SDK/JsonUtilities_structs.hpp"
#include "SDK/JsonUtilities_classes.hpp"
#include "SDK/MovieSceneCapture_structs.hpp"
#include "SDK/MovieSceneCapture_classes.hpp"
#include "SDK/MoviePlayer_structs.hpp"
#include "SDK/MoviePlayer_classes.hpp"
#include "SDK/Overlay_structs.hpp"
#include "SDK/Overlay_classes.hpp"
#include "SDK/ClothingSystemRuntimeCommon_structs.hpp"
#include "SDK/ClothingSystemRuntimeCommon_classes.hpp"
#include "SDK/ClothingSystemRuntimeNv_structs.hpp"
#include "SDK/ClothingSystemRuntimeNv_classes.hpp"
#include "SDK/RigVM_structs.hpp"
#include "SDK/RigVM_classes.hpp"
#include "SDK/NavigationSystem_structs.hpp"
#include "SDK/NavigationSystem_classes.hpp"
#include "SDK/GameplayTasks_structs.hpp"
#include "SDK/GameplayTasks_classes.hpp"
#include "SDK/ImageWrapper_structs.hpp"
#include "SDK/MediaUtils_structs.hpp"
#include "SDK/VectorVM_structs.hpp"
#include "SDK/Renderer_structs.hpp"
#include "SDK/EngineMessages_structs.hpp"
#include "SDK/Serialization_structs.hpp"
#include "SDK/SessionMessages_structs.hpp"
#include "SDK/DmgTypeBP_Environmental_classes.hpp"
#include "SDK/BP_DamageArea_IceStorm_classes.hpp"
#include "SDK/UI_Gameplay_OLD_classes.hpp"
#include "SDK/BP_DamageArea_GiantDrill_classes.hpp"
#include "SDK/UI_Interact_classes.hpp"
#include "SDK/UI_Location_classes.hpp"
#include "SDK/BP_DamageArea_HomingGrub_classes.hpp"
#include "SDK/UI_LoadingScreen_classes.hpp"
#include "SDK/BP_GI_classes.hpp"
#include "SDK/UI_GameState_OLD_classes.hpp"
#include "SDK/BP_CameraShake_Explosion_classes.hpp"
#include "SDK/BP_DamageArea_Flamethrower_classes.hpp"
#include "SDK/UI_Inventory_OLD_classes.hpp"
#include "SDK/BP_Enemy_PoisonSlug_classes.hpp"
#include "SDK/UI_MinigameGameOver_classes.hpp"
#include "SDK/UI_DamageText_OLD_classes.hpp"
#include "SDK/UI_MinigameGameOverRow_classes.hpp"
#include "SDK/UI_InventorySlot_OLD_classes.hpp"
#include "SDK/UI_PlayerState_classes.hpp"
#include "SDK/UI_ChatEntryRow_OLD_classes.hpp"
#include "SDK/UI_InventoryEvent_classes.hpp"
#include "SDK/BP_DamageArea_IceSlug_classes.hpp"
#include "SDK/UI_Crosshair_classes.hpp"
#include "SDK/UI_HealthBar_classes.hpp"
#include "SDK/UI_UnlockedCosmetic_classes.hpp"
#include "SDK/UI_GameOverRow_classes.hpp"
#include "SDK/UI_ArrowSelection_classes.hpp"
#include "SDK/UI_InviteFriendRow_classes.hpp"
#include "SDK/UI_JoinedPlayerRow_classes.hpp"
#include "SDK/UI_ConfirmationPrompt_classes.hpp"
#include "SDK/UI_SettingsMenu_classes.hpp"
#include "SDK/UI_DifficultyModifier_classes.hpp"
#include "SDK/UI_ControlsMenu_classes.hpp"
#include "SDK/UI_SoundMenu_classes.hpp"
#include "SDK/UI_VideoMenu_classes.hpp"
#include "SDK/BP_DamageArea_ElitePoisonGrub_classes.hpp"
#include "SDK/UI_Slider_classes.hpp"
#include "SDK/UI_KeyBindRow_classes.hpp"
#include "SDK/UI_CosmeticSlot_classes.hpp"
#include "SDK/BP_CameraShake_PortalTransition_OLD_classes.hpp"
#include "SDK/SK_Crab_AnimBP_classes.hpp"
#include "SDK/BP_Enemy_Slug_classes.hpp"
#include "SDK/UI_PlayerName_OLD_classes.hpp"
#include "SDK/UI_Ping_OLD_classes.hpp"
#include "SDK/BP_Chest_Critical_classes.hpp"
#include "SDK/BP_Chest_Damage_classes.hpp"
#include "SDK/BP_Chest_Economy_classes.hpp"
#include "SDK/BP_Chest_Elemental_classes.hpp"
#include "SDK/BP_Chest_Epic_classes.hpp"
#include "SDK/BP_Chest_Greed_classes.hpp"
#include "SDK/BP_Chest_Healing_classes.hpp"
#include "SDK/BP_Destructible_FireRock_classes.hpp"
#include "SDK/BP_Chest_Health_classes.hpp"
#include "SDK/BP_Chest_Key_classes.hpp"
#include "SDK/BP_Destructible_BlackHoleRock_classes.hpp"
#include "SDK/BP_Chest_Legendary_classes.hpp"
#include "SDK/BP_Chest_Luck_classes.hpp"
#include "SDK/BP_Chest_Random_classes.hpp"
#include "SDK/BP_Chest_Relic_classes.hpp"
#include "SDK/BP_Chest_Secret_classes.hpp"
#include "SDK/BP_Chest_Skill_classes.hpp"
#include "SDK/BP_Enemy_EliteFireCrab_classes.hpp"
#include "SDK/BP_Chest_Speed_classes.hpp"
#include "SDK/BP_Chest_Spiked_classes.hpp"
#include "SDK/BP_Destructible_MaxHealthRock_classes.hpp"
#include "SDK/BP_Chest_Upgrade_classes.hpp"
#include "SDK/BP_DamageArea_BlackHole_classes.hpp"
#include "SDK/BP_DamageArea_CrimsonHaze_classes.hpp"
#include "SDK/BP_DamageArea_CrystalBarrage_classes.hpp"
#include "SDK/BP_DamageArea_EnemyEnergyRing_classes.hpp"
#include "SDK/BP_DamageArea_EnemyFire_classes.hpp"
#include "SDK/BP_DamageArea_EnemyPoison_classes.hpp"
#include "SDK/BP_DamageArea_EnergyRing_classes.hpp"
#include "SDK/BP_DamageArea_FireExplosion_classes.hpp"
#include "SDK/BP_DamageArea_FireStorm_classes.hpp"
#include "SDK/BP_DamageArea_IceExplosion_classes.hpp"
#include "SDK/BP_DamageArea_IceRock_classes.hpp"
#include "SDK/BP_DamageArea_FireSlug_classes.hpp"
#include "SDK/BP_DamageArea_LightningExplosion_classes.hpp"
#include "SDK/BP_DamageArea_LightningRock_classes.hpp"
#include "SDK/BP_SpawnPoint_Player_classes.hpp"
#include "SDK/BP_DamageArea_LightningStorm_classes.hpp"
#include "SDK/BP_DamageArea_PoisonExplosion_classes.hpp"
#include "SDK/BP_DamageArea_PoisonStorm_classes.hpp"
#include "SDK/BP_DamageArea_ScytheVortex_classes.hpp"
#include "SDK/BP_Destructible_CrystalAsteroid_classes.hpp"
#include "SDK/BP_Destructible_CrystalShard_Large_classes.hpp"
#include "SDK/UI_BossHealthBar_OLD_classes.hpp"
#include "SDK/BP_Destructible_CrystalShard_Small_classes.hpp"
#include "SDK/BP_Destructible_EnemyHomingBarrel_classes.hpp"
#include "SDK/BP_Destructible_HomingBarrel_classes.hpp"
#include "SDK/BP_Destructible_LandmineShot_classes.hpp"
#include "SDK/BP_Destructible_Nest_TEST_classes.hpp"
#include "SDK/BP_Destructible_SporeMushroom_classes.hpp"
#include "SDK/BP_Destructible_UltraMushroom_classes.hpp"
#include "SDK/BP_Enemy_TargetDummy_classes.hpp"
#include "SDK/BP_Portal_Arena_classes.hpp"
#include "SDK/BP_Portal_Biome_classes.hpp"
#include "SDK/BP_Portal_Boss_classes.hpp"
#include "SDK/BP_Portal_ContinueRun_classes.hpp"
#include "SDK/BP_Portal_CrabIsland_classes.hpp"
#include "SDK/BP_Portal_Demolition_classes.hpp"
#include "SDK/BP_Portal_Elite_classes.hpp"
#include "SDK/BP_Portal_Harvest_classes.hpp"
#include "SDK/BP_Portal_Horde_classes.hpp"
#include "SDK/BP_Portal_Loop_classes.hpp"
#include "SDK/BP_Portal_NewRun_classes.hpp"
#include "SDK/BP_Portal_Parkour_classes.hpp"
#include "SDK/UI_Stats_OLD_classes.hpp"
#include "SDK/BP_Portal_Shop_classes.hpp"
#include "SDK/BP_Portal_Waves_classes.hpp"
#include "SDK/BP_Totem_Chance_classes.hpp"
#include "SDK/BP_Totem_Crystal_classes.hpp"
#include "SDK/BP_Totem_Fuse_classes.hpp"
#include "SDK/BP_Totem_Gamble_classes.hpp"
#include "SDK/BP_Totem_Glass_classes.hpp"
#include "SDK/BP_Totem_Greed_classes.hpp"
#include "SDK/BP_Totem_Health_classes.hpp"
#include "SDK/BP_Totem_Loot_classes.hpp"
#include "SDK/BP_Totem_Random_classes.hpp"
#include "SDK/BP_Totem_Reroll_classes.hpp"
#include "SDK/BP_FireTurret_classes.hpp"
#include "SDK/BP_MortarTurret_classes.hpp"
#include "SDK/BP_PoisonTurret_classes.hpp"
#include "SDK/BP_SentryTurret_classes.hpp"
#include "SDK/BP_SniperTurret_classes.hpp"
#include "SDK/BP_HarvestArea_TEST_classes.hpp"
#include "SDK/BP_ShopPedestal_classes.hpp"
#include "SDK/BP_Pickup_Crystal_classes.hpp"
#include "SDK/BP_Pickup_Health_classes.hpp"
#include "SDK/BP_SpawnPoint_Reward_classes.hpp"
#include "SDK/BP_Strike_CriticalArrow_classes.hpp"
#include "SDK/BP_Strike_CriticalLightning_classes.hpp"
#include "SDK/BP_Strike_Crystal_classes.hpp"
#include "SDK/BP_Strike_EnemySpike_classes.hpp"
#include "SDK/BP_Strike_Fire_classes.hpp"
#include "SDK/BP_Enemy_SniperCrab_classes.hpp"
#include "SDK/BP_Strike_Ice_classes.hpp"
#include "SDK/BP_Strike_Lightning_classes.hpp"
#include "SDK/BP_Enemy_FireCrab_classes.hpp"
#include "SDK/BP_Strike_Poison_classes.hpp"
#include "SDK/BP_Strike_Spike_classes.hpp"
#include "SDK/AnimBP_SK_Pumpkin_classes.hpp"
#include "SDK/AnimBP_SK_Pufferfish_classes.hpp"
#include "SDK/SK_Limpet_AnimBP_classes.hpp"
#include "SDK/BP_DamageArea_ElitePoisonGrubEnergyRing_classes.hpp"
#include "SDK/BP_DamageArea_MinigunCrab_classes.hpp"
#include "SDK/BP_DamageArea_LaserCrab_classes.hpp"
#include "SDK/BP_Strike_EliteLightningCrab_classes.hpp"
#include "SDK/BP_Strike_BossAnt_classes.hpp"
#include "SDK/BP_DamageArea_MaxHealthRock_classes.hpp"
#include "SDK/BP_DamageArea_HealthRock_classes.hpp"
#include "SDK/BP_DamageArea_FireShard_classes.hpp"
#include "SDK/BP_DamageArea_EnergyRingRock_classes.hpp"
#include "SDK/UI_ShopPedestalUI_OLD_classes.hpp"
#include "SDK/BP_Enemy_Scorpion_classes.hpp"
#include "SDK/BP_DamageArea_IceSlug_Movement_classes.hpp"
#include "SDK/SK_Scorpion_AnimBP_classes.hpp"
#include "SDK/BP_DamageArea_Scorpion_classes.hpp"
#include "SDK/BP_Destructible_Cactus_classes.hpp"
#include "SDK/BP_Enemy_FireAnt_classes.hpp"
#include "SDK/BP_Destructible_IceRock_classes.hpp"
#include "SDK/BP_Strike_EliteIceSkull_classes.hpp"
#include "SDK/BP_DamageArea_LightningShard_classes.hpp"
#include "SDK/BP_DamageArea_IceShard_classes.hpp"
#include "SDK/BP_DamageArea_AbilityBlackHole_classes.hpp"
#include "SDK/BP_DamageArea_IceBlast_classes.hpp"
#include "SDK/BP_DamageArea_LaserBeam_classes.hpp"
#include "SDK/AnimBP_SK_Ant_classes.hpp"
#include "SDK/BP_Destructible_ChallengeCrystal_classes.hpp"
#include "SDK/BP_Destructible_ChaoticExplosiveBarrel_classes.hpp"
#include "SDK/BP_Destructible_Crystal_classes.hpp"
#include "SDK/BP_Destructible_EnergyRingRock_classes.hpp"
#include "SDK/BP_Destructible_ExplosiveBarrel_classes.hpp"
#include "SDK/BP_Destructible_HealthRock_classes.hpp"
#include "SDK/BP_Destructible_MegaChallengeCrystal_classes.hpp"
#include "SDK/BP_Destructible_MegaCrystal_classes.hpp"
#include "SDK/BP_Enemy_BossAnt_classes.hpp"
#include "SDK/BP_Enemy_Limpet_classes.hpp"
#include "SDK/BP_Enemy_Pufferfish_classes.hpp"
#include "SDK/BP_Enemy_ElitePumpkin_classes.hpp"
#include "SDK/BP_Enemy_FirePumpkin_classes.hpp"
#include "SDK/BP_Enemy_BossSkull_classes.hpp"
#include "SDK/BP_Enemy_Starfish_classes.hpp"
#include "SDK/SK_Starfish_AnimBP_classes.hpp"
#include "SDK/BP_DamageArea_FireSlug_Movement_classes.hpp"
#include "SDK/BP_DamageArea_LightningSlug_classes.hpp"
#include "SDK/BP_DamageArea_FireRock_classes.hpp"
#include "SDK/BP_EliteBarrelSkull_HomingBarrel_classes.hpp"
#include "SDK/BP_EliteBarrelSkull_Barrel_classes.hpp"
#include "SDK/BP_Strike_BossSkull_Fire_classes.hpp"
#include "SDK/BP_Strike_BossSkull_EnergyRing_classes.hpp"
#include "SDK/BP_Enemy_MiniPumpkin_classes.hpp"
#include "SDK/BP_Enemy_IcePumpkin_classes.hpp"
#include "SDK/BP_Enemy_Pumpkin_classes.hpp"
#include "SDK/BP_Strike_FirePumpkin_classes.hpp"
#include "SDK/UI_Interact_Minimal_classes.hpp"
#include "SDK/UI_Interact_Portal_classes.hpp"
#include "SDK/AnimBP_SK_Skull_classes.hpp"
#include "SDK/BP_LM_classes.hpp"
#include "SDK/UI_DPS_classes.hpp"
#include "SDK/UI_GenericHealthBar_OLD_classes.hpp"
#include "SDK/BP_EQC_BestEnemyC_classes.hpp"
#include "SDK/BP_EQC_BestEnemyCoreLoc_classes.hpp"
#include "SDK/BP_Enemy_PoisonAnt_classes.hpp"
#include "SDK/BP_Enemy_LightningAnt_classes.hpp"
#include "SDK/BP_Enemy_IceAnt_classes.hpp"
#include "SDK/BP_Enemy_Ant_classes.hpp"
#include "SDK/BP_Enemy_GrenadeCrab_classes.hpp"
#include "SDK/BP_Enemy_ShotgunCrab_classes.hpp"
#include "SDK/BP_Enemy_BlockerCrab_classes.hpp"
#include "SDK/BP_Enemy_EliteLightningCrab_classes.hpp"
#include "SDK/BP_Enemy_LaserCrab_classes.hpp"
#include "SDK/BP_Enemy_LauncherCrab_classes.hpp"
#include "SDK/BP_Enemy_LightningCrab_classes.hpp"
#include "SDK/BP_Enemy_MinigunCrab_classes.hpp"
#include "SDK/BP_Enemy_PoisonCrab_classes.hpp"
#include "SDK/BP_Enemy_IceCrab_classes.hpp"
#include "SDK/BP_Enemy_Crab_classes.hpp"
#include "SDK/BP_Enemy_ChaoticGrub_classes.hpp"
#include "SDK/BP_Enemy_ElitePoisonGrub_classes.hpp"
#include "SDK/BP_Enemy_EnragedGrub_classes.hpp"
#include "SDK/BP_Enemy_HomingGrub_classes.hpp"
#include "SDK/BP_Enemy_MiniGrub_classes.hpp"
#include "SDK/BP_Enemy_Grub_classes.hpp"
#include "SDK/BP_Enemy_BlockerSkull_classes.hpp"
#include "SDK/BP_Enemy_EliteBarrelSkull_classes.hpp"
#include "SDK/BP_Enemy_EliteFireSkull_classes.hpp"
#include "SDK/BP_Enemy_FireSkull_classes.hpp"
#include "SDK/BP_Enemy_LightningSkull_classes.hpp"
#include "SDK/BP_Enemy_PoisonSkull_classes.hpp"
#include "SDK/BP_Enemy_IceSkull_classes.hpp"
#include "SDK/BP_Enemy_EliteIceSkull_classes.hpp"
#include "SDK/BP_Enemy_Skull_classes.hpp"
#include "SDK/BP_Enemy_FireSlug_classes.hpp"
#include "SDK/BP_Enemy_LightningSlug_classes.hpp"
#include "SDK/BP_Enemy_IceSlug_classes.hpp"
#include "SDK/BP_DamageArea_PoisonSlug_Movement_classes.hpp"
#include "SDK/BP_DamageArea_PoisonSlug_classes.hpp"
#include "SDK/AnimBP_SK_Slug_classes.hpp"
#include "SDK/SK_Grub_AnimBP_classes.hpp"
#include "SDK/SK_Crab_AnimBP_Enemy_classes.hpp"
#include "SDK/UI_GameOver_OLD_classes.hpp"
#include "SDK/UI_MultiplayerMenu_OLD_classes.hpp"
#include "SDK/UI_InGameMenu_OLD_classes.hpp"
#include "SDK/UI_DifficultyMenu_OLD_classes.hpp"
#include "SDK/UI_CosmeticsMenu_OLD_classes.hpp"
#include "SDK/BP_PC_classes.hpp"
#include "SDK/BP_C_classes.hpp"
#include "SDK/BP_GM_classes.hpp"
#include "SDK/BP_SpawnPoint_Portal_classes.hpp"
#include "SDK/BP_Pickup_Lobby_classes.hpp"
#include "SDK/BP_Cosmetic_C_classes.hpp"
#include "SDK/BP_Totem_Multiplayer_classes.hpp"
#include "SDK/BP_Totem_Key_classes.hpp"
#include "SDK/BP_Totem_Difficulty_classes.hpp"
#include "SDK/BP_Totem_Cosmetics_classes.hpp"
#include "SDK/BP_Portal_Holdout_classes.hpp"
#include "SDK/BP_Portal_Duel_classes.hpp"
#include "SDK/BP_Portal_Arcade_classes.hpp"
#include "SDK/BP_LaunchPad_classes.hpp"
#include "SDK/BP_PhysicsActor_Crown_classes.hpp"
#include "SDK/UI_Sign_classes.hpp"
#include "SDK/BP_SignUI_classes.hpp"
#include "SDK/BP_Destructible_OpenBarrel_classes.hpp"
#include "SDK/BP_StatsPedestal_classes.hpp"
*/