// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Debug_ReplayMenu_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Debug_ReplayMenu_WBP.Debug_ReplayMenu_WBP_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UDebug_ReplayMenu_WBP_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Debug_ReplayMenu_WBP.Debug_ReplayMenu_WBP_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Debug_ReplayMenu_WBP.Debug_ReplayMenu_WBP_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDebug_ReplayMenu_WBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Debug_ReplayMenu_WBP.Debug_ReplayMenu_WBP_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Debug_ReplayMenu_WBP.Debug_ReplayMenu_WBP_C.OnFindReplays
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FS_ReplayInfo>   ReplayInfo                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UDebug_ReplayMenu_WBP_C::OnFindReplays(TArray<struct FS_ReplayInfo> ReplayInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Debug_ReplayMenu_WBP.Debug_ReplayMenu_WBP_C.OnFindReplays");

	struct
	{
		TArray<struct FS_ReplayInfo>   ReplayInfo;
	} params;

	params.ReplayInfo = ReplayInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function Debug_ReplayMenu_WBP.Debug_ReplayMenu_WBP_C.BndEvt__YStopRecording_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UDebug_ReplayMenu_WBP_C::BndEvt__YStopRecording_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Debug_ReplayMenu_WBP.Debug_ReplayMenu_WBP_C.BndEvt__YStopRecording_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Debug_ReplayMenu_WBP.Debug_ReplayMenu_WBP_C.BndEvt__YStartRecording_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UDebug_ReplayMenu_WBP_C::BndEvt__YStartRecording_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Debug_ReplayMenu_WBP.Debug_ReplayMenu_WBP_C.BndEvt__YStartRecording_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Debug_ReplayMenu_WBP.Debug_ReplayMenu_WBP_C.BndEvt__YStartRecordingForAutomationTest_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UDebug_ReplayMenu_WBP_C::BndEvt__YStartRecordingForAutomationTest_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Debug_ReplayMenu_WBP.Debug_ReplayMenu_WBP_C.BndEvt__YStartRecordingForAutomationTest_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Debug_ReplayMenu_WBP.Debug_ReplayMenu_WBP_C.BndEvt__YRefresh_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UDebug_ReplayMenu_WBP_C::BndEvt__YRefresh_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Debug_ReplayMenu_WBP.Debug_ReplayMenu_WBP_C.BndEvt__YRefresh_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Debug_ReplayMenu_WBP.Debug_ReplayMenu_WBP_C.ExecuteUbergraph_Debug_ReplayMenu_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDebug_ReplayMenu_WBP_C::ExecuteUbergraph_Debug_ReplayMenu_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Debug_ReplayMenu_WBP.Debug_ReplayMenu_WBP_C.ExecuteUbergraph_Debug_ReplayMenu_WBP");

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
