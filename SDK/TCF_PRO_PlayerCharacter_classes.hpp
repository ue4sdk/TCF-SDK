#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_PRO_PlayerCharacter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PRO_PlayerCharacter.PRO_PlayerCharacter_C
// 0x01DC (0x08BC - 0x06E0)
class APRO_PlayerCharacter_C : public AYPlayerCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UPlayerDBNOComponent_BP_C*                   PlayerDBNOComponent_BP;                                   // 0x06E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UPlayer_InventoryAudioComponent_BP_C*        Player_InventoryAudioComponent_BP;                        // 0x06F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UTakeDamageBloodDecalComponent_BP_C*         TakeDamageBloodDecalComponent_BP;                         // 0x06F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UWeaponScopeComponent_BP_C*                  WeaponScopeComponent_BP;                                  // 0x0700(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UFlinchesComponent_BP_C*                     FlinchesComponent_BP;                                     // 0x0708(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UYPlayerCharacterEffortsComponent_BP_C*      YPlayerCharacterEffortsComponent_BP;                      // 0x0710(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UHelmetGoggleComponent_BP_C*                 HelmetGoggleComponent_BP;                                 // 0x0718(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UTacticalFlashLightComponent_BP_C*           TacticalFlashLightComponent_BP;                           // 0x0720(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UPlayer_MeleeAttackComponent_BP_C*           Player_MeleeAttackComponent_BP;                           // 0x0728(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UPlayerCarryingComponent_BP_C*               PlayerCarryingComponent_BP;                               // 0x0730(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UInteractionAnimComponent_BP_C*              InteractionAnimComponent_BP;                              // 0x0738(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UYCharacterScopeGlintComponent_BP_C*         ScopeGlintComponent_BP;                                   // 0x0740(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UAudioComponent*                             SFX_PlayerEfforts_Stamina;                                // 0x0748(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UYPlayerTriggerAISenseComponent_BP_C*        YPlayerTriggerAISenseComponent_BP;                        // 0x0750(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UYPlayerConsumableComponent_BP_C*            YPlayerConsumableComponent_BP;                            // 0x0758(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    FX_PlayedEvacuateCharging_PS;                             // 0x0760(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UYPingableComponent*                         YPingable;                                                // 0x0768(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UPlayerCharacterOutlineComponent_C*          PlayerCharacterOutlineComponent;                          // 0x0770(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UYPlayerRenderTargetVfxMovementComponent_BP_C* YPlayerRenderTargetVfxMovementComponent_BP;               // 0x0778(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UYPlayerSFXComponent_BP_C*                   YPlayerSFXComponent_BP;                                   // 0x0780(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UPlayerCharacterCombatAwarenessComponent_BP_C* PlayerCharacterCombatAwarenessComponent_BP;               // 0x0788(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UYPlayerVFXComponent_BP_C*                   PRO_PlayerCharacter_VFXComponent;                         // 0x0790(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class USkeletalMeshComponent*                      DBNO_FoamMesh_SK;                                         // 0x0798(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UYPlayerEscapeComponent_BP_C*                YPlayerEscapeComponent_BP;                                // 0x07A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UYPlayerAnimEvalComponent_BP_C*              YPlayerAnimEvalComponent_BP;                              // 0x07A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UYAIPerceptionStimuliSourceComp*             YAIPerceptionStimuliSourceComp;                           // 0x07B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    trail;                                                    // 0x07B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UPostProcessComponent*                       PostProcess;                                              // 0x07C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	float                                              STE_ChargeVFX_TL_NewTrack_0_E03AF13C4D6D893B0E8DC58C085F8278;// 0x07C8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    STE_ChargeVFX_TL__Direction_E03AF13C4D6D893B0E8DC58C085F8278;// 0x07CC(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07CD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          STE_ChargeVFX_TL;                                         // 0x07D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	bool                                               IsTagged;                                                 // 0x07D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x07D9(0x0003) MISSED OFFSET
	float                                              SlowdownResetTime;                                        // 0x07DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              SlowdownMaxSpeed;                                         // 0x07E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              SlowdownDuration;                                         // 0x07E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              SlowdownImmunityThreshold;                                // 0x07E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsSlowdown;                                               // 0x07EC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x3];                                       // 0x07ED(0x0003) MISSED OFFSET
	struct FGuid                                       AddedSlowdown;                                            // 0x07F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FGuid                                       AttributeModifierMovement;                                // 0x0800(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsHOT;                                                    // 0x0810(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0811(0x0003) MISSED OFFSET
	struct FGuid                                       AddedHOT;                                                 // 0x0814(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0824(0x0004) MISSED OFFSET
	class AYPlayerController*                          YPlayerCtrl;                                              // 0x0828(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    DamageOverTime_PS;                                        // 0x0830(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTextRenderComponent*                        BugReportingTextComponent;                                // 0x0838(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsCharacterNinja;                                         // 0x0840(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsSlowdownImmune;                                         // 0x0841(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0842(0x0002) MISSED OFFSET
	float                                              SlowdownBuildUp;                                          // 0x0844(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              LastDamageTaken;                                          // 0x0848(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData06[0x4];                                       // 0x084C(0x0004) MISSED OFFSET
	struct FTimerHandle                                TimerHandleClearSlowdown;                                 // 0x0850(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    EoM_Post_MID;                                             // 0x0858(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AMapAreaLocation_BP_C*                       LocationConditionChallengeDBNO;                           // 0x0860(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              PvPTargetResetTime;                                       // 0x0868(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData07[0x4];                                       // 0x086C(0x0004) MISSED OFFSET
	class AActor*                                      DamageCauser;                                             // 0x0870(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                MaxCreditsToDropOnDeathOrRecall;                          // 0x0878(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData08[0x4];                                       // 0x087C(0x0004) MISSED OFFSET
	struct FDataTableRowHandle                         VO_RecallChargeLost;                                      // 0x0880(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         LeanRowHandle;                                            // 0x0890(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FVector                                     LastDamageDirection;                                      // 0x08A0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     LastDamageHitLocation;                                    // 0x08AC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              PawnCleanUpDelay;                                         // 0x08B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass PRO_PlayerCharacter.PRO_PlayerCharacter_C");
		return ptr;
	}


	struct FYImpactEffectReceiverData GetCustomImpactEffectData();
	void GetWeaponFirstPersonMesh(class UYSkeletalMeshComponentFOV** m_weaponMesh);
	void OnLeanDirectionChanged();
	void PlayCameraShakeOnOwningPlayer(class UClass* Shake);
	void OnRep_IsHOT();
	void OnRep_IsSlowdown();
	void OnRep_IsTagged();
	void OnRep_IsCloaked();
	void GetAnimBlueprint(class UAnimInstance** AnimInstance);
	void SwitchToThirdPerson();
	void STE_ChargeVFX_TL__FinishedFunc();
	void STE_ChargeVFX_TL__UpdateFunc();
	void InpActEvt_ToggleNightVision_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_ToggleLight_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void Server_EH_Trail(float Duration);
	void Server_EH_Slowdown(bool IsSticky);
	void Server_EH_HOT(bool IsInRange);
	void CloakStateChanged(bool cloakState);
	void OnEmptyHealth(class UYHealthComponent* healthComponent, class AActor* Instigator);
	void OnEndProne(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	void OnStartProne(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	void UpdatePhysMaterials();
	void BndEvt__m_deathComponent_K2Node_ComponentBoundEvent_5_OnDeathDelegate__DelegateSignature(class UYCharacterDeathComponent* deathComponent);
	void OnPerkAdded(const struct FYPerk& perk);
	void HookUpReportingBugVisualization();
	void OnPerkDeactivated(const struct FYPerk& perk);
	void BndEvt__m_damageComponent_K2Node_ComponentBoundEvent_1_YTakeDamageEvent__DelegateSignature(const struct FYDealtDamageData& Data);
	void OnFinishedDamage();
	void OnVehicleEnter();
	void OnVehicleExit();
	void BndEvt__m_stateComponent_K2Node_ComponentBoundEvent_8_YAnyStateChanged__DelegateSignature(EYStateChangeType stateChangeType);
	void DBNO_Activate_Server();
	void DBNO_Deactivate_Server(bool interupted);
	void UpdateControllerYawRotation();
	void StarTrekEvac_FX_Start(float Duration);
	void StarTrekEvac_FX_Stop();
	void OnDeath_Implemented();
	void BndEvt__m_interactionComponent_K2Node_ComponentBoundEvent_3_OnPlayerInteractionStarted__DelegateSignature(EYInteractionType interactionType, class AYPlayerController_Match* interactingPlayer);
	void BndEvt__m_characterCustomizationComponent_K2Node_ComponentBoundEvent_4_YOnMeshInitialized__DelegateSignature();
	void BndEvt__m_armorComponent_K2Node_ComponentBoundEvent_2_YArmorComponentUpdatedSignature__DelegateSignature(class UYArmorComponent* armorComponent);
	void BP_OnDeath_Event_1(class UYCharacterDeathComponent* deathComponent);
	void ExecuteUbergraph_PRO_PlayerCharacter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
