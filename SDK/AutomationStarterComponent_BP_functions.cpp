// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AutomationStarterComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AutomationStarterComponent_BP.AutomationStarterComponent_BP_C.ExtractAutomationTestFromCommandLine
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 CommandLine                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 AutomationTest                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UAutomationStarterComponent_BP_C::ExtractAutomationTestFromCommandLine(const struct FString& CommandLine, struct FString* AutomationTest)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutomationStarterComponent_BP.AutomationStarterComponent_BP_C.ExtractAutomationTestFromCommandLine"));

	struct
	{
		struct FString                 CommandLine;
		struct FString                 AutomationTest;
	} params = {};

	params.CommandLine = CommandLine;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AutomationTest != nullptr)
		*AutomationTest = params.AutomationTest;
}


// Function AutomationStarterComponent_BP.AutomationStarterComponent_BP_C.Start
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 CommandLine                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           succeeded                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UAutomationStarterComponent_BP_C::Start(const struct FString& CommandLine, bool* succeeded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutomationStarterComponent_BP.AutomationStarterComponent_BP_C.Start"));

	struct
	{
		struct FString                 CommandLine;
		bool                           succeeded;
	} params = {};

	params.CommandLine = CommandLine;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (succeeded != nullptr)
		*succeeded = params.succeeded;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
