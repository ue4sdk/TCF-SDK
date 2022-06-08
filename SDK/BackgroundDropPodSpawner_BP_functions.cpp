// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BackgroundDropPodSpawner_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BackgroundDropPodSpawner_BP.BackgroundDropPodSpawner_BP_C.IsPlayerInAnotherTeam
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerStateSpawned             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBackgroundDropPodSpawner_BP_C::IsPlayerInAnotherTeam(class APlayerState* PlayerStateSpawned, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BackgroundDropPodSpawner_BP.BackgroundDropPodSpawner_BP_C.IsPlayerInAnotherTeam"));

	struct
	{
		class APlayerState*            PlayerStateSpawned;
		bool                           Result;
	} params = {};

	params.PlayerStateSpawned = PlayerStateSpawned;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BackgroundDropPodSpawner_BP.BackgroundDropPodSpawner_BP_C.OnPlayerSpawnedAt
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerState*           PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  startActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBackgroundDropPodSpawner_BP_C::OnPlayerSpawnedAt(class AYPlayerState* PlayerState, class AActor* startActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BackgroundDropPodSpawner_BP.BackgroundDropPodSpawner_BP_C.OnPlayerSpawnedAt"));

	struct
	{
		class AYPlayerState*           PlayerState;
		class AActor*                  startActor;
	} params = {};

	params.PlayerState = PlayerState;
	params.startActor = startActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BackgroundDropPodSpawner_BP.BackgroundDropPodSpawner_BP_C.OnLoaded_765CCE974A1B409C950961841FA0B596
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UObject*/      Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void UBackgroundDropPodSpawner_BP_C::OnLoaded_765CCE974A1B409C950961841FA0B596(class UClass* /*UObject*/ Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BackgroundDropPodSpawner_BP.BackgroundDropPodSpawner_BP_C.OnLoaded_765CCE974A1B409C950961841FA0B596"));

	struct
	{
		class UClass* /*UObject*/      Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BackgroundDropPodSpawner_BP.BackgroundDropPodSpawner_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBackgroundDropPodSpawner_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BackgroundDropPodSpawner_BP.BackgroundDropPodSpawner_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BackgroundDropPodSpawner_BP.BackgroundDropPodSpawner_BP_C.ClientSpawnPodAt
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBackgroundDropPodSpawner_BP_C::ClientSpawnPodAt(const struct FVector& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BackgroundDropPodSpawner_BP.BackgroundDropPodSpawner_BP_C.ClientSpawnPodAt"));

	struct
	{
		struct FVector                 Location;
	} params = {};

	params.Location = Location;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BackgroundDropPodSpawner_BP.BackgroundDropPodSpawner_BP_C.SpawnPodAt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBackgroundDropPodSpawner_BP_C::SpawnPodAt(const struct FVector& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BackgroundDropPodSpawner_BP.BackgroundDropPodSpawner_BP_C.SpawnPodAt"));

	struct
	{
		struct FVector                 Location;
	} params = {};

	params.Location = Location;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BackgroundDropPodSpawner_BP.BackgroundDropPodSpawner_BP_C.OnDebugSpawnPod
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBackgroundDropPodSpawner_BP_C::OnDebugSpawnPod(const struct FVector& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BackgroundDropPodSpawner_BP.BackgroundDropPodSpawner_BP_C.OnDebugSpawnPod"));

	struct
	{
		struct FVector                 Location;
	} params = {};

	params.Location = Location;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BackgroundDropPodSpawner_BP.BackgroundDropPodSpawner_BP_C.BP_OnPlayerSpawnBackgroundDropPod_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerController*       Controller                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 introStartLocation             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBackgroundDropPodSpawner_BP_C::BP_OnPlayerSpawnBackgroundDropPod_Event_1(class APlayerController* Controller, const struct FVector& introStartLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BackgroundDropPodSpawner_BP.BackgroundDropPodSpawner_BP_C.BP_OnPlayerSpawnBackgroundDropPod_Event_1"));

	struct
	{
		class APlayerController*       Controller;
		struct FVector                 introStartLocation;
	} params = {};

	params.Controller = Controller;
	params.introStartLocation = introStartLocation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BackgroundDropPodSpawner_BP.BackgroundDropPodSpawner_BP_C.ExecuteUbergraph_BackgroundDropPodSpawner_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBackgroundDropPodSpawner_BP_C::ExecuteUbergraph_BackgroundDropPodSpawner_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BackgroundDropPodSpawner_BP.BackgroundDropPodSpawner_BP_C.ExecuteUbergraph_BackgroundDropPodSpawner_BP"));

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
