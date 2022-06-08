// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Objectives_Match_HUD_Panel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Objectives_Match_HUD_Panel.WBP_Objectives_Match_HUD_Panel_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_Objectives_Match_HUD_Panel_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_Match_HUD_Panel.WBP_Objectives_Match_HUD_Panel_C.BP_AnimateVisibility"));

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


// Function WBP_Objectives_Match_HUD_Panel.WBP_Objectives_Match_HUD_Panel_C.FindOrCreateContractWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 contractId                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UWBP_Objectives_Progress_Entry_C* Widget                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void UWBP_Objectives_Match_HUD_Panel_C::FindOrCreateContractWidget(const struct FString& contractId, class UWBP_Objectives_Progress_Entry_C** Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_Match_HUD_Panel.WBP_Objectives_Match_HUD_Panel_C.FindOrCreateContractWidget"));

	struct
	{
		struct FString                 contractId;
		class UWBP_Objectives_Progress_Entry_C* Widget;
	} params = {};

	params.contractId = contractId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function WBP_Objectives_Match_HUD_Panel.WBP_Objectives_Match_HUD_Panel_C.UpdateWidgetVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Objectives_Match_HUD_Panel_C::UpdateWidgetVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_Match_HUD_Panel.WBP_Objectives_Match_HUD_Panel_C.UpdateWidgetVisibility"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Objectives_Match_HUD_Panel.WBP_Objectives_Match_HUD_Panel_C.OnRemoveContractWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUserWidget*             WidgetToRemove                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Objectives_Match_HUD_Panel_C::OnRemoveContractWidget(class UUserWidget* WidgetToRemove)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_Match_HUD_Panel.WBP_Objectives_Match_HUD_Panel_C.OnRemoveContractWidget"));

	struct
	{
		class UUserWidget*             WidgetToRemove;
	} params = {};

	params.WidgetToRemove = WidgetToRemove;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Objectives_Match_HUD_Panel.WBP_Objectives_Match_HUD_Panel_C.OnContractUpdated
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYContractsProgress     contractsProgress              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Objectives_Match_HUD_Panel_C::OnContractUpdated(const struct FYContractsProgress& contractsProgress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_Match_HUD_Panel.WBP_Objectives_Match_HUD_Panel_C.OnContractUpdated"));

	struct
	{
		struct FYContractsProgress     contractsProgress;
	} params = {};

	params.contractsProgress = contractsProgress;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Objectives_Match_HUD_Panel.WBP_Objectives_Match_HUD_Panel_C.OnPlayerInitialized
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYRuntimeInitializationContext Result                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Objectives_Match_HUD_Panel_C::OnPlayerInitialized(const struct FYRuntimeInitializationContext& Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_Match_HUD_Panel.WBP_Objectives_Match_HUD_Panel_C.OnPlayerInitialized"));

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


// Function WBP_Objectives_Match_HUD_Panel.WBP_Objectives_Match_HUD_Panel_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Objectives_Match_HUD_Panel_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_Match_HUD_Panel.WBP_Objectives_Match_HUD_Panel_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Objectives_Match_HUD_Panel.WBP_Objectives_Match_HUD_Panel_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Objectives_Match_HUD_Panel_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_Match_HUD_Panel.WBP_Objectives_Match_HUD_Panel_C.PreConstruct"));

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


// Function WBP_Objectives_Match_HUD_Panel.WBP_Objectives_Match_HUD_Panel_C.ExecuteUbergraph_WBP_Objectives_Match_HUD_Panel
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Objectives_Match_HUD_Panel_C::ExecuteUbergraph_WBP_Objectives_Match_HUD_Panel(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_Match_HUD_Panel.WBP_Objectives_Match_HUD_Panel_C.ExecuteUbergraph_WBP_Objectives_Match_HUD_Panel"));

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
