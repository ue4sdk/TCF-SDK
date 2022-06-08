// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Transition_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Transition.WBP_Transition_C.BP_StartTransition
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          outDuration                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_Transition_C::BP_StartTransition(float* outDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Transition.WBP_Transition_C.BP_StartTransition"));

	struct
	{
		float                          outDuration;
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (outDuration != nullptr)
		*outDuration = params.outDuration;

	return params.ReturnValue;
}


// Function WBP_Transition.WBP_Transition_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Transition_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Transition.WBP_Transition_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Transition.WBP_Transition_C.OnTransitionInFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Transition_C::OnTransitionInFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Transition.WBP_Transition_C.OnTransitionInFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Transition.WBP_Transition_C.PlayTransition
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Transition_C::PlayTransition()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Transition.WBP_Transition_C.PlayTransition"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Transition.WBP_Transition_C.OnTransitionOutAnimationFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Transition_C::OnTransitionOutAnimationFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Transition.WBP_Transition_C.OnTransitionOutAnimationFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Transition.WBP_Transition_C.ExecuteUbergraph_WBP_Transition
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Transition_C::ExecuteUbergraph_WBP_Transition(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Transition.WBP_Transition_C.ExecuteUbergraph_WBP_Transition"));

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


// Function WBP_Transition.WBP_Transition_C.AnimationFinished__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Transition_C::AnimationFinished__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Transition.WBP_Transition_C.AnimationFinished__DelegateSignature"));

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
