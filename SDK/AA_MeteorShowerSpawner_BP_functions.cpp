// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AA_MeteorShowerSpawner_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AA_MeteorShowerSpawner_BP.AA_MeteorShowerSpawner_BP_C.GetDrawDebugLineColor
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCoreUObject_FColor     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FCoreUObject_FColor AAA_MeteorShowerSpawner_BP_C::GetDrawDebugLineColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorShowerSpawner_BP.AA_MeteorShowerSpawner_BP_C.GetDrawDebugLineColor"));

	struct
	{
		struct FCoreUObject_FColor     ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AA_MeteorShowerSpawner_BP.AA_MeteorShowerSpawner_BP_C.GetDrawDebugLineTo
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector AAA_MeteorShowerSpawner_BP_C::GetDrawDebugLineTo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorShowerSpawner_BP.AA_MeteorShowerSpawner_BP_C.GetDrawDebugLineTo"));

	struct
	{
		struct FVector                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AA_MeteorShowerSpawner_BP.AA_MeteorShowerSpawner_BP_C.GetDebugDescription
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash)

struct FString AAA_MeteorShowerSpawner_BP_C::GetDebugDescription()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorShowerSpawner_BP.AA_MeteorShowerSpawner_BP_C.GetDebugDescription"));

	struct
	{
		struct FString                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AA_MeteorShowerSpawner_BP.AA_MeteorShowerSpawner_BP_C.CleanUpLocations
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_MeteorShowerSpawner_BP_C::CleanUpLocations()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorShowerSpawner_BP.AA_MeteorShowerSpawner_BP_C.CleanUpLocations"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_MeteorShowerSpawner_BP.AA_MeteorShowerSpawner_BP_C.AttemptMeteorSpawn
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           isFirstMeteor                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class AMeteorFallingSmall_BP_C* SpawnedMeteor                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_MeteorShowerSpawner_BP_C::AttemptMeteorSpawn(bool isFirstMeteor, class AMeteorFallingSmall_BP_C** SpawnedMeteor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorShowerSpawner_BP.AA_MeteorShowerSpawner_BP_C.AttemptMeteorSpawn"));

	struct
	{
		bool                           isFirstMeteor;
		class AMeteorFallingSmall_BP_C* SpawnedMeteor;
	} params = {};

	params.isFirstMeteor = isFirstMeteor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SpawnedMeteor != nullptr)
		*SpawnedMeteor = params.SpawnedMeteor;
}


// Function AA_MeteorShowerSpawner_BP.AA_MeteorShowerSpawner_BP_C.UpdateDynamicSpawnChance
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_MeteorShowerSpawner_BP_C::UpdateDynamicSpawnChance()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorShowerSpawner_BP.AA_MeteorShowerSpawner_BP_C.UpdateDynamicSpawnChance"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_MeteorShowerSpawner_BP.AA_MeteorShowerSpawner_BP_C.InitMeteorShower
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_MeteorShowerSpawner_BP_C::InitMeteorShower()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorShowerSpawner_BP.AA_MeteorShowerSpawner_BP_C.InitMeteorShower"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_MeteorShowerSpawner_BP.AA_MeteorShowerSpawner_BP_C.SpawnMainMeteor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_MeteorShowerSpawner_BP_C::SpawnMainMeteor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorShowerSpawner_BP.AA_MeteorShowerSpawner_BP_C.SpawnMainMeteor"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_MeteorShowerSpawner_BP.AA_MeteorShowerSpawner_BP_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_MeteorShowerSpawner_BP_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorShowerSpawner_BP.AA_MeteorShowerSpawner_BP_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_MeteorShowerSpawner_BP.AA_MeteorShowerSpawner_BP_C.OnQueryFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper* QueryInstance                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EEnvQueryStatus>   QueryStatus                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_MeteorShowerSpawner_BP_C::OnQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorShowerSpawner_BP.AA_MeteorShowerSpawner_BP_C.OnQueryFinished"));

	struct
	{
		class UEnvQueryInstanceBlueprintWrapper* QueryInstance;
		TEnumAsByte<EEnvQueryStatus>   QueryStatus;
	} params = {};

	params.QueryInstance = QueryInstance;
	params.QueryStatus = QueryStatus;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_MeteorShowerSpawner_BP.AA_MeteorShowerSpawner_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAA_MeteorShowerSpawner_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorShowerSpawner_BP.AA_MeteorShowerSpawner_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_MeteorShowerSpawner_BP.AA_MeteorShowerSpawner_BP_C.StartMeteorShower
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_MeteorShowerSpawner_BP_C::StartMeteorShower()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorShowerSpawner_BP.AA_MeteorShowerSpawner_BP_C.StartMeteorShower"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_MeteorShowerSpawner_BP.AA_MeteorShowerSpawner_BP_C.StopMeteorShower
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_MeteorShowerSpawner_BP_C::StopMeteorShower()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorShowerSpawner_BP.AA_MeteorShowerSpawner_BP_C.StopMeteorShower"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_MeteorShowerSpawner_BP.AA_MeteorShowerSpawner_BP_C.ExecuteUbergraph_AA_MeteorShowerSpawner_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_MeteorShowerSpawner_BP_C::ExecuteUbergraph_AA_MeteorShowerSpawner_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorShowerSpawner_BP.AA_MeteorShowerSpawner_BP_C.ExecuteUbergraph_AA_MeteorShowerSpawner_BP"));

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
