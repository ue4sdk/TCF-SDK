// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "StationaryToolLight_01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StationaryToolLight_01.StationaryToolLight_01_C.FadeOutTimeline__FinishedFunc
// (FUNC_BlueprintEvent)

void AStationaryToolLight_01_C::FadeOutTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StationaryToolLight_01.StationaryToolLight_01_C.FadeOutTimeline__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StationaryToolLight_01.StationaryToolLight_01_C.FadeOutTimeline__UpdateFunc
// (FUNC_BlueprintEvent)

void AStationaryToolLight_01_C::FadeOutTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StationaryToolLight_01.StationaryToolLight_01_C.FadeOutTimeline__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StationaryToolLight_01.StationaryToolLight_01_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AStationaryToolLight_01_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StationaryToolLight_01.StationaryToolLight_01_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StationaryToolLight_01.StationaryToolLight_01_C.FadeOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStationaryToolLight_01_C::FadeOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StationaryToolLight_01.StationaryToolLight_01_C.FadeOut"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StationaryToolLight_01.StationaryToolLight_01_C.ExecuteUbergraph_StationaryToolLight_01
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AStationaryToolLight_01_C::ExecuteUbergraph_StationaryToolLight_01(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StationaryToolLight_01.StationaryToolLight_01_C.ExecuteUbergraph_StationaryToolLight_01"));

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
