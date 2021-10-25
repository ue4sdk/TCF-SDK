// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_ReportPlayerButtonType_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ReportPlayerButtonType_WBP.ReportPlayerButtonType_WBP_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UReportPlayerButtonType_WBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayerButtonType_WBP.ReportPlayerButtonType_WBP_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReportPlayerButtonType_WBP.ReportPlayerButtonType_WBP_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UReportPlayerButtonType_WBP_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayerButtonType_WBP.ReportPlayerButtonType_WBP_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReportPlayerButtonType_WBP.ReportPlayerButtonType_WBP_C.SelectedState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UReportPlayerButtonType_WBP_C::SelectedState(bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayerButtonType_WBP.ReportPlayerButtonType_WBP_C.SelectedState");

	struct
	{
		bool                           IsSelected;
	} params;

	params.IsSelected = IsSelected;

	UObject::ProcessEvent(fn, &params);
}


// Function ReportPlayerButtonType_WBP.ReportPlayerButtonType_WBP_C.ExecuteUbergraph_ReportPlayerButtonType_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReportPlayerButtonType_WBP_C::ExecuteUbergraph_ReportPlayerButtonType_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayerButtonType_WBP.ReportPlayerButtonType_WBP_C.ExecuteUbergraph_ReportPlayerButtonType_WBP");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function ReportPlayerButtonType_WBP.ReportPlayerButtonType_WBP_C.OnReportTypeClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYReportPlayerType             PlayerReportType               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReportPlayerButtonType_WBP_C::OnReportTypeClicked__DelegateSignature(EYReportPlayerType PlayerReportType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayerButtonType_WBP.ReportPlayerButtonType_WBP_C.OnReportTypeClicked__DelegateSignature");

	struct
	{
		EYReportPlayerType             PlayerReportType;
	} params;

	params.PlayerReportType = PlayerReportType;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
