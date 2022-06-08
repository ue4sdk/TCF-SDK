// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AutomationManager_Base_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AutomationManager_Base_BP.AutomationManager_Base_BP_C.GetAutomationComponents
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<TSoftClassPtr<class UClass>> AutomationComponents           (CPF_Parm, CPF_OutParm)

void AAutomationManager_Base_BP_C::GetAutomationComponents(TArray<TSoftClassPtr<class UClass>>* AutomationComponents)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutomationManager_Base_BP.AutomationManager_Base_BP_C.GetAutomationComponents"));

	struct
	{
		TArray<TSoftClassPtr<class UClass>> AutomationComponents;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AutomationComponents != nullptr)
		*AutomationComponents = params.AutomationComponents;
}


// Function AutomationManager_Base_BP.AutomationManager_Base_BP_C.GetTimesInMatch
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            TimesVisited                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAutomationManager_Base_BP_C::GetTimesInMatch(int* TimesVisited)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutomationManager_Base_BP.AutomationManager_Base_BP_C.GetTimesInMatch"));

	struct
	{
		int                            TimesVisited;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TimesVisited != nullptr)
		*TimesVisited = params.TimesVisited;
}


// Function AutomationManager_Base_BP.AutomationManager_Base_BP_C.GetTimesInStation
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            TimesVisited                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAutomationManager_Base_BP_C::GetTimesInStation(int* TimesVisited)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutomationManager_Base_BP.AutomationManager_Base_BP_C.GetTimesInStation"));

	struct
	{
		int                            TimesVisited;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TimesVisited != nullptr)
		*TimesVisited = params.TimesVisited;
}


// Function AutomationManager_Base_BP.AutomationManager_Base_BP_C.GetAutomationStartData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FAutomationTestStartData AutomationStartData            (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void AAutomationManager_Base_BP_C::GetAutomationStartData(struct FAutomationTestStartData* AutomationStartData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutomationManager_Base_BP.AutomationManager_Base_BP_C.GetAutomationStartData"));

	struct
	{
		struct FAutomationTestStartData AutomationStartData;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AutomationStartData != nullptr)
		*AutomationStartData = params.AutomationStartData;
}


// Function AutomationManager_Base_BP.AutomationManager_Base_BP_C.OnLoaded_3AC8C3AF4DB1A28692971582B8A8C06E
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UObject*/      Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void AAutomationManager_Base_BP_C::OnLoaded_3AC8C3AF4DB1A28692971582B8A8C06E(class UClass* /*UObject*/ Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutomationManager_Base_BP.AutomationManager_Base_BP_C.OnLoaded_3AC8C3AF4DB1A28692971582B8A8C06E"));

	struct
	{
		class UClass* /*UObject*/      Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AutomationManager_Base_BP.AutomationManager_Base_BP_C.CreateNextAutomationComponent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAutomationManager_Base_BP_C::CreateNextAutomationComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutomationManager_Base_BP.AutomationManager_Base_BP_C.CreateNextAutomationComponent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AutomationManager_Base_BP.AutomationManager_Base_BP_C.EndAutomationTest
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAutomationManager_Base_BP_C::EndAutomationTest()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutomationManager_Base_BP.AutomationManager_Base_BP_C.EndAutomationTest"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AutomationManager_Base_BP.AutomationManager_Base_BP_C.OnAutomationComponentEndedCallback
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EAutomationResultCode> AutomationResultCode           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAutomationManager_Base_BP_C::OnAutomationComponentEndedCallback(TEnumAsByte<EAutomationResultCode> AutomationResultCode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutomationManager_Base_BP.AutomationManager_Base_BP_C.OnAutomationComponentEndedCallback"));

	struct
	{
		TEnumAsByte<EAutomationResultCode> AutomationResultCode;
	} params = {};

	params.AutomationResultCode = AutomationResultCode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AutomationManager_Base_BP.AutomationManager_Base_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAutomationManager_Base_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutomationManager_Base_BP.AutomationManager_Base_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AutomationManager_Base_BP.AutomationManager_Base_BP_C.OnAutomationTestTimedOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAutomationManager_Base_BP_C::OnAutomationTestTimedOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutomationManager_Base_BP.AutomationManager_Base_BP_C.OnAutomationTestTimedOut"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AutomationManager_Base_BP.AutomationManager_Base_BP_C.StartAutomationTest
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAutomationManager_Base_BP_C::StartAutomationTest()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutomationManager_Base_BP.AutomationManager_Base_BP_C.StartAutomationTest"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AutomationManager_Base_BP.AutomationManager_Base_BP_C.OnAutomationComponentChangedCallback
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAutomationManager_Base_BP_C::OnAutomationComponentChangedCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutomationManager_Base_BP.AutomationManager_Base_BP_C.OnAutomationComponentChangedCallback"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AutomationManager_Base_BP.AutomationManager_Base_BP_C.OnInitializationCallbackCompleted
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYRuntimeInitializationContext Result                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void AAutomationManager_Base_BP_C::OnInitializationCallbackCompleted(const struct FYRuntimeInitializationContext& Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutomationManager_Base_BP.AutomationManager_Base_BP_C.OnInitializationCallbackCompleted"));

	struct
	{
		struct FYRuntimeInitializationContext Result;
	} params = {};

	params.Result = Result;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AutomationManager_Base_BP.AutomationManager_Base_BP_C.ExecuteUbergraph_AutomationManager_Base_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAutomationManager_Base_BP_C::ExecuteUbergraph_AutomationManager_Base_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutomationManager_Base_BP.AutomationManager_Base_BP_C.ExecuteUbergraph_AutomationManager_Base_BP"));

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
