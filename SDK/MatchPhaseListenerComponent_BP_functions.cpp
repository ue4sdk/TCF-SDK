// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MatchPhaseListenerComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MatchPhaseListenerComponent_BP.MatchPhaseListenerComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMatchPhaseListenerComponent_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseListenerComponent_BP.MatchPhaseListenerComponent_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MatchPhaseListenerComponent_BP.MatchPhaseListenerComponent_BP_C.OnReplicatedMatchPhaseDataUpdated_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseData        newMatchPhaseData              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UMatchPhaseListenerComponent_BP_C::OnReplicatedMatchPhaseDataUpdated_Event(const struct FYMatchPhaseData& newMatchPhaseData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseListenerComponent_BP.MatchPhaseListenerComponent_BP_C.OnReplicatedMatchPhaseDataUpdated_Event"));

	struct
	{
		struct FYMatchPhaseData        newMatchPhaseData;
	} params = {};

	params.newMatchPhaseData = newMatchPhaseData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MatchPhaseListenerComponent_BP.MatchPhaseListenerComponent_BP_C.OnMatchPhaseVisualsUpdatedEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseVisualRow   VisualMatchPhaseData           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UMatchPhaseListenerComponent_BP_C::OnMatchPhaseVisualsUpdatedEvent(const struct FYMatchPhaseVisualRow& VisualMatchPhaseData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseListenerComponent_BP.MatchPhaseListenerComponent_BP_C.OnMatchPhaseVisualsUpdatedEvent"));

	struct
	{
		struct FYMatchPhaseVisualRow   VisualMatchPhaseData;
	} params = {};

	params.VisualMatchPhaseData = VisualMatchPhaseData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MatchPhaseListenerComponent_BP.MatchPhaseListenerComponent_BP_C.ExecuteUbergraph_MatchPhaseListenerComponent_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMatchPhaseListenerComponent_BP_C::ExecuteUbergraph_MatchPhaseListenerComponent_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseListenerComponent_BP.MatchPhaseListenerComponent_BP_C.ExecuteUbergraph_MatchPhaseListenerComponent_BP"));

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


// Function MatchPhaseListenerComponent_BP.MatchPhaseListenerComponent_BP_C.OnMatchPhaseVisualsUpdated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseVisualRow   VisualData                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UMatchPhaseListenerComponent_BP_C::OnMatchPhaseVisualsUpdated__DelegateSignature(const struct FYMatchPhaseVisualRow& VisualData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseListenerComponent_BP.MatchPhaseListenerComponent_BP_C.OnMatchPhaseVisualsUpdated__DelegateSignature"));

	struct
	{
		struct FYMatchPhaseVisualRow   VisualData;
	} params = {};

	params.VisualData = VisualData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MatchPhaseListenerComponent_BP.MatchPhaseListenerComponent_BP_C.OnReplicatedMatchPhaseDataUpdated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseData        newMatchPhaseData              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UMatchPhaseListenerComponent_BP_C::OnReplicatedMatchPhaseDataUpdated__DelegateSignature(const struct FYMatchPhaseData& newMatchPhaseData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseListenerComponent_BP.MatchPhaseListenerComponent_BP_C.OnReplicatedMatchPhaseDataUpdated__DelegateSignature"));

	struct
	{
		struct FYMatchPhaseData        newMatchPhaseData;
	} params = {};

	params.newMatchPhaseData = newMatchPhaseData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
