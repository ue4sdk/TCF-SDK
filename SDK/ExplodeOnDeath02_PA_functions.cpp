// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ExplodeOnDeath02_PA_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ExplodeOnDeath02_PA.ExplodeOnDeath02_PA_C.ExecuteRadialDamage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYPerkActivationData    initializationData             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_ContainsInstancedReference)

void UExplodeOnDeath02_PA_C::ExecuteRadialDamage(const struct FYPerkActivationData& initializationData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ExplodeOnDeath02_PA.ExplodeOnDeath02_PA_C.ExecuteRadialDamage"));

	struct
	{
		struct FYPerkActivationData    initializationData;
	} params = {};

	params.initializationData = initializationData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ExplodeOnDeath02_PA.ExplodeOnDeath02_PA_C.StartAction
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FYPerkActivationData    activationData                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_ContainsInstancedReference)

void UExplodeOnDeath02_PA_C::StartAction(const struct FYPerkActivationData& activationData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ExplodeOnDeath02_PA.ExplodeOnDeath02_PA_C.StartAction"));

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


// Function ExplodeOnDeath02_PA.ExplodeOnDeath02_PA_C.ExecuteUbergraph_ExplodeOnDeath02_PA
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UExplodeOnDeath02_PA_C::ExecuteUbergraph_ExplodeOnDeath02_PA(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ExplodeOnDeath02_PA.ExplodeOnDeath02_PA_C.ExecuteUbergraph_ExplodeOnDeath02_PA"));

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
