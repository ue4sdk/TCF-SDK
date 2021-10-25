#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Water_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Water.BuoyancyComponent
// 0x00F8 (0x01A8 - 0x00B0)
class UBuoyancyComponent : public UActorComponent
{
public:
	TArray<struct FSphericalPontoon>                   Pontoons;                                                 // 0x00B0(0x0010) (CPF_ZeroConstructor, CPF_Deprecated, CPF_NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnEnteredWaterDelegate;                                   // 0x00C0(0x0001) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xF];                                       // 0x00C0(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptMulticastDelegate                    OnExitedWaterDelegate;                                    // 0x00D0(0x0001) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xF];                                       // 0x00D0(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FBuoyancyData                               BuoyancyData;                                             // 0x00E0(0x0050) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	TArray<class AWaterBody*>                          CurrentWaterBodies;                                       // 0x0130(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	class UPrimitiveComponent*                         SimulatingComponent;                                      // 0x0140(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x60];                                      // 0x0148(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.BuoyancyComponent");
		return ptr;
	}


	void OnPontoonExitedWater(const struct FSphericalPontoon& Pontoon);
	void OnPontoonEnteredWater(const struct FSphericalPontoon& Pontoon);
	bool IsInWaterBody();
	void GetLastWaterSurfaceInfo(struct FVector* OutWaterPlaneLocation, struct FVector* OutWaterPlaneNormal, struct FVector* OutWaterSurfacePosition, float* OutWaterDepth, int* OutWaterBodyIdx, struct FVector* OutWaterVelocity);
};


// Class Water.ConvertWaterBodyActorsCommandlet
// 0x0000 (0x0080 - 0x0080)
class UConvertWaterBodyActorsCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.ConvertWaterBodyActorsCommandlet");
		return ptr;
	}

};


// Class Water.EnvQueryTest_InsideWaterBody
// 0x0008 (0x0200 - 0x01F8)
class UEnvQueryTest_InsideWaterBody : public UEnvQueryTest
{
public:
	bool                                               bIncludeWaves;                                            // 0x01F8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bSimpleWaves;                                             // 0x01F9(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIgnoreExclusionVolumes;                                  // 0x01FA(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x5];                                       // 0x01FB(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.EnvQueryTest_InsideWaterBody");
		return ptr;
	}

};


// Class Water.GerstnerWaterWaveGeneratorBase
// 0x0000 (0x0028 - 0x0028)
class UGerstnerWaterWaveGeneratorBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.GerstnerWaterWaveGeneratorBase");
		return ptr;
	}


	void GenerateGerstnerWaves(TArray<struct FGerstnerWave>* OutWaves);
};


// Class Water.GerstnerWaterWaveGeneratorSimple
// 0x0038 (0x0060 - 0x0028)
class UGerstnerWaterWaveGeneratorSimple : public UGerstnerWaterWaveGeneratorBase
{
public:
	int                                                NumWaves;                                                 // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Seed;                                                     // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Randomness;                                               // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MinWavelength;                                            // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxWavelength;                                            // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WavelengthFalloff;                                        // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MinAmplitude;                                             // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxAmplitude;                                             // 0x0044(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AmplitudeFalloff;                                         // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WindAngleDeg;                                             // 0x004C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DirectionAngularSpreadDeg;                                // 0x0050(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SmallWaveSteepness;                                       // 0x0054(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LargeWaveSteepness;                                       // 0x0058(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SteepnessFalloff;                                         // 0x005C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.GerstnerWaterWaveGeneratorSimple");
		return ptr;
	}

};


// Class Water.GerstnerWaterWaveGeneratorSpectrum
// 0x0018 (0x0040 - 0x0028)
class UGerstnerWaterWaveGeneratorSpectrum : public UGerstnerWaterWaveGeneratorBase
{
public:
	EWaveSpectrumType                                  SpectrumType;                                             // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	TArray<struct FGerstnerWaveOctave>                 Octaves;                                                  // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.GerstnerWaterWaveGeneratorSpectrum");
		return ptr;
	}

};


// Class Water.WaterWavesBase
// 0x0000 (0x0028 - 0x0028)
class UWaterWavesBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.WaterWavesBase");
		return ptr;
	}

};


// Class Water.WaterWaves
// 0x0000 (0x0028 - 0x0028)
class UWaterWaves : public UWaterWavesBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.WaterWaves");
		return ptr;
	}

};


// Class Water.GerstnerWaterWaves
// 0x0020 (0x0048 - 0x0028)
class UGerstnerWaterWaves : public UWaterWaves
{
public:
	class UGerstnerWaterWaveGeneratorBase*             GerstnerWaveGenerator;                                    // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FGerstnerWave>                       GerstnerWaves;                                            // 0x0030(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	float                                              MaxWaveHeight;                                            // 0x0040(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.GerstnerWaterWaves");
		return ptr;
	}

};


// Class Water.GerstnerWaterWaveSubsystem
// 0x0018 (0x0048 - 0x0030)
class UGerstnerWaterWaveSubsystem : public UEngineSubsystem
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.GerstnerWaterWaveSubsystem");
		return ptr;
	}

};


// Class Water.LakeCollisionComponent
// 0x0020 (0x0460 - 0x0440)
class ULakeCollisionComponent : public UPrimitiveComponent
{
public:
	class UBodySetup*                                  CachedBodySetup;                                          // 0x0440(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NonPIEDuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FVector                                     BoxExtent;                                                // 0x0448(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0454(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.LakeCollisionComponent");
		return ptr;
	}

};


// Class Water.NiagaraDataInterfaceWater
// 0x0008 (0x0040 - 0x0038)
class UNiagaraDataInterfaceWater : public UNiagaraDataInterface
{
public:
	class AWaterBody*                                  SourceBody;                                               // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.NiagaraDataInterfaceWater");
		return ptr;
	}

};


// Class Water.NiagaraWaterFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UNiagaraWaterFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.NiagaraWaterFunctionLibrary");
		return ptr;
	}


	static void SetWaterBody(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class AWaterBody* WaterBody);
};


// Class Water.OceanCollisionComponent
// 0x0030 (0x0470 - 0x0440)
class UOceanCollisionComponent : public UPrimitiveComponent
{
public:
	class UBodySetup*                                  CachedBodySetup;                                          // 0x0440(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NonPIEDuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0448(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.OceanCollisionComponent");
		return ptr;
	}

};


// Class Water.OceanBoxCollisionComponent
// 0x0000 (0x0470 - 0x0470)
class UOceanBoxCollisionComponent : public UBoxComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.OceanBoxCollisionComponent");
		return ptr;
	}

};


// Class Water.WaterBody
// 0x0BC0 (0x0E00 - 0x0240)
class AWaterBody : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0240(0x0010) MISSED OFFSET
	class UPhysicalMaterial*                           PhysicalMaterial;                                         // 0x0250(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TargetWaveMaskDepth;                                      // 0x0258(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxWaveHeightOffset;                                      // 0x025C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                WaterBodyIndex;                                           // 0x0260(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bFillCollisionUnderWaterBodiesForNavmesh;                 // 0x0264(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xB];                                       // 0x0265(0x000B) MISSED OFFSET
	struct FUnderwaterPostProcessSettings              UnderwaterPostProcessSettings;                            // 0x0270(0x0570) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	EWaterBodyType                                     WaterBodyType;                                            // 0x07E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x7];                                       // 0x07E1(0x0007) MISSED OFFSET
	struct FWaterCurveSettings                         CurveSettings;                                            // 0x07E8(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	class UMaterialInterface*                          WaterMaterial;                                            // 0x0808(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UMaterialInterface*                          UnderwaterPostProcessMaterial;                            // 0x0810(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bAffectsLandscape;                                        // 0x0818(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bGenerateCollisions;                                      // 0x0819(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               m_forceRefreshPhysicsGUID;                                // 0x081A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x5];                                       // 0x081B(0x0005) MISSED OFFSET
	class UPhysicalMaterial*                           m_collisionPhysicsMaterial;                               // 0x0820(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bOverrideWaterMesh;                                       // 0x0828(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0829(0x0007) MISSED OFFSET
	class UStaticMesh*                                 WaterMeshOverride;                                        // 0x0830(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                OverlapMaterialPriority;                                  // 0x0838(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FName                                       CollisionProfileName;                                     // 0x083C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0844(0x0004) MISSED OFFSET
	class UWaterSplineComponent*                       SplineComp;                                               // 0x0848(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UWaterSplineMetadata*                        WaterSplineMetadata;                                      // 0x0850(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_PersistentInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*                    WaterMID;                                                 // 0x0858(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*                    UnderwaterPostProcessMID;                                 // 0x0860(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<TLazyObjectPtr<class AWaterBodyIsland>>     Islands;                                                  // 0x0868(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_AdvancedDisplay, CPF_Protected, CPF_UObjectWrapper, CPF_NativeAccessSpecifierProtected)
	TArray<TLazyObjectPtr<class AWaterBodyExclusionVolume>> ExclusionVolumes;                                         // 0x0878(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_AdvancedDisplay, CPF_Protected, CPF_UObjectWrapper, CPF_NativeAccessSpecifierProtected)
	TWeakObjectPtr<class ALandscapeProxy>              Landscape;                                                // 0x0888(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FPostProcessSettings                        CurrentPostProcessSettings;                               // 0x0890(0x0550) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	bool                                               bCanAffectNavigation;                                     // 0x0DE0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0DE1(0x0007) MISSED OFFSET
	class UClass*                                      WaterNavAreaClass;                                        // 0x0DE8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UWaterWavesBase*                             WaterWaves;                                               // 0x0DF0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_PersistentInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bHasWaveSpectrumSettings;                                 // 0x0DF8(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bHasTerrainCarvingSettingsSettings;                       // 0x0DF9(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData07[0x6];                                       // 0x0DFA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.WaterBody");
		return ptr;
	}


	void SetWaterWaves(class UWaterWavesBase* InWaterWaves);
	void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged);
	class UWaterSplineComponent* GetWaterSpline();
	class UMaterialInstanceDynamic* GetWaterMaterialInstance();
	class UMaterialInterface* GetWaterMaterial();
	class UMaterialInstanceDynamic* GetUnderwaterPostProcessMaterialInstance();
	class UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance();
	class UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance();
	float GetMaxWaveHeight();
	TArray<class AWaterBodyIsland*> GetIslands();
	TArray<class AWaterBodyExclusionVolume*> GetExclusionVolumes();
};


// Class Water.WaterBodyGenerator
// 0x0000 (0x0028 - 0x0028)
class UWaterBodyGenerator : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.WaterBodyGenerator");
		return ptr;
	}

};


// Class Water.CustomMeshGenerator
// 0x0008 (0x0030 - 0x0028)
class UCustomMeshGenerator : public UWaterBodyGenerator
{
public:
	class UStaticMeshComponent*                        MeshComp;                                                 // 0x0028(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NonPIEDuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.CustomMeshGenerator");
		return ptr;
	}

};


// Class Water.WaterBodyCustom
// 0x0010 (0x0E10 - 0x0E00)
class AWaterBodyCustom : public AWaterBody
{
public:
	class UCustomMeshGenerator*                        CustomGenerator;                                          // 0x0E00(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NonPIEDuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0E08(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.WaterBodyCustom");
		return ptr;
	}

};


// Class Water.WaterBodyExclusionVolume
// 0x0018 (0x02A0 - 0x0288)
class AWaterBodyExclusionVolume : public APhysicsVolume
{
public:
	bool                                               bIgnoreAllOverlappingWaterBodies;                         // 0x0288(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0289(0x0007) MISSED OFFSET
	TArray<class AWaterBody*>                          WaterBodiesToIgnore;                                      // 0x0290(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.WaterBodyExclusionVolume");
		return ptr;
	}

};


// Class Water.WaterBodyIsland
// 0x0010 (0x0250 - 0x0240)
class AWaterBodyIsland : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0240(0x0008) MISSED OFFSET
	class UWaterSplineComponent*                       SplineComp;                                               // 0x0248(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.WaterBodyIsland");
		return ptr;
	}


	class UWaterSplineComponent* GetWaterSpline();
};


// Class Water.LakeGenerator
// 0x0018 (0x0040 - 0x0028)
class ULakeGenerator : public UWaterBodyGenerator
{
public:
	class UStaticMeshComponent*                        LakeMeshComp;                                             // 0x0028(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NonPIEDuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UBoxComponent*                               LakeCollisionComp;                                        // 0x0030(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class ULakeCollisionComponent*                     LakeCollision;                                            // 0x0038(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NonPIEDuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.LakeGenerator");
		return ptr;
	}

};


// Class Water.WaterBodyLake
// 0x0010 (0x0E10 - 0x0E00)
class AWaterBodyLake : public AWaterBody
{
public:
	class ULakeGenerator*                              LakeGenerator;                                            // 0x0E00(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NonPIEDuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0E08(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.WaterBodyLake");
		return ptr;
	}

};


// Class Water.OceanGenerator
// 0x0020 (0x0048 - 0x0028)
class UOceanGenerator : public UWaterBodyGenerator
{
public:
	TArray<class UOceanBoxCollisionComponent*>         CollisionBoxes;                                           // 0x0028(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NonPIEDuplicateTransient, CPF_NativeAccessSpecifierPrivate)
	TArray<class UOceanCollisionComponent*>            CollisionHullSets;                                        // 0x0038(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NonPIEDuplicateTransient, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.OceanGenerator");
		return ptr;
	}

};


// Class Water.WaterBodyOcean
// 0x0020 (0x0E20 - 0x0E00)
class AWaterBodyOcean : public AWaterBody
{
public:
	class UOceanGenerator*                             OceanGenerator;                                           // 0x0E00(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NonPIEDuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     CollisionExtents;                                         // 0x0E08(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              HeightOffset;                                             // 0x0E14(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0E18(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.WaterBodyOcean");
		return ptr;
	}

};


// Class Water.RiverGenerator
// 0x0010 (0x0038 - 0x0028)
class URiverGenerator : public UWaterBodyGenerator
{
public:
	TArray<class USplineMeshComponent*>                SplineMeshComponents;                                     // 0x0028(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NonPIEDuplicateTransient, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.RiverGenerator");
		return ptr;
	}

};


// Class Water.WaterBodyRiver
// 0x0030 (0x0E30 - 0x0E00)
class AWaterBodyRiver : public AWaterBody
{
public:
	class URiverGenerator*                             RiverGenerator;                                           // 0x0E00(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NonPIEDuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UMaterialInterface*                          LakeTransitionMaterial;                                   // 0x0E08(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*                    LakeTransitionMID;                                        // 0x0E10(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UMaterialInterface*                          OceanTransitionMaterial;                                  // 0x0E18(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*                    OceanTransitionMID;                                       // 0x0E20(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0E28(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.WaterBodyRiver");
		return ptr;
	}

};


// Class Water.WaterBrushActorInterface
// 0x0000 (0x0028 - 0x0028)
class UWaterBrushActorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.WaterBrushActorInterface");
		return ptr;
	}

};


// Class Water.WaterMeshActor
// 0x0010 (0x0250 - 0x0240)
class AWaterMeshActor : public AActor
{
public:
	class UTexture2D*                                  WaterVelocityTexture;                                     // 0x0240(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UWaterMeshComponent*                         WaterMesh;                                                // 0x0248(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.WaterMeshActor");
		return ptr;
	}

};


// Class Water.WaterMeshComponent
// 0x0120 (0x0590 - 0x0470)
class UWaterMeshComponent : public UMeshComponent
{
public:
	struct FIntPoint                                   ExtentInTiles;                                            // 0x0470(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UMaterialInterface*                          FarDistanceMaterial;                                      // 0x0478(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              FarDistanceMeshExtent;                                    // 0x0480(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     RTWorldLocation;                                          // 0x0484(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     RTWorldSizeVector;                                        // 0x0490(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xE4];                                      // 0x049C(0x00E4) MISSED OFFSET
	int                                                TessellationFactor;                                       // 0x0580(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              LODScale;                                                 // 0x0584(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0588(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.WaterMeshComponent");
		return ptr;
	}


	bool IsEnabled();
};


// Class Water.WaterRuntimeSettings
// 0x0040 (0x0078 - 0x0038)
class UWaterRuntimeSettings : public UDeveloperSettings
{
public:
	TEnumAsByte<ECollisionChannel>                     CollisionChannelForWaterTraces;                           // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	TSoftObjectPtr<class UMaterialParameterCollection> MaterialParameterCollection;                              // 0x0040(0x0028) (CPF_Edit, CPF_Config, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WaterBodyIconWorldSize;                                   // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WaterBodyIconWorldZOffset;                                // 0x006C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       DefaultWaterCollisionProfileName;                         // 0x0070(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.WaterRuntimeSettings");
		return ptr;
	}

};


// Class Water.WaterSplineComponent
// 0x0020 (0x0560 - 0x0540)
class UWaterSplineComponent : public USplineComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0540(0x0008) MISSED OFFSET
	struct FWaterSplineCurveDefaults                   PreviousWaterSplineDefaults;                              // 0x0548(0x0010) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0558(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.WaterSplineComponent");
		return ptr;
	}

};


// Class Water.WaterSplineMetadata
// 0x0078 (0x00A0 - 0x0028)
class UWaterSplineMetadata : public USplineMetadata
{
public:
	struct FInterpCurveFloat                           Depth;                                                    // 0x0028(0x0018) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FInterpCurveFloat                           WaterVelocityScalar;                                      // 0x0040(0x0018) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FInterpCurveFloat                           RiverWidth;                                               // 0x0058(0x0018) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FInterpCurveFloat                           AudioIntensity;                                           // 0x0070(0x0018) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FInterpCurveVector                          WaterVelocity;                                            // 0x0088(0x0018) (CPF_ZeroConstructor, CPF_Deprecated, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.WaterSplineMetadata");
		return ptr;
	}

};


// Class Water.WaterSubsystem
// 0x00C8 (0x00F8 - 0x0030)
class UWaterSubsystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCameraUnderwaterStateChanged;                           // 0x0070(0x0001) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0030(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptMulticastDelegate                    OnWaterScalabilityChanged;                                // 0x0080(0x0001) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0080(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UStaticMesh*                                 DefaultRiverMesh;                                         // 0x0090(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UStaticMesh*                                 DefaultLakeMesh;                                          // 0x0098(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class AWaterMeshActor*                             WaterMeshActor;                                           // 0x00A0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData03[0x28];                                      // 0x00A8(0x0028) MISSED OFFSET
	class UMaterialParameterCollection*                MaterialParameterCollection;                              // 0x00D0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData04[0x20];                                      // 0x00D8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.WaterSubsystem");
		return ptr;
	}


	void SetOceanFloodHeight(float InFloodHeight);
	void PrintToWaterLog(const struct FString& Message, bool bWarning);
	bool IsWaterRenderingEnabled();
	bool IsUnderwaterPostProcessEnabled();
	bool IsShallowWaterSimulationEnabled();
	float GetWaterTimeSeconds();
	float GetSmoothedWorldTimeSeconds();
	static int GetShallowWaterSimulationRenderTargetSize();
	static int GetShallowWaterMaxImpulseForces();
	static int GetShallowWaterMaxDynamicForces();
	float GetOceanTotalHeight();
	float GetOceanFloodHeight();
	float GetOceanBaseHeight();
	float GetCameraUnderwaterDepth();
};


// Class Water.WaterWavesAsset
// 0x0008 (0x0030 - 0x0028)
class UWaterWavesAsset : public UObject
{
public:
	class UWaterWaves*                                 WaterWaves;                                               // 0x0028(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.WaterWavesAsset");
		return ptr;
	}

};


// Class Water.WaterWavesAssetReference
// 0x0008 (0x0030 - 0x0028)
class UWaterWavesAssetReference : public UWaterWavesBase
{
public:
	class UWaterWavesAsset*                            WaterWavesAsset;                                          // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.WaterWavesAssetReference");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
