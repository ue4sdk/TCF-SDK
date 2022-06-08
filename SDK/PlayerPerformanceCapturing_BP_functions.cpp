// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PlayerPerformanceCapturing_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerPerformanceCapturing_BP.PlayerPerformanceCapturing_BP_C.AddMapInfo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerPerformanceCapturing_BP_C::AddMapInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerPerformanceCapturing_BP.PlayerPerformanceCapturing_BP_C.AddMapInfo"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerPerformanceCapturing_BP.PlayerPerformanceCapturing_BP_C.AddActorCounts
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerPerformanceCapturing_BP_C::AddActorCounts()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerPerformanceCapturing_BP.PlayerPerformanceCapturing_BP_C.AddActorCounts"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerPerformanceCapturing_BP.PlayerPerformanceCapturing_BP_C.AddCaptureLocation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerPerformanceCapturing_BP_C::AddCaptureLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerPerformanceCapturing_BP.PlayerPerformanceCapturing_BP_C.AddCaptureLocation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerPerformanceCapturing_BP.PlayerPerformanceCapturing_BP_C.EnableStats
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerPerformanceCapturing_BP_C::EnableStats()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerPerformanceCapturing_BP.PlayerPerformanceCapturing_BP_C.EnableStats"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerPerformanceCapturing_BP.PlayerPerformanceCapturing_BP_C.StopAndSend
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerPerformanceCapturing_BP_C::StopAndSend()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerPerformanceCapturing_BP.PlayerPerformanceCapturing_BP_C.StopAndSend"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerPerformanceCapturing_BP.PlayerPerformanceCapturing_BP_C.AddStatIncAverage
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FName>           Stats_AvgInc                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<struct FName>           Stats_Count                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UPlayerPerformanceCapturing_BP_C::AddStatIncAverage(TArray<struct FName>* Stats_AvgInc, TArray<struct FName>* Stats_Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerPerformanceCapturing_BP.PlayerPerformanceCapturing_BP_C.AddStatIncAverage"));

	struct
	{
		TArray<struct FName>           Stats_AvgInc;
		TArray<struct FName>           Stats_Count;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Stats_AvgInc != nullptr)
		*Stats_AvgInc = params.Stats_AvgInc;
	if (Stats_Count != nullptr)
		*Stats_Count = params.Stats_Count;
}


// Function PlayerPerformanceCapturing_BP.PlayerPerformanceCapturing_BP_C.StartNewCapture
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Title                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerPerformanceCapturing_BP_C::StartNewCapture(const struct FString& Title, float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerPerformanceCapturing_BP.PlayerPerformanceCapturing_BP_C.StartNewCapture"));

	struct
	{
		struct FString                 Title;
		float                          Duration;
	} params = {};

	params.Title = Title;
	params.Duration = Duration;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
