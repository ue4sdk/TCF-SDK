// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WP_Scarab_ABP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WP_Scarab_ABP.WP_Scarab_ABP_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UWP_Scarab_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WP_Scarab_ABP.WP_Scarab_ABP_C.AnimGraph"));

	struct
	{
		struct FPoseLink               AnimGraph;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function WP_Scarab_ABP.WP_Scarab_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WP_Scarab_ABP_AnimGraphNode_BlendListByBool_9F68A8614D7B549D75C4D19590D25AC0
// (FUNC_BlueprintEvent)

void UWP_Scarab_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_WP_Scarab_ABP_AnimGraphNode_BlendListByBool_9F68A8614D7B549D75C4D19590D25AC0()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WP_Scarab_ABP.WP_Scarab_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WP_Scarab_ABP_AnimGraphNode_BlendListByBool_9F68A8614D7B549D75C4D19590D25AC0"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WP_Scarab_ABP.WP_Scarab_ABP_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWP_Scarab_ABP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WP_Scarab_ABP.WP_Scarab_ABP_C.BlueprintUpdateAnimation"));

	struct
	{
		float                          DeltaTimeX;
	} params;

	params.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(fn, &params);
}


// Function WP_Scarab_ABP.WP_Scarab_ABP_C.SetIsInCustomizationMode
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           isInCustomizationMode          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWP_Scarab_ABP_C::SetIsInCustomizationMode(bool isInCustomizationMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WP_Scarab_ABP.WP_Scarab_ABP_C.SetIsInCustomizationMode"));

	struct
	{
		bool                           isInCustomizationMode;
	} params;

	params.isInCustomizationMode = isInCustomizationMode;

	UObject::ProcessEvent(fn, &params);
}


// Function WP_Scarab_ABP.WP_Scarab_ABP_C.ExecuteUbergraph_WP_Scarab_ABP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWP_Scarab_ABP_C::ExecuteUbergraph_WP_Scarab_ABP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WP_Scarab_ABP.WP_Scarab_ABP_C.ExecuteUbergraph_WP_Scarab_ABP"));

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
