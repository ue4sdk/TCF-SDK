#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AICharacter_Base_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AICharacter_Base_BP.AICharacter_Base_BP_C
// 0x00D5 (0x0935 - 0x0860)
class AAICharacter_Base_BP_C : public AYAICharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0860(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USphereComponent*                            WeaponCollision;                                          // 0x0868(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAI_MeleeAttackComponent_BP_C*               MeleeAttackComponent_BP;                                  // 0x0870(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UYFootstepComponent*                         YFootstep;                                                // 0x0878(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UYPlayerRenderTargetVfxMovementComponent_BP_C* YPlayerRenderTargetVfxMovementComponent_BP;               // 0x0880(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAIAttackComponent_BP_C*                     AIAttackComponent_BP;                                     // 0x0888(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    buffEffect;                                               // 0x0890(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAudioComponent*                             AudioStateComponent;                                      // 0x0898(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Timeline_Desaturation_0_0_1_0_2F5C408C423463E2A9D8D797D39FEDCA;// 0x08A0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Timeline_Desaturation__Direction_2F5C408C423463E2A9D8D797D39FEDCA;// 0x08A4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_Desaturation;                                    // 0x08A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              LastTimeTriggeredBuffAllies;                              // 0x08B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              LastTimeTriggeredSummonAllies;                            // 0x08B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              SummonStartTimestamp;                                     // 0x08B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               ShowInstigatorBuffEffect;                                 // 0x08BC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x08BD(0x0003) MISSED OFFSET
	int                                                SuccessfulSummonCount;                                    // 0x08C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               ShowBuffEffect;                                           // 0x08C4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               UseMasterBehavior;                                        // 0x08C5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x2];                                       // 0x08C6(0x0002) MISSED OFFSET
	class UBehaviorTree*                               CombatBehavior;                                           // 0x08C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AActor*                                      EvaluatedTarget;                                          // 0x08D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<class AActor*, struct FYAITargetInfo>         PerceivedTargets;                                         // 0x08D8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	struct FRotator                                    DefaultRotationRate;                                      // 0x0928(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               hasEmissiveMask;                                          // 0x0934(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AICharacter_Base_BP.AICharacter_Base_BP_C"));
		return ptr;
	}


	void ResetDefaultRotationRate();
	void DesaturateMaterialOnDeath(float TimingControl);
	void GetYAICtrl_Base(class AAICtrl_Base_BP_C** AsAICtrl_Base_BP);
	void Timeline_Desaturation__FinishedFunc();
	void Timeline_Desaturation__UpdateFunc();
	void BndEvt__m_aiDataComponent_K2Node_ComponentBoundEvent_0_OnAIStateChangedSignature__DelegateSignature(EYAIState oldState, EYAIState currentState);
	void ReceiveBeginPlay();
	void MulticastPlayBarkAudio(bool UseIdleBark);
	void StartBuffedEffect();
	void OnPerkChangedEvent();
	void StartBuffWarmup();
	void StartBuffInterrupt();
	void disableBuffVFXWhenHowlerDies(class UYHealthComponent* healthComponent, class AActor* Instigator);
	void StartSummon();
	void InterruptSummon();
	void BndEvt__m_deathComponent_K2Node_ComponentBoundEvent_1_OnDeathDelegate__DelegateSignature(const struct FYDealtDamageData& damageData);
	void BP_OnProjectileSpawnedEvent();
	void OnProjectileSpawned();
	void BndEvt__m_deathComponent_K2Node_ComponentBoundEvent_2_OnDeathDelegate__DelegateSignature(class UYCharacterDeathComponent* deathComponent);
	void ExecuteUbergraph_AICharacter_Base_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
