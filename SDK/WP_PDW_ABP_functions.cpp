// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WP_PDW_ABP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WP_PDW_ABP.WP_PDW_ABP_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UWP_PDW_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WP_PDW_ABP.WP_PDW_ABP_C.AnimGraph"));

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


// Function WP_PDW_ABP.WP_PDW_ABP_C.SetIsInCustomizationMode
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           isInCustomizationMode          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWP_PDW_ABP_C::SetIsInCustomizationMode(bool isInCustomizationMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WP_PDW_ABP.WP_PDW_ABP_C.SetIsInCustomizationMode"));

	struct
	{
		bool                           isInCustomizationMode;
	} params = {};

	params.isInCustomizationMode = isInCustomizationMode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WP_PDW_ABP.WP_PDW_ABP_C.IsTargeting
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWP_PDW_ABP_C::IsTargeting()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WP_PDW_ABP.WP_PDW_ABP_C.IsTargeting"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WP_PDW_ABP.WP_PDW_ABP_C.stopTargeting
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           interupted                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWP_PDW_ABP_C::stopTargeting(bool interupted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WP_PDW_ABP.WP_PDW_ABP_C.stopTargeting"));

	struct
	{
		bool                           interupted;
	} params = {};

	params.interupted = interupted;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WP_PDW_ABP.WP_PDW_ABP_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWP_PDW_ABP_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WP_PDW_ABP.WP_PDW_ABP_C.BlueprintInitializeAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WP_PDW_ABP.WP_PDW_ABP_C.ExecuteUbergraph_WP_PDW_ABP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWP_PDW_ABP_C::ExecuteUbergraph_WP_PDW_ABP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WP_PDW_ABP.WP_PDW_ABP_C.ExecuteUbergraph_WP_PDW_ABP"));

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
