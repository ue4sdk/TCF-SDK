// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_RetentionBonus_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_RetentionBonus.WBP_RetentionBonus_C.SequenceEvent__ENTRYPOINTWBP_RetentionBonus_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RetentionBonus_C::SequenceEvent__ENTRYPOINTWBP_RetentionBonus_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RetentionBonus.WBP_RetentionBonus_C.SequenceEvent__ENTRYPOINTWBP_RetentionBonus_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_RetentionBonus.WBP_RetentionBonus_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_RetentionBonus_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RetentionBonus.WBP_RetentionBonus_C.BP_AnimateVisibility"));

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params = {};

	params.newVisibility = newVisibility;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_RetentionBonus.WBP_RetentionBonus_C.InitRewards
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYRetentionProgress     progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_RetentionBonus_C::InitRewards(const struct FYRetentionProgress& progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RetentionBonus.WBP_RetentionBonus_C.InitRewards"));

	struct
	{
		struct FYRetentionProgress     progress;
	} params = {};

	params.progress = progress;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_RetentionBonus.WBP_RetentionBonus_C.FillOutRewardsWidgets
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FYRetentionBonusEntry> entries                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FYRetentionProgress     progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_RetentionBonus_C::FillOutRewardsWidgets(const struct FYRetentionProgress& progress, TArray<struct FYRetentionBonusEntry>* entries)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RetentionBonus.WBP_RetentionBonus_C.FillOutRewardsWidgets"));

	struct
	{
		TArray<struct FYRetentionBonusEntry> entries;
		struct FYRetentionProgress     progress;
	} params = {};

	params.progress = progress;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (entries != nullptr)
		*entries = params.entries;
}


// Function WBP_RetentionBonus.WBP_RetentionBonus_C.SequenceEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RetentionBonus_C::SequenceEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RetentionBonus.WBP_RetentionBonus_C.SequenceEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_RetentionBonus.WBP_RetentionBonus_C.BndEvt__WBP_RetentionBonus_WBP_Common_Btn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RetentionBonus_C::BndEvt__WBP_RetentionBonus_WBP_Common_Btn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RetentionBonus.WBP_RetentionBonus_C.BndEvt__WBP_RetentionBonus_WBP_Common_Btn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature"));

	struct
	{
		class UWBP_ButtonBase_Btn_C*   Button;
	} params = {};

	params.Button = Button;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_RetentionBonus.WBP_RetentionBonus_C.OnDataReceived
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYRetentionProgress     progressData                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_RetentionBonus_C::OnDataReceived(const struct FYRetentionProgress& progressData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RetentionBonus.WBP_RetentionBonus_C.OnDataReceived"));

	struct
	{
		struct FYRetentionProgress     progressData;
	} params = {};

	params.progressData = progressData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_RetentionBonus.WBP_RetentionBonus_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_RetentionBonus_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RetentionBonus.WBP_RetentionBonus_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_RetentionBonus.WBP_RetentionBonus_C.OnCompleteInitialization
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYRuntimeInitializationContext Result                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_RetentionBonus_C::OnCompleteInitialization(const struct FYRuntimeInitializationContext& Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RetentionBonus.WBP_RetentionBonus_C.OnCompleteInitialization"));

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


// Function WBP_RetentionBonus.WBP_RetentionBonus_C.ExecuteUbergraph_WBP_RetentionBonus
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RetentionBonus_C::ExecuteUbergraph_WBP_RetentionBonus(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RetentionBonus.WBP_RetentionBonus_C.ExecuteUbergraph_WBP_RetentionBonus"));

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


// Function WBP_RetentionBonus.WBP_RetentionBonus_C.OnDismissed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RetentionBonus_C::OnDismissed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RetentionBonus.WBP_RetentionBonus_C.OnDismissed__DelegateSignature"));

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
