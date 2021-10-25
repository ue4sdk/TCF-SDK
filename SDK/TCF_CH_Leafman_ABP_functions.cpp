// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_CH_Leafman_ABP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CH_Leafman_ABP.CH_Leafman_ABP_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UCH_Leafman_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CH_Leafman_ABP.CH_Leafman_ABP_C.AnimGraph"));

	struct
	{
		struct FPoseLink               AnimGraph;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function CH_Leafman_ABP.CH_Leafman_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Leafman_ABP_AnimGraphNode_TransitionResult_713B293A4841B24BCBA73D8833926A9D
// (FUNC_BlueprintEvent)

void UCH_Leafman_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Leafman_ABP_AnimGraphNode_TransitionResult_713B293A4841B24BCBA73D8833926A9D()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CH_Leafman_ABP.CH_Leafman_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Leafman_ABP_AnimGraphNode_TransitionResult_713B293A4841B24BCBA73D8833926A9D"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CH_Leafman_ABP.CH_Leafman_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Leafman_ABP_AnimGraphNode_TransitionResult_94116DB04198E4955CDB5384CCBE1765
// (FUNC_BlueprintEvent)

void UCH_Leafman_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Leafman_ABP_AnimGraphNode_TransitionResult_94116DB04198E4955CDB5384CCBE1765()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CH_Leafman_ABP.CH_Leafman_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Leafman_ABP_AnimGraphNode_TransitionResult_94116DB04198E4955CDB5384CCBE1765"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CH_Leafman_ABP.CH_Leafman_ABP_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCH_Leafman_ABP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CH_Leafman_ABP.CH_Leafman_ABP_C.BlueprintUpdateAnimation"));

	struct
	{
		float                          DeltaTimeX;
	} params;

	params.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(fn, &params);
}


// Function CH_Leafman_ABP.CH_Leafman_ABP_C.ExecuteUbergraph_CH_Leafman_ABP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCH_Leafman_ABP_C::ExecuteUbergraph_CH_Leafman_ABP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CH_Leafman_ABP.CH_Leafman_ABP_C.ExecuteUbergraph_CH_Leafman_ABP"));

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
