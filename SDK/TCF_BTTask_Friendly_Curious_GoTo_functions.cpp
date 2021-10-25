// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_BTTask_Friendly_Curious_GoTo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTTask_Friendly_Curious_GoTo.BTTask_Friendly_Curious_GoTo_C.OnFail_9E09628B482FB6B88D1E56952E98243E
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> MovementResult                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTTask_Friendly_Curious_GoTo_C::OnFail_9E09628B482FB6B88D1E56952E98243E(TEnumAsByte<EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BTTask_Friendly_Curious_GoTo.BTTask_Friendly_Curious_GoTo_C.OnFail_9E09628B482FB6B88D1E56952E98243E"));

	struct
	{
		TEnumAsByte<EPathFollowingResult> MovementResult;
	} params;

	params.MovementResult = MovementResult;

	UObject::ProcessEvent(fn, &params);
}


// Function BTTask_Friendly_Curious_GoTo.BTTask_Friendly_Curious_GoTo_C.OnSuccess_9E09628B482FB6B88D1E56952E98243E
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> MovementResult                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTTask_Friendly_Curious_GoTo_C::OnSuccess_9E09628B482FB6B88D1E56952E98243E(TEnumAsByte<EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BTTask_Friendly_Curious_GoTo.BTTask_Friendly_Curious_GoTo_C.OnSuccess_9E09628B482FB6B88D1E56952E98243E"));

	struct
	{
		TEnumAsByte<EPathFollowingResult> MovementResult;
	} params;

	params.MovementResult = MovementResult;

	UObject::ProcessEvent(fn, &params);
}


// Function BTTask_Friendly_Curious_GoTo.BTTask_Friendly_Curious_GoTo_C.ReceiveExecute
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  ownerActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTTask_Friendly_Curious_GoTo_C::ReceiveExecute(class AActor* ownerActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BTTask_Friendly_Curious_GoTo.BTTask_Friendly_Curious_GoTo_C.ReceiveExecute"));

	struct
	{
		class AActor*                  ownerActor;
	} params;

	params.ownerActor = ownerActor;

	UObject::ProcessEvent(fn, &params);
}


// Function BTTask_Friendly_Curious_GoTo.BTTask_Friendly_Curious_GoTo_C.ExecuteUbergraph_BTTask_Friendly_Curious_GoTo
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTTask_Friendly_Curious_GoTo_C::ExecuteUbergraph_BTTask_Friendly_Curious_GoTo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BTTask_Friendly_Curious_GoTo.BTTask_Friendly_Curious_GoTo_C.ExecuteUbergraph_BTTask_Friendly_Curious_GoTo"));

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
