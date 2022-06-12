// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BTTask_Friendly_MoveToLoc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTTask_Friendly_MoveToLoc.BTTask_Friendly_MoveToLoc_C.OnFail_422AB63A49E6C506433889991581F366
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> MovementResult                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTTask_Friendly_MoveToLoc_C::OnFail_422AB63A49E6C506433889991581F366(TEnumAsByte<EPathFollowingResult> MovementResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTTask_Friendly_MoveToLoc.BTTask_Friendly_MoveToLoc_C.OnFail_422AB63A49E6C506433889991581F366"));

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


// Function BTTask_Friendly_MoveToLoc.BTTask_Friendly_MoveToLoc_C.OnSuccess_422AB63A49E6C506433889991581F366
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> MovementResult                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTTask_Friendly_MoveToLoc_C::OnSuccess_422AB63A49E6C506433889991581F366(TEnumAsByte<EPathFollowingResult> MovementResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTTask_Friendly_MoveToLoc.BTTask_Friendly_MoveToLoc_C.OnSuccess_422AB63A49E6C506433889991581F366"));

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


// Function BTTask_Friendly_MoveToLoc.BTTask_Friendly_MoveToLoc_C.ReceiveExecuteAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTTask_Friendly_MoveToLoc_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTTask_Friendly_MoveToLoc.BTTask_Friendly_MoveToLoc_C.ReceiveExecuteAI"));

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


// Function BTTask_Friendly_MoveToLoc.BTTask_Friendly_MoveToLoc_C.ExecuteUbergraph_BTTask_Friendly_MoveToLoc
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTTask_Friendly_MoveToLoc_C::ExecuteUbergraph_BTTask_Friendly_MoveToLoc(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTTask_Friendly_MoveToLoc.BTTask_Friendly_MoveToLoc_C.ExecuteUbergraph_BTTask_Friendly_MoveToLoc"));

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
