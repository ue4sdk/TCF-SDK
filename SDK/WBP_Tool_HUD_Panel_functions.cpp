// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Tool_HUD_Panel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Tool_HUD_Panel.WBP_Tool_HUD_Panel_C.SetHightlightVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 HighlightWidget                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDataTableRowHandle     ContextRowHandle               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_Tool_HUD_Panel_C::SetHightlightVisibility(class UWidget* HighlightWidget, const struct FDataTableRowHandle& ContextRowHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Tool_HUD_Panel.WBP_Tool_HUD_Panel_C.SetHightlightVisibility"));

	struct
	{
		class UWidget*                 HighlightWidget;
		struct FDataTableRowHandle     ContextRowHandle;
	} params = {};

	params.HighlightWidget = HighlightWidget;
	params.ContextRowHandle = ContextRowHandle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Tool_HUD_Panel.WBP_Tool_HUD_Panel_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Tool_HUD_Panel_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Tool_HUD_Panel.WBP_Tool_HUD_Panel_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Tool_HUD_Panel.WBP_Tool_HUD_Panel_C.TryHightlightContext
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Tool_HUD_Panel_C::TryHightlightContext()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Tool_HUD_Panel.WBP_Tool_HUD_Panel_C.TryHightlightContext"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Tool_HUD_Panel.WBP_Tool_HUD_Panel_C.ExecuteUbergraph_WBP_Tool_HUD_Panel
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Tool_HUD_Panel_C::ExecuteUbergraph_WBP_Tool_HUD_Panel(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Tool_HUD_Panel.WBP_Tool_HUD_Panel_C.ExecuteUbergraph_WBP_Tool_HUD_Panel"));

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
