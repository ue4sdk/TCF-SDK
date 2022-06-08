// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Generic_ToolTip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Generic_ToolTip.WBP_Generic_ToolTip_C.SetShowHeader
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Show                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Generic_ToolTip_C::SetShowHeader(bool Show)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Generic_ToolTip.WBP_Generic_ToolTip_C.SetShowHeader"));

	struct
	{
		bool                           Show;
	} params = {};

	params.Show = Show;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Generic_ToolTip.WBP_Generic_ToolTip_C.SetAdditionalHeaderText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Generic_ToolTip_C::SetAdditionalHeaderText(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Generic_ToolTip.WBP_Generic_ToolTip_C.SetAdditionalHeaderText"));

	struct
	{
		struct FText                   Text;
	} params = {};

	params.Text = Text;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Generic_ToolTip.WBP_Generic_ToolTip_C.UpdateTooltipText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   HeaderText                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   AdditionalHeaderText           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Generic_ToolTip_C::UpdateTooltipText(const struct FText& Text, const struct FText& HeaderText, const struct FText& AdditionalHeaderText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Generic_ToolTip.WBP_Generic_ToolTip_C.UpdateTooltipText"));

	struct
	{
		struct FText                   Text;
		struct FText                   HeaderText;
		struct FText                   AdditionalHeaderText;
	} params = {};

	params.Text = Text;
	params.HeaderText = HeaderText;
	params.AdditionalHeaderText = AdditionalHeaderText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Generic_ToolTip.WBP_Generic_ToolTip_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Generic_ToolTip_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Generic_ToolTip.WBP_Generic_ToolTip_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Generic_ToolTip.WBP_Generic_ToolTip_C.ExecuteUbergraph_WBP_Generic_ToolTip
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Generic_ToolTip_C::ExecuteUbergraph_WBP_Generic_ToolTip(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Generic_ToolTip.WBP_Generic_ToolTip_C.ExecuteUbergraph_WBP_Generic_ToolTip"));

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
