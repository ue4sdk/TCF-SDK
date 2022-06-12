// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AA_Area_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AA_Area_BP.AA_Area_BP_C.GetDrawDebugLineColor
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCoreUObject_FColor     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FCoreUObject_FColor AAA_Area_BP_C::GetDrawDebugLineColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Area_BP.AA_Area_BP_C.GetDrawDebugLineColor"));

	struct
	{
		struct FCoreUObject_FColor     ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AA_Area_BP.AA_Area_BP_C.GetDrawDebugLineTo
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector AAA_Area_BP_C::GetDrawDebugLineTo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Area_BP.AA_Area_BP_C.GetDrawDebugLineTo"));

	struct
	{
		struct FVector                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AA_Area_BP.AA_Area_BP_C.GetDebugDescription
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash)

struct FString AAA_Area_BP_C::GetDebugDescription()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Area_BP.AA_Area_BP_C.GetDebugDescription"));

	struct
	{
		struct FString                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AA_Area_BP.AA_Area_BP_C.MarkRemainingActorsAsDepleted
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Area_BP_C::MarkRemainingActorsAsDepleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Area_BP.AA_Area_BP_C.MarkRemainingActorsAsDepleted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Area_BP.AA_Area_BP_C.SetupBIData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Area_BP_C::SetupBIData()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Area_BP.AA_Area_BP_C.SetupBIData"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Area_BP.AA_Area_BP_C.SendBIData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EBIHook_AreaStatus> Status                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_Area_BP_C::SendBIData(TEnumAsByte<EBIHook_AreaStatus> Status)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Area_BP.AA_Area_BP_C.SendBIData"));

	struct
	{
		TEnumAsByte<EBIHook_AreaStatus> Status;
	} params = {};

	params.Status = Status;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Area_BP.AA_Area_BP_C.SpawnAreaActorsNow
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Area_BP_C::SpawnAreaActorsNow()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Area_BP.AA_Area_BP_C.SpawnAreaActorsNow"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Area_BP.AA_Area_BP_C.DoDespawnCheck
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Area_BP_C::DoDespawnCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Area_BP.AA_Area_BP_C.DoDespawnCheck"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Area_BP.AA_Area_BP_C.BndEvt__YActivityComponent_K2Node_ComponentBoundEvent_0_OnSetupComplete__DelegateSignature
// (FUNC_BlueprintEvent)

void AAA_Area_BP_C::BndEvt__YActivityComponent_K2Node_ComponentBoundEvent_0_OnSetupComplete__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Area_BP.AA_Area_BP_C.BndEvt__YActivityComponent_K2Node_ComponentBoundEvent_0_OnSetupComplete__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Area_BP.AA_Area_BP_C.ReceiveDestroyed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AAA_Area_BP_C::ReceiveDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Area_BP.AA_Area_BP_C.ReceiveDestroyed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Area_BP.AA_Area_BP_C.SendBiDataThresholdCrossedOnce
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Area_BP_C::SendBiDataThresholdCrossedOnce()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Area_BP.AA_Area_BP_C.SendBiDataThresholdCrossedOnce"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Area_BP.AA_Area_BP_C.TrySendBIHookForFirstEvaluation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Area_BP_C::TrySendBIHookForFirstEvaluation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Area_BP.AA_Area_BP_C.TrySendBIHookForFirstEvaluation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Area_BP.AA_Area_BP_C.BndEvt__AA_Area_BP_YActivityRegister_K2Node_ComponentBoundEvent_1_OnActivityComponentAdded__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UYActivityComponent*     componentAdded                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_Area_BP_C::BndEvt__AA_Area_BP_YActivityRegister_K2Node_ComponentBoundEvent_1_OnActivityComponentAdded__DelegateSignature(class UYActivityComponent* componentAdded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Area_BP.AA_Area_BP_C.BndEvt__AA_Area_BP_YActivityRegister_K2Node_ComponentBoundEvent_1_OnActivityComponentAdded__DelegateSignature"));

	struct
	{
		class UYActivityComponent*     componentAdded;
	} params = {};

	params.componentAdded = componentAdded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Area_BP.AA_Area_BP_C.ExecuteUbergraph_AA_Area_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_Area_BP_C::ExecuteUbergraph_AA_Area_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Area_BP.AA_Area_BP_C.ExecuteUbergraph_AA_Area_BP"));

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
