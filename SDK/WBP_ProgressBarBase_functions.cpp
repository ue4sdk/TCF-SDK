// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_ProgressBarBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ProgressBarBase.WBP_ProgressBarBase_C.ForceSetProgress
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          desiredProgress                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ProgressBarBase_C::ForceSetProgress(float desiredProgress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressBarBase.WBP_ProgressBarBase_C.ForceSetProgress"));

	struct
	{
		float                          desiredProgress;
	} params = {};

	params.desiredProgress = desiredProgress;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ProgressBarBase.WBP_ProgressBarBase_C.UpdateProgressDelta
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ProgressBarBase_C::UpdateProgressDelta()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressBarBase.WBP_ProgressBarBase_C.UpdateProgressDelta"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ProgressBarBase.WBP_ProgressBarBase_C.UpdateProgressMain
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ProgressBarBase_C::UpdateProgressMain()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressBarBase.WBP_ProgressBarBase_C.UpdateProgressMain"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ProgressBarBase.WBP_ProgressBarBase_C.GetProgressDelta
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          progress                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ProgressBarBase_C::GetProgressDelta(float* progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressBarBase.WBP_ProgressBarBase_C.GetProgressDelta"));

	struct
	{
		float                          progress;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (progress != nullptr)
		*progress = params.progress;
}


// Function WBP_ProgressBarBase.WBP_ProgressBarBase_C.UpdateProgressBars
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ProgressBarBase_C::UpdateProgressBars(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressBarBase.WBP_ProgressBarBase_C.UpdateProgressBars"));

	struct
	{
		float                          DeltaTime;
	} params = {};

	params.DeltaTime = DeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ProgressBarBase.WBP_ProgressBarBase_C.GetProgressMain
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          progress                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ProgressBarBase_C::GetProgressMain(float* progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressBarBase.WBP_ProgressBarBase_C.GetProgressMain"));

	struct
	{
		float                          progress;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (progress != nullptr)
		*progress = params.progress;
}


// Function WBP_ProgressBarBase.WBP_ProgressBarBase_C.SetProgress
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          desiredProgress                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EHorizonTweenLerpMode> interpolationMode              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ProgressBarBase_C::SetProgress(float desiredProgress, TEnumAsByte<EHorizonTweenLerpMode> interpolationMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressBarBase.WBP_ProgressBarBase_C.SetProgress"));

	struct
	{
		float                          desiredProgress;
		TEnumAsByte<EHorizonTweenLerpMode> interpolationMode;
	} params = {};

	params.desiredProgress = desiredProgress;
	params.interpolationMode = interpolationMode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ProgressBarBase.WBP_ProgressBarBase_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ProgressBarBase_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressBarBase.WBP_ProgressBarBase_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ProgressBarBase.WBP_ProgressBarBase_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ProgressBarBase_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressBarBase.WBP_ProgressBarBase_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ProgressBarBase.WBP_ProgressBarBase_C.AnimationDone
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ProgressBarBase_C::AnimationDone()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressBarBase.WBP_ProgressBarBase_C.AnimationDone"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ProgressBarBase.WBP_ProgressBarBase_C.ExecuteUbergraph_WBP_ProgressBarBase
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ProgressBarBase_C::ExecuteUbergraph_WBP_ProgressBarBase(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressBarBase.WBP_ProgressBarBase_C.ExecuteUbergraph_WBP_ProgressBarBase"));

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


// Function WBP_ProgressBarBase.WBP_ProgressBarBase_C.OnAnimationDone__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ProgressBarBase_C::OnAnimationDone__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressBarBase.WBP_ProgressBarBase_C.OnAnimationDone__DelegateSignature"));

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
