// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AA_AIGeneric_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AA_AIGeneric_BP.AA_AIGeneric_BP_C.GetDrawDebugLineColor
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCoreUObject_FColor     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FCoreUObject_FColor AAA_AIGeneric_BP_C::GetDrawDebugLineColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_AIGeneric_BP.AA_AIGeneric_BP_C.GetDrawDebugLineColor"));

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


// Function AA_AIGeneric_BP.AA_AIGeneric_BP_C.GetDrawDebugLineTo
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector AAA_AIGeneric_BP_C::GetDrawDebugLineTo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_AIGeneric_BP.AA_AIGeneric_BP_C.GetDrawDebugLineTo"));

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


// Function AA_AIGeneric_BP.AA_AIGeneric_BP_C.GetDebugDescription
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash)

struct FString AAA_AIGeneric_BP_C::GetDebugDescription()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_AIGeneric_BP.AA_AIGeneric_BP_C.GetDebugDescription"));

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


// Function AA_AIGeneric_BP.AA_AIGeneric_BP_C.SetDebugStringAndLog
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 debugString                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void AAA_AIGeneric_BP_C::SetDebugStringAndLog(const struct FString& debugString)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_AIGeneric_BP.AA_AIGeneric_BP_C.SetDebugStringAndLog"));

	struct
	{
		struct FString                 debugString;
	} params = {};

	params.debugString = debugString;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_AIGeneric_BP.AA_AIGeneric_BP_C.ReceiveDestroyed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AAA_AIGeneric_BP_C::ReceiveDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_AIGeneric_BP.AA_AIGeneric_BP_C.ReceiveDestroyed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_AIGeneric_BP.AA_AIGeneric_BP_C.BndEvt__YActivityComponent_K2Node_ComponentBoundEvent_0_OnSetupComplete__DelegateSignature
// (FUNC_BlueprintEvent)

void AAA_AIGeneric_BP_C::BndEvt__YActivityComponent_K2Node_ComponentBoundEvent_0_OnSetupComplete__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_AIGeneric_BP.AA_AIGeneric_BP_C.BndEvt__YActivityComponent_K2Node_ComponentBoundEvent_0_OnSetupComplete__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_AIGeneric_BP.AA_AIGeneric_BP_C.OnPersistentDataPurged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYPersistentData*        dataPurged                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_AIGeneric_BP_C::OnPersistentDataPurged_Event_1(class UYPersistentData* dataPurged)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_AIGeneric_BP.AA_AIGeneric_BP_C.OnPersistentDataPurged_Event_1"));

	struct
	{
		class UYPersistentData*        dataPurged;
	} params = {};

	params.dataPurged = dataPurged;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_AIGeneric_BP.AA_AIGeneric_BP_C.OnSquadDied_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYPersistentDataAISquad* squadDied                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  killer                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_AIGeneric_BP_C::OnSquadDied_Event_1(class UYPersistentDataAISquad* squadDied, class AActor* killer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_AIGeneric_BP.AA_AIGeneric_BP_C.OnSquadDied_Event_1"));

	struct
	{
		class UYPersistentDataAISquad* squadDied;
		class AActor*                  killer;
	} params = {};

	params.squadDied = squadDied;
	params.killer = killer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_AIGeneric_BP.AA_AIGeneric_BP_C.MarkAsDepleted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_AIGeneric_BP_C::MarkAsDepleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_AIGeneric_BP.AA_AIGeneric_BP_C.MarkAsDepleted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_AIGeneric_BP.AA_AIGeneric_BP_C.ExecuteUbergraph_AA_AIGeneric_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_AIGeneric_BP_C::ExecuteUbergraph_AA_AIGeneric_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_AIGeneric_BP.AA_AIGeneric_BP_C.ExecuteUbergraph_AA_AIGeneric_BP"));

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
