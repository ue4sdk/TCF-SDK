// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Generic_ToolTip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Generic_ToolTip.WBP_Generic_ToolTip_C.UpdateTooltipText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   HeaderText                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   AdditionalHeaderText           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Generic_ToolTip_C::UpdateTooltipText(const struct FText& Text, const struct FText& HeaderText, const struct FText& AdditionalHeaderText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Generic_ToolTip.WBP_Generic_ToolTip_C.UpdateTooltipText");

	struct
	{
		struct FText                   Text;
		struct FText                   HeaderText;
		struct FText                   AdditionalHeaderText;
	} params;

	params.Text = Text;
	params.HeaderText = HeaderText;
	params.AdditionalHeaderText = AdditionalHeaderText;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Generic_ToolTip.WBP_Generic_ToolTip_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Generic_ToolTip_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Generic_ToolTip.WBP_Generic_ToolTip_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Generic_ToolTip.WBP_Generic_ToolTip_C.ExecuteUbergraph_WBP_Generic_ToolTip
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Generic_ToolTip_C::ExecuteUbergraph_WBP_Generic_ToolTip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Generic_ToolTip.WBP_Generic_ToolTip_C.ExecuteUbergraph_WBP_Generic_ToolTip");

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
