// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Water_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Water.BuoyancyComponent.OnPontoonExitedWater
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSphericalPontoon       Pontoon                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UBuoyancyComponent::OnPontoonExitedWater(const struct FSphericalPontoon& Pontoon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.BuoyancyComponent.OnPontoonExitedWater");

	struct
	{
		struct FSphericalPontoon       Pontoon;
	} params;

	params.Pontoon = Pontoon;

	UObject::ProcessEvent(fn, &params);
}


// Function Water.BuoyancyComponent.OnPontoonEnteredWater
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSphericalPontoon       Pontoon                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UBuoyancyComponent::OnPontoonEnteredWater(const struct FSphericalPontoon& Pontoon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.BuoyancyComponent.OnPontoonEnteredWater");

	struct
	{
		struct FSphericalPontoon       Pontoon;
	} params;

	params.Pontoon = Pontoon;

	UObject::ProcessEvent(fn, &params);
}


// Function Water.BuoyancyComponent.IsInWaterBody
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UBuoyancyComponent::IsInWaterBody()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.BuoyancyComponent.IsInWaterBody");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.BuoyancyComponent.GetLastWaterSurfaceInfo
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 OutWaterPlaneLocation          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 OutWaterPlaneNormal            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 OutWaterSurfacePosition        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          OutWaterDepth                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            OutWaterBodyIdx                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 OutWaterVelocity               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UBuoyancyComponent::GetLastWaterSurfaceInfo(struct FVector* OutWaterPlaneLocation, struct FVector* OutWaterPlaneNormal, struct FVector* OutWaterSurfacePosition, float* OutWaterDepth, int* OutWaterBodyIdx, struct FVector* OutWaterVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.BuoyancyComponent.GetLastWaterSurfaceInfo");

	struct
	{
		struct FVector                 OutWaterPlaneLocation;
		struct FVector                 OutWaterPlaneNormal;
		struct FVector                 OutWaterSurfacePosition;
		float                          OutWaterDepth;
		int                            OutWaterBodyIdx;
		struct FVector                 OutWaterVelocity;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutWaterPlaneLocation != nullptr)
		*OutWaterPlaneLocation = params.OutWaterPlaneLocation;
	if (OutWaterPlaneNormal != nullptr)
		*OutWaterPlaneNormal = params.OutWaterPlaneNormal;
	if (OutWaterSurfacePosition != nullptr)
		*OutWaterSurfacePosition = params.OutWaterSurfacePosition;
	if (OutWaterDepth != nullptr)
		*OutWaterDepth = params.OutWaterDepth;
	if (OutWaterBodyIdx != nullptr)
		*OutWaterBodyIdx = params.OutWaterBodyIdx;
	if (OutWaterVelocity != nullptr)
		*OutWaterVelocity = params.OutWaterVelocity;
}


// Function Water.GerstnerWaterWaveGeneratorBase.GenerateGerstnerWaves
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// TArray<struct FGerstnerWave>   OutWaves                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UGerstnerWaterWaveGeneratorBase::GenerateGerstnerWaves(TArray<struct FGerstnerWave>* OutWaves)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.GerstnerWaterWaveGeneratorBase.GenerateGerstnerWaves");

	struct
	{
		TArray<struct FGerstnerWave>   OutWaves;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutWaves != nullptr)
		*OutWaves = params.OutWaves;
}


// Function Water.NiagaraWaterFunctionLibrary.SetWaterBody
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 OverrideName                   (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AWaterBody*              WaterBody                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UNiagaraWaterFunctionLibrary::SetWaterBody(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class AWaterBody* WaterBody)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.NiagaraWaterFunctionLibrary.SetWaterBody");

	struct
	{
		class UNiagaraComponent*       NiagaraSystem;
		struct FString                 OverrideName;
		class AWaterBody*              WaterBody;
	} params;

	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.WaterBody = WaterBody;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function Water.WaterBody.SetWaterWaves
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWaterWavesBase*         InWaterWaves                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AWaterBody::SetWaterWaves(class UWaterWavesBase* InWaterWaves)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterBody.SetWaterWaves");

	struct
	{
		class UWaterWavesBase*         InWaterWaves;
	} params;

	params.InWaterWaves = InWaterWaves;

	UObject::ProcessEvent(fn, &params);
}


// Function Water.WaterBody.OnWaterBodyChanged
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bShapeOrPositionChanged        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bWeightmapSettingsChanged      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AWaterBody::OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterBody.OnWaterBodyChanged");

	struct
	{
		bool                           bShapeOrPositionChanged;
		bool                           bWeightmapSettingsChanged;
	} params;

	params.bShapeOrPositionChanged = bShapeOrPositionChanged;
	params.bWeightmapSettingsChanged = bWeightmapSettingsChanged;

	UObject::ProcessEvent(fn, &params);
}


// Function Water.WaterBody.GetWaterSpline
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UWaterSplineComponent*   ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UWaterSplineComponent* AWaterBody::GetWaterSpline()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetWaterSpline");

	struct
	{
		class UWaterSplineComponent*   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.WaterBody.GetWaterMaterialInstance
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* AWaterBody::GetWaterMaterialInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetWaterMaterialInstance");

	struct
	{
		class UMaterialInstanceDynamic* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.WaterBody.GetWaterMaterial
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UMaterialInterface*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UMaterialInterface* AWaterBody::GetWaterMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetWaterMaterial");

	struct
	{
		class UMaterialInterface*      ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.WaterBody.GetUnderwaterPostProcessMaterialInstance
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* AWaterBody::GetUnderwaterPostProcessMaterialInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetUnderwaterPostProcessMaterialInstance");

	struct
	{
		class UMaterialInstanceDynamic* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.WaterBody.GetRiverToOceanTransitionMaterialInstance
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* AWaterBody::GetRiverToOceanTransitionMaterialInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetRiverToOceanTransitionMaterialInstance");

	struct
	{
		class UMaterialInstanceDynamic* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.WaterBody.GetRiverToLakeTransitionMaterialInstance
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* AWaterBody::GetRiverToLakeTransitionMaterialInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetRiverToLakeTransitionMaterialInstance");

	struct
	{
		class UMaterialInstanceDynamic* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.WaterBody.GetMaxWaveHeight
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float AWaterBody::GetMaxWaveHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetMaxWaveHeight");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.WaterBody.GetIslands
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<class AWaterBodyIsland*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<class AWaterBodyIsland*> AWaterBody::GetIslands()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetIslands");

	struct
	{
		TArray<class AWaterBodyIsland*> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.WaterBody.GetExclusionVolumes
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<class AWaterBodyExclusionVolume*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<class AWaterBodyExclusionVolume*> AWaterBody::GetExclusionVolumes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetExclusionVolumes");

	struct
	{
		TArray<class AWaterBodyExclusionVolume*> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.WaterBodyIsland.GetWaterSpline
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UWaterSplineComponent*   ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UWaterSplineComponent* AWaterBodyIsland::GetWaterSpline()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterBodyIsland.GetWaterSpline");

	struct
	{
		class UWaterSplineComponent*   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.WaterMeshComponent.IsEnabled
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UWaterMeshComponent::IsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterMeshComponent.IsEnabled");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.WaterSubsystem.SetOceanFloodHeight
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InFloodHeight                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UWaterSubsystem::SetOceanFloodHeight(float InFloodHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.SetOceanFloodHeight");

	struct
	{
		float                          InFloodHeight;
	} params;

	params.InFloodHeight = InFloodHeight;

	UObject::ProcessEvent(fn, &params);
}


// Function Water.WaterSubsystem.PrintToWaterLog
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Message                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bWarning                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UWaterSubsystem::PrintToWaterLog(const struct FString& Message, bool bWarning)
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.PrintToWaterLog");

	struct
	{
		struct FString                 Message;
		bool                           bWarning;
	} params;

	params.Message = Message;
	params.bWarning = bWarning;

	UObject::ProcessEvent(fn, &params);
}


// Function Water.WaterSubsystem.IsWaterRenderingEnabled
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UWaterSubsystem::IsWaterRenderingEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.IsWaterRenderingEnabled");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.WaterSubsystem.IsUnderwaterPostProcessEnabled
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UWaterSubsystem::IsUnderwaterPostProcessEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.IsUnderwaterPostProcessEnabled");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.WaterSubsystem.IsShallowWaterSimulationEnabled
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UWaterSubsystem::IsShallowWaterSimulationEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.IsShallowWaterSimulationEnabled");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.WaterSubsystem.GetWaterTimeSeconds
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UWaterSubsystem::GetWaterTimeSeconds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetWaterTimeSeconds");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.WaterSubsystem.GetSmoothedWorldTimeSeconds
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UWaterSubsystem::GetSmoothedWorldTimeSeconds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetSmoothedWorldTimeSeconds");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.WaterSubsystem.GetShallowWaterSimulationRenderTargetSize
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UWaterSubsystem::GetShallowWaterSimulationRenderTargetSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetShallowWaterSimulationRenderTargetSize");

	struct
	{
		int                            ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.WaterSubsystem.GetShallowWaterMaxImpulseForces
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UWaterSubsystem::GetShallowWaterMaxImpulseForces()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetShallowWaterMaxImpulseForces");

	struct
	{
		int                            ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.WaterSubsystem.GetShallowWaterMaxDynamicForces
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UWaterSubsystem::GetShallowWaterMaxDynamicForces()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetShallowWaterMaxDynamicForces");

	struct
	{
		int                            ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.WaterSubsystem.GetOceanTotalHeight
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UWaterSubsystem::GetOceanTotalHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetOceanTotalHeight");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.WaterSubsystem.GetOceanFloodHeight
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UWaterSubsystem::GetOceanFloodHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetOceanFloodHeight");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.WaterSubsystem.GetOceanBaseHeight
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UWaterSubsystem::GetOceanBaseHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetOceanBaseHeight");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Water.WaterSubsystem.GetCameraUnderwaterDepth
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UWaterSubsystem::GetCameraUnderwaterDepth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetCameraUnderwaterDepth");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
