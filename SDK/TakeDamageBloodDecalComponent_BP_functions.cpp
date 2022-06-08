// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TakeDamageBloodDecalComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TakeDamageBloodDecalComponent_BP.TakeDamageBloodDecalComponent_BP_C.BP_SpawnDamageDecal
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYWeaponDecalData       weaponDecalData                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// struct FVector                 impactLocation                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 impactDirection                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTakeDamageBloodDecalComponent_BP_C::BP_SpawnDamageDecal(const struct FYWeaponDecalData& weaponDecalData, const struct FVector& impactLocation, const struct FVector& impactDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TakeDamageBloodDecalComponent_BP.TakeDamageBloodDecalComponent_BP_C.BP_SpawnDamageDecal"));

	struct
	{
		struct FYWeaponDecalData       weaponDecalData;
		struct FVector                 impactLocation;
		struct FVector                 impactDirection;
	} params = {};

	params.weaponDecalData = weaponDecalData;
	params.impactLocation = impactLocation;
	params.impactDirection = impactDirection;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
