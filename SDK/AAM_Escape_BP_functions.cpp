// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AAM_Escape_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AAM_Escape_BP.AAM_Escape_BP_C.CheckForBeginnerMatch
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           BeginnerMatch                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAAM_Escape_BP_C::CheckForBeginnerMatch(bool* BeginnerMatch)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Escape_BP.AAM_Escape_BP_C.CheckForBeginnerMatch"));

	struct
	{
		bool                           BeginnerMatch;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (BeginnerMatch != nullptr)
		*BeginnerMatch = params.BeginnerMatch;
}


// Function AAM_Escape_BP.AAM_Escape_BP_C.FindClosestEvac
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<float>                  AllEscapeDistances             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          ClosestEvacDistance            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAAM_Escape_BP_C::FindClosestEvac(TArray<float>* AllEscapeDistances, float* ClosestEvacDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Escape_BP.AAM_Escape_BP_C.FindClosestEvac"));

	struct
	{
		TArray<float>                  AllEscapeDistances;
		float                          ClosestEvacDistance;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AllEscapeDistances != nullptr)
		*AllEscapeDistances = params.AllEscapeDistances;
	if (ClosestEvacDistance != nullptr)
		*ClosestEvacDistance = params.ClosestEvacDistance;
}


// Function AAM_Escape_BP.AAM_Escape_BP_C.ShouldUseCustomEvac
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool AAAM_Escape_BP_C::ShouldUseCustomEvac(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Escape_BP.AAM_Escape_BP_C.ShouldUseCustomEvac"));

	struct
	{
		class APawn*                   Pawn;
		bool                           ReturnValue;
	} params = {};

	params.Pawn = Pawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AAM_Escape_BP.AAM_Escape_BP_C.GetEvacLocationsForLevel
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 LevelName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// TArray<float>                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
// bool                           CustomDistancesFound           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

TArray<float> AAAM_Escape_BP_C::GetEvacLocationsForLevel(const struct FString& LevelName, bool* CustomDistancesFound)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Escape_BP.AAM_Escape_BP_C.GetEvacLocationsForLevel"));

	struct
	{
		struct FString                 LevelName;
		TArray<float>                  ReturnValue;
		bool                           CustomDistancesFound;
	} params = {};

	params.LevelName = LevelName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CustomDistancesFound != nullptr)
		*CustomDistancesFound = params.CustomDistancesFound;

	return params.ReturnValue;
}


// Function AAM_Escape_BP.AAM_Escape_BP_C.SelectCustomEvacLocations
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<float>                  EscapeDistances                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TMap<float, class AAA_EscapeShipTerminal_BP_C*> EscapeActorsByDistance         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class AAA_EscapeShipTerminal_BP_C*> CustomEscapeActors             (CPF_ConstParm, CPF_Parm, CPF_OutParm)
// int                            NumberOfEvacLocationsToPick    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAAM_Escape_BP_C::SelectCustomEvacLocations(TMap<float, class AAA_EscapeShipTerminal_BP_C*> EscapeActorsByDistance, class APawn* Pawn, TArray<class AAA_EscapeShipTerminal_BP_C*> CustomEscapeActors, TArray<float>* EscapeDistances, int* NumberOfEvacLocationsToPick)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Escape_BP.AAM_Escape_BP_C.SelectCustomEvacLocations"));

	struct
	{
		TArray<float>                  EscapeDistances;
		TMap<float, class AAA_EscapeShipTerminal_BP_C*> EscapeActorsByDistance;
		class APawn*                   Pawn;
		TArray<class AAA_EscapeShipTerminal_BP_C*> CustomEscapeActors;
		int                            NumberOfEvacLocationsToPick;
	} params = {};

	params.EscapeActorsByDistance = EscapeActorsByDistance;
	params.Pawn = Pawn;
	params.CustomEscapeActors = CustomEscapeActors;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (EscapeDistances != nullptr)
		*EscapeDistances = params.EscapeDistances;
	if (NumberOfEvacLocationsToPick != nullptr)
		*NumberOfEvacLocationsToPick = params.NumberOfEvacLocationsToPick;
}


// Function AAM_Escape_BP.AAM_Escape_BP_C.FindEscapeLocationForPlayers
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAAM_Escape_BP_C::FindEscapeLocationForPlayers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Escape_BP.AAM_Escape_BP_C.FindEscapeLocationForPlayers"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AAM_Escape_BP.AAM_Escape_BP_C.ApplyMapSpecificTuningValues
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAAM_Escape_BP_C::ApplyMapSpecificTuningValues()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Escape_BP.AAM_Escape_BP_C.ApplyMapSpecificTuningValues"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AAM_Escape_BP.AAM_Escape_BP_C.FindEscapeLocation
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class AAA_EscapeShipTerminal_BP_C*> EscapeActors                   (CPF_Parm, CPF_OutParm)

void AAAM_Escape_BP_C::FindEscapeLocation(class APlayerState* PlayerState, TArray<class AAA_EscapeShipTerminal_BP_C*>* EscapeActors)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Escape_BP.AAM_Escape_BP_C.FindEscapeLocation"));

	struct
	{
		class APlayerState*            PlayerState;
		TArray<class AAA_EscapeShipTerminal_BP_C*> EscapeActors;
	} params = {};

	params.PlayerState = PlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (EscapeActors != nullptr)
		*EscapeActors = params.EscapeActors;
}


// Function AAM_Escape_BP.AAM_Escape_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAAM_Escape_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Escape_BP.AAM_Escape_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AAM_Escape_BP.AAM_Escape_BP_C.OnPlayerJoined
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAAM_Escape_BP_C::OnPlayerJoined(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Escape_BP.AAM_Escape_BP_C.OnPlayerJoined"));

	struct
	{
		class APlayerState*            PlayerState;
	} params = {};

	params.PlayerState = PlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AAM_Escape_BP.AAM_Escape_BP_C.OnEscapeLocationsCached
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAAM_Escape_BP_C::OnEscapeLocationsCached()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Escape_BP.AAM_Escape_BP_C.OnEscapeLocationsCached"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AAM_Escape_BP.AAM_Escape_BP_C.OnActivitiesSpawned_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAAM_Escape_BP_C::OnActivitiesSpawned_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Escape_BP.AAM_Escape_BP_C.OnActivitiesSpawned_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AAM_Escape_BP.AAM_Escape_BP_C.BP_OnInitialActorSpawningFinished_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYActivityActorManager*  activityActorManager           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAAM_Escape_BP_C::BP_OnInitialActorSpawningFinished_Event_1(class AYActivityActorManager* activityActorManager)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Escape_BP.AAM_Escape_BP_C.BP_OnInitialActorSpawningFinished_Event_1"));

	struct
	{
		class AYActivityActorManager*  activityActorManager;
	} params = {};

	params.activityActorManager = activityActorManager;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AAM_Escape_BP.AAM_Escape_BP_C.OnPlayerLeft
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAAM_Escape_BP_C::OnPlayerLeft(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Escape_BP.AAM_Escape_BP_C.OnPlayerLeft"));

	struct
	{
		class APlayerState*            PlayerState;
	} params = {};

	params.PlayerState = PlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AAM_Escape_BP.AAM_Escape_BP_C.DEBUG_EnableAllEvacLocations
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAAM_Escape_BP_C::DEBUG_EnableAllEvacLocations()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Escape_BP.AAM_Escape_BP_C.DEBUG_EnableAllEvacLocations"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AAM_Escape_BP.AAM_Escape_BP_C.ExecuteUbergraph_AAM_Escape_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAAM_Escape_BP_C::ExecuteUbergraph_AAM_Escape_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Escape_BP.AAM_Escape_BP_C.ExecuteUbergraph_AAM_Escape_BP"));

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
