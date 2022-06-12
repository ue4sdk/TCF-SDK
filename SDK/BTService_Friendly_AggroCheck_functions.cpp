// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BTService_Friendly_AggroCheck_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTService_Friendly_AggroCheck.BTService_Friendly_AggroCheck_C.ClearArrays
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class AActor*>          NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<float>                  NewParam1                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBTService_Friendly_AggroCheck_C::ClearArrays(TArray<class AActor*>* NewParam, TArray<float>* NewParam1)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTService_Friendly_AggroCheck.BTService_Friendly_AggroCheck_C.ClearArrays"));

	struct
	{
		TArray<class AActor*>          NewParam;
		TArray<float>                  NewParam1;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
	if (NewParam1 != nullptr)
		*NewParam1 = params.NewParam1;
}


// Function BTService_Friendly_AggroCheck.BTService_Friendly_AggroCheck_C.SortTargetsByDistance
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class AActor*>          VisibleTargets                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<float>                  VisibleDistances               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<class AActor*>          VisibleTargetsSorted           (CPF_Parm, CPF_OutParm)
// TArray<float>                  VisibleDistancesSorted         (CPF_Parm, CPF_OutParm)

void UBTService_Friendly_AggroCheck_C::SortTargetsByDistance(TArray<class AActor*>* VisibleTargets, TArray<float>* VisibleDistances, TArray<class AActor*>* VisibleTargetsSorted, TArray<float>* VisibleDistancesSorted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTService_Friendly_AggroCheck.BTService_Friendly_AggroCheck_C.SortTargetsByDistance"));

	struct
	{
		TArray<class AActor*>          VisibleTargets;
		TArray<float>                  VisibleDistances;
		TArray<class AActor*>          VisibleTargetsSorted;
		TArray<float>                  VisibleDistancesSorted;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (VisibleTargets != nullptr)
		*VisibleTargets = params.VisibleTargets;
	if (VisibleDistances != nullptr)
		*VisibleDistances = params.VisibleDistances;
	if (VisibleTargetsSorted != nullptr)
		*VisibleTargetsSorted = params.VisibleTargetsSorted;
	if (VisibleDistancesSorted != nullptr)
		*VisibleDistancesSorted = params.VisibleDistancesSorted;
}


// Function BTService_Friendly_AggroCheck.BTService_Friendly_AggroCheck_C.CheckVisibilityOnSensedTargets
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class AActor*>          SensedTargets                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBTService_Friendly_AggroCheck_C::CheckVisibilityOnSensedTargets(TArray<class AActor*>* SensedTargets)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTService_Friendly_AggroCheck.BTService_Friendly_AggroCheck_C.CheckVisibilityOnSensedTargets"));

	struct
	{
		TArray<class AActor*>          SensedTargets;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SensedTargets != nullptr)
		*SensedTargets = params.SensedTargets;
}


// Function BTService_Friendly_AggroCheck.BTService_Friendly_AggroCheck_C.SetBlackboardValues
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class AActor*>          VisibleTargets                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<float>                  VisibleDistances               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           IsPlayerCrouching              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsPlayerFiring                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsPlayerTargeting              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBTService_Friendly_AggroCheck_C::SetBlackboardValues(bool IsPlayerCrouching, bool IsPlayerFiring, bool IsPlayerTargeting, TArray<class AActor*>* VisibleTargets, TArray<float>* VisibleDistances)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTService_Friendly_AggroCheck.BTService_Friendly_AggroCheck_C.SetBlackboardValues"));

	struct
	{
		TArray<class AActor*>          VisibleTargets;
		TArray<float>                  VisibleDistances;
		bool                           IsPlayerCrouching;
		bool                           IsPlayerFiring;
		bool                           IsPlayerTargeting;
	} params = {};

	params.IsPlayerCrouching = IsPlayerCrouching;
	params.IsPlayerFiring = IsPlayerFiring;
	params.IsPlayerTargeting = IsPlayerTargeting;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (VisibleTargets != nullptr)
		*VisibleTargets = params.VisibleTargets;
	if (VisibleDistances != nullptr)
		*VisibleDistances = params.VisibleDistances;
}


// Function BTService_Friendly_AggroCheck.BTService_Friendly_AggroCheck_C.ReceiveTickAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTService_Friendly_AggroCheck_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTService_Friendly_AggroCheck.BTService_Friendly_AggroCheck_C.ReceiveTickAI"));

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
		float                          DeltaSeconds;
	} params = {};

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTService_Friendly_AggroCheck.BTService_Friendly_AggroCheck_C.ExecuteUbergraph_BTService_Friendly_AggroCheck
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTService_Friendly_AggroCheck_C::ExecuteUbergraph_BTService_Friendly_AggroCheck(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTService_Friendly_AggroCheck.BTService_Friendly_AggroCheck_C.ExecuteUbergraph_BTService_Friendly_AggroCheck"));

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
