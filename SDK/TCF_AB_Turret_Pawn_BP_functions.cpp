// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AB_Turret_Pawn_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AB_Turret_Pawn_BP.AB_Turret_Pawn_BP_C.OnMontageFinished
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAB_Turret_Pawn_BP_C::OnMontageFinished()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AB_Turret_Pawn_BP.AB_Turret_Pawn_BP_C.OnMontageFinished"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AB_Turret_Pawn_BP.AB_Turret_Pawn_BP_C.IsPlayingMontage
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAB_Turret_Pawn_BP_C::IsPlayingMontage(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AB_Turret_Pawn_BP.AB_Turret_Pawn_BP_C.IsPlayingMontage"));

	struct
	{
		bool                           Result;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function AB_Turret_Pawn_BP.AB_Turret_Pawn_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAB_Turret_Pawn_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AB_Turret_Pawn_BP.AB_Turret_Pawn_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AB_Turret_Pawn_BP.AB_Turret_Pawn_BP_C.OnTurretFired
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAB_Turret_Pawn_BP_C::OnTurretFired()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AB_Turret_Pawn_BP.AB_Turret_Pawn_BP_C.OnTurretFired"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AB_Turret_Pawn_BP.AB_Turret_Pawn_BP_C.MulticastOnTurretFired
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAB_Turret_Pawn_BP_C::MulticastOnTurretFired()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AB_Turret_Pawn_BP.AB_Turret_Pawn_BP_C.MulticastOnTurretFired"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AB_Turret_Pawn_BP.AB_Turret_Pawn_BP_C.PlayDeploy
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAB_Turret_Pawn_BP_C::PlayDeploy()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AB_Turret_Pawn_BP.AB_Turret_Pawn_BP_C.PlayDeploy"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AB_Turret_Pawn_BP.AB_Turret_Pawn_BP_C.OnDeath
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  instigatorActor                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAB_Turret_Pawn_BP_C::OnDeath(class AActor* instigatorActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AB_Turret_Pawn_BP.AB_Turret_Pawn_BP_C.OnDeath"));

	struct
	{
		class AActor*                  instigatorActor;
	} params;

	params.instigatorActor = instigatorActor;

	UObject::ProcessEvent(fn, &params);
}


// Function AB_Turret_Pawn_BP.AB_Turret_Pawn_BP_C.Setup Outlines
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAB_Turret_Pawn_BP_C::Setup_Outlines()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AB_Turret_Pawn_BP.AB_Turret_Pawn_BP_C.Setup Outlines"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AB_Turret_Pawn_BP.AB_Turret_Pawn_BP_C.Play_OroDeploy_VO
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAB_Turret_Pawn_BP_C::Play_OroDeploy_VO()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AB_Turret_Pawn_BP.AB_Turret_Pawn_BP_C.Play_OroDeploy_VO"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AB_Turret_Pawn_BP.AB_Turret_Pawn_BP_C.Play_OroShooting_VO
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAB_Turret_Pawn_BP_C::Play_OroShooting_VO()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AB_Turret_Pawn_BP.AB_Turret_Pawn_BP_C.Play_OroShooting_VO"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AB_Turret_Pawn_BP.AB_Turret_Pawn_BP_C.Play_OroIdle_VO
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAB_Turret_Pawn_BP_C::Play_OroIdle_VO()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AB_Turret_Pawn_BP.AB_Turret_Pawn_BP_C.Play_OroIdle_VO"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AB_Turret_Pawn_BP.AB_Turret_Pawn_BP_C.Play_OroSwitchTargets_VO
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAB_Turret_Pawn_BP_C::Play_OroSwitchTargets_VO()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AB_Turret_Pawn_BP.AB_Turret_Pawn_BP_C.Play_OroSwitchTargets_VO"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AB_Turret_Pawn_BP.AB_Turret_Pawn_BP_C.Play_OroDestroyed_VO
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAB_Turret_Pawn_BP_C::Play_OroDestroyed_VO()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AB_Turret_Pawn_BP.AB_Turret_Pawn_BP_C.Play_OroDestroyed_VO"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AB_Turret_Pawn_BP.AB_Turret_Pawn_BP_C.Play_OroShutdown_VO
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAB_Turret_Pawn_BP_C::Play_OroShutdown_VO()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AB_Turret_Pawn_BP.AB_Turret_Pawn_BP_C.Play_OroShutdown_VO"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AB_Turret_Pawn_BP.AB_Turret_Pawn_BP_C.ReceiveDestroyed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AAB_Turret_Pawn_BP_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AB_Turret_Pawn_BP.AB_Turret_Pawn_BP_C.ReceiveDestroyed"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AB_Turret_Pawn_BP.AB_Turret_Pawn_BP_C.TryPlayExplosionVFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAB_Turret_Pawn_BP_C::TryPlayExplosionVFX()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AB_Turret_Pawn_BP.AB_Turret_Pawn_BP_C.TryPlayExplosionVFX"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AB_Turret_Pawn_BP.AB_Turret_Pawn_BP_C.TurretStateChangedDelegate_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYTurretState                  newState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAB_Turret_Pawn_BP_C::TurretStateChangedDelegate_Event_1(EYTurretState newState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AB_Turret_Pawn_BP.AB_Turret_Pawn_BP_C.TurretStateChangedDelegate_Event_1"));

	struct
	{
		EYTurretState                  newState;
	} params;

	params.newState = newState;

	UObject::ProcessEvent(fn, &params);
}


// Function AB_Turret_Pawn_BP.AB_Turret_Pawn_BP_C.FadeOutLoopSfx
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAB_Turret_Pawn_BP_C::FadeOutLoopSfx()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AB_Turret_Pawn_BP.AB_Turret_Pawn_BP_C.FadeOutLoopSfx"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AB_Turret_Pawn_BP.AB_Turret_Pawn_BP_C.ExecuteUbergraph_AB_Turret_Pawn_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAB_Turret_Pawn_BP_C::ExecuteUbergraph_AB_Turret_Pawn_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AB_Turret_Pawn_BP.AB_Turret_Pawn_BP_C.ExecuteUbergraph_AB_Turret_Pawn_BP"));

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
