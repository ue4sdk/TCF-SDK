// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AA_Tracking_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AA_Tracking_BP.AA_Tracking_BP_C.UpdatePathPoints
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Tracking_BP_C::UpdatePathPoints()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Tracking_BP.AA_Tracking_BP_C.UpdatePathPoints"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Tracking_BP.AA_Tracking_BP_C.ServerSpawnTrackingTarget
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper* QueryInstanceObj               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EEnvQueryStatus>   Status                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           SUCCESS                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_Tracking_BP_C::ServerSpawnTrackingTarget(class UEnvQueryInstanceBlueprintWrapper* QueryInstanceObj, TEnumAsByte<EEnvQueryStatus> Status, bool* SUCCESS)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Tracking_BP.AA_Tracking_BP_C.ServerSpawnTrackingTarget"));

	struct
	{
		class UEnvQueryInstanceBlueprintWrapper* QueryInstanceObj;
		TEnumAsByte<EEnvQueryStatus>   Status;
		bool                           SUCCESS;
	} params;

	params.QueryInstanceObj = QueryInstanceObj;
	params.Status = Status;

	UObject::ProcessEvent(fn, &params);

	if (SUCCESS != nullptr)
		*SUCCESS = params.SUCCESS;
}


// Function AA_Tracking_BP.AA_Tracking_BP_C.ServerFindLocationForTrackingTarget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Tracking_BP_C::ServerFindLocationForTrackingTarget()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Tracking_BP.AA_Tracking_BP_C.ServerFindLocationForTrackingTarget"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Tracking_BP.AA_Tracking_BP_C.FindLookAtRotationToNextDecal
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            nextDecalIdx                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 thisDecalPosition              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           SUCCESS                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FRotator                lookAtRotation                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_Tracking_BP_C::FindLookAtRotationToNextDecal(int nextDecalIdx, const struct FVector& thisDecalPosition, bool* SUCCESS, struct FRotator* lookAtRotation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Tracking_BP.AA_Tracking_BP_C.FindLookAtRotationToNextDecal"));

	struct
	{
		int                            nextDecalIdx;
		struct FVector                 thisDecalPosition;
		bool                           SUCCESS;
		struct FRotator                lookAtRotation;
	} params;

	params.nextDecalIdx = nextDecalIdx;
	params.thisDecalPosition = thisDecalPosition;

	UObject::ProcessEvent(fn, &params);

	if (SUCCESS != nullptr)
		*SUCCESS = params.SUCCESS;
	if (lookAtRotation != nullptr)
		*lookAtRotation = params.lookAtRotation;
}


// Function AA_Tracking_BP.AA_Tracking_BP_C.ComputeDecalSpawnTransform
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FTransform              SpawnTransform                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_Tracking_BP_C::ComputeDecalSpawnTransform(int Index, bool* IsValid, struct FTransform* SpawnTransform)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Tracking_BP.AA_Tracking_BP_C.ComputeDecalSpawnTransform"));

	struct
	{
		int                            Index;
		bool                           IsValid;
		struct FTransform              SpawnTransform;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
	if (SpawnTransform != nullptr)
		*SpawnTransform = params.SpawnTransform;
}


// Function AA_Tracking_BP.AA_Tracking_BP_C.SpawnTrackDecals
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Tracking_BP_C::SpawnTrackDecals()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Tracking_BP.AA_Tracking_BP_C.SpawnTrackDecals"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Tracking_BP.AA_Tracking_BP_C.ServerFindFloorLocation
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 StartLocation                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          TraceExtent                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FVector                 HitLocation                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 HitNormal                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_Tracking_BP_C::ServerFindFloorLocation(const struct FVector& StartLocation, float TraceExtent, bool* Result, struct FVector* HitLocation, struct FVector* HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Tracking_BP.AA_Tracking_BP_C.ServerFindFloorLocation"));

	struct
	{
		struct FVector                 StartLocation;
		float                          TraceExtent;
		bool                           Result;
		struct FVector                 HitLocation;
		struct FVector                 HitNormal;
	} params;

	params.StartLocation = StartLocation;
	params.TraceExtent = TraceExtent;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
}


// Function AA_Tracking_BP.AA_Tracking_BP_C.ServerGenerateSplinePathToActor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  objectiveLocation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_Tracking_BP_C::ServerGenerateSplinePathToActor(class AActor* objectiveLocation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Tracking_BP.AA_Tracking_BP_C.ServerGenerateSplinePathToActor"));

	struct
	{
		class AActor*                  objectiveLocation;
	} params;

	params.objectiveLocation = objectiveLocation;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_Tracking_BP.AA_Tracking_BP_C.RemoveTracks
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Tracking_BP_C::RemoveTracks()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Tracking_BP.AA_Tracking_BP_C.RemoveTracks"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Tracking_BP.AA_Tracking_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAA_Tracking_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Tracking_BP.AA_Tracking_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Tracking_BP.AA_Tracking_BP_C.OnQueryFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper* EQS_Object                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EEnvQueryStatus>   Status                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_Tracking_BP_C::OnQueryFinished(class UEnvQueryInstanceBlueprintWrapper* EQS_Object, TEnumAsByte<EEnvQueryStatus> Status)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Tracking_BP.AA_Tracking_BP_C.OnQueryFinished"));

	struct
	{
		class UEnvQueryInstanceBlueprintWrapper* EQS_Object;
		TEnumAsByte<EEnvQueryStatus>   Status;
	} params;

	params.EQS_Object = EQS_Object;
	params.Status = Status;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_Tracking_BP.AA_Tracking_BP_C.OnObjectPickedUp
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AController*             PickUpController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_Tracking_BP_C::OnObjectPickedUp(class AController* PickUpController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Tracking_BP.AA_Tracking_BP_C.OnObjectPickedUp"));

	struct
	{
		class AController*             PickUpController;
	} params;

	params.PickUpController = PickUpController;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_Tracking_BP.AA_Tracking_BP_C.OnReplicatedMatchPhaseDataUpdated_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseData        newMatchPhaseData              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void AAA_Tracking_BP_C::OnReplicatedMatchPhaseDataUpdated_Event_1(const struct FYMatchPhaseData& newMatchPhaseData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Tracking_BP.AA_Tracking_BP_C.OnReplicatedMatchPhaseDataUpdated_Event_1"));

	struct
	{
		struct FYMatchPhaseData        newMatchPhaseData;
	} params;

	params.newMatchPhaseData = newMatchPhaseData;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_Tracking_BP.AA_Tracking_BP_C.ExecuteUbergraph_AA_Tracking_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_Tracking_BP_C::ExecuteUbergraph_AA_Tracking_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Tracking_BP.AA_Tracking_BP_C.ExecuteUbergraph_AA_Tracking_BP"));

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
