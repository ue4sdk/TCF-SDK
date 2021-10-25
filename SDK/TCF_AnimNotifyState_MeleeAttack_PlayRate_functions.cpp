// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AnimNotifyState_MeleeAttack_PlayRate_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AnimNotifyState_MeleeAttack_PlayRate.AnimNotifyState_MeleeAttack_PlayRate_C.SetMontagePlayRateForPreview
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           PreviewEnabled                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper)
// class USkeletalMeshComponent*  MeshComponent                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// float                          NewPlayRate                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAnimNotifyState_MeleeAttack_PlayRate_C::SetMontagePlayRateForPreview(bool PreviewEnabled, class USkeletalMeshComponent* MeshComponent, float NewPlayRate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimNotifyState_MeleeAttack_PlayRate.AnimNotifyState_MeleeAttack_PlayRate_C.SetMontagePlayRateForPreview"));

	struct
	{
		bool                           PreviewEnabled;
		class USkeletalMeshComponent*  MeshComponent;
		float                          NewPlayRate;
	} params;

	params.PreviewEnabled = PreviewEnabled;
	params.MeshComponent = MeshComponent;
	params.NewPlayRate = NewPlayRate;

	UObject::ProcessEvent(fn, &params);
}


// Function AnimNotifyState_MeleeAttack_PlayRate.AnimNotifyState_MeleeAttack_PlayRate_C.Set Slo Mo Factor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class USkeletalMeshComponent*  MeshComponent                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// float                          NewSloMoFactor                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAnimNotifyState_MeleeAttack_PlayRate_C::Set_Slo_Mo_Factor(class USkeletalMeshComponent* MeshComponent, float NewSloMoFactor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimNotifyState_MeleeAttack_PlayRate.AnimNotifyState_MeleeAttack_PlayRate_C.Set Slo Mo Factor"));

	struct
	{
		class USkeletalMeshComponent*  MeshComponent;
		float                          NewSloMoFactor;
	} params;

	params.MeshComponent = MeshComponent;
	params.NewSloMoFactor = NewSloMoFactor;

	UObject::ProcessEvent(fn, &params);
}


// Function AnimNotifyState_MeleeAttack_PlayRate.AnimNotifyState_MeleeAttack_PlayRate_C.Received_NotifyEnd
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UAnimSequenceBase*       Animation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UAnimNotifyState_MeleeAttack_PlayRate_C::Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimNotifyState_MeleeAttack_PlayRate.AnimNotifyState_MeleeAttack_PlayRate_C.Received_NotifyEnd"));

	struct
	{
		class USkeletalMeshComponent*  MeshComp;
		class UAnimSequenceBase*       Animation;
		bool                           ReturnValue;
	} params;

	params.MeshComp = MeshComp;
	params.Animation = Animation;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AnimNotifyState_MeleeAttack_PlayRate.AnimNotifyState_MeleeAttack_PlayRate_C.Received_NotifyBegin
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UAnimSequenceBase*       Animation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          TotalDuration                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UAnimNotifyState_MeleeAttack_PlayRate_C::Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimNotifyState_MeleeAttack_PlayRate.AnimNotifyState_MeleeAttack_PlayRate_C.Received_NotifyBegin"));

	struct
	{
		class USkeletalMeshComponent*  MeshComp;
		class UAnimSequenceBase*       Animation;
		float                          TotalDuration;
		bool                           ReturnValue;
	} params;

	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.TotalDuration = TotalDuration;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
