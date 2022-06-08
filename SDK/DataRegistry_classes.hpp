#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DataRegistry_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class DataRegistry.DataRegistry
// 0x0098 (0x00C8 - 0x0030)
class UDataRegistry : public UObject
{
public:
	struct FName                                       RegistryType;                                             // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AssetRegistrySearchable, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FDataRegistryIdFormat                       IdFormat;                                                 // 0x0038(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	class UScriptStruct*                               ItemStruct;                                               // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AssetRegistrySearchable, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<class UDataRegistrySource*>                 DataSources;                                              // 0x0048(0x0010) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<class UDataRegistrySource*>                 RuntimeSources;                                           // 0x0058(0x0010) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_EditConst, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	float                                              TimerUpdateFrequency;                                     // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FDataRegistryCachePolicy                    DefaultCachePolicy;                                       // 0x006C(0x0014) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0080(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DataRegistry.DataRegistry"));
		return ptr;
	}

};


// Class DataRegistry.DataRegistrySettings
// 0x0018 (0x0058 - 0x0040)
class UDataRegistrySettings : public UDeveloperSettings
{
public:
	TArray<struct FDirectoryPath>                      DirectoriesToScan;                                        // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_NativeAccessSpecifierPublic)
	bool                                               bInitializeAllLoadedRegistries;                           // 0x0050(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIgnoreMissingCookedAssetRegistryData;                    // 0x0051(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0052(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DataRegistry.DataRegistrySettings"));
		return ptr;
	}

};


// Class DataRegistry.DataRegistrySource
// 0x0010 (0x0040 - 0x0030)
class UDataRegistrySource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	class UDataRegistrySource*                         ParentSource;                                             // 0x0038(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DataRegistry.DataRegistrySource"));
		return ptr;
	}

};


// Class DataRegistry.MetaDataRegistrySource
// 0x00D0 (0x0110 - 0x0040)
class UMetaDataRegistrySource : public UDataRegistrySource
{
public:
	EMetaDataRegistrySourceAssetUsage                  AssetUsage;                                               // 0x0040(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FAssetManagerSearchRules                    SearchRules;                                              // 0x0048(0x0050) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	TMap<struct FName, class UDataRegistrySource*>     RuntimeChildren;                                          // 0x0098(0x0050) (CPF_ExportObject, CPF_Transient, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x28];                                      // 0x00E8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DataRegistry.MetaDataRegistrySource"));
		return ptr;
	}

};


// Class DataRegistry.DataRegistrySource_CurveTable
// 0x0068 (0x00A8 - 0x0040)
class UDataRegistrySource_CurveTable : public UDataRegistrySource
{
public:
	TSoftObjectPtr<class UCurveTable>                  SourceTable;                                              // 0x0040(0x0028) (CPF_Edit, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FDataRegistrySource_DataTableRules          TableRules;                                               // 0x0068(0x0008) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	class UCurveTable*                                 CachedTable;                                              // 0x0070(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCurveTable*                                 PreloadTable;                                             // 0x0078(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0080(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DataRegistry.DataRegistrySource_CurveTable"));
		return ptr;
	}

};


// Class DataRegistry.MetaDataRegistrySource_CurveTable
// 0x0010 (0x0120 - 0x0110)
class UMetaDataRegistrySource_CurveTable : public UMetaDataRegistrySource
{
public:
	class UClass* /*UDataRegistrySource_CurveTable*/   CreatedSource;                                            // 0x0110(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FDataRegistrySource_DataTableRules          TableRules;                                               // 0x0118(0x0008) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DataRegistry.MetaDataRegistrySource_CurveTable"));
		return ptr;
	}

};


// Class DataRegistry.DataRegistrySource_DataTable
// 0x0068 (0x00A8 - 0x0040)
class UDataRegistrySource_DataTable : public UDataRegistrySource
{
public:
	TSoftObjectPtr<class UDataTable>                   SourceTable;                                              // 0x0040(0x0028) (CPF_Edit, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FDataRegistrySource_DataTableRules          TableRules;                                               // 0x0068(0x0008) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	class UDataTable*                                  CachedTable;                                              // 0x0070(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UDataTable*                                  PreloadTable;                                             // 0x0078(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0080(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DataRegistry.DataRegistrySource_DataTable"));
		return ptr;
	}

};


// Class DataRegistry.MetaDataRegistrySource_DataTable
// 0x0010 (0x0120 - 0x0110)
class UMetaDataRegistrySource_DataTable : public UMetaDataRegistrySource
{
public:
	class UClass* /*UDataRegistrySource_DataTable*/    CreatedSource;                                            // 0x0110(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FDataRegistrySource_DataTableRules          TableRules;                                               // 0x0118(0x0008) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DataRegistry.MetaDataRegistrySource_DataTable"));
		return ptr;
	}

};


// Class DataRegistry.DataRegistrySubsystem
// 0x0098 (0x00D0 - 0x0038)
class UDataRegistrySubsystem : public UEngineSubsystem
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0038(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DataRegistry.DataRegistrySubsystem"));
		return ptr;
	}


	static bool NotEqual_DataRegistryType(const struct FDataRegistryType& A, const struct FDataRegistryType& B);
	static bool NotEqual_DataRegistryId(const struct FDataRegistryId& A, const struct FDataRegistryId& B);
	static bool IsValidDataRegistryType(const struct FDataRegistryType& DataRegistryType);
	static bool IsValidDataRegistryId(const struct FDataRegistryId& DataRegistryId);
	static bool GetCachedItemFromLookupBP(const struct FDataRegistryId& ItemId, const struct FDataRegistryLookup& ResolvedLookup, struct FTableRowBase* OutItem);
	static bool GetCachedItemBP(const struct FDataRegistryId& ItemId, struct FTableRowBase* OutItem);
	static void FindCachedItemBP(const struct FDataRegistryId& ItemId, EDataRegistrySubsystemGetItemResult* OutResult, struct FTableRowBase* OutItem);
	static void EvaluateDataRegistryCurve(const struct FDataRegistryId& ItemId, float InputValue, float DefaultValue, EDataRegistrySubsystemGetItemResult* OutResult, float* OutValue);
	static bool EqualEqual_DataRegistryType(const struct FDataRegistryType& A, const struct FDataRegistryType& B);
	static bool EqualEqual_DataRegistryId(const struct FDataRegistryId& A, const struct FDataRegistryId& B);
	static struct FString Conv_DataRegistryTypeToString(const struct FDataRegistryType& DataRegistryType);
	static struct FString Conv_DataRegistryIdToString(const struct FDataRegistryId& DataRegistryId);
	static bool AcquireItemBP(const struct FDataRegistryId& ItemId, const struct FScriptDelegate& AcquireCallback);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
