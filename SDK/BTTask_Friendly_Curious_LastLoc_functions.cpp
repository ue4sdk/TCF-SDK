// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BTTask_Friendly_Curious_LastLoc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTTask_Friendly_Curious_LastLoc.BTTask_Friendly_Curious_LastLoc_C.OnFail_D59B7E524308BDC7B05F3B842BD486B4
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> MovementResult                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTTask_Friendly_Curious_LastLoc_C::OnFail_D59B7E524308BDC7B05F3B842BD486B4(TEnumAsByte<EPathFollowingResult> MovementResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTTask_Friendly_Curious_LastLoc.BTTask_Friendly_Curious_LastLoc_C.OnFail_D59B7E524308BDC7B05F3B842BD486B4"));

	struct
	{
		TEnumAsByte<EPathFollowingResult> MovementResult;
	} params = {};

	params.MovementResult = MovementResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTTask_Friendly_Curious_LastLoc.BTTask_Friendly_Curious_LastLoc_C.OnSuccess_D59B7E524308BDC7B05F3B842BD486B4
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> MovementResult                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTTask_Friendly_Curious_LastLoc_C::OnSuccess_D59B7E524308BDC7B05F3B842BD486B4(TEnumAsByte<EPathFollowingResult> MovementResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTTask_Friendly_Curious_LastLoc.BTTask_Friendly_Curious_LastLoc_C.OnSuccess_D59B7E524308BDC7B05F3B842BD486B4"));

	struct
	{
		TEnumAsByte<EPathFollowingResult> MovementResult;
	} params = {};

	params.MovementResult = MovementResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTTask_Friendly_Curious_LastLoc.BTTask_Friendly_Curious_LastLoc_C.ReceiveExecuteAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTTask_Friendly_Curious_LastLoc_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTTask_Friendly_Curious_LastLoc.BTTask_Friendly_Curious_LastLoc_C.ReceiveExecuteAI"));

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
	} params = {};

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTTask_Friendly_Curious_LastLoc.BTTask_Friendly_Curious_LastLoc_C.ExecuteUbergraph_BTTask_Friendly_Curious_LastLoc
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTTask_Friendly_Curious_LastLoc_C::ExecuteUbergraph_BTTask_Friendly_Curious_LastLoc(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTTask_Friendly_Curious_LastLoc.BTTask_Friendly_Curious_LastLoc_C.ExecuteUbergraph_BTTask_Friendly_Curious_LastLoc"));

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
