// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_StatRecorder_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StatRecorder_BP.StatRecorder_BP_C.PerfTest
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStatRecorder_BP_C::PerfTest()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StatRecorder_BP.StatRecorder_BP_C.PerfTest"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function StatRecorder_BP.StatRecorder_BP_C.PerfTest_Views
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStatRecorder_BP_C::PerfTest_Views()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StatRecorder_BP.StatRecorder_BP_C.PerfTest_Views"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function StatRecorder_BP.StatRecorder_BP_C.PerfTest_Trace
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStatRecorder_BP_C::PerfTest_Trace()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StatRecorder_BP.StatRecorder_BP_C.PerfTest_Trace"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function StatRecorder_BP.StatRecorder_BP_C.Perf_Waterfall
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStatRecorder_BP_C::Perf_Waterfall()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StatRecorder_BP.StatRecorder_BP_C.Perf_Waterfall"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function StatRecorder_BP.StatRecorder_BP_C.ExecuteUbergraph_StatRecorder_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AStatRecorder_BP_C::ExecuteUbergraph_StatRecorder_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StatRecorder_BP.StatRecorder_BP_C.ExecuteUbergraph_StatRecorder_BP"));

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
