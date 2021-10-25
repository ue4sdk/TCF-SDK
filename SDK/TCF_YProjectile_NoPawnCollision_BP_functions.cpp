// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YProjectile_NoPawnCollision_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YProjectile_NoPawnCollision_BP.YProjectile_NoPawnCollision_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AYProjectile_NoPawnCollision_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function YProjectile_NoPawnCollision_BP.YProjectile_NoPawnCollision_BP_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YProjectile_NoPawnCollision_BP.YProjectile_NoPawnCollision_BP_C.triggerEvent_onProjectileStopped
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void AYProjectile_NoPawnCollision_BP_C::triggerEvent_onProjectileStopped(const struct FHitResult& ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function YProjectile_NoPawnCollision_BP.YProjectile_NoPawnCollision_BP_C.triggerEvent_onProjectileStopped");

	struct
	{
		struct FHitResult              ImpactResult;
	} params;

	params.ImpactResult = ImpactResult;

	UObject::ProcessEvent(fn, &params);
}


// Function YProjectile_NoPawnCollision_BP.YProjectile_NoPawnCollision_BP_C.triggerEvent_onDestroyed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AYProjectile_NoPawnCollision_BP_C::triggerEvent_onDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function YProjectile_NoPawnCollision_BP.YProjectile_NoPawnCollision_BP_C.triggerEvent_onDestroyed");

	struct
	{
		class AActor*                  DestroyedActor;
	} params;

	params.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(fn, &params);
}


// Function YProjectile_NoPawnCollision_BP.YProjectile_NoPawnCollision_BP_C.ExecuteUbergraph_YProjectile_NoPawnCollision_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AYProjectile_NoPawnCollision_BP_C::ExecuteUbergraph_YProjectile_NoPawnCollision_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function YProjectile_NoPawnCollision_BP.YProjectile_NoPawnCollision_BP_C.ExecuteUbergraph_YProjectile_NoPawnCollision_BP");

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
