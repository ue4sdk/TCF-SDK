// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_RetentionBonus_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_RetentionBonus.WBP_RetentionBonus_C.SequenceEvent__ENTRYPOINTWBP_RetentionBonus_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RetentionBonus_C::SequenceEvent__ENTRYPOINTWBP_RetentionBonus_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RetentionBonus.WBP_RetentionBonus_C.SequenceEvent__ENTRYPOINTWBP_RetentionBonus_1");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RetentionBonus.WBP_RetentionBonus_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_RetentionBonus_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RetentionBonus.WBP_RetentionBonus_C.BP_AnimateVisibility");

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params;

	params.newVisibility = newVisibility;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_RetentionBonus.WBP_RetentionBonus_C.InitRewards
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYRetentionProgress     progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_RetentionBonus_C::InitRewards(const struct FYRetentionProgress& progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RetentionBonus.WBP_RetentionBonus_C.InitRewards");

	struct
	{
		struct FYRetentionProgress     progress;
	} params;

	params.progress = progress;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RetentionBonus.WBP_RetentionBonus_C.FillOutRewardsWidgets
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FYRetentionBonusEntry> entries                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FYRetentionProgress     progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_RetentionBonus_C::FillOutRewardsWidgets(const struct FYRetentionProgress& progress, TArray<struct FYRetentionBonusEntry>* entries)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RetentionBonus.WBP_RetentionBonus_C.FillOutRewardsWidgets");

	struct
	{
		TArray<struct FYRetentionBonusEntry> entries;
		struct FYRetentionProgress     progress;
	} params;

	params.progress = progress;

	UObject::ProcessEvent(fn, &params);

	if (entries != nullptr)
		*entries = params.entries;
}


// Function WBP_RetentionBonus.WBP_RetentionBonus_C.SequenceEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RetentionBonus_C::SequenceEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RetentionBonus.WBP_RetentionBonus_C.SequenceEvent_1");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RetentionBonus.WBP_RetentionBonus_C.BndEvt__WBP_RetentionBonus_WBP_Common_Btn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RetentionBonus_C::BndEvt__WBP_RetentionBonus_WBP_Common_Btn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RetentionBonus.WBP_RetentionBonus_C.BndEvt__WBP_RetentionBonus_WBP_Common_Btn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
		class UWBP_ButtonBase_Btn_C*   Button;
	} params;

	params.Button = Button;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RetentionBonus.WBP_RetentionBonus_C.OnDataReceived
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYRetentionProgress     progressData                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_RetentionBonus_C::OnDataReceived(const struct FYRetentionProgress& progressData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RetentionBonus.WBP_RetentionBonus_C.OnDataReceived");

	struct
	{
		struct FYRetentionProgress     progressData;
	} params;

	params.progressData = progressData;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RetentionBonus.WBP_RetentionBonus_C.BP_OnWidgetShown
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_RetentionBonus_C::BP_OnWidgetShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RetentionBonus.WBP_RetentionBonus_C.BP_OnWidgetShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RetentionBonus.WBP_RetentionBonus_C.ExecuteUbergraph_WBP_RetentionBonus
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RetentionBonus_C::ExecuteUbergraph_WBP_RetentionBonus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RetentionBonus.WBP_RetentionBonus_C.ExecuteUbergraph_WBP_RetentionBonus");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RetentionBonus.WBP_RetentionBonus_C.OnDismissed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RetentionBonus_C::OnDismissed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RetentionBonus.WBP_RetentionBonus_C.OnDismissed__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
