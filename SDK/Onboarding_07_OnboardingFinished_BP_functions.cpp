// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Onboarding_07_OnboardingFinished_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Onboarding_07_OnboardingFinished_BP.Onboarding_07_OnboardingFinished_BP_C.BP_StartMetaQuest
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UOnboarding_07_OnboardingFinished_BP_C::BP_StartMetaQuest()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_07_OnboardingFinished_BP.Onboarding_07_OnboardingFinished_BP_C.BP_StartMetaQuest"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_07_OnboardingFinished_BP.Onboarding_07_OnboardingFinished_BP_C.NotUsedStep
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMissionResultType            Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_07_OnboardingFinished_BP_C::NotUsedStep(EYMissionResultType Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_07_OnboardingFinished_BP.Onboarding_07_OnboardingFinished_BP_C.NotUsedStep"));

	struct
	{
		EYMissionResultType            Result;
	} params = {};

	params.Result = Result;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_07_OnboardingFinished_BP.Onboarding_07_OnboardingFinished_BP_C.ExecuteUbergraph_Onboarding_07_OnboardingFinished_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_07_OnboardingFinished_BP_C::ExecuteUbergraph_Onboarding_07_OnboardingFinished_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_07_OnboardingFinished_BP.Onboarding_07_OnboardingFinished_BP_C.ExecuteUbergraph_Onboarding_07_OnboardingFinished_BP"));

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
