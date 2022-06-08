// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AutomationComponent_Base_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AutomationComponent_Base_BP.AutomationComponent_Base_BP_C.StartAutomation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FAutomationTestStartData AutomationTestStartData        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UAutomationComponent_Base_BP_C::StartAutomation(const struct FAutomationTestStartData& AutomationTestStartData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutomationComponent_Base_BP.AutomationComponent_Base_BP_C.StartAutomation"));

	struct
	{
		struct FAutomationTestStartData AutomationTestStartData;
	} params = {};

	params.AutomationTestStartData = AutomationTestStartData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AutomationComponent_Base_BP.AutomationComponent_Base_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAutomationComponent_Base_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutomationComponent_Base_BP.AutomationComponent_Base_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AutomationComponent_Base_BP.AutomationComponent_Base_BP_C.ExecuteUbergraph_AutomationComponent_Base_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAutomationComponent_Base_BP_C::ExecuteUbergraph_AutomationComponent_Base_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutomationComponent_Base_BP.AutomationComponent_Base_BP_C.ExecuteUbergraph_AutomationComponent_Base_BP"));

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


// Function AutomationComponent_Base_BP.AutomationComponent_Base_BP_C.OnAutomationEndedEvent__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EAutomationResultCode> AutomationResultCode           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAutomationComponent_Base_BP_C::OnAutomationEndedEvent__DelegateSignature(TEnumAsByte<EAutomationResultCode> AutomationResultCode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutomationComponent_Base_BP.AutomationComponent_Base_BP_C.OnAutomationEndedEvent__DelegateSignature"));

	struct
	{
		TEnumAsByte<EAutomationResultCode> AutomationResultCode;
	} params = {};

	params.AutomationResultCode = AutomationResultCode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
