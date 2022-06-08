// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LocalAmbientLight_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LocalAmbientLight_BP.LocalAmbientLight_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ALocalAmbientLight_BP_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LocalAmbientLight_BP.LocalAmbientLight_BP_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LocalAmbientLight_BP.LocalAmbientLight_BP_C.Timeline_0__FinishedFunc
// (FUNC_BlueprintEvent)

void ALocalAmbientLight_BP_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LocalAmbientLight_BP.LocalAmbientLight_BP_C.Timeline_0__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LocalAmbientLight_BP.LocalAmbientLight_BP_C.Timeline_0__UpdateFunc
// (FUNC_BlueprintEvent)

void ALocalAmbientLight_BP_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LocalAmbientLight_BP.LocalAmbientLight_BP_C.Timeline_0__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LocalAmbientLight_BP.LocalAmbientLight_BP_C.BndEvt__LocalAmbientLight_BP_MatchPhaseListenerComponent_BP_K2Node_ComponentBoundEvent_0_OnReplicatedMatchPhaseDataUpdated__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseData        newMatchPhaseData              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void ALocalAmbientLight_BP_C::BndEvt__LocalAmbientLight_BP_MatchPhaseListenerComponent_BP_K2Node_ComponentBoundEvent_0_OnReplicatedMatchPhaseDataUpdated__DelegateSignature(const struct FYMatchPhaseData& newMatchPhaseData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LocalAmbientLight_BP.LocalAmbientLight_BP_C.BndEvt__LocalAmbientLight_BP_MatchPhaseListenerComponent_BP_K2Node_ComponentBoundEvent_0_OnReplicatedMatchPhaseDataUpdated__DelegateSignature"));

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


// Function LocalAmbientLight_BP.LocalAmbientLight_BP_C.ExecuteUbergraph_LocalAmbientLight_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ALocalAmbientLight_BP_C::ExecuteUbergraph_LocalAmbientLight_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LocalAmbientLight_BP.LocalAmbientLight_BP_C.ExecuteUbergraph_LocalAmbientLight_BP"));

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
