// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ExplodeOnDeath01_PA_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ExplodeOnDeath01_PA.ExplodeOnDeath01_PA_C.ExecuteRadialDamage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYPerkActivationData    PerkActivationData             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_ContainsInstancedReference)

void UExplodeOnDeath01_PA_C::ExecuteRadialDamage(const struct FYPerkActivationData& PerkActivationData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ExplodeOnDeath01_PA.ExplodeOnDeath01_PA_C.ExecuteRadialDamage"));

	struct
	{
		struct FYPerkActivationData    PerkActivationData;
	} params = {};

	params.PerkActivationData = PerkActivationData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ExplodeOnDeath01_PA.ExplodeOnDeath01_PA_C.StartAction
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FYPerkActivationData    activationData                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_ContainsInstancedReference)

void UExplodeOnDeath01_PA_C::StartAction(const struct FYPerkActivationData& activationData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ExplodeOnDeath01_PA.ExplodeOnDeath01_PA_C.StartAction"));

	struct
	{
		struct FYPerkActivationData    activationData;
	} params = {};

	params.activationData = activationData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ExplodeOnDeath01_PA.ExplodeOnDeath01_PA_C.ExecuteUbergraph_ExplodeOnDeath01_PA
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UExplodeOnDeath01_PA_C::ExecuteUbergraph_ExplodeOnDeath01_PA(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ExplodeOnDeath01_PA.ExplodeOnDeath01_PA_C.ExecuteUbergraph_ExplodeOnDeath01_PA"));

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
