// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_BTTask_Friendly_StopMoving_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTTask_Friendly_StopMoving.BTTask_Friendly_StopMoving_C.OnFail_CC0A5099486E38BB454A129DF4BE305C
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> MovementResult                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTTask_Friendly_StopMoving_C::OnFail_CC0A5099486E38BB454A129DF4BE305C(TEnumAsByte<EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BTTask_Friendly_StopMoving.BTTask_Friendly_StopMoving_C.OnFail_CC0A5099486E38BB454A129DF4BE305C"));

	struct
	{
		TEnumAsByte<EPathFollowingResult> MovementResult;
	} params;

	params.MovementResult = MovementResult;

	UObject::ProcessEvent(fn, &params);
}


// Function BTTask_Friendly_StopMoving.BTTask_Friendly_StopMoving_C.OnSuccess_CC0A5099486E38BB454A129DF4BE305C
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> MovementResult                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTTask_Friendly_StopMoving_C::OnSuccess_CC0A5099486E38BB454A129DF4BE305C(TEnumAsByte<EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BTTask_Friendly_StopMoving.BTTask_Friendly_StopMoving_C.OnSuccess_CC0A5099486E38BB454A129DF4BE305C"));

	struct
	{
		TEnumAsByte<EPathFollowingResult> MovementResult;
	} params;

	params.MovementResult = MovementResult;

	UObject::ProcessEvent(fn, &params);
}


// Function BTTask_Friendly_StopMoving.BTTask_Friendly_StopMoving_C.ReceiveExecuteAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTTask_Friendly_StopMoving_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BTTask_Friendly_StopMoving.BTTask_Friendly_StopMoving_C.ReceiveExecuteAI"));

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
	} params;

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function BTTask_Friendly_StopMoving.BTTask_Friendly_StopMoving_C.ExecuteUbergraph_BTTask_Friendly_StopMoving
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTTask_Friendly_StopMoving_C::ExecuteUbergraph_BTTask_Friendly_StopMoving(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BTTask_Friendly_StopMoving.BTTask_Friendly_StopMoving_C.ExecuteUbergraph_BTTask_Friendly_StopMoving"));

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
