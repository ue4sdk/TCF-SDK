// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PRO_ProjectileBounce_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PRO_ProjectileBounce_BP.PRO_ProjectileBounce_BP_C.TeleportActorToBlinkPosition
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  actorToTeleport                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APRO_ProjectileBounce_BP_C::TeleportActorToBlinkPosition(class AActor* actorToTeleport)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_ProjectileBounce_BP.PRO_ProjectileBounce_BP_C.TeleportActorToBlinkPosition"));

	struct
	{
		class AActor*                  actorToTeleport;
	} params = {};

	params.actorToTeleport = actorToTeleport;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_ProjectileBounce_BP.PRO_ProjectileBounce_BP_C.BndEvt__m_movementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
// struct FVector                 ImpactVelocity                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APRO_ProjectileBounce_BP_C::BndEvt__m_movementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_ProjectileBounce_BP.PRO_ProjectileBounce_BP_C.BndEvt__m_movementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature"));

	struct
	{
		struct FHitResult              ImpactResult;
		struct FVector                 ImpactVelocity;
	} params = {};

	params.ImpactResult = ImpactResult;
	params.ImpactVelocity = ImpactVelocity;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_ProjectileBounce_BP.PRO_ProjectileBounce_BP_C.ExecuteUbergraph_PRO_ProjectileBounce_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APRO_ProjectileBounce_BP_C::ExecuteUbergraph_PRO_ProjectileBounce_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_ProjectileBounce_BP.PRO_ProjectileBounce_BP_C.ExecuteUbergraph_PRO_ProjectileBounce_BP"));

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
