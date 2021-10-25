#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AICharacter_Base_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AICharacter_Base_BP.AICharacter_Base_BP_C
// 0x0248 (0x09E8 - 0x07A0)
class AAICharacter_Base_BP_C : public AYAICharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class USphereComponent*                            WeaponCollision;                                          // 0x07A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UAIHitReactionComponent_BP_C*                AIHitReactionComponent_BP;                                // 0x07B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UYFoliageAudioComponent*                     YFoliageAudio;                                            // 0x07B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UAI_MeleeAttackComponent_BP_C*               MeleeAttackComponent_BP;                                  // 0x07C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UYFootstepComponent*                         YFootstep;                                                // 0x07C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UYPlayerRenderTargetVfxMovementComponent_BP_C* YPlayerRenderTargetVfxMovementComponent_BP;               // 0x07D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UAIAttackComponent_BP_C*                     AIAttackComponent_BP;                                     // 0x07D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    buffEffect;                                               // 0x07E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UAudioComponent*                             AudioStateComponent;                                      // 0x07E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	float                                              Timeline_Desaturation_0_0_1_0_2F5C408C423463E2A9D8D797D39FEDCA;// 0x07F0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Timeline_Desaturation__Direction_2F5C408C423463E2A9D8D797D39FEDCA;// 0x07F4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07F5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_Desaturation;                                    // 0x07F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    DamageOverTime_PS;                                        // 0x0800(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              LastTimeTriggeredBuffAllies;                              // 0x0808(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              LastTimeTriggeredSummonAllies;                            // 0x080C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              SummonStartTimestamp;                                     // 0x0810(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               ShowInstigatorBuffEffect;                                 // 0x0814(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0815(0x0003) MISSED OFFSET
	int                                                SuccessfulSummonCount;                                    // 0x0818(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               ShowBuffEffect;                                           // 0x081C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               UseMasterBehavior;                                        // 0x081D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x2];                                       // 0x081E(0x0002) MISSED OFFSET
	class UBehaviorTree*                               CombatBehavior;                                           // 0x0820(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AActor*                                      EvaluatedTarget;                                          // 0x0828(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<class AActor*, struct FYAITargetInfo>         PerceivedTargets;                                         // 0x0830(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	class UPrimitiveComponent*                         NewVar_1;                                                 // 0x0880(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UPrimitiveComponent*                         NewVar_2;                                                 // 0x0888(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                OutlineColorValue;                                        // 0x0890(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      DummyVariable__Delete_Me;                                 // 0x0894(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0895(0x0003) MISSED OFFSET
	class UMaterialInstance*                           UpdatedMaterial;                                          // 0x0898(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UMaterialInstance*>                   TempMaterialArray_Updated;                                // 0x08A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UMaterialInstance*                           PowerLevel_2;                                             // 0x08B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UMaterialInstance*>                   TempMaterialArray_P1;                                     // 0x08B8(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	class UMaterialInstance*                           PowerLevel_3;                                             // 0x08C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UMaterialInstance*>                   TempMaterialArray_P2;                                     // 0x08D0(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	class UMaterialInstance*                           Hunt;                                                     // 0x08E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UMaterialInstance*>                   TempMaterialArray_Hunt;                                   // 0x08E8(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	class UMaterialInstance*                           Alpha;                                                    // 0x08F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UMaterialInstance*>                   TempMaterialArray_Alpha;                                  // 0x0900(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	class UMaterialInstance*                           Weak;                                                     // 0x0910(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UMaterialInstance*>                   TempMaterialArray_Weak;                                   // 0x0918(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	class UMaterialInstance*                           Season;                                                   // 0x0928(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UMaterialInstance*>                   TempMaterialArray_Season;                                 // 0x0930(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	EYAISpawnContexts                                  IdentifiedContext;                                        // 0x0940(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0941(0x0007) MISSED OFFSET
	class UParticleSystem*                             UpdatedFX;                                                // 0x0948(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystem*                             Fx_Stormy;                                                // 0x0950(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystem*                             Fx_Thunderous;                                            // 0x0958(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystem*                             Fx_Hunt;                                                  // 0x0960(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystem*                             Fx_Weak;                                                  // 0x0968(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystem*                             Fx_Alpha;                                                 // 0x0970(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystem*                             Fx_Season;                                                // 0x0978(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    Ref_UpdatedFX_PSC;                                        // 0x0980(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FRotator                                    DefaultRotationRate;                                      // 0x0988(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FVector                                     From_Direction;                                           // 0x0994(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       Bone_Name_Hit;                                            // 0x09A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       DamageOrigin;                                             // 0x09A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FName>                               ExcludedDamageOriginArray;                                // 0x09B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              VelocityMultiplier;                                       // 0x09C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData05[0x4];                                       // 0x09C4(0x0004) MISSED OFFSET
	TArray<struct FName>                               ExplosivesArray;                                          // 0x09C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              PhysImpulseMultiplier;                                    // 0x09D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     PhysicsImpulse;                                           // 0x09DC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass AICharacter_Base_BP.AICharacter_Base_BP_C");
		return ptr;
	}


	void ResetDefaultRotationRate();
	void DesaturateMaterialOnDeath(float TimingControl);
	void SetContextMaterial(EYAISpawnContexts Context);
	void GetYAICtrl_Base(class AAICtrl_Base_BP_C** AsAICtrl_Base_BP);
	void Timeline_Desaturation__FinishedFunc();
	void Timeline_Desaturation__UpdateFunc();
	void BndEvt__m_aiDataComponent_K2Node_ComponentBoundEvent_0_OnAIStateChangedSignature__DelegateSignature(EYAIState oldState, EYAIState currentState);
	void ReceiveBeginPlay();
	void MulticastPlayBarkAudio(bool UseIdleBark);
	void OnDotStateChanged_Event(bool dotState);
	void FinishBuff();
	void StartBuffedEffect();
	void CustomEvent_1();
	void StartBuffWarmup();
	void StartBuffInterrupt();
	void disableBuffVFXWhenHowlerDies(class UYHealthComponent* healthComponent, class AActor* Instigator);
	void FinishSummon();
	void StartSummon();
	void InterruptSummon();
	void CustomEvent_2(bool dotState);
	void BndEvt__m_deathComponent_K2Node_ComponentBoundEvent_1_OnDeathDelegate__DelegateSignature(const struct FYDealtDamageData& damageData);
	void CustomEvent_3();
	void OnProjectileSpawned();
	void BndEvt__m_deathComponent_K2Node_ComponentBoundEvent_2_OnDeathDelegate__DelegateSignature(class UYCharacterDeathComponent* deathComponent);
	void CE_SetStencilValueOnAllRelevantMeshes(bool RenderInStencil);
	void CE_DisableOutline();
	void CE_ExecuteOutlineFromPhaseChange();
	void BndEvt__m_damageComponent_K2Node_ComponentBoundEvent_1_YTakeDamageEvent__DelegateSignature(const struct FYDealtDamageData& Data);
	void ExecuteUbergraph_AICharacter_Base_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
