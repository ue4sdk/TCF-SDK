#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Strider_ABP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Strider_ABP.Strider_ABP_C
// 0x15F0 (0x18B0 - 0x02C0)
class UStrider_ABP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x02C8(0x0030)
	struct FAnimNode_PowerIK_Ground                    AnimGraphNode_PowerIK_Ground;                             // 0x02F8(0x0390)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0688(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt;                                     // 0x0690(0x01B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                    // 0x0840(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                    // 0x0860(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5;                            // 0x0880(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4;                          // 0x08A8(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                           // 0x0948(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                            // 0x0AA0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                            // 0x0AC8(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x0AF0(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                          // 0x0B10(0x00A0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x0BB0(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x0BF8(0x0158)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                          // 0x0D50(0x00A0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_2;                             // 0x0DF0(0x0018)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x0E08(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                            // 0x0E28(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                         // 0x0E50(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                         // 0x0E78(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                         // 0x0EA0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                         // 0x0EC8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x0EF0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x0F18(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x0F40(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                              // 0x0FC0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x0FF0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                              // 0x1070(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3;                         // 0x10A0(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_2;                          // 0x1188(0x00B0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2;                         // 0x1238(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                           // 0x1320(0x00E8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x1408(0x0030)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                            // 0x1438(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x14E8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x1568(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x15E8(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x1618(0x00B0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose;                               // 0x16C8(0x0018)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                           // 0x16E0(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x17A0(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x17C8(0x00A0)
	float                                              Speed;                                                    // 0x1868(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Direction;                                                // 0x186C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AYAICharacter*                               CharacterAIOwner;                                         // 0x1870(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimMontage*                                DeathMontage;                                             // 0x1878(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         TurnAnimationRow;                                         // 0x1880(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	unsigned char                                      aiState;                                                  // 0x1890(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               LookAtBool;                                               // 0x1891(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x2];                                       // 0x1892(0x0002) MISSED OFFSET
	struct FVector                                     LookAtTarget;                                             // 0x1894(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Is_Dedicated_Server;                                      // 0x18A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x3];                                       // 0x18A1(0x0003) MISSED OFFSET
	float                                              LookAtDistance;                                           // 0x18A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       PhysBaseBone;                                             // 0x18A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass Strider_ABP.Strider_ABP_C");
		return ptr;
	}


	class UAnimMontage* GetGoToRestAnimationToPlay();
	class UAnimMontage* GetOutOfRestAnimationToPlay();
	class UAnimMontage* GetScanAnimation();
	class UAnimMontage* GetBuffAnimationToPlay();
	class UAnimMontage* GetBuffOutAnimationToPlay();
	class UAnimMontage* GetDeathAnimationToPlay(const struct FYDealtDamageData& deathHitInfo);
	class UAnimMontage* GetDodgeAnimationToPlay(float maxAllowedDodgeDistance, bool isToRight);
	class UAnimMontage* GetExplosionAnimationToPlay();
	class UAnimMontage* GetInterruptBuffAnimationToPlay();
	class UAnimMontage* GetInterruptSummonAnimationToPlay();
	class UAnimMontage* GetLeapForwardAnimationToPlay();
	class UAnimMontage* GetMeleeAttackAnimationToPlay(float distanceToTarget, int meleeArrayIndex, const struct FYAIMeleeAttackDefinition& meleeAttack);
	class UAnimMontage* GetMeleeDodgeBackAnimationToPlay();
	class UAnimMontage* GetRangedAttackAnimationToPlay();
	class UAnimMontage* GetReloadAnimationToPlay();
	class UAnimMontage* GetSnipedAnimationToPlay();
	class UAnimMontage* GetSpawnAnimationToPlay();
	class UAnimMontage* GetSummonAnimationToPlay();
	class UAnimMontage* GetSummonOutAnimationToPlay();
	class UAnimMontage* GetTauntAnimationToPlay();
	struct FYAIMontagePlayInfo GetTurnAnimationToPlay(float desiredTurnAngle);
	bool OnAttackPhaseStarted(class UYAIAttackComponent* attackComponent);
	bool OnRangedAttackCancelled();
	bool OnRangedAttackFire(class UYAIAttackComponent* attackComponent);
	class UAnimMontage* OnStabilityThresholdReached(const struct FYDealtDamageData& damageInfo, const struct FName& stabilityIdentifier, const struct FName& currentAIActionContext, float* yawRotationGoalWorldSpace, bool* canBeInterruptedByDodge);
	bool TriggerFlinchAnimation(const struct FYDealtDamageData& HitInfo);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_EFD3DDD241BA26BB4107AD828B8490FB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_B9F965ED4FFE1492EE429C91BFFDD5A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_94761E8C4C12EFC71D299CBA81052458();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_92CF45E84502C80827C9838450CB2EAA();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void PlayAnimationMontage(const struct FYAIMontagePlayInfo& montageInfo);
	void BlueprintBeginPlay();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_84F239574E7C37D564723B83E1B94E64();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_53C1DADB4FA61A004B7ECCAEEBEF6D32();
	void ExecuteUbergraph_Strider_ABP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
