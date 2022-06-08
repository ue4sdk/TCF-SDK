// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AMB_MatchPhaseManager_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AMB_MatchPhaseManager_BP.AMB_MatchPhaseManager_BP_C.SetSoundProperties
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseVisualRow   VisualData                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UAudioComponent*         AudioComponent                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAMB_MatchPhaseManager_BP_C::SetSoundProperties(const struct FYMatchPhaseVisualRow& VisualData, class UAudioComponent* AudioComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AMB_MatchPhaseManager_BP.AMB_MatchPhaseManager_BP_C.SetSoundProperties"));

	struct
	{
		struct FYMatchPhaseVisualRow   VisualData;
		class UAudioComponent*         AudioComponent;
	} params = {};

	params.VisualData = VisualData;
	params.AudioComponent = AudioComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AMB_MatchPhaseManager_BP.AMB_MatchPhaseManager_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAMB_MatchPhaseManager_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AMB_MatchPhaseManager_BP.AMB_MatchPhaseManager_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AMB_MatchPhaseManager_BP.AMB_MatchPhaseManager_BP_C.BndEvt__MatchPhaseListenerComponent_BP_K2Node_ComponentBoundEvent_0_OnMatchPhaseVisualsUpdated__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseVisualRow   VisualData                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void AAMB_MatchPhaseManager_BP_C::BndEvt__MatchPhaseListenerComponent_BP_K2Node_ComponentBoundEvent_0_OnMatchPhaseVisualsUpdated__DelegateSignature(const struct FYMatchPhaseVisualRow& VisualData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AMB_MatchPhaseManager_BP.AMB_MatchPhaseManager_BP_C.BndEvt__MatchPhaseListenerComponent_BP_K2Node_ComponentBoundEvent_0_OnMatchPhaseVisualsUpdated__DelegateSignature"));

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


// Function AMB_MatchPhaseManager_BP.AMB_MatchPhaseManager_BP_C.ExecuteUbergraph_AMB_MatchPhaseManager_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAMB_MatchPhaseManager_BP_C::ExecuteUbergraph_AMB_MatchPhaseManager_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AMB_MatchPhaseManager_BP.AMB_MatchPhaseManager_BP_C.ExecuteUbergraph_AMB_MatchPhaseManager_BP"));

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
