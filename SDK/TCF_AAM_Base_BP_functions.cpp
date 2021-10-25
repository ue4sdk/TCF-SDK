// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AAM_Base_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AAM_Base_BP.AAM_Base_BP_C.DetermineMinimumDistanceToPlayers
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAAM_Base_BP_C::DetermineMinimumDistanceToPlayers(float* Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Base_BP.AAM_Base_BP_C.DetermineMinimumDistanceToPlayers"));

	struct
	{
		float                          Result;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function AAM_Base_BP.AAM_Base_BP_C.BP_SpawnActivityActorFromToken
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYSpawnActivityActorTokenData requestData                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class AActor* AAAM_Base_BP_C::BP_SpawnActivityActorFromToken(const struct FYSpawnActivityActorTokenData& requestData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Base_BP.AAM_Base_BP_C.BP_SpawnActivityActorFromToken"));

	struct
	{
		struct FYSpawnActivityActorTokenData requestData;
		class AActor*                  ReturnValue;
	} params;

	params.requestData = requestData;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AAM_Base_BP.AAM_Base_BP_C.BP_GetDebugDescription
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash)

struct FString AAAM_Base_BP_C::BP_GetDebugDescription()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Base_BP.AAM_Base_BP_C.BP_GetDebugDescription"));

	struct
	{
		struct FString                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AAM_Base_BP.AAM_Base_BP_C.RequestActorSpawnToken
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYActivityLocation*      Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UYActivityRegisterComponent* RegisterComponentOverride      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAAM_Base_BP_C::RequestActorSpawnToken(class AYActivityLocation* Location, class UYActivityRegisterComponent* RegisterComponentOverride)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Base_BP.AAM_Base_BP_C.RequestActorSpawnToken"));

	struct
	{
		class AYActivityLocation*      Location;
		class UYActivityRegisterComponent* RegisterComponentOverride;
	} params;

	params.Location = Location;
	params.RegisterComponentOverride = RegisterComponentOverride;

	UObject::ProcessEvent(fn, &params);
}


// Function AAM_Base_BP.AAM_Base_BP_C.RequestActorSpawnTokens
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAAM_Base_BP_C::RequestActorSpawnTokens(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Base_BP.AAM_Base_BP_C.RequestActorSpawnTokens"));

	struct
	{
		int                            Amount;
	} params;

	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function AAM_Base_BP.AAM_Base_BP_C.GetActorClassToSpawn
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYActivityLocation*      Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass*                  ActivityActorClass             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void AAAM_Base_BP_C::GetActorClassToSpawn(class AYActivityLocation* Location, class UClass** ActivityActorClass)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Base_BP.AAM_Base_BP_C.GetActorClassToSpawn"));

	struct
	{
		class AYActivityLocation*      Location;
		class UClass*                  ActivityActorClass;
	} params;

	params.Location = Location;

	UObject::ProcessEvent(fn, &params);

	if (ActivityActorClass != nullptr)
		*ActivityActorClass = params.ActivityActorClass;
}


// Function AAM_Base_BP.AAM_Base_BP_C.OnRespawnCheck
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAAM_Base_BP_C::OnRespawnCheck()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Base_BP.AAM_Base_BP_C.OnRespawnCheck"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AAM_Base_BP.AAM_Base_BP_C.ProgressInitialSpawning
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAAM_Base_BP_C::ProgressInitialSpawning()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Base_BP.AAM_Base_BP_C.ProgressInitialSpawning"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AAM_Base_BP.AAM_Base_BP_C.SetupMatchStartSpawning
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAAM_Base_BP_C::SetupMatchStartSpawning()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Base_BP.AAM_Base_BP_C.SetupMatchStartSpawning"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AAM_Base_BP.AAM_Base_BP_C.OnProgressInitialSpawning
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAAM_Base_BP_C::OnProgressInitialSpawning()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Base_BP.AAM_Base_BP_C.OnProgressInitialSpawning"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AAM_Base_BP.AAM_Base_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAAM_Base_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Base_BP.AAM_Base_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AAM_Base_BP.AAM_Base_BP_C.SetupLoopingRespawnChecks
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAAM_Base_BP_C::SetupLoopingRespawnChecks()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Base_BP.AAM_Base_BP_C.SetupLoopingRespawnChecks"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AAM_Base_BP.AAM_Base_BP_C.RespawnCheck
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAAM_Base_BP_C::RespawnCheck()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Base_BP.AAM_Base_BP_C.RespawnCheck"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AAM_Base_BP.AAM_Base_BP_C.DebugRequestTriggerActivity
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerController*       requestingPlayer               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAAM_Base_BP_C::DebugRequestTriggerActivity(class APlayerController* requestingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Base_BP.AAM_Base_BP_C.DebugRequestTriggerActivity"));

	struct
	{
		class APlayerController*       requestingPlayer;
	} params;

	params.requestingPlayer = requestingPlayer;

	UObject::ProcessEvent(fn, &params);
}


// Function AAM_Base_BP.AAM_Base_BP_C.OnSpawnTokensEmpty_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAAM_Base_BP_C::OnSpawnTokensEmpty_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Base_BP.AAM_Base_BP_C.OnSpawnTokensEmpty_Event_1"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AAM_Base_BP.AAM_Base_BP_C.UnbindFromTokensEmpty
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAAM_Base_BP_C::UnbindFromTokensEmpty()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Base_BP.AAM_Base_BP_C.UnbindFromTokensEmpty"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AAM_Base_BP.AAM_Base_BP_C.ExecuteUbergraph_AAM_Base_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAAM_Base_BP_C::ExecuteUbergraph_AAM_Base_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Base_BP.AAM_Base_BP_C.ExecuteUbergraph_AAM_Base_BP"));

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
