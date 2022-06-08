// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YLootContainer_Variation_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.BP_GetInteractionAvailableMessage
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// int                            numInputBindings               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText AYLootContainer_Variation_BP_C::BP_GetInteractionAvailableMessage(int numInputBindings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.BP_GetInteractionAvailableMessage"));

	struct
	{
		int                            numInputBindings;
		struct FText                   ReturnValue;
	} params = {};

	params.numInputBindings = numInputBindings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYLootContainer_Variation_BP_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
