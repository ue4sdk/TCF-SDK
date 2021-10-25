// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AA_LootContainers_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AA_LootContainers_BP.AA_LootContainers_BP_C.GetDebugDescription
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash)

struct FString AAA_LootContainers_BP_C::GetDebugDescription()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_LootContainers_BP.AA_LootContainers_BP_C.GetDebugDescription"));

	struct
	{
		struct FString                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AA_LootContainers_BP.AA_LootContainers_BP_C.GetDrawDebugLineColor
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCoreUObject_FColor     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FCoreUObject_FColor AAA_LootContainers_BP_C::GetDrawDebugLineColor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_LootContainers_BP.AA_LootContainers_BP_C.GetDrawDebugLineColor"));

	struct
	{
		struct FCoreUObject_FColor     ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AA_LootContainers_BP.AA_LootContainers_BP_C.GetDrawDebugLineTo
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector AAA_LootContainers_BP_C::GetDrawDebugLineTo()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_LootContainers_BP.AA_LootContainers_BP_C.GetDrawDebugLineTo"));

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AA_LootContainers_BP.AA_LootContainers_BP_C.BndEvt__YActivityComponent_K2Node_ComponentBoundEvent_1_OnSetupComplete__DelegateSignature
// (FUNC_BlueprintEvent)

void AAA_LootContainers_BP_C::BndEvt__YActivityComponent_K2Node_ComponentBoundEvent_1_OnSetupComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_LootContainers_BP.AA_LootContainers_BP_C.BndEvt__YActivityComponent_K2Node_ComponentBoundEvent_1_OnSetupComplete__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_LootContainers_BP.AA_LootContainers_BP_C.TryMarkAsDepleted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_LootContainers_BP_C::TryMarkAsDepleted()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_LootContainers_BP.AA_LootContainers_BP_C.TryMarkAsDepleted"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_LootContainers_BP.AA_LootContainers_BP_C.BndEvt__YActivityComponent_K2Node_ComponentBoundEvent_3_OnSetupComplete__DelegateSignature
// (FUNC_BlueprintEvent)

void AAA_LootContainers_BP_C::BndEvt__YActivityComponent_K2Node_ComponentBoundEvent_3_OnSetupComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_LootContainers_BP.AA_LootContainers_BP_C.BndEvt__YActivityComponent_K2Node_ComponentBoundEvent_3_OnSetupComplete__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_LootContainers_BP.AA_LootContainers_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAA_LootContainers_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_LootContainers_BP.AA_LootContainers_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_LootContainers_BP.AA_LootContainers_BP_C.OnInteractedWith
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_LootContainers_BP_C::OnInteractedWith()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_LootContainers_BP.AA_LootContainers_BP_C.OnInteractedWith"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_LootContainers_BP.AA_LootContainers_BP_C.ExecuteUbergraph_AA_LootContainers_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_LootContainers_BP_C::ExecuteUbergraph_AA_LootContainers_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_LootContainers_BP.AA_LootContainers_BP_C.ExecuteUbergraph_AA_LootContainers_BP"));

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
