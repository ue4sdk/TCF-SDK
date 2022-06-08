// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Transition_C_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Transition_C.WBP_Transition_C_C.BP_StartTransition
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          outDuration                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_Transition_C_C::BP_StartTransition(float* outDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Transition_C.WBP_Transition_C_C.BP_StartTransition"));

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


// Function WBP_Transition_C.WBP_Transition_C_C.SequenceEvent__ENTRYPOINTWBP_Transition_C_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_CelebrationBacker_Panel_F_C* WBP_CelebrationBacker_Panel_F  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Transition_C_C::SequenceEvent__ENTRYPOINTWBP_Transition_C_1(class UWBP_CelebrationBacker_Panel_F_C* WBP_CelebrationBacker_Panel_F)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Transition_C.WBP_Transition_C_C.SequenceEvent__ENTRYPOINTWBP_Transition_C_1"));

	struct
	{
		class UWBP_CelebrationBacker_Panel_F_C* WBP_CelebrationBacker_Panel_F;
	} params = {};

	params.WBP_CelebrationBacker_Panel_F = WBP_CelebrationBacker_Panel_F;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Transition_C.WBP_Transition_C_C.WBP_CelebrationBacker_Panel_F_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_CelebrationBacker_Panel_F_C* WBP_CelebrationBacker_Panel_F  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Transition_C_C::WBP_CelebrationBacker_Panel_F_Event_1(class UWBP_CelebrationBacker_Panel_F_C* WBP_CelebrationBacker_Panel_F)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Transition_C.WBP_Transition_C_C.WBP_CelebrationBacker_Panel_F_Event_1"));

	struct
	{
		class UWBP_CelebrationBacker_Panel_F_C* WBP_CelebrationBacker_Panel_F;
	} params = {};

	params.WBP_CelebrationBacker_Panel_F = WBP_CelebrationBacker_Panel_F;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Transition_C.WBP_Transition_C_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Transition_C_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Transition_C.WBP_Transition_C_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Transition_C.WBP_Transition_C_C.OnTransitionInFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Transition_C_C::OnTransitionInFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Transition_C.WBP_Transition_C_C.OnTransitionInFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Transition_C.WBP_Transition_C_C.PlayTransition
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Transition_C_C::PlayTransition()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Transition_C.WBP_Transition_C_C.PlayTransition"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Transition_C.WBP_Transition_C_C.OnTransitionOutAnimationFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Transition_C_C::OnTransitionOutAnimationFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Transition_C.WBP_Transition_C_C.OnTransitionOutAnimationFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Transition_C.WBP_Transition_C_C.ExecuteUbergraph_WBP_Transition_C
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Transition_C_C::ExecuteUbergraph_WBP_Transition_C(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Transition_C.WBP_Transition_C_C.ExecuteUbergraph_WBP_Transition_C"));

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


// Function WBP_Transition_C.WBP_Transition_C_C.AnimationFinished__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Transition_C_C::AnimationFinished__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Transition_C.WBP_Transition_C_C.AnimationFinished__DelegateSignature"));

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
