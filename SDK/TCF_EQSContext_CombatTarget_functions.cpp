// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_EQSContext_CombatTarget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EQSContext_CombatTarget.EQSContext_CombatTarget_C.ProvideSingleActor
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class UObject*                 QuerierObject                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  QuerierActor                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  ResultingActor                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEQSContext_CombatTarget_C::ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function EQSContext_CombatTarget.EQSContext_CombatTarget_C.ProvideSingleActor");

	struct
	{
		class UObject*                 QuerierObject;
		class AActor*                  QuerierActor;
		class AActor*                  ResultingActor;
	} params;

	params.QuerierObject = QuerierObject;
	params.QuerierActor = QuerierActor;

	UObject::ProcessEvent(fn, &params);

	if (ResultingActor != nullptr)
		*ResultingActor = params.ResultingActor;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
