// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WP_Manticore_ABP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WP_Manticore_ABP.WP_Manticore_ABP_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UWP_Manticore_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WP_Manticore_ABP.WP_Manticore_ABP_C.AnimGraph"));

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


// Function WP_Manticore_ABP.WP_Manticore_ABP_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWP_Manticore_ABP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WP_Manticore_ABP.WP_Manticore_ABP_C.BlueprintUpdateAnimation"));

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


// Function WP_Manticore_ABP.WP_Manticore_ABP_C.OnAmmoChanged_Event_2
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYAmmoUpdateInfo        ammoUpdateInfo                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)

void UWP_Manticore_ABP_C::OnAmmoChanged_Event_2(const struct FYAmmoUpdateInfo& ammoUpdateInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WP_Manticore_ABP.WP_Manticore_ABP_C.OnAmmoChanged_Event_2"));

	struct
	{
		struct FYAmmoUpdateInfo        ammoUpdateInfo;
	} params = {};

	params.ammoUpdateInfo = ammoUpdateInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WP_Manticore_ABP.WP_Manticore_ABP_C.SetIsInCustomizationMode
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           isInCustomizationMode          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWP_Manticore_ABP_C::SetIsInCustomizationMode(bool isInCustomizationMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WP_Manticore_ABP.WP_Manticore_ABP_C.SetIsInCustomizationMode"));

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


// Function WP_Manticore_ABP.WP_Manticore_ABP_C.IsTargeting
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWP_Manticore_ABP_C::IsTargeting()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WP_Manticore_ABP.WP_Manticore_ABP_C.IsTargeting"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WP_Manticore_ABP.WP_Manticore_ABP_C.stopTargeting
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           interupted                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWP_Manticore_ABP_C::stopTargeting(bool interupted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WP_Manticore_ABP.WP_Manticore_ABP_C.stopTargeting"));

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


// Function WP_Manticore_ABP.WP_Manticore_ABP_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWP_Manticore_ABP_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WP_Manticore_ABP.WP_Manticore_ABP_C.BlueprintInitializeAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WP_Manticore_ABP.WP_Manticore_ABP_C.ExecuteUbergraph_WP_Manticore_ABP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWP_Manticore_ABP_C::ExecuteUbergraph_WP_Manticore_ABP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WP_Manticore_ABP.WP_Manticore_ABP_C.ExecuteUbergraph_WP_Manticore_ABP"));

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
