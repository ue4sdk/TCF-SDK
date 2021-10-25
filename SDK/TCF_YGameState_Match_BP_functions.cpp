// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YGameState_Match_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YGameState_Match_BP.YGameState_Match_BP_C.OnRep_MatchLoopCounter
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYGameState_Match_BP_C::OnRep_MatchLoopCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function YGameState_Match_BP.YGameState_Match_BP_C.OnRep_MatchLoopCounter");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YGameState_Match_BP.YGameState_Match_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AYGameState_Match_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function YGameState_Match_BP.YGameState_Match_BP_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YGameState_Match_BP.YGameState_Match_BP_C.MatchLoopStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYGameState_Match_BP_C::MatchLoopStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function YGameState_Match_BP.YGameState_Match_BP_C.MatchLoopStart");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YGameState_Match_BP.YGameState_Match_BP_C.OnReplicatedMatchPhaseDataUpdated_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseData        newMatchPhaseData              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void AYGameState_Match_BP_C::OnReplicatedMatchPhaseDataUpdated_Event_1(const struct FYMatchPhaseData& newMatchPhaseData)
{
	static auto fn = UObject::FindObject<UFunction>("Function YGameState_Match_BP.YGameState_Match_BP_C.OnReplicatedMatchPhaseDataUpdated_Event_1");

	struct
	{
		struct FYMatchPhaseData        newMatchPhaseData;
	} params;

	params.newMatchPhaseData = newMatchPhaseData;

	UObject::ProcessEvent(fn, &params);
}


// Function YGameState_Match_BP.YGameState_Match_BP_C.DebugTime
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYGameState_Match_BP_C::DebugTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function YGameState_Match_BP.YGameState_Match_BP_C.DebugTime");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YGameState_Match_BP.YGameState_Match_BP_C.ShowStormWarning_5min
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYGameState_Match_BP_C::ShowStormWarning_5min()
{
	static auto fn = UObject::FindObject<UFunction>("Function YGameState_Match_BP.YGameState_Match_BP_C.ShowStormWarning_5min");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YGameState_Match_BP.YGameState_Match_BP_C.ShowStormWarning_1min
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYGameState_Match_BP_C::ShowStormWarning_1min()
{
	static auto fn = UObject::FindObject<UFunction>("Function YGameState_Match_BP.YGameState_Match_BP_C.ShowStormWarning_1min");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YGameState_Match_BP.YGameState_Match_BP_C.ExecuteUbergraph_YGameState_Match_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AYGameState_Match_BP_C::ExecuteUbergraph_YGameState_Match_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function YGameState_Match_BP.YGameState_Match_BP_C.ExecuteUbergraph_YGameState_Match_BP");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function YGameState_Match_BP.YGameState_Match_BP_C.OnMatchPhaseVisualsUpdated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseVisualRow   VisualMatchPhaseData           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void AYGameState_Match_BP_C::OnMatchPhaseVisualsUpdated__DelegateSignature(const struct FYMatchPhaseVisualRow& VisualMatchPhaseData)
{
	static auto fn = UObject::FindObject<UFunction>("Function YGameState_Match_BP.YGameState_Match_BP_C.OnMatchPhaseVisualsUpdated__DelegateSignature");

	struct
	{
		struct FYMatchPhaseVisualRow   VisualMatchPhaseData;
	} params;

	params.VisualMatchPhaseData = VisualMatchPhaseData;

	UObject::ProcessEvent(fn, &params);
}


// Function YGameState_Match_BP.YGameState_Match_BP_C.OnReplicatedMatchPhaseDataUpdated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseData        newMatchPhaseData              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void AYGameState_Match_BP_C::OnReplicatedMatchPhaseDataUpdated__DelegateSignature(const struct FYMatchPhaseData& newMatchPhaseData)
{
	static auto fn = UObject::FindObject<UFunction>("Function YGameState_Match_BP.YGameState_Match_BP_C.OnReplicatedMatchPhaseDataUpdated__DelegateSignature");

	struct
	{
		struct FYMatchPhaseData        newMatchPhaseData;
	} params;

	params.newMatchPhaseData = newMatchPhaseData;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
