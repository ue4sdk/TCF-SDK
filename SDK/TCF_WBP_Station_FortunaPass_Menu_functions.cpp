// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Station_FortunaPass_Menu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Station_FortunaPass_Menu.WBP_Station_FortunaPass_Menu_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_Station_FortunaPass_Menu_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_FortunaPass_Menu.WBP_Station_FortunaPass_Menu_C.BP_AnimateVisibility"));

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params;

	params.newVisibility = newVisibility;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Station_FortunaPass_Menu.WBP_Station_FortunaPass_Menu_C.BndEvt__WBP_Station_FortunaPass_Menu_LayoutA_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Station_FortunaPass_Menu_C::BndEvt__WBP_Station_FortunaPass_Menu_LayoutA_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_FortunaPass_Menu.WBP_Station_FortunaPass_Menu_C.BndEvt__WBP_Station_FortunaPass_Menu_LayoutA_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_FortunaPass_Menu.WBP_Station_FortunaPass_Menu_C.BndEvt__WBP_Station_FortunaPass_Menu_LayoutB_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Station_FortunaPass_Menu_C::BndEvt__WBP_Station_FortunaPass_Menu_LayoutB_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_FortunaPass_Menu.WBP_Station_FortunaPass_Menu_C.BndEvt__WBP_Station_FortunaPass_Menu_LayoutB_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_FortunaPass_Menu.WBP_Station_FortunaPass_Menu_C.BP_OnWidgetStartShow
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_Station_FortunaPass_Menu_C::BP_OnWidgetStartShow()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_FortunaPass_Menu.WBP_Station_FortunaPass_Menu_C.BP_OnWidgetStartShow"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_FortunaPass_Menu.WBP_Station_FortunaPass_Menu_C.BP_OnWidgetHidden
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_Station_FortunaPass_Menu_C::BP_OnWidgetHidden()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_FortunaPass_Menu.WBP_Station_FortunaPass_Menu_C.BP_OnWidgetHidden"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_FortunaPass_Menu.WBP_Station_FortunaPass_Menu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Station_FortunaPass_Menu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_FortunaPass_Menu.WBP_Station_FortunaPass_Menu_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_FortunaPass_Menu.WBP_Station_FortunaPass_Menu_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Station_FortunaPass_Menu_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_FortunaPass_Menu.WBP_Station_FortunaPass_Menu_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_FortunaPass_Menu.WBP_Station_FortunaPass_Menu_C.ExecuteUbergraph_WBP_Station_FortunaPass_Menu
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_FortunaPass_Menu_C::ExecuteUbergraph_WBP_Station_FortunaPass_Menu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_FortunaPass_Menu.WBP_Station_FortunaPass_Menu_C.ExecuteUbergraph_WBP_Station_FortunaPass_Menu"));

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
