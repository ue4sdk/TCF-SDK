// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CH_Player_LABP_TPP_UpperBodyAdditive_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CH_Player_LABP_TPP_UpperBodyAdditive.CH_Player_LABP_TPP_UpperBodyAdditive_C.TPP_UpperBody
// (FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FPoseLink               UpperBody                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FPoseLink               TPP_UpperBody                  (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UCH_Player_LABP_TPP_UpperBodyAdditive_C::TPP_UpperBody(const struct FPoseLink& UpperBody, struct FPoseLink* TPP_UpperBody)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_Player_LABP_TPP_UpperBodyAdditive.CH_Player_LABP_TPP_UpperBodyAdditive_C.TPP_UpperBody"));

	struct
	{
		struct FPoseLink               UpperBody;
		struct FPoseLink               TPP_UpperBody;
	} params = {};

	params.UpperBody = UpperBody;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TPP_UpperBody != nullptr)
		*TPP_UpperBody = params.TPP_UpperBody;
}


// Function CH_Player_LABP_TPP_UpperBodyAdditive.CH_Player_LABP_TPP_UpperBodyAdditive_C.TPP_Loco
// (FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FPoseLink               TPP_Loco                       (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UCH_Player_LABP_TPP_UpperBodyAdditive_C::TPP_Loco(struct FPoseLink* TPP_Loco)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_Player_LABP_TPP_UpperBodyAdditive.CH_Player_LABP_TPP_UpperBodyAdditive_C.TPP_Loco"));

	struct
	{
		struct FPoseLink               TPP_Loco;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TPP_Loco != nullptr)
		*TPP_Loco = params.TPP_Loco;
}


// Function CH_Player_LABP_TPP_UpperBodyAdditive.CH_Player_LABP_TPP_UpperBodyAdditive_C.TPP_Additive
// (FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FPoseLink               Additive                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FPoseLink               TPP_Additive                   (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UCH_Player_LABP_TPP_UpperBodyAdditive_C::TPP_Additive(const struct FPoseLink& Additive, struct FPoseLink* TPP_Additive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_Player_LABP_TPP_UpperBodyAdditive.CH_Player_LABP_TPP_UpperBodyAdditive_C.TPP_Additive"));

	struct
	{
		struct FPoseLink               Additive;
		struct FPoseLink               TPP_Additive;
	} params = {};

	params.Additive = Additive;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TPP_Additive != nullptr)
		*TPP_Additive = params.TPP_Additive;
}


// Function CH_Player_LABP_TPP_UpperBodyAdditive.CH_Player_LABP_TPP_UpperBodyAdditive_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UCH_Player_LABP_TPP_UpperBodyAdditive_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_Player_LABP_TPP_UpperBodyAdditive.CH_Player_LABP_TPP_UpperBodyAdditive_C.AnimGraph"));

	struct
	{
		struct FPoseLink               AnimGraph;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function CH_Player_LABP_TPP_UpperBodyAdditive.CH_Player_LABP_TPP_UpperBodyAdditive_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCH_Player_LABP_TPP_UpperBodyAdditive_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_Player_LABP_TPP_UpperBodyAdditive.CH_Player_LABP_TPP_UpperBodyAdditive_C.BlueprintUpdateAnimation"));

	struct
	{
		float                          DeltaTimeX;
	} params = {};

	params.DeltaTimeX = DeltaTimeX;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CH_Player_LABP_TPP_UpperBodyAdditive.CH_Player_LABP_TPP_UpperBodyAdditive_C.ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyAdditive
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCH_Player_LABP_TPP_UpperBodyAdditive_C::ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyAdditive(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_Player_LABP_TPP_UpperBodyAdditive.CH_Player_LABP_TPP_UpperBodyAdditive_C.ExecuteUbergraph_CH_Player_LABP_TPP_UpperBodyAdditive"));

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
