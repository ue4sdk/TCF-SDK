// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Loadout_Weight_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Loadout_Weight.WBP_Loadout_Weight_C.OnWeightChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Loadout_Weight_C::OnWeightChanged()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Loadout_Weight.WBP_Loadout_Weight_C.OnWeightChanged"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Loadout_Weight.WBP_Loadout_Weight_C.OnInventoryFullCallback
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Loadout_Weight_C::OnInventoryFullCallback()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Loadout_Weight.WBP_Loadout_Weight_C.OnInventoryFullCallback"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Loadout_Weight.WBP_Loadout_Weight_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Loadout_Weight_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Loadout_Weight.WBP_Loadout_Weight_C.OnInitialized"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Loadout_Weight.WBP_Loadout_Weight_C.OnPlayerSetUpdatedCallback
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYStateInventoryComponent* stateInventoryComponent        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Loadout_Weight_C::OnPlayerSetUpdatedCallback(class UYStateInventoryComponent* stateInventoryComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Loadout_Weight.WBP_Loadout_Weight_C.OnPlayerSetUpdatedCallback"));

	struct
	{
		class UYStateInventoryComponent* stateInventoryComponent;
	} params;

	params.stateInventoryComponent = stateInventoryComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Loadout_Weight.WBP_Loadout_Weight_C.OnCompleteInitialization
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYRuntimeInitializationContext Result                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Loadout_Weight_C::OnCompleteInitialization(const struct FYRuntimeInitializationContext& Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Loadout_Weight.WBP_Loadout_Weight_C.OnCompleteInitialization"));

	struct
	{
		struct FYRuntimeInitializationContext Result;
	} params;

	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Loadout_Weight.WBP_Loadout_Weight_C.ExecuteUbergraph_WBP_Loadout_Weight
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Loadout_Weight_C::ExecuteUbergraph_WBP_Loadout_Weight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Loadout_Weight.WBP_Loadout_Weight_C.ExecuteUbergraph_WBP_Loadout_Weight"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Loadout_Weight.WBP_Loadout_Weight_C.OnWeightLimitReached__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Loadout_Weight_C::OnWeightLimitReached__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Loadout_Weight.WBP_Loadout_Weight_C.OnWeightLimitReached__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Loadout_Weight.WBP_Loadout_Weight_C.OnWeightUpdated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Loadout_Weight_C::OnWeightUpdated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Loadout_Weight.WBP_Loadout_Weight_C.OnWeightUpdated__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
