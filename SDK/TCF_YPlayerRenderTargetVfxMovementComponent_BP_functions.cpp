// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YPlayerRenderTargetVfxMovementComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YPlayerRenderTargetVfxMovementComponent_BP.YPlayerRenderTargetVfxMovementComponent_BP_C.getAllTrailPositionsWithinRange
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Range                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<int>                    Indices                        (CPF_Parm, CPF_OutParm)
// TArray<float>                  Distances                      (CPF_Parm, CPF_OutParm)

void UYPlayerRenderTargetVfxMovementComponent_BP_C::getAllTrailPositionsWithinRange(float Range, TArray<int>* Indices, TArray<float>* Distances)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerRenderTargetVfxMovementComponent_BP.YPlayerRenderTargetVfxMovementComponent_BP_C.getAllTrailPositionsWithinRange");

	struct
	{
		float                          Range;
		TArray<int>                    Indices;
		TArray<float>                  Distances;
	} params;

	params.Range = Range;

	UObject::ProcessEvent(fn, &params);

	if (Indices != nullptr)
		*Indices = params.Indices;
	if (Distances != nullptr)
		*Distances = params.Distances;
}


// Function YPlayerRenderTargetVfxMovementComponent_BP.YPlayerRenderTargetVfxMovementComponent_BP_C.getFallingPercentageOverLastFrames
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          FallingPercentage              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerRenderTargetVfxMovementComponent_BP_C::getFallingPercentageOverLastFrames(float* FallingPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerRenderTargetVfxMovementComponent_BP.YPlayerRenderTargetVfxMovementComponent_BP_C.getFallingPercentageOverLastFrames");

	struct
	{
		float                          FallingPercentage;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (FallingPercentage != nullptr)
		*FallingPercentage = params.FallingPercentage;
}


// Function YPlayerRenderTargetVfxMovementComponent_BP.YPlayerRenderTargetVfxMovementComponent_BP_C.closestTrailPosition
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 ClosestPoint                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Distance                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerRenderTargetVfxMovementComponent_BP_C::closestTrailPosition(struct FVector* ClosestPoint, float* Distance, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerRenderTargetVfxMovementComponent_BP.YPlayerRenderTargetVfxMovementComponent_BP_C.closestTrailPosition");

	struct
	{
		struct FVector                 ClosestPoint;
		float                          Distance;
		int                            Index;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ClosestPoint != nullptr)
		*ClosestPoint = params.ClosestPoint;
	if (Distance != nullptr)
		*Distance = params.Distance;
	if (Index != nullptr)
		*Index = params.Index;
}


// Function YPlayerRenderTargetVfxMovementComponent_BP.YPlayerRenderTargetVfxMovementComponent_BP_C.UpdateTrailPositions
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Landing                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYPlayerRenderTargetVfxMovementComponent_BP_C::UpdateTrailPositions(bool Landing)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerRenderTargetVfxMovementComponent_BP.YPlayerRenderTargetVfxMovementComponent_BP_C.UpdateTrailPositions");

	struct
	{
		bool                           Landing;
	} params;

	params.Landing = Landing;

	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerRenderTargetVfxMovementComponent_BP.YPlayerRenderTargetVfxMovementComponent_BP_C.GetLastFramePosition
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 LastFramePosition              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerRenderTargetVfxMovementComponent_BP_C::GetLastFramePosition(struct FVector* LastFramePosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerRenderTargetVfxMovementComponent_BP.YPlayerRenderTargetVfxMovementComponent_BP_C.GetLastFramePosition");

	struct
	{
		struct FVector                 LastFramePosition;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (LastFramePosition != nullptr)
		*LastFramePosition = params.LastFramePosition;
}


// Function YPlayerRenderTargetVfxMovementComponent_BP.YPlayerRenderTargetVfxMovementComponent_BP_C.GetFarthestParentMovement
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Distance                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 FarthestPosition               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          FrameTime                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerRenderTargetVfxMovementComponent_BP_C::GetFarthestParentMovement(float* Distance, struct FVector* FarthestPosition, float* FrameTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerRenderTargetVfxMovementComponent_BP.YPlayerRenderTargetVfxMovementComponent_BP_C.GetFarthestParentMovement");

	struct
	{
		float                          Distance;
		struct FVector                 FarthestPosition;
		float                          FrameTime;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Distance != nullptr)
		*Distance = params.Distance;
	if (FarthestPosition != nullptr)
		*FarthestPosition = params.FarthestPosition;
	if (FrameTime != nullptr)
		*FrameTime = params.FrameTime;
}


// Function YPlayerRenderTargetVfxMovementComponent_BP.YPlayerRenderTargetVfxMovementComponent_BP_C.UpdateParentPositions
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerRenderTargetVfxMovementComponent_BP_C::UpdateParentPositions()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerRenderTargetVfxMovementComponent_BP.YPlayerRenderTargetVfxMovementComponent_BP_C.UpdateParentPositions");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerRenderTargetVfxMovementComponent_BP.YPlayerRenderTargetVfxMovementComponent_BP_C.IsDead
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsDead                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYPlayerRenderTargetVfxMovementComponent_BP_C::IsDead(bool* IsDead)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerRenderTargetVfxMovementComponent_BP.YPlayerRenderTargetVfxMovementComponent_BP_C.IsDead");

	struct
	{
		bool                           IsDead;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsDead != nullptr)
		*IsDead = params.IsDead;
}


// Function YPlayerRenderTargetVfxMovementComponent_BP.YPlayerRenderTargetVfxMovementComponent_BP_C.OnSettingsApplied
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerRenderTargetVfxMovementComponent_BP_C::OnSettingsApplied()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerRenderTargetVfxMovementComponent_BP.YPlayerRenderTargetVfxMovementComponent_BP_C.OnSettingsApplied");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerRenderTargetVfxMovementComponent_BP.YPlayerRenderTargetVfxMovementComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UYPlayerRenderTargetVfxMovementComponent_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerRenderTargetVfxMovementComponent_BP.YPlayerRenderTargetVfxMovementComponent_BP_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerRenderTargetVfxMovementComponent_BP.YPlayerRenderTargetVfxMovementComponent_BP_C.Update
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerRenderTargetVfxMovementComponent_BP_C::Update(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerRenderTargetVfxMovementComponent_BP.YPlayerRenderTargetVfxMovementComponent_BP_C.Update");

	struct
	{
		float                          DeltaTime;
	} params;

	params.DeltaTime = DeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerRenderTargetVfxMovementComponent_BP.YPlayerRenderTargetVfxMovementComponent_BP_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerRenderTargetVfxMovementComponent_BP_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerRenderTargetVfxMovementComponent_BP.YPlayerRenderTargetVfxMovementComponent_BP_C.ReceiveEndPlay");

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerRenderTargetVfxMovementComponent_BP.YPlayerRenderTargetVfxMovementComponent_BP_C.ExecuteUbergraph_YPlayerRenderTargetVfxMovementComponent_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerRenderTargetVfxMovementComponent_BP_C::ExecuteUbergraph_YPlayerRenderTargetVfxMovementComponent_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerRenderTargetVfxMovementComponent_BP.YPlayerRenderTargetVfxMovementComponent_BP_C.ExecuteUbergraph_YPlayerRenderTargetVfxMovementComponent_BP");

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
