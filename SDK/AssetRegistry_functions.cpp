// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AssetRegistry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAssetData              InAssetData                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FSoftObjectPath         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FSoftObjectPath UAssetRegistryHelpers::ToSoftObjectPath(const struct FAssetData& InAssetData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath"));

	struct
	{
		struct FAssetData              InAssetData;
		struct FSoftObjectPath         ReturnValue;
	} params = {};

	params.InAssetData = InAssetData;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FARFilter               InFilter                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FTagAndValue>    InTagsAndValues                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FARFilter               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FARFilter UAssetRegistryHelpers::SetFilterTagsAndValues(const struct FARFilter& InFilter, TArray<struct FTagAndValue> InTagsAndValues)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues"));

	struct
	{
		struct FARFilter               InFilter;
		TArray<struct FTagAndValue>    InTagsAndValues;
		struct FARFilter               ReturnValue;
	} params = {};

	params.InFilter = InFilter;
	params.InTagsAndValues = InTagsAndValues;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.IsValid
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAssetData              InAssetData                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAssetRegistryHelpers::IsValid(const struct FAssetData& InAssetData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AssetRegistry.AssetRegistryHelpers.IsValid"));

	struct
	{
		struct FAssetData              InAssetData;
		bool                           ReturnValue;
	} params = {};

	params.InAssetData = InAssetData;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.IsUAsset
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAssetData              InAssetData                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAssetRegistryHelpers::IsUAsset(const struct FAssetData& InAssetData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AssetRegistry.AssetRegistryHelpers.IsUAsset"));

	struct
	{
		struct FAssetData              InAssetData;
		bool                           ReturnValue;
	} params = {};

	params.InAssetData = InAssetData;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.IsRedirector
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAssetData              InAssetData                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAssetRegistryHelpers::IsRedirector(const struct FAssetData& InAssetData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AssetRegistry.AssetRegistryHelpers.IsRedirector"));

	struct
	{
		struct FAssetData              InAssetData;
		bool                           ReturnValue;
	} params = {};

	params.InAssetData = InAssetData;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAssetData              InAssetData                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAssetRegistryHelpers::IsAssetLoaded(const struct FAssetData& InAssetData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded"));

	struct
	{
		struct FAssetData              InAssetData;
		bool                           ReturnValue;
	} params = {};

	params.InAssetData = InAssetData;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetTagValue
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAssetData              InAssetData                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   InTagName                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 OutTagValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAssetRegistryHelpers::GetTagValue(const struct FAssetData& InAssetData, const struct FName& InTagName, struct FString* OutTagValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AssetRegistry.AssetRegistryHelpers.GetTagValue"));

	struct
	{
		struct FAssetData              InAssetData;
		struct FName                   InTagName;
		struct FString                 OutTagValue;
		bool                           ReturnValue;
	} params = {};

	params.InAssetData = InAssetData;
	params.InTagName = InTagName;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutTagValue != nullptr)
		*OutTagValue = params.OutTagValue;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetFullName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAssetData              InAssetData                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UAssetRegistryHelpers::GetFullName(const struct FAssetData& InAssetData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AssetRegistry.AssetRegistryHelpers.GetFullName"));

	struct
	{
		struct FAssetData              InAssetData;
		struct FString                 ReturnValue;
	} params = {};

	params.InAssetData = InAssetData;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetExportTextName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAssetData              InAssetData                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UAssetRegistryHelpers::GetExportTextName(const struct FAssetData& InAssetData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AssetRegistry.AssetRegistryHelpers.GetExportTextName"));

	struct
	{
		struct FAssetData              InAssetData;
		struct FString                 ReturnValue;
	} params = {};

	params.InAssetData = InAssetData;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetClass
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAssetData              InAssetData                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UClass* /*UObject*/      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UClass* /*UObject*/ UAssetRegistryHelpers::GetClass(const struct FAssetData& InAssetData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AssetRegistry.AssetRegistryHelpers.GetClass"));

	struct
	{
		struct FAssetData              InAssetData;
		class UClass* /*UObject*/      ReturnValue;
	} params = {};

	params.InAssetData = InAssetData;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TScriptInterface<class UAssetRegistry> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)

TScriptInterface<class UAssetRegistry> UAssetRegistryHelpers::GetAssetRegistry()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry"));

	struct
	{
		TScriptInterface<class UAssetRegistry> ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetAsset
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAssetData              InAssetData                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UObject*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UObject* UAssetRegistryHelpers::GetAsset(const struct FAssetData& InAssetData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AssetRegistry.AssetRegistryHelpers.GetAsset"));

	struct
	{
		struct FAssetData              InAssetData;
		class UObject*                 ReturnValue;
	} params = {};

	params.InAssetData = InAssetData;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.CreateAssetData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 InAsset                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bAllowBlueprintClass           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FAssetData              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FAssetData UAssetRegistryHelpers::CreateAssetData(class UObject* InAsset, bool bAllowBlueprintClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AssetRegistry.AssetRegistryHelpers.CreateAssetData"));

	struct
	{
		class UObject*                 InAsset;
		bool                           bAllowBlueprintClass;
		struct FAssetData              ReturnValue;
	} params = {};

	params.InAsset = InAsset;
	params.bAllowBlueprintClass = bAllowBlueprintClass;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.WaitForCompletion
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UAssetRegistry::WaitForCompletion()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AssetRegistry.AssetRegistry.WaitForCompletion"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AssetRegistry.AssetRegistry.UseFilterToExcludeAssets
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_Const)
// Parameters:
// TArray<struct FAssetData>      AssetDataList                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FARFilter               Filter                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UAssetRegistry::UseFilterToExcludeAssets(const struct FARFilter& Filter, TArray<struct FAssetData>* AssetDataList)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AssetRegistry.AssetRegistry.UseFilterToExcludeAssets"));

	struct
	{
		TArray<struct FAssetData>      AssetDataList;
		struct FARFilter               Filter;
	} params = {};

	params.Filter = Filter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AssetDataList != nullptr)
		*AssetDataList = params.AssetDataList;
}


// Function AssetRegistry.AssetRegistry.SearchAllAssets
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bSynchronousSearch             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAssetRegistry::SearchAllAssets(bool bSynchronousSearch)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AssetRegistry.AssetRegistry.SearchAllAssets"));

	struct
	{
		bool                           bSynchronousSearch;
	} params = {};

	params.bSynchronousSearch = bSynchronousSearch;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AssetRegistry.AssetRegistry.ScanPathsSynchronous
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FString>         InPaths                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           bForceRescan                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAssetRegistry::ScanPathsSynchronous(TArray<struct FString> InPaths, bool bForceRescan)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AssetRegistry.AssetRegistry.ScanPathsSynchronous"));

	struct
	{
		TArray<struct FString>         InPaths;
		bool                           bForceRescan;
	} params = {};

	params.InPaths = InPaths;
	params.bForceRescan = bForceRescan;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AssetRegistry.AssetRegistry.ScanModifiedAssetFiles
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FString>         InFilePaths                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UAssetRegistry::ScanModifiedAssetFiles(TArray<struct FString> InFilePaths)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AssetRegistry.AssetRegistry.ScanModifiedAssetFiles"));

	struct
	{
		TArray<struct FString>         InFilePaths;
	} params = {};

	params.InFilePaths = InFilePaths;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AssetRegistry.AssetRegistry.ScanFilesSynchronous
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FString>         InFilePaths                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           bForceRescan                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAssetRegistry::ScanFilesSynchronous(TArray<struct FString> InFilePaths, bool bForceRescan)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AssetRegistry.AssetRegistry.ScanFilesSynchronous"));

	struct
	{
		TArray<struct FString>         InFilePaths;
		bool                           bForceRescan;
	} params = {};

	params.InFilePaths = InFilePaths;
	params.bForceRescan = bForceRescan;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AssetRegistry.AssetRegistry.RunAssetsThroughFilter
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_Const)
// Parameters:
// TArray<struct FAssetData>      AssetDataList                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FARFilter               Filter                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UAssetRegistry::RunAssetsThroughFilter(const struct FARFilter& Filter, TArray<struct FAssetData>* AssetDataList)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AssetRegistry.AssetRegistry.RunAssetsThroughFilter"));

	struct
	{
		TArray<struct FAssetData>      AssetDataList;
		struct FARFilter               Filter;
	} params = {};

	params.Filter = Filter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AssetDataList != nullptr)
		*AssetDataList = params.AssetDataList;
}


// Function AssetRegistry.AssetRegistry.PrioritizeSearchPath
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 PathToPrioritize               (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAssetRegistry::PrioritizeSearchPath(const struct FString& PathToPrioritize)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AssetRegistry.AssetRegistry.PrioritizeSearchPath"));

	struct
	{
		struct FString                 PathToPrioritize;
	} params = {};

	params.PathToPrioritize = PathToPrioritize;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AssetRegistry.AssetRegistry.K2_GetReferencers
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_Const)
// Parameters:
// struct FName                   PackageName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FAssetRegistryDependencyOptions ReferenceOptions               (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// TArray<struct FName>           OutReferencers                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAssetRegistry::K2_GetReferencers(const struct FName& PackageName, const struct FAssetRegistryDependencyOptions& ReferenceOptions, TArray<struct FName>* OutReferencers)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AssetRegistry.AssetRegistry.K2_GetReferencers"));

	struct
	{
		struct FName                   PackageName;
		struct FAssetRegistryDependencyOptions ReferenceOptions;
		TArray<struct FName>           OutReferencers;
		bool                           ReturnValue;
	} params = {};

	params.PackageName = PackageName;
	params.ReferenceOptions = ReferenceOptions;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutReferencers != nullptr)
		*OutReferencers = params.OutReferencers;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.K2_GetDependencies
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_Const)
// Parameters:
// struct FName                   PackageName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FAssetRegistryDependencyOptions DependencyOptions              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// TArray<struct FName>           OutDependencies                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAssetRegistry::K2_GetDependencies(const struct FName& PackageName, const struct FAssetRegistryDependencyOptions& DependencyOptions, TArray<struct FName>* OutDependencies)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AssetRegistry.AssetRegistry.K2_GetDependencies"));

	struct
	{
		struct FName                   PackageName;
		struct FAssetRegistryDependencyOptions DependencyOptions;
		TArray<struct FName>           OutDependencies;
		bool                           ReturnValue;
	} params = {};

	params.PackageName = PackageName;
	params.DependencyOptions = DependencyOptions;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutDependencies != nullptr)
		*OutDependencies = params.OutDependencies;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.IsLoadingAssets
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAssetRegistry::IsLoadingAssets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AssetRegistry.AssetRegistry.IsLoadingAssets"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.HasAssets
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_Const)
// Parameters:
// struct FName                   PackagePath                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bRecursive                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAssetRegistry::HasAssets(const struct FName& PackagePath, bool bRecursive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AssetRegistry.AssetRegistry.HasAssets"));

	struct
	{
		struct FName                   PackagePath;
		bool                           bRecursive;
		bool                           ReturnValue;
	} params = {};

	params.PackagePath = PackagePath;
	params.bRecursive = bRecursive;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetSubPaths
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_Const)
// Parameters:
// struct FString                 InBasePath                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FString>         OutPathList                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// bool                           bInRecurse                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAssetRegistry::GetSubPaths(const struct FString& InBasePath, bool bInRecurse, TArray<struct FString>* OutPathList)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AssetRegistry.AssetRegistry.GetSubPaths"));

	struct
	{
		struct FString                 InBasePath;
		TArray<struct FString>         OutPathList;
		bool                           bInRecurse;
	} params = {};

	params.InBasePath = InBasePath;
	params.bInRecurse = bInRecurse;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutPathList != nullptr)
		*OutPathList = params.OutPathList;
}


// Function AssetRegistry.AssetRegistry.GetAssetsByPath
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_Const)
// Parameters:
// struct FName                   PackagePath                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FAssetData>      OutAssetData                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// bool                           bRecursive                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bIncludeOnlyOnDiskAssets       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAssetRegistry::GetAssetsByPath(const struct FName& PackagePath, bool bRecursive, bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetData>* OutAssetData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AssetRegistry.AssetRegistry.GetAssetsByPath"));

	struct
	{
		struct FName                   PackagePath;
		TArray<struct FAssetData>      OutAssetData;
		bool                           bRecursive;
		bool                           bIncludeOnlyOnDiskAssets;
		bool                           ReturnValue;
	} params = {};

	params.PackagePath = PackagePath;
	params.bRecursive = bRecursive;
	params.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutAssetData != nullptr)
		*OutAssetData = params.OutAssetData;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetAssetsByPackageName
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_Const)
// Parameters:
// struct FName                   PackageName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FAssetData>      OutAssetData                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// bool                           bIncludeOnlyOnDiskAssets       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAssetRegistry::GetAssetsByPackageName(const struct FName& PackageName, bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetData>* OutAssetData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AssetRegistry.AssetRegistry.GetAssetsByPackageName"));

	struct
	{
		struct FName                   PackageName;
		TArray<struct FAssetData>      OutAssetData;
		bool                           bIncludeOnlyOnDiskAssets;
		bool                           ReturnValue;
	} params = {};

	params.PackageName = PackageName;
	params.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutAssetData != nullptr)
		*OutAssetData = params.OutAssetData;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetAssetsByClass
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_Const)
// Parameters:
// struct FName                   ClassName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FAssetData>      OutAssetData                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// bool                           bSearchSubClasses              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAssetRegistry::GetAssetsByClass(const struct FName& ClassName, bool bSearchSubClasses, TArray<struct FAssetData>* OutAssetData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AssetRegistry.AssetRegistry.GetAssetsByClass"));

	struct
	{
		struct FName                   ClassName;
		TArray<struct FAssetData>      OutAssetData;
		bool                           bSearchSubClasses;
		bool                           ReturnValue;
	} params = {};

	params.ClassName = ClassName;
	params.bSearchSubClasses = bSearchSubClasses;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutAssetData != nullptr)
		*OutAssetData = params.OutAssetData;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetAssets
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_Const)
// Parameters:
// struct FARFilter               Filter                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FAssetData>      OutAssetData                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAssetRegistry::GetAssets(const struct FARFilter& Filter, TArray<struct FAssetData>* OutAssetData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AssetRegistry.AssetRegistry.GetAssets"));

	struct
	{
		struct FARFilter               Filter;
		TArray<struct FAssetData>      OutAssetData;
		bool                           ReturnValue;
	} params = {};

	params.Filter = Filter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutAssetData != nullptr)
		*OutAssetData = params.OutAssetData;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetAssetByObjectPath
// (FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_Const)
// Parameters:
// struct FName                   ObjectPath                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bIncludeOnlyOnDiskAssets       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FAssetData              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FAssetData UAssetRegistry::GetAssetByObjectPath(const struct FName& ObjectPath, bool bIncludeOnlyOnDiskAssets)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AssetRegistry.AssetRegistry.GetAssetByObjectPath"));

	struct
	{
		struct FName                   ObjectPath;
		bool                           bIncludeOnlyOnDiskAssets;
		struct FAssetData              ReturnValue;
	} params = {};

	params.ObjectPath = ObjectPath;
	params.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetAllCachedPaths
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_Const)
// Parameters:
// TArray<struct FString>         OutPathList                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UAssetRegistry::GetAllCachedPaths(TArray<struct FString>* OutPathList)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AssetRegistry.AssetRegistry.GetAllCachedPaths"));

	struct
	{
		TArray<struct FString>         OutPathList;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutPathList != nullptr)
		*OutPathList = params.OutPathList;
}


// Function AssetRegistry.AssetRegistry.GetAllAssets
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_Const)
// Parameters:
// TArray<struct FAssetData>      OutAssetData                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// bool                           bIncludeOnlyOnDiskAssets       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAssetRegistry::GetAllAssets(bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetData>* OutAssetData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AssetRegistry.AssetRegistry.GetAllAssets"));

	struct
	{
		TArray<struct FAssetData>      OutAssetData;
		bool                           bIncludeOnlyOnDiskAssets;
		bool                           ReturnValue;
	} params = {};

	params.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutAssetData != nullptr)
		*OutAssetData = params.OutAssetData;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
