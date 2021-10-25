// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_RiverAudioSpline_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RiverAudioSpline_BP.RiverAudioSpline_BP_C.AdjustToSpline
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ARiverAudioSpline_BP_C::AdjustToSpline()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RiverAudioSpline_BP.RiverAudioSpline_BP_C.AdjustToSpline"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RiverAudioSpline_BP.RiverAudioSpline_BP_C.AdjustToLandscape
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ARiverAudioSpline_BP_C::AdjustToLandscape()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RiverAudioSpline_BP.RiverAudioSpline_BP_C.AdjustToLandscape"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RiverAudioSpline_BP.RiverAudioSpline_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ARiverAudioSpline_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RiverAudioSpline_BP.RiverAudioSpline_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RiverAudioSpline_BP.RiverAudioSpline_BP_C.ExecuteUbergraph_RiverAudioSpline_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ARiverAudioSpline_BP_C::ExecuteUbergraph_RiverAudioSpline_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RiverAudioSpline_BP.RiverAudioSpline_BP_C.ExecuteUbergraph_RiverAudioSpline_BP"));

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
