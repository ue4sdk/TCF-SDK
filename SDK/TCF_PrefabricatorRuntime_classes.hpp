#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_PrefabricatorRuntime_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PrefabricatorRuntime.PrefabActor
// 0x0020 (0x0260 - 0x0240)
class APrefabActor : public AActor
{
public:
	class UPrefabComponent*                            PrefabComponent;                                          // 0x0240(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FGuid                                       LastUpdateID;                                             // 0x0248(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Seed;                                                     // 0x0258(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x025C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PrefabricatorRuntime.PrefabActor");
		return ptr;
	}


	void SavePrefab();
	void RandomizeSeed(const struct FRandomStream& InRandom, bool bRecursive);
	void LoadPrefab();
	bool IsPrefabOutdated();
	class UPrefabricatorAsset* GetPrefabAsset();
};


// Class PrefabricatorRuntime.ReplicablePrefabActor
// 0x0000 (0x0260 - 0x0260)
class AReplicablePrefabActor : public APrefabActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PrefabricatorRuntime.ReplicablePrefabActor");
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabComponent
// 0x0020 (0x0220 - 0x0200)
class UPrefabComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0200(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PrefabricatorRuntime.PrefabComponent");
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabDebugActor
// 0x0018 (0x0258 - 0x0240)
class APrefabDebugActor : public AActor
{
public:
	class AActor*                                      Actor;                                                    // 0x0240(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<unsigned char>                              ActorData;                                                // 0x0248(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PrefabricatorRuntime.PrefabDebugActor");
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabRandomizer
// 0x0050 (0x0290 - 0x0240)
class APrefabRandomizer : public AActor
{
public:
	bool                                               bRandomizeOnBeginPlay;                                    // 0x0240(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0241(0x0003) MISSED OFFSET
	int                                                SeedOffset;                                               // 0x0244(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxBuildTimePerFrame;                                     // 0x0248(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x024C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnRandomizationComplete;                                  // 0x0250(0x0001) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0xF];                                       // 0x024C(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bFastSyncBuild;                                           // 0x0260(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0261(0x0007) MISSED OFFSET
	TArray<class APrefabActor*>                        ActorsToRandomize;                                        // 0x0268(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x18];                                      // 0x0278(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PrefabricatorRuntime.PrefabRandomizer");
		return ptr;
	}


	void Randomize(int InSeed);
};


// Class PrefabricatorRuntime.PrefabricatorProperty
// 0x0048 (0x0070 - 0x0028)
class UPrefabricatorProperty : public UObject
{
public:
	struct FString                                     PropertyName;                                             // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ExportedValue;                                            // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FPrefabricatorPropertyAssetMapping>  AssetSoftReferenceMappings;                               // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsCrossReferencedActor;                                  // 0x0058(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	struct FGuid                                       CrossReferencePrefabActorId;                              // 0x005C(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PrefabricatorRuntime.PrefabricatorProperty");
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabricatorEventListener
// 0x0000 (0x0028 - 0x0028)
class UPrefabricatorEventListener : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PrefabricatorRuntime.PrefabricatorEventListener");
		return ptr;
	}


	void PostSpawn(class APrefabActor* Prefab);
};


// Class PrefabricatorRuntime.PrefabricatorAssetInterface
// 0x0010 (0x0038 - 0x0028)
class UPrefabricatorAssetInterface : public UObject
{
public:
	class UClass*                                      EventListener;                                            // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bReplicates;                                              // 0x0030(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PrefabricatorRuntime.PrefabricatorAssetInterface");
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabricatorAsset
// 0x0038 (0x0070 - 0x0038)
class UPrefabricatorAsset : public UPrefabricatorAssetInterface
{
public:
	TArray<struct FPrefabricatorActorData>             ActorData;                                                // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<EComponentMobility>                    PrefabMobility;                                           // 0x0048(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	struct FGuid                                       LastUpdateID;                                             // 0x004C(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	class UThumbnailInfo*                              ThumbnailInfo;                                            // 0x0060(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           Version;                                                  // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PrefabricatorRuntime.PrefabricatorAsset");
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabricatorAssetCollection
// 0x0018 (0x0050 - 0x0038)
class UPrefabricatorAssetCollection : public UPrefabricatorAssetInterface
{
public:
	TArray<struct FPrefabricatorAssetCollectionItem>   Prefabs;                                                  // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           Version;                                                  // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PrefabricatorRuntime.PrefabricatorAssetCollection");
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabricatorAssetUserData
// 0x0018 (0x0040 - 0x0028)
class UPrefabricatorAssetUserData : public UAssetUserData
{
public:
	TWeakObjectPtr<class APrefabActor>                 PrefabActor;                                              // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FGuid                                       ItemId;                                                   // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PrefabricatorRuntime.PrefabricatorAssetUserData");
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabricatorBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UPrefabricatorBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PrefabricatorRuntime.PrefabricatorBlueprintLibrary");
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
// 0x0068 (0x00A0 - 0x0038)
class UPrefabricatorSettings : public UDeveloperSettings
{
public:
	EPrefabricatorPivotPosition                        PivotPosition;                                            // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bAllowDynamicUpdate;                                      // 0x0039(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	unsigned char                                      UnknownData01[0x50];                                      // 0x003A(0x0050) UNKNOWN PROPERTY: IgnoreBoundingBoxForObjects
	float                                              DefaultThumbnailPitch;                                    // 0x0090(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DefaultThumbnailYaw;                                      // 0x0094(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DefaultThumbnailZoom;                                     // 0x0098(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x009C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PrefabricatorRuntime.PrefabricatorSettings");
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabSeedLinkerComponent
// 0x0000 (0x0200 - 0x0200)
class UPrefabSeedLinkerComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PrefabricatorRuntime.PrefabSeedLinkerComponent");
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabSeedLinker
// 0x0018 (0x0258 - 0x0240)
class APrefabSeedLinker : public AActor
{
public:
	TArray<TWeakObjectPtr<class APrefabActor>>         LinkedActors;                                             // 0x0240(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	class UPrefabSeedLinkerComponent*                  SeedLinkerComponent;                                      // 0x0250(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PrefabricatorRuntime.PrefabSeedLinker");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
