#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WereMole_ABP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass WereMole_ABP.WereMole_ABP_C
// 0x1588 (0x1848 - 0x02C0)
class UWereMole_ABP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x02C8(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                         // 0x02F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                         // 0x0320(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                         // 0x0348(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                         // 0x0370(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x0398(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x03C0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x03E8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                              // 0x0468(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6;                          // 0x0498(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2;                         // 0x0538(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                           // 0x0620(0x00E8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x0708(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5;                          // 0x0738(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x07D8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x0858(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x08D8(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                            // 0x0958(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x0A08(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x0A38(0x00B0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_2;                             // 0x0AE8(0x0018)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                           // 0x0B00(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x0BC0(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                           // 0x0C08(0x0158)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4;                          // 0x0D60(0x00A0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose;                               // 0x0E00(0x0018)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                    // 0x0E18(0x0020)
	struct FAnimNode_PowerIK_Ground                    AnimGraphNode_PowerIK_Ground;                             // 0x0E38(0x0390)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                    // 0x11C8(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5;                            // 0x11E8(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x1210(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                            // 0x1368(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                            // 0x1390(0x0028)
	unsigned char                                      UnknownData00[0x8];                                       // 0x13B8(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt;                                     // 0x13C0(0x01B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                          // 0x1570(0x00A0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x1610(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x1630(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                            // 0x1650(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                          // 0x1678(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x1718(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x1740(0x00A0)
	class AYAICharacter*                               CharacterAIOwner;                                         // 0x17E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Is_Dedicated_Server;                                      // 0x17E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x17E9(0x0003) MISSED OFFSET
	float                                              Direction;                                                // 0x17EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Speed;                                                    // 0x17F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               LookAtBool;                                               // 0x17F4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x3];                                       // 0x17F5(0x0003) MISSED OFFSET
	struct FVector                                     LookAtTarget;                                             // 0x17F8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      aiState;                                                  // 0x1804(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData03[0x3];                                       // 0x1805(0x0003) MISSED OFFSET
	float                                              LookAtDistance;                                           // 0x1808(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               PlayScanVariant;                                          // 0x180C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x3];                                       // 0x180D(0x0003) MISSED OFFSET
	class UAnimMontage*                                DeathMontage;                                             // 0x1810(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsAngry;                                                  // 0x1818(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData05[0x3];                                       // 0x1819(0x0003) MISSED OFFSET
	struct FName                                       Key_IsAngry;                                              // 0x181C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData06[0x4];                                       // 0x1824(0x0004) MISSED OFFSET
	struct FDataTableRowHandle                         TurnAnimations;                                           // 0x1828(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         TurnAggressiveAnimations;                                 // 0x1838(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass WereMole_ABP.WereMole_ABP_C"));
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
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WereMole_ABP_AnimGraphNode_TransitionResult_DA9141E24A4BC333843C06BDC5F4202C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WereMole_ABP_AnimGraphNode_TransitionResult_4E4449B742DF3A94B960DB9C81547F93();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WereMole_ABP_AnimGraphNode_TransitionResult_0E5300CE4A524323FA53C7B5C324881D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WereMole_ABP_AnimGraphNode_TransitionResult_2FACAC7F465D1381B5EA4D93FBAAEBB5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WereMole_ABP_AnimGraphNode_TransitionResult_6879A6EB4EC652FE3F3A9EBD2E441A6B();
	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintBeginPlay();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WereMole_ABP_AnimGraphNode_TransitionResult_7E301AE743D5A8A283CE3D80F16D71AC();
	void PlayAnimationMontage(const struct FYAIMontagePlayInfo& montageInfo);
	void ExecuteUbergraph_WereMole_ABP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
