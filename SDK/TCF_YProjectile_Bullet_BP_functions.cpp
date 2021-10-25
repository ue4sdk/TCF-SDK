// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YProjectile_Bullet_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AYProjectile_Bullet_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.triggerEvent_onDestroyed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AYProjectile_Bullet_BP_C::triggerEvent_onDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.triggerEvent_onDestroyed");

	struct
	{
		class AActor*                  DestroyedActor;
	} params;

	params.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(fn, &params);
}


// Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AYProjectile_Bullet_BP_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.BndEvt__m_movementComponent_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void AYProjectile_Bullet_BP_C::BndEvt__m_movementComponent_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.BndEvt__m_movementComponent_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature");

	struct
	{
		struct FHitResult              ImpactResult;
	} params;

	params.ImpactResult = ImpactResult;

	UObject::ProcessEvent(fn, &params);
}


// Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.UpdateTracer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYProjectile_Bullet_BP_C::UpdateTracer()
{
	static auto fn = UObject::FindObject<UFunction>("Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.UpdateTracer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.GetLocalController
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYProjectile_Bullet_BP_C::GetLocalController()
{
	static auto fn = UObject::FindObject<UFunction>("Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.GetLocalController");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.AdjustSmokeTrailParticleSystem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYProjectile_Bullet_BP_C::AdjustSmokeTrailParticleSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.AdjustSmokeTrailParticleSystem");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.UpdateTracerLocation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYProjectile_Bullet_BP_C::UpdateTracerLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.UpdateTracerLocation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.UpdateTracerWorldScale
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYProjectile_Bullet_BP_C::UpdateTracerWorldScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.UpdateTracerWorldScale");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.UpdateTraceRotation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYProjectile_Bullet_BP_C::UpdateTraceRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.UpdateTraceRotation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.ExecuteUbergraph_YProjectile_Bullet_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AYProjectile_Bullet_BP_C::ExecuteUbergraph_YProjectile_Bullet_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.ExecuteUbergraph_YProjectile_Bullet_BP");

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
