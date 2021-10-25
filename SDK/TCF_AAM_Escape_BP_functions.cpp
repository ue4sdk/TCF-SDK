// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AAM_Escape_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AAM_Escape_BP.AAM_Escape_BP_C.FindEscapeLocationForPlayers
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAAM_Escape_BP_C::FindEscapeLocationForPlayers()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Escape_BP.AAM_Escape_BP_C.FindEscapeLocationForPlayers"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AAM_Escape_BP.AAM_Escape_BP_C.ApplyMapSpecificTuningValues
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAAM_Escape_BP_C::ApplyMapSpecificTuningValues()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Escape_BP.AAM_Escape_BP_C.ApplyMapSpecificTuningValues"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AAM_Escape_BP.AAM_Escape_BP_C.FindEscapeLocation
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class AAA_EscapeShipTerminal_BP_C*> EscapeActors                   (CPF_Parm, CPF_OutParm)

void AAAM_Escape_BP_C::FindEscapeLocation(class APlayerState* PlayerState, TArray<class AAA_EscapeShipTerminal_BP_C*>* EscapeActors)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Escape_BP.AAM_Escape_BP_C.FindEscapeLocation"));

	struct
	{
		class APlayerState*            PlayerState;
		TArray<class AAA_EscapeShipTerminal_BP_C*> EscapeActors;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);

	if (EscapeActors != nullptr)
		*EscapeActors = params.EscapeActors;
}


// Function AAM_Escape_BP.AAM_Escape_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAAM_Escape_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Escape_BP.AAM_Escape_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AAM_Escape_BP.AAM_Escape_BP_C.OnPlayerJoined
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAAM_Escape_BP_C::OnPlayerJoined(class APlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Escape_BP.AAM_Escape_BP_C.OnPlayerJoined"));

	struct
	{
		class APlayerState*            PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function AAM_Escape_BP.AAM_Escape_BP_C.OnEscapeLocationsCached
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAAM_Escape_BP_C::OnEscapeLocationsCached()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Escape_BP.AAM_Escape_BP_C.OnEscapeLocationsCached"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AAM_Escape_BP.AAM_Escape_BP_C.OnActivitiesSpawned_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAAM_Escape_BP_C::OnActivitiesSpawned_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Escape_BP.AAM_Escape_BP_C.OnActivitiesSpawned_Event_1"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AAM_Escape_BP.AAM_Escape_BP_C.BP_OnInitialActorSpawningFinished_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYActivityActorManager*  activityActorManager           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAAM_Escape_BP_C::BP_OnInitialActorSpawningFinished_Event_1(class AYActivityActorManager* activityActorManager)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Escape_BP.AAM_Escape_BP_C.BP_OnInitialActorSpawningFinished_Event_1"));

	struct
	{
		class AYActivityActorManager*  activityActorManager;
	} params;

	params.activityActorManager = activityActorManager;

	UObject::ProcessEvent(fn, &params);
}


// Function AAM_Escape_BP.AAM_Escape_BP_C.OnPlayerLeft
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAAM_Escape_BP_C::OnPlayerLeft(class APlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Escape_BP.AAM_Escape_BP_C.OnPlayerLeft"));

	struct
	{
		class APlayerState*            PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function AAM_Escape_BP.AAM_Escape_BP_C.DEBUG_EnableAllEvacLocations
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAAM_Escape_BP_C::DEBUG_EnableAllEvacLocations()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Escape_BP.AAM_Escape_BP_C.DEBUG_EnableAllEvacLocations"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AAM_Escape_BP.AAM_Escape_BP_C.ExecuteUbergraph_AAM_Escape_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAAM_Escape_BP_C::ExecuteUbergraph_AAM_Escape_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Escape_BP.AAM_Escape_BP_C.ExecuteUbergraph_AAM_Escape_BP"));

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
