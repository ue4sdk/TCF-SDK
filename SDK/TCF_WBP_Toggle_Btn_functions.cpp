// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Toggle_Btn_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Toggle_Btn.WBP_Toggle_Btn_C.SetSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Selected                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Toggle_Btn_C::SetSelected(bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Toggle_Btn.WBP_Toggle_Btn_C.SetSelected");

	struct
	{
		bool                           Selected;
	} params;

	params.Selected = Selected;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Toggle_Btn.WBP_Toggle_Btn_C.TriggerAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Toggle_Btn_C::TriggerAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Toggle_Btn.WBP_Toggle_Btn_C.TriggerAnim");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Toggle_Btn.WBP_Toggle_Btn_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Toggle_Btn_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Toggle_Btn.WBP_Toggle_Btn_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Toggle_Btn.WBP_Toggle_Btn_C.Hovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Toggle_Btn_C::Hovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Toggle_Btn.WBP_Toggle_Btn_C.Hovered");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Toggle_Btn.WBP_Toggle_Btn_C.Unhovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Toggle_Btn_C::Unhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Toggle_Btn.WBP_Toggle_Btn_C.Unhovered");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Toggle_Btn.WBP_Toggle_Btn_C.Clicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Toggle_Btn_C::Clicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Toggle_Btn.WBP_Toggle_Btn_C.Clicked");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Toggle_Btn.WBP_Toggle_Btn_C.ExecuteUbergraph_WBP_Toggle_Btn
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Toggle_Btn_C::ExecuteUbergraph_WBP_Toggle_Btn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Toggle_Btn.WBP_Toggle_Btn_C.ExecuteUbergraph_WBP_Toggle_Btn");

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
