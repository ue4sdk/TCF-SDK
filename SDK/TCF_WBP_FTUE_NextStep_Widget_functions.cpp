// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_FTUE_NextStep_Widget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_FTUE_NextStep_Widget.WBP_FTUE_NextStep_Widget_C.SequenceEvent__ENTRYPOINTWBP_FTUE_NextStep_Widget_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Footer_B_Panel_C*   WBP_Footer_B_Panel             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_FTUE_NextStep_Widget_C::SequenceEvent__ENTRYPOINTWBP_FTUE_NextStep_Widget_1(class UWBP_Footer_B_Panel_C* WBP_Footer_B_Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FTUE_NextStep_Widget.WBP_FTUE_NextStep_Widget_C.SequenceEvent__ENTRYPOINTWBP_FTUE_NextStep_Widget_1");

	struct
	{
		class UWBP_Footer_B_Panel_C*   WBP_Footer_B_Panel;
	} params;

	params.WBP_Footer_B_Panel = WBP_Footer_B_Panel;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_FTUE_NextStep_Widget.WBP_FTUE_NextStep_Widget_C.UpdateVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               Visibility                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_FTUE_NextStep_Widget_C::UpdateVisibility(ESlateVisibility Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FTUE_NextStep_Widget.WBP_FTUE_NextStep_Widget_C.UpdateVisibility");

	struct
	{
		ESlateVisibility               Visibility;
	} params;

	params.Visibility = Visibility;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_FTUE_NextStep_Widget.WBP_FTUE_NextStep_Widget_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_FTUE_NextStep_Widget_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FTUE_NextStep_Widget.WBP_FTUE_NextStep_Widget_C.BP_AnimateVisibility");

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params;

	params.newVisibility = newVisibility;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_FTUE_NextStep_Widget.WBP_FTUE_NextStep_Widget_C.UpdateStep
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_FTUE_NextStep_Widget_C::UpdateStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FTUE_NextStep_Widget.WBP_FTUE_NextStep_Widget_C.UpdateStep");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_FTUE_NextStep_Widget.WBP_FTUE_NextStep_Widget_C.WBP_Footer_B_Panel_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Footer_B_Panel_C*   WBP_Footer_B_Panel             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_FTUE_NextStep_Widget_C::WBP_Footer_B_Panel_Event_1(class UWBP_Footer_B_Panel_C* WBP_Footer_B_Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FTUE_NextStep_Widget.WBP_FTUE_NextStep_Widget_C.WBP_Footer_B_Panel_Event_1");

	struct
	{
		class UWBP_Footer_B_Panel_C*   WBP_Footer_B_Panel;
	} params;

	params.WBP_Footer_B_Panel = WBP_Footer_B_Panel;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_FTUE_NextStep_Widget.WBP_FTUE_NextStep_Widget_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_FTUE_NextStep_Widget_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FTUE_NextStep_Widget.WBP_FTUE_NextStep_Widget_C.OnInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_FTUE_NextStep_Widget.WBP_FTUE_NextStep_Widget_C.OnAnimFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_FTUE_NextStep_Widget_C::OnAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FTUE_NextStep_Widget.WBP_FTUE_NextStep_Widget_C.OnAnimFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_FTUE_NextStep_Widget.WBP_FTUE_NextStep_Widget_C.BP_OnWidgetHidden
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_FTUE_NextStep_Widget_C::BP_OnWidgetHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FTUE_NextStep_Widget.WBP_FTUE_NextStep_Widget_C.BP_OnWidgetHidden");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_FTUE_NextStep_Widget.WBP_FTUE_NextStep_Widget_C.BP_OnProviderDataChanged
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   DataName                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   dataType                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_FTUE_NextStep_Widget_C::BP_OnProviderDataChanged(const struct FName& DataName, const struct FName& dataType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FTUE_NextStep_Widget.WBP_FTUE_NextStep_Widget_C.BP_OnProviderDataChanged");

	struct
	{
		struct FName                   DataName;
		struct FName                   dataType;
	} params;

	params.DataName = DataName;
	params.dataType = dataType;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_FTUE_NextStep_Widget.WBP_FTUE_NextStep_Widget_C.OnCompleteInitialization
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYRuntimeInitializationContext Result                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_FTUE_NextStep_Widget_C::OnCompleteInitialization(const struct FYRuntimeInitializationContext& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FTUE_NextStep_Widget.WBP_FTUE_NextStep_Widget_C.OnCompleteInitialization");

	struct
	{
		struct FYRuntimeInitializationContext Result;
	} params;

	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_FTUE_NextStep_Widget.WBP_FTUE_NextStep_Widget_C.HideWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_FTUE_NextStep_Widget_C::HideWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FTUE_NextStep_Widget.WBP_FTUE_NextStep_Widget_C.HideWidget");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_FTUE_NextStep_Widget.WBP_FTUE_NextStep_Widget_C.ExecuteUbergraph_WBP_FTUE_NextStep_Widget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_FTUE_NextStep_Widget_C::ExecuteUbergraph_WBP_FTUE_NextStep_Widget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FTUE_NextStep_Widget.WBP_FTUE_NextStep_Widget_C.ExecuteUbergraph_WBP_FTUE_NextStep_Widget");

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
