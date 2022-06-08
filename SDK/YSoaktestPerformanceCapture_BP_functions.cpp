// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YSoaktestPerformanceCapture_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YSoaktestPerformanceCapture_BP.YSoaktestPerformanceCapture_BP_C.SendSimpleFPSData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYSoaktestPerformanceCapture_BP_C::SendSimpleFPSData()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YSoaktestPerformanceCapture_BP.YSoaktestPerformanceCapture_BP_C.SendSimpleFPSData"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YSoaktestPerformanceCapture_BP.YSoaktestPerformanceCapture_BP_C.StartSimplePefromanceCapture
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 timeSeriesSpecifier            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 performanceCaptureName         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// float                          TimerSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYSoaktestPerformanceCapture_BP_C::StartSimplePefromanceCapture(const struct FString& timeSeriesSpecifier, const struct FString& performanceCaptureName, float TimerSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YSoaktestPerformanceCapture_BP.YSoaktestPerformanceCapture_BP_C.StartSimplePefromanceCapture"));

	struct
	{
		struct FString                 timeSeriesSpecifier;
		struct FString                 performanceCaptureName;
		float                          TimerSeconds;
	} params = {};

	params.timeSeriesSpecifier = timeSeriesSpecifier;
	params.performanceCaptureName = performanceCaptureName;
	params.TimerSeconds = TimerSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
