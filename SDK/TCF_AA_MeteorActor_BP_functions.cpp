// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AA_MeteorActor_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AA_MeteorActor_BP.AA_MeteorActor_BP_C.GetDrawDebugLineColor
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCoreUObject_FColor     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FCoreUObject_FColor AAA_MeteorActor_BP_C::GetDrawDebugLineColor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorActor_BP.AA_MeteorActor_BP_C.GetDrawDebugLineColor"));

	struct
	{
		struct FCoreUObject_FColor     ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AA_MeteorActor_BP.AA_MeteorActor_BP_C.GetDrawDebugLineTo
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector AAA_MeteorActor_BP_C::GetDrawDebugLineTo()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorActor_BP.AA_MeteorActor_BP_C.GetDrawDebugLineTo"));

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AA_MeteorActor_BP.AA_MeteorActor_BP_C.GetDebugDescription
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash)

struct FString AAA_MeteorActor_BP_C::GetDebugDescription()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorActor_BP.AA_MeteorActor_BP_C.GetDebugDescription"));

	struct
	{
		struct FString                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AA_MeteorActor_BP.AA_MeteorActor_BP_C.OnAnyMeteorDestroyed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_MeteorActor_BP_C::OnAnyMeteorDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorActor_BP.AA_MeteorActor_BP_C.OnAnyMeteorDestroyed"));

	struct
	{
		class AActor*                  DestroyedActor;
	} params;

	params.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_MeteorActor_BP.AA_MeteorActor_BP_C.AttemptMeteorSpawn
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AAC_MeteorRockBase_BP_C* SpawnedMeteor                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_MeteorActor_BP_C::AttemptMeteorSpawn(class AAC_MeteorRockBase_BP_C** SpawnedMeteor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorActor_BP.AA_MeteorActor_BP_C.AttemptMeteorSpawn"));

	struct
	{
		class AAC_MeteorRockBase_BP_C* SpawnedMeteor;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (SpawnedMeteor != nullptr)
		*SpawnedMeteor = params.SpawnedMeteor;
}


// Function AA_MeteorActor_BP.AA_MeteorActor_BP_C.UpdateDynamicSpawnChance
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_MeteorActor_BP_C::UpdateDynamicSpawnChance()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorActor_BP.AA_MeteorActor_BP_C.UpdateDynamicSpawnChance"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_MeteorActor_BP.AA_MeteorActor_BP_C.InitMeteorShower
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_MeteorActor_BP_C::InitMeteorShower()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorActor_BP.AA_MeteorActor_BP_C.InitMeteorShower"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_MeteorActor_BP.AA_MeteorActor_BP_C.SpawnMainMeteor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_MeteorActor_BP_C::SpawnMainMeteor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorActor_BP.AA_MeteorActor_BP_C.SpawnMainMeteor"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_MeteorActor_BP.AA_MeteorActor_BP_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_MeteorActor_BP_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorActor_BP.AA_MeteorActor_BP_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_MeteorActor_BP.AA_MeteorActor_BP_C.OnQueryFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper* QueryInstance                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EEnvQueryStatus>   QueryStatus                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_MeteorActor_BP_C::OnQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorActor_BP.AA_MeteorActor_BP_C.OnQueryFinished"));

	struct
	{
		class UEnvQueryInstanceBlueprintWrapper* QueryInstance;
		TEnumAsByte<EEnvQueryStatus>   QueryStatus;
	} params;

	params.QueryInstance = QueryInstance;
	params.QueryStatus = QueryStatus;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_MeteorActor_BP.AA_MeteorActor_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAA_MeteorActor_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorActor_BP.AA_MeteorActor_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_MeteorActor_BP.AA_MeteorActor_BP_C.StartMeteorShower
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_MeteorActor_BP_C::StartMeteorShower()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorActor_BP.AA_MeteorActor_BP_C.StartMeteorShower"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_MeteorActor_BP.AA_MeteorActor_BP_C.StopMeteorShower
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_MeteorActor_BP_C::StopMeteorShower()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorActor_BP.AA_MeteorActor_BP_C.StopMeteorShower"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_MeteorActor_BP.AA_MeteorActor_BP_C.OnAllMeteorsDestroyed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_MeteorActor_BP_C::OnAllMeteorsDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorActor_BP.AA_MeteorActor_BP_C.OnAllMeteorsDestroyed"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_MeteorActor_BP.AA_MeteorActor_BP_C.FX-MeteorShowerStart
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_MeteorActor_BP_C::FX_MeteorShowerStart()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorActor_BP.AA_MeteorActor_BP_C.FX-MeteorShowerStart"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_MeteorActor_BP.AA_MeteorActor_BP_C.ExecuteUbergraph_AA_MeteorActor_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_MeteorActor_BP_C::ExecuteUbergraph_AA_MeteorActor_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorActor_BP.AA_MeteorActor_BP_C.ExecuteUbergraph_AA_MeteorActor_BP"));

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
