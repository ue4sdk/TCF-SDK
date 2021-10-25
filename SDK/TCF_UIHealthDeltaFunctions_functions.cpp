// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_UIHealthDeltaFunctions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UIHealthDeltaFunctions.UIHealthDeltaFunctions_C.UpdateDeltaProgressBar
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UProgressBar*            ProgressBar_Delta              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UProgressBar*            ProgressBar                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          TimeLeftUntilProgressDeltaStarts_REFERENCE (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AdjustmentSpeed                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIHealthDeltaFunctions_C::UpdateDeltaProgressBar(class UProgressBar* ProgressBar_Delta, class UProgressBar* ProgressBar, float AdjustmentSpeed, class UObject* __WorldContext, float* DeltaTime, float* TimeLeftUntilProgressDeltaStarts_REFERENCE)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIHealthDeltaFunctions.UIHealthDeltaFunctions_C.UpdateDeltaProgressBar");

	struct
	{
		float                          DeltaTime;
		class UProgressBar*            ProgressBar_Delta;
		class UProgressBar*            ProgressBar;
		float                          TimeLeftUntilProgressDeltaStarts_REFERENCE;
		float                          AdjustmentSpeed;
		class UObject*                 __WorldContext;
	} params;

	params.ProgressBar_Delta = ProgressBar_Delta;
	params.ProgressBar = ProgressBar;
	params.AdjustmentSpeed = AdjustmentSpeed;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (DeltaTime != nullptr)
		*DeltaTime = params.DeltaTime;
	if (TimeLeftUntilProgressDeltaStarts_REFERENCE != nullptr)
		*TimeLeftUntilProgressDeltaStarts_REFERENCE = params.TimeLeftUntilProgressDeltaStarts_REFERENCE;
}


// Function UIHealthDeltaFunctions.UIHealthDeltaFunctions_C.SetupShowDeltaHealth
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          TimeLeftUntilProgressDeltaStarts_REEFERENCE (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UProgressBar*            ProgressBar_Delta              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UProgressBar*            ProgressBar                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          DelayDeltaProgress             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUIHealthDeltaFunctions_C::SetupShowDeltaHealth(class UProgressBar* ProgressBar_Delta, class UProgressBar* ProgressBar, float DelayDeltaProgress, class UObject* __WorldContext, float* TimeLeftUntilProgressDeltaStarts_REEFERENCE)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIHealthDeltaFunctions.UIHealthDeltaFunctions_C.SetupShowDeltaHealth");

	struct
	{
		float                          TimeLeftUntilProgressDeltaStarts_REEFERENCE;
		class UProgressBar*            ProgressBar_Delta;
		class UProgressBar*            ProgressBar;
		float                          DelayDeltaProgress;
		class UObject*                 __WorldContext;
	} params;

	params.ProgressBar_Delta = ProgressBar_Delta;
	params.ProgressBar = ProgressBar;
	params.DelayDeltaProgress = DelayDeltaProgress;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (TimeLeftUntilProgressDeltaStarts_REEFERENCE != nullptr)
		*TimeLeftUntilProgressDeltaStarts_REEFERENCE = params.TimeLeftUntilProgressDeltaStarts_REEFERENCE;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
