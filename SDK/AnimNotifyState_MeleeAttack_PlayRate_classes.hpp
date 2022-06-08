#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AnimNotifyState_MeleeAttack_PlayRate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AnimNotifyState_MeleeAttack_PlayRate.AnimNotifyState_MeleeAttack_PlayRate_C
// 0x0008 (0x0040 - 0x0038)
class UAnimNotifyState_MeleeAttack_PlayRate_C : public UYAnimNotifyState_PlayRate
{
public:
	float                                              OriginalSloMoFactor;                                      // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              TargetSloMoFactor;                                        // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AnimNotifyState_MeleeAttack_PlayRate.AnimNotifyState_MeleeAttack_PlayRate_C"));
		return ptr;
	}


	void SetMontagePlayRateForPreview(bool PreviewEnabled, class USkeletalMeshComponent* MeshComponent, float NewPlayRate);
	void Set_Slo_Mo_Factor(class USkeletalMeshComponent* MeshComponent, float NewSloMoFactor);
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
