// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "EQSContext_AllyLocationAndCombatLocations_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EQSContext_AllyLocationAndCombatLocations.EQSContext_AllyLocationAndCombatLocations_C.TryGetMoveToLocation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AYAICharacter*           aiCharacter                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 MoveToLocation                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           HasMoveToLocation              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UEQSContext_AllyLocationAndCombatLocations_C::TryGetMoveToLocation(class AYAICharacter* aiCharacter, struct FVector* MoveToLocation, bool* HasMoveToLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EQSContext_AllyLocationAndCombatLocations.EQSContext_AllyLocationAndCombatLocations_C.TryGetMoveToLocation"));

	struct
	{
		class AYAICharacter*           aiCharacter;
		struct FVector                 MoveToLocation;
		bool                           HasMoveToLocation;
	} params = {};

	params.aiCharacter = aiCharacter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (MoveToLocation != nullptr)
		*MoveToLocation = params.MoveToLocation;
	if (HasMoveToLocation != nullptr)
		*HasMoveToLocation = params.HasMoveToLocation;
}


// Function EQSContext_AllyLocationAndCombatLocations.EQSContext_AllyLocationAndCombatLocations_C.ProvideLocationsSet
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class UObject*                 QuerierObject                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  QuerierActor                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FVector>         ResultingLocationSet           (CPF_Parm, CPF_OutParm)

void UEQSContext_AllyLocationAndCombatLocations_C::ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EQSContext_AllyLocationAndCombatLocations.EQSContext_AllyLocationAndCombatLocations_C.ProvideLocationsSet"));

	struct
	{
		class UObject*                 QuerierObject;
		class AActor*                  QuerierActor;
		TArray<struct FVector>         ResultingLocationSet;
	} params = {};

	params.QuerierObject = QuerierObject;
	params.QuerierActor = QuerierActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ResultingLocationSet != nullptr)
		*ResultingLocationSet = params.ResultingLocationSet;
}


// Function EQSContext_AllyLocationAndCombatLocations.EQSContext_AllyLocationAndCombatLocations_C.ProvideSingleActor
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class UObject*                 QuerierObject                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  QuerierActor                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  ResultingActor                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEQSContext_AllyLocationAndCombatLocations_C::ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EQSContext_AllyLocationAndCombatLocations.EQSContext_AllyLocationAndCombatLocations_C.ProvideSingleActor"));

	struct
	{
		class UObject*                 QuerierObject;
		class AActor*                  QuerierActor;
		class AActor*                  ResultingActor;
	} params = {};

	params.QuerierObject = QuerierObject;
	params.QuerierActor = QuerierActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ResultingActor != nullptr)
		*ResultingActor = params.ResultingActor;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
