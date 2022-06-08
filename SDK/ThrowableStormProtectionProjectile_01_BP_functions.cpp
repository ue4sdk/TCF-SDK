// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ThrowableStormProtectionProjectile_01_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ThrowableStormProtectionProjectile_01_BP.ThrowableStormProtectionProjectile_01_BP_C.BndEvt__ThrowableStormProtectionProjectile_01_BP_m_movementComponent_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void AThrowableStormProtectionProjectile_01_BP_C::BndEvt__ThrowableStormProtectionProjectile_01_BP_m_movementComponent_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ThrowableStormProtectionProjectile_01_BP.ThrowableStormProtectionProjectile_01_BP_C.BndEvt__ThrowableStormProtectionProjectile_01_BP_m_movementComponent_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature"));

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


// Function ThrowableStormProtectionProjectile_01_BP.ThrowableStormProtectionProjectile_01_BP_C.ExecuteUbergraph_ThrowableStormProtectionProjectile_01_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AThrowableStormProtectionProjectile_01_BP_C::ExecuteUbergraph_ThrowableStormProtectionProjectile_01_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ThrowableStormProtectionProjectile_01_BP.ThrowableStormProtectionProjectile_01_BP_C.ExecuteUbergraph_ThrowableStormProtectionProjectile_01_BP"));

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
