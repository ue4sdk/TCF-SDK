// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YPlayerVFXComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YPlayerVFXComponent_BP.YPlayerVFXComponent_BP_C.SpawnOrUpdateParticle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsFirstPerson                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UParticleSystem*         TP_Particle                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UParticleSystem*         FP_Particle                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerVFXComponent_BP_C::SpawnOrUpdateParticle(bool IsFirstPerson, class UParticleSystem* TP_Particle, class UParticleSystem* FP_Particle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerVFXComponent_BP.YPlayerVFXComponent_BP_C.SpawnOrUpdateParticle"));

	struct
	{
		bool                           IsFirstPerson;
		class UParticleSystem*         TP_Particle;
		class UParticleSystem*         FP_Particle;
	} params = {};

	params.IsFirstPerson = IsFirstPerson;
	params.TP_Particle = TP_Particle;
	params.FP_Particle = FP_Particle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayerVFXComponent_BP.YPlayerVFXComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UYPlayerVFXComponent_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerVFXComponent_BP.YPlayerVFXComponent_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayerVFXComponent_BP.YPlayerVFXComponent_BP_C.interaction_activateVFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerVFXComponent_BP_C::interaction_activateVFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerVFXComponent_BP.YPlayerVFXComponent_BP_C.interaction_activateVFX"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayerVFXComponent_BP.YPlayerVFXComponent_BP_C.interaction_deactivateVFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           interupted                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYPlayerVFXComponent_BP_C::interaction_deactivateVFX(bool interupted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerVFXComponent_BP.YPlayerVFXComponent_BP_C.interaction_deactivateVFX"));

	struct
	{
		bool                           interupted;
	} params = {};

	params.interupted = interupted;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayerVFXComponent_BP.YPlayerVFXComponent_BP_C.gearStore_activateVFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerVFXComponent_BP_C::gearStore_activateVFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerVFXComponent_BP.YPlayerVFXComponent_BP_C.gearStore_activateVFX"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayerVFXComponent_BP.YPlayerVFXComponent_BP_C.gearStore_deactivateVFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           interupted                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYPlayerVFXComponent_BP_C::gearStore_deactivateVFX(bool interupted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerVFXComponent_BP.YPlayerVFXComponent_BP_C.gearStore_deactivateVFX"));

	struct
	{
		bool                           interupted;
	} params = {};

	params.interupted = interupted;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayerVFXComponent_BP.YPlayerVFXComponent_BP_C.ExecuteUbergraph_YPlayerVFXComponent_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerVFXComponent_BP_C::ExecuteUbergraph_YPlayerVFXComponent_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerVFXComponent_BP.YPlayerVFXComponent_BP_C.ExecuteUbergraph_YPlayerVFXComponent_BP"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
