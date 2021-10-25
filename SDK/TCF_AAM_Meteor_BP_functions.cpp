// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AAM_Meteor_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AAM_Meteor_BP.AAM_Meteor_BP_C.BP_GetDebugDescription
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash)

struct FString AAAM_Meteor_BP_C::BP_GetDebugDescription()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Meteor_BP.AAM_Meteor_BP_C.BP_GetDebugDescription"));

	struct
	{
		struct FString                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AAM_Meteor_BP.AAM_Meteor_BP_C.DetermineNextMeteorSpawnTime
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Time                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAAM_Meteor_BP_C::DetermineNextMeteorSpawnTime(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Meteor_BP.AAM_Meteor_BP_C.DetermineNextMeteorSpawnTime"));

	struct
	{
		float                          Time;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Time != nullptr)
		*Time = params.Time;
}


// Function AAM_Meteor_BP.AAM_Meteor_BP_C.DebugRequestTriggerActivity
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerController*       requestingPlayer               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAAM_Meteor_BP_C::DebugRequestTriggerActivity(class APlayerController* requestingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Meteor_BP.AAM_Meteor_BP_C.DebugRequestTriggerActivity"));

	struct
	{
		class APlayerController*       requestingPlayer;
	} params;

	params.requestingPlayer = requestingPlayer;

	UObject::ProcessEvent(fn, &params);
}


// Function AAM_Meteor_BP.AAM_Meteor_BP_C.SpawnMeteor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAAM_Meteor_BP_C::SpawnMeteor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Meteor_BP.AAM_Meteor_BP_C.SpawnMeteor"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AAM_Meteor_BP.AAM_Meteor_BP_C.SetupNextMeteorSpawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAAM_Meteor_BP_C::SetupNextMeteorSpawn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Meteor_BP.AAM_Meteor_BP_C.SetupNextMeteorSpawn"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AAM_Meteor_BP.AAM_Meteor_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAAM_Meteor_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Meteor_BP.AAM_Meteor_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AAM_Meteor_BP.AAM_Meteor_BP_C.ExecuteUbergraph_AAM_Meteor_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAAM_Meteor_BP_C::ExecuteUbergraph_AAM_Meteor_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Meteor_BP.AAM_Meteor_BP_C.ExecuteUbergraph_AAM_Meteor_BP"));

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
