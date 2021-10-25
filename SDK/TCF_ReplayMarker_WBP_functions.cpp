// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_ReplayMarker_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ReplayMarker_WBP.ReplayMarker_WBP_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UReplayMarker_WBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplayMarker_WBP.ReplayMarker_WBP_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReplayMarker_WBP.ReplayMarker_WBP_C.BndEvt__Button_JumpToMarker_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UReplayMarker_WBP_C::BndEvt__Button_JumpToMarker_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplayMarker_WBP.ReplayMarker_WBP_C.BndEvt__Button_JumpToMarker_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReplayMarker_WBP.ReplayMarker_WBP_C.BndEvt__Button_DeleteMarker_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UReplayMarker_WBP_C::BndEvt__Button_DeleteMarker_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplayMarker_WBP.ReplayMarker_WBP_C.BndEvt__Button_DeleteMarker_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReplayMarker_WBP.ReplayMarker_WBP_C.ExecuteUbergraph_ReplayMarker_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReplayMarker_WBP_C::ExecuteUbergraph_ReplayMarker_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplayMarker_WBP.ReplayMarker_WBP_C.ExecuteUbergraph_ReplayMarker_WBP"));

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
