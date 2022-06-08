// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YProjectile_Bullet_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.SpawnSmokeTrailEmitter
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYProjectile_Bullet_BP_C::SpawnSmokeTrailEmitter()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.SpawnSmokeTrailEmitter"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.GetLocalController
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYProjectile_Bullet_BP_C::GetLocalController()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.GetLocalController"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.AdjustSmokeTrailParticleSystem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYProjectile_Bullet_BP_C::AdjustSmokeTrailParticleSystem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.AdjustSmokeTrailParticleSystem"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.UpdateTraceRotation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYProjectile_Bullet_BP_C::UpdateTraceRotation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.UpdateTraceRotation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.UpdateTracerWorldScale
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYProjectile_Bullet_BP_C::UpdateTracerWorldScale()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.UpdateTracerWorldScale"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.UpdateTracerLocation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYProjectile_Bullet_BP_C::UpdateTracerLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.UpdateTracerLocation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AYProjectile_Bullet_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.OnDestroyedCallback
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AYProjectile_Bullet_BP_C::OnDestroyedCallback(class AActor* DestroyedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.OnDestroyedCallback"));

	struct
	{
		class AActor*                  DestroyedActor;
	} params = {};

	params.DestroyedActor = DestroyedActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AYProjectile_Bullet_BP_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.BndEvt__m_movementComponent_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void AYProjectile_Bullet_BP_C::BndEvt__m_movementComponent_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.BndEvt__m_movementComponent_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature"));

	struct
	{
		struct FHitResult              ImpactResult;
	} params = {};

	params.ImpactResult = ImpactResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.UpdateTracer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYProjectile_Bullet_BP_C::UpdateTracer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.UpdateTracer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.Activate
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYProjectile_Bullet_BP_C::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.Activate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.ResetDoOnce_01
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYProjectile_Bullet_BP_C::ResetDoOnce_01()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.ResetDoOnce_01"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.ResetDoOnce_3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYProjectile_Bullet_BP_C::ResetDoOnce_3()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.ResetDoOnce_3"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.ExecuteUbergraph_YProjectile_Bullet_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AYProjectile_Bullet_BP_C::ExecuteUbergraph_YProjectile_Bullet_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YProjectile_Bullet_BP.YProjectile_Bullet_BP_C.ExecuteUbergraph_YProjectile_Bullet_BP"));

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
