// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YProjectile_DirtBeast_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YProjectile_DirtBeast_BP.YProjectile_DirtBeast_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AYProjectile_DirtBeast_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YProjectile_DirtBeast_BP.YProjectile_DirtBeast_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YProjectile_DirtBeast_BP.YProjectile_DirtBeast_BP_C.triggerEvent_onProjectileStopped
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void AYProjectile_DirtBeast_BP_C::triggerEvent_onProjectileStopped(const struct FHitResult& ImpactResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YProjectile_DirtBeast_BP.YProjectile_DirtBeast_BP_C.triggerEvent_onProjectileStopped"));

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


// Function YProjectile_DirtBeast_BP.YProjectile_DirtBeast_BP_C.triggerEvent_onDestroyed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AYProjectile_DirtBeast_BP_C::triggerEvent_onDestroyed(class AActor* DestroyedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YProjectile_DirtBeast_BP.YProjectile_DirtBeast_BP_C.triggerEvent_onDestroyed"));

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


// Function YProjectile_DirtBeast_BP.YProjectile_DirtBeast_BP_C.ExecuteUbergraph_YProjectile_DirtBeast_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AYProjectile_DirtBeast_BP_C::ExecuteUbergraph_YProjectile_DirtBeast_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YProjectile_DirtBeast_BP.YProjectile_DirtBeast_BP_C.ExecuteUbergraph_YProjectile_DirtBeast_BP"));

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
