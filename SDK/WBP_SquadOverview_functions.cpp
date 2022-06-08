// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_SquadOverview_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_SquadOverview.WBP_SquadOverview_C.Get_LeaveSquadButton_ToolTipWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UWBP_SquadOverview_C::Get_LeaveSquadButton_ToolTipWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SquadOverview.WBP_SquadOverview_C.Get_LeaveSquadButton_ToolTipWidget"));

	struct
	{
		class UWidget*                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_SquadOverview.WBP_SquadOverview_C.BndEvt__WBP_SquadOverview_Btn_LeaveSquad_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_SquadOverview_C::BndEvt__WBP_SquadOverview_Btn_LeaveSquad_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SquadOverview.WBP_SquadOverview_C.BndEvt__WBP_SquadOverview_Btn_LeaveSquad_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SquadOverview.WBP_SquadOverview_C.BP_SquadUpdate
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsInSquad                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SquadOverview_C::BP_SquadUpdate(bool IsInSquad)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SquadOverview.WBP_SquadOverview_C.BP_SquadUpdate"));

	struct
	{
		bool                           IsInSquad;
	} params = {};

	params.IsInSquad = IsInSquad;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SquadOverview.WBP_SquadOverview_C.ExecuteUbergraph_WBP_SquadOverview
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SquadOverview_C::ExecuteUbergraph_WBP_SquadOverview(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SquadOverview.WBP_SquadOverview_C.ExecuteUbergraph_WBP_SquadOverview"));

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
