// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ActivityBIHookFunctions_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ActivityBIHookFunctions_BP.ActivityBIHookFunctions_BP_C.SendPlayerEscapeBIHook
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYEscapeBIHookStep             step                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  playerContext                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 escapeShipId                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 EvacID                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class AActor*                  ReferenceActor                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UActivityBIHookFunctions_BP_C::SendPlayerEscapeBIHook(EYEscapeBIHookStep step, class AActor* playerContext, const struct FString& escapeShipId, const struct FString& EvacID, class AActor* ReferenceActor, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ActivityBIHookFunctions_BP.ActivityBIHookFunctions_BP_C.SendPlayerEscapeBIHook"));

	struct
	{
		EYEscapeBIHookStep             step;
		class AActor*                  playerContext;
		struct FString                 escapeShipId;
		struct FString                 EvacID;
		class AActor*                  ReferenceActor;
		class UObject*                 __WorldContext;
	} params = {};

	params.step = step;
	params.playerContext = playerContext;
	params.escapeShipId = escapeShipId;
	params.EvacID = EvacID;
	params.ReferenceActor = ReferenceActor;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
