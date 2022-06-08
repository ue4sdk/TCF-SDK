#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PrefabricatorRuntime_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PrefabricatorRuntime.PrefabActor
// 0x0020 (0x0270 - 0x0250)
class APrefabActor : public AActor
{
public:
	class UPrefabComponent*                            PrefabComponent;                                          // 0x0250(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FGuid                                       LastUpdateID;                                             // 0x0258(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Seed;                                                     // 0x0268(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x026C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PrefabricatorRuntime.PrefabActor"));
		return ptr;
	}


	void SavePrefab();
	void RandomizeSeed(const struct FRandomStream& InRandom, bool bRecursive);
	void LoadPrefab();
	bool IsPrefabOutdated();
	class UPrefabricatorAsset* GetPrefabAsset();
};


// Class PrefabricatorRuntime.ReplicablePrefabActor
// 0x0000 (0x0270 - 0x0270)
class AReplicablePrefabActor : public APrefabActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PrefabricatorRuntime.ReplicablePrefabActor"));
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabComponent
// 0x0020 (0x0230 - 0x0210)
class UPrefabComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0210(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PrefabricatorRuntime.PrefabComponent"));
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabDebugActor
// 0x0018 (0x0268 - 0x0250)
class APrefabDebugActor : public AActor
{
public:
	class AActor*                                      Actor;                                                    // 0x0250(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<unsigned char>                              ActorData;                                                // 0x0258(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PrefabricatorRuntime.PrefabDebugActor"));
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabRandomizer
// 0x0050 (0x02A0 - 0x0250)
class APrefabRandomizer : public AActor
{
public:
	bool                                               bRandomizeOnBeginPlay;                                    // 0x0250(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0251(0x0003) MISSED OFFSET
	int                                                SeedOffset;                                               // 0x0254(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxBuildTimePerFrame;                                     // 0x0258(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x025C(0x0004) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnRandomizationComplete;                                  // 0x0260(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	bool                                               bFastSyncBuild;                                           // 0x0270(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0271(0x0007) MISSED OFFSET
	TArray<class APrefabActor*>                        ActorsToRandomize;                                        // 0x0278(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0288(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PrefabricatorRuntime.PrefabRandomizer"));
		return ptr;
	}


	void Randomize(int InSeed);
};


// Class PrefabricatorRuntime.PrefabricatorProperty
// 0x0048 (0x0078 - 0x0030)
class UPrefabricatorProperty : public UObject
{
public:
	struct FString                                     PropertyName;                                             // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ExportedValue;                                            // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FPrefabricatorPropertyAssetMapping>  AssetSoftReferenceMappings;                               // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsCrossReferencedActor;                                  // 0x0060(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	struct FGuid                                       CrossReferencePrefabActorId;                              // 0x0064(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PrefabricatorRuntime.PrefabricatorProperty"));
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabricatorEventListener
// 0x0000 (0x0030 - 0x0030)
class UPrefabricatorEventListener : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PrefabricatorRuntime.PrefabricatorEventListener"));
		return ptr;
	}


	void PostSpawn(class APrefabActor* Prefab);
};


// Class PrefabricatorRuntime.PrefabricatorAssetInterface
// 0x0010 (0x0040 - 0x0030)
class UPrefabricatorAssetInterface : public UObject
{
public:
	class UClass* /*UPrefabricatorEventListener*/      EventListener;                                            // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bReplicates;                                              // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PrefabricatorRuntime.PrefabricatorAssetInterface"));
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabricatorAsset
// 0x0038 (0x0078 - 0x0040)
class UPrefabricatorAsset : public UPrefabricatorAssetInterface
{
public:
	TArray<struct FPrefabricatorActorData>             ActorData;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<EComponentMobility>                    PrefabMobility;                                           // 0x0050(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	struct FGuid                                       LastUpdateID;                                             // 0x0054(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	class UThumbnailInfo*                              ThumbnailInfo;                                            // 0x0068(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           Version;                                                  // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PrefabricatorRuntime.PrefabricatorAsset"));
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabricatorAssetCollection
// 0x0018 (0x0058 - 0x0040)
class UPrefabricatorAssetCollection : public UPrefabricatorAssetInterface
{
public:
	TArray<struct FPrefabricatorAssetCollectionItem>   Prefabs;                                                  // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           Version;                                                  // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PrefabricatorRuntime.PrefabricatorAssetCollection"));
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabricatorAssetUserData
// 0x0018 (0x0048 - 0x0030)
class UPrefabricatorAssetUserData : public UAssetUserData
{
public:
	TWeakObjectPtr<class APrefabActor>                 PrefabActor;                                              // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FGuid                                       ItemId;                                                   // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PrefabricatorRuntime.PrefabricatorAssetUserData"));
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabricatorBlueprintLibrary
// 0x0000 (0x0030 - 0x0030)
class UPrefabricatorBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PrefabricatorRuntime.PrefabricatorBlueprintLibrary"));
		return ptr;
	}


	static void UnlinkPrefab(class APrefabActor* PrefabActor);
	static class APrefabActor* SpawnPrefab(class UObject* WorldContextObject, class UPrefabricatorAssetInterface* Prefab, const struct FTransform& Transform, int Seed);
	static void SetPrefabAsset(class APrefabActor* PrefabActor, class UPrefabricatorAssetInterface* Prefab, bool bReloadPrefab);
	static void RandomizePrefab(class APrefabActor* PrefabActor, const struct FRandomStream& InRandom);
	static void GetAllAttachedActors(class AActor* Prefab, TArray<class AActor*>* AttachedActors);
	static class APrefabActor* FindTopMostPrefabActor(class AActor* InActor);
};


// Class PrefabricatorRuntime.PrefabricatorSettings
// 0x0068 (0x00A8 - 0x0040)
class UPrefabricatorSettings : public UDeveloperSettings
{
public:
	EPrefabricatorPivotPosition                        PivotPosition;                                            // 0x0040(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bAllowDynamicUpdate;                                      // 0x0041(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
	TSet<class UClass* /*UObject*/>                    IgnoreBoundingBoxForObjects;                              // 0x0048(0x0050) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	float                                              DefaultThumbnailPitch;                                    // 0x0098(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DefaultThumbnailYaw;                                      // 0x009C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DefaultThumbnailZoom;                                     // 0x00A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PrefabricatorRuntime.PrefabricatorSettings"));
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabSeedLinkerComponent
// 0x0000 (0x0210 - 0x0210)
class UPrefabSeedLinkerComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PrefabricatorRuntime.PrefabSeedLinkerComponent"));
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabSeedLinker
// 0x0018 (0x0268 - 0x0250)
class APrefabSeedLinker : public AActor
{
public:
	TArray<TWeakObjectPtr<class APrefabActor>>         LinkedActors;                                             // 0x0250(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	class UPrefabSeedLinkerComponent*                  SeedLinkerComponent;                                      // 0x0260(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PrefabricatorRuntime.PrefabSeedLinker"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
