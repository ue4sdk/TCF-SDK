// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_ItemStatPrimary_Entry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ItemStatPrimary_Entry.WBP_ItemStatPrimary_Entry_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_ItemStatPrimary_Entry_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemStatPrimary_Entry.WBP_ItemStatPrimary_Entry_C.BP_AnimateVisibility");

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params;

	params.newVisibility = newVisibility;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_ItemStatPrimary_Entry.WBP_ItemStatPrimary_Entry_C.SetValue
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InValue                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_ItemStatPrimary_Entry_C::SetValue(const struct FText& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemStatPrimary_Entry.WBP_ItemStatPrimary_Entry_C.SetValue");

	struct
	{
		struct FText                   InValue;
	} params;

	params.InValue = InValue;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemStatPrimary_Entry.WBP_ItemStatPrimary_Entry_C.SetShowDivide
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShowDivide                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ItemStatPrimary_Entry_C::SetShowDivide(bool ShowDivide)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemStatPrimary_Entry.WBP_ItemStatPrimary_Entry_C.SetShowDivide");

	struct
	{
		bool                           ShowDivide;
	} params;

	params.ShowDivide = ShowDivide;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemStatPrimary_Entry.WBP_ItemStatPrimary_Entry_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ItemStatPrimary_Entry_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemStatPrimary_Entry.WBP_ItemStatPrimary_Entry_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemStatPrimary_Entry.WBP_ItemStatPrimary_Entry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ItemStatPrimary_Entry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemStatPrimary_Entry.WBP_ItemStatPrimary_Entry_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemStatPrimary_Entry.WBP_ItemStatPrimary_Entry_C.SetLabel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Label                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_ItemStatPrimary_Entry_C::SetLabel(const struct FText& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemStatPrimary_Entry.WBP_ItemStatPrimary_Entry_C.SetLabel");

	struct
	{
		struct FText                   Label;
	} params;

	params.Label = Label;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemStatPrimary_Entry.WBP_ItemStatPrimary_Entry_C.ExecuteUbergraph_WBP_ItemStatPrimary_Entry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ItemStatPrimary_Entry_C::ExecuteUbergraph_WBP_ItemStatPrimary_Entry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemStatPrimary_Entry.WBP_ItemStatPrimary_Entry_C.ExecuteUbergraph_WBP_ItemStatPrimary_Entry");

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
