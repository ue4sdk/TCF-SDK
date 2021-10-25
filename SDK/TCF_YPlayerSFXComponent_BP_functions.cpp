// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YPlayerSFXComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YPlayerSFXComponent_BP.YPlayerSFXComponent_BP_C.SpawnOrUpdateParticle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsFirstPerson                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UParticleSystem*         TP_Particle                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UParticleSystem*         FP_Particle                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerSFXComponent_BP_C::SpawnOrUpdateParticle(bool IsFirstPerson, class UParticleSystem* TP_Particle, class UParticleSystem* FP_Particle)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerSFXComponent_BP.YPlayerSFXComponent_BP_C.SpawnOrUpdateParticle");

	struct
	{
		bool                           IsFirstPerson;
		class UParticleSystem*         TP_Particle;
		class UParticleSystem*         FP_Particle;
	} params;

	params.IsFirstPerson = IsFirstPerson;
	params.TP_Particle = TP_Particle;
	params.FP_Particle = FP_Particle;

	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerSFXComponent_BP.YPlayerSFXComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UYPlayerSFXComponent_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerSFXComponent_BP.YPlayerSFXComponent_BP_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerSFXComponent_BP.YPlayerSFXComponent_BP_C.OnEnterSlideState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerSFXComponent_BP_C::OnEnterSlideState()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerSFXComponent_BP.YPlayerSFXComponent_BP_C.OnEnterSlideState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerSFXComponent_BP.YPlayerSFXComponent_BP_C.BP_OnJumped_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            jumpCount                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerSFXComponent_BP_C::BP_OnJumped_Event(int jumpCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerSFXComponent_BP.YPlayerSFXComponent_BP_C.BP_OnJumped_Event");

	struct
	{
		int                            jumpCount;
	} params;

	params.jumpCount = jumpCount;

	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerSFXComponent_BP.YPlayerSFXComponent_BP_C.OnChargingAttack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerSFXComponent_BP_C::OnChargingAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerSFXComponent_BP.YPlayerSFXComponent_BP_C.OnChargingAttack");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerSFXComponent_BP.YPlayerSFXComponent_BP_C.OnStopChargingAttack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           interupted                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYPlayerSFXComponent_BP_C::OnStopChargingAttack(bool interupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerSFXComponent_BP.YPlayerSFXComponent_BP_C.OnStopChargingAttack");

	struct
	{
		bool                           interupted;
	} params;

	params.interupted = interupted;

	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerSFXComponent_BP.YPlayerSFXComponent_BP_C.TryStartChargingAttackSound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerSFXComponent_BP_C::TryStartChargingAttackSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerSFXComponent_BP.YPlayerSFXComponent_BP_C.TryStartChargingAttackSound");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerSFXComponent_BP.YPlayerSFXComponent_BP_C.ExecuteUbergraph_YPlayerSFXComponent_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerSFXComponent_BP_C::ExecuteUbergraph_YPlayerSFXComponent_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerSFXComponent_BP.YPlayerSFXComponent_BP_C.ExecuteUbergraph_YPlayerSFXComponent_BP");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
