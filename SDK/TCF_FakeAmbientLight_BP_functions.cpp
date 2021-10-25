// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_FakeAmbientLight_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FakeAmbientLight_BP.FakeAmbientLight_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFakeAmbientLight_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FakeAmbientLight_BP.FakeAmbientLight_BP_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FakeAmbientLight_BP.FakeAmbientLight_BP_C.FadeLightTimeline__FinishedFunc
// (FUNC_BlueprintEvent)

void AFakeAmbientLight_BP_C::FadeLightTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FakeAmbientLight_BP.FakeAmbientLight_BP_C.FadeLightTimeline__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FakeAmbientLight_BP.FakeAmbientLight_BP_C.FadeLightTimeline__UpdateFunc
// (FUNC_BlueprintEvent)

void AFakeAmbientLight_BP_C::FadeLightTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FakeAmbientLight_BP.FakeAmbientLight_BP_C.FadeLightTimeline__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FakeAmbientLight_BP.FakeAmbientLight_BP_C.BndEvt__MatchPhaseListenerComponent_BP_K2Node_ComponentBoundEvent_0_OnReplicatedMatchPhaseDataUpdated__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseData        newMatchPhaseData              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void AFakeAmbientLight_BP_C::BndEvt__MatchPhaseListenerComponent_BP_K2Node_ComponentBoundEvent_0_OnReplicatedMatchPhaseDataUpdated__DelegateSignature(const struct FYMatchPhaseData& newMatchPhaseData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FakeAmbientLight_BP.FakeAmbientLight_BP_C.BndEvt__MatchPhaseListenerComponent_BP_K2Node_ComponentBoundEvent_0_OnReplicatedMatchPhaseDataUpdated__DelegateSignature"));

	struct
	{
		struct FYMatchPhaseData        newMatchPhaseData;
	} params;

	params.newMatchPhaseData = newMatchPhaseData;

	UObject::ProcessEvent(fn, &params);
}


// Function FakeAmbientLight_BP.FakeAmbientLight_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AFakeAmbientLight_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FakeAmbientLight_BP.FakeAmbientLight_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FakeAmbientLight_BP.FakeAmbientLight_BP_C.ExecuteUbergraph_FakeAmbientLight_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFakeAmbientLight_BP_C::ExecuteUbergraph_FakeAmbientLight_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FakeAmbientLight_BP.FakeAmbientLight_BP_C.ExecuteUbergraph_FakeAmbientLight_BP"));

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
