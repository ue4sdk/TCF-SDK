// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AnglerPlant_ABP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AnglerPlant_ABP.AnglerPlant_ABP_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UAnglerPlant_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnglerPlant_ABP.AnglerPlant_ABP_C.AnimGraph"));

	struct
	{
		struct FPoseLink               AnimGraph;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function AnglerPlant_ABP.AnglerPlant_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnglerPlant_ABP_AnimGraphNode_TransitionResult_78371ADA424E3B2A73E4478C527D74E6
// (FUNC_BlueprintEvent)

void UAnglerPlant_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnglerPlant_ABP_AnimGraphNode_TransitionResult_78371ADA424E3B2A73E4478C527D74E6()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnglerPlant_ABP.AnglerPlant_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnglerPlant_ABP_AnimGraphNode_TransitionResult_78371ADA424E3B2A73E4478C527D74E6"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AnglerPlant_ABP.AnglerPlant_ABP_C.ExecuteUbergraph_AnglerPlant_ABP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAnglerPlant_ABP_C::ExecuteUbergraph_AnglerPlant_ABP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnglerPlant_ABP.AnglerPlant_ABP_C.ExecuteUbergraph_AnglerPlant_ABP"));

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
