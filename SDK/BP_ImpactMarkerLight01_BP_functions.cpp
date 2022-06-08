// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ImpactMarkerLight01_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ImpactMarkerLight01_BP.BP_ImpactMarkerLight01_BP_C.Timeline_0__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_ImpactMarkerLight01_BP_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ImpactMarkerLight01_BP.BP_ImpactMarkerLight01_BP_C.Timeline_0__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ImpactMarkerLight01_BP.BP_ImpactMarkerLight01_BP_C.Timeline_0__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_ImpactMarkerLight01_BP_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ImpactMarkerLight01_BP.BP_ImpactMarkerLight01_BP_C.Timeline_0__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ImpactMarkerLight01_BP.BP_ImpactMarkerLight01_BP_C.BP_PlacementSize
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          Radius                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ImpactMarkerLight01_BP_C::BP_PlacementSize(float Radius)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ImpactMarkerLight01_BP.BP_ImpactMarkerLight01_BP_C.BP_PlacementSize"));

	struct
	{
		float                          Radius;
	} params = {};

	params.Radius = Radius;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ImpactMarkerLight01_BP.BP_ImpactMarkerLight01_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_ImpactMarkerLight01_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ImpactMarkerLight01_BP.BP_ImpactMarkerLight01_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ImpactMarkerLight01_BP.BP_ImpactMarkerLight01_BP_C.BP_IsAvailable
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           isAvailable                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_ImpactMarkerLight01_BP_C::BP_IsAvailable(bool isAvailable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ImpactMarkerLight01_BP.BP_ImpactMarkerLight01_BP_C.BP_IsAvailable"));

	struct
	{
		bool                           isAvailable;
	} params = {};

	params.isAvailable = isAvailable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ImpactMarkerLight01_BP.BP_ImpactMarkerLight01_BP_C.ExecuteUbergraph_BP_ImpactMarkerLight01_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ImpactMarkerLight01_BP_C::ExecuteUbergraph_BP_ImpactMarkerLight01_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ImpactMarkerLight01_BP.BP_ImpactMarkerLight01_BP_C.ExecuteUbergraph_BP_ImpactMarkerLight01_BP"));

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
