// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YBugReporterComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YBugReporterComponent_BP.YBugReporterComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UYBugReporterComponent_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function YBugReporterComponent_BP.YBugReporterComponent_BP_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YBugReporterComponent_BP.YBugReporterComponent_BP_C.OnBugItDataPrepared
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYBugReporterComponent_BP_C::OnBugItDataPrepared()
{
	static auto fn = UObject::FindObject<UFunction>("Function YBugReporterComponent_BP.YBugReporterComponent_BP_C.OnBugItDataPrepared");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YBugReporterComponent_BP.YBugReporterComponent_BP_C.BP_RequestBugReporter
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UYBugReporterComponent_BP_C::BP_RequestBugReporter()
{
	static auto fn = UObject::FindObject<UFunction>("Function YBugReporterComponent_BP.YBugReporterComponent_BP_C.BP_RequestBugReporter");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YBugReporterComponent_BP.YBugReporterComponent_BP_C.ExecuteUbergraph_YBugReporterComponent_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYBugReporterComponent_BP_C::ExecuteUbergraph_YBugReporterComponent_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function YBugReporterComponent_BP.YBugReporterComponent_BP_C.ExecuteUbergraph_YBugReporterComponent_BP");

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
