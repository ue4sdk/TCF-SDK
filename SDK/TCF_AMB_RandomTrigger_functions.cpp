// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AMB_RandomTrigger_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AMB_RandomTrigger.AMB_RandomTrigger_C.BndEvt__YLocalPlayerProximity_K2Node_ComponentBoundEvent_0_OnPlayerNotCloseAnymore__DelegateSignature
// (FUNC_BlueprintEvent)

void AAMB_RandomTrigger_C::BndEvt__YLocalPlayerProximity_K2Node_ComponentBoundEvent_0_OnPlayerNotCloseAnymore__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AMB_RandomTrigger.AMB_RandomTrigger_C.BndEvt__YLocalPlayerProximity_K2Node_ComponentBoundEvent_0_OnPlayerNotCloseAnymore__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AMB_RandomTrigger.AMB_RandomTrigger_C.BndEvt__YLocalPlayerProximity_K2Node_ComponentBoundEvent_1_OnPlayerClose__DelegateSignature
// (FUNC_BlueprintEvent)

void AAMB_RandomTrigger_C::BndEvt__YLocalPlayerProximity_K2Node_ComponentBoundEvent_1_OnPlayerClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AMB_RandomTrigger.AMB_RandomTrigger_C.BndEvt__YLocalPlayerProximity_K2Node_ComponentBoundEvent_1_OnPlayerClose__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AMB_RandomTrigger.AMB_RandomTrigger_C.TriggerNewSound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAMB_RandomTrigger_C::TriggerNewSound()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AMB_RandomTrigger.AMB_RandomTrigger_C.TriggerNewSound"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AMB_RandomTrigger.AMB_RandomTrigger_C.StartTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAMB_RandomTrigger_C::StartTimer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AMB_RandomTrigger.AMB_RandomTrigger_C.StartTimer"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AMB_RandomTrigger.AMB_RandomTrigger_C.BP_SetIsEnabled
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAMB_RandomTrigger_C::BP_SetIsEnabled(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AMB_RandomTrigger.AMB_RandomTrigger_C.BP_SetIsEnabled"));

	struct
	{
		bool                           IsEnabled;
	} params;

	params.IsEnabled = IsEnabled;

	UObject::ProcessEvent(fn, &params);
}


// Function AMB_RandomTrigger.AMB_RandomTrigger_C.ExecuteUbergraph_AMB_RandomTrigger
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAMB_RandomTrigger_C::ExecuteUbergraph_AMB_RandomTrigger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AMB_RandomTrigger.AMB_RandomTrigger_C.ExecuteUbergraph_AMB_RandomTrigger"));

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
