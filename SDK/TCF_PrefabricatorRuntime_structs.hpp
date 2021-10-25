#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Basic.hpp"
#include "TCF_PrefabricatorRuntime_enums.hpp"
#include "TCF_Engine_classes.hpp"
#include "TCF_CoreUObject_classes.hpp"
#include "TCF_DeveloperSettings_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PrefabricatorRuntime.PrefabricatorPropertyAssetMapping
// 0x0038
struct FPrefabricatorPropertyAssetMapping
{
	struct FSoftObjectPath                             AssetReference;                                           // 0x0000(0x0018) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     AssetClassName;                                           // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       AssetObjectPath;                                          // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseQuotes;                                               // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct PrefabricatorRuntime.PrefabricatorComponentData
// 0x0050
struct FPrefabricatorComponentData
{
	struct FTransform                                  RelativeTransform;                                        // 0x0000(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ComponentName;                                            // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<class UPrefabricatorProperty*>              Properties;                                               // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct PrefabricatorRuntime.PrefabricatorActorData
// 0x0090
struct FPrefabricatorActorData
{
	struct FGuid                                       PrefabItemID;                                             // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  RelativeTransform;                                        // 0x0010(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClassPath;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FSoftClassPath                              ClassPathRef;                                             // 0x0050(0x0018) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<class UPrefabricatorProperty*>              Properties;                                               // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FPrefabricatorComponentData>         Components;                                               // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
};

// ScriptStruct PrefabricatorRuntime.PrefabricatorAssetCollectionItem
// 0x0030
struct FPrefabricatorAssetCollectionItem
{
	TSoftObjectPtr<class UPrefabricatorAsset>          PrefabAsset;                                              // 0x0000(0x0028) (CPF_Edit, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              weight;                                                   // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
