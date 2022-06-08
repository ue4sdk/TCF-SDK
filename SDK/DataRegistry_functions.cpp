// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DataRegistry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryType
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FDataRegistryType       A                              (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FDataRegistryType       B                              (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UDataRegistrySubsystem::NotEqual_DataRegistryType(const struct FDataRegistryType& A, const struct FDataRegistryType& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryType"));

	struct
	{
		struct FDataRegistryType       A;
		struct FDataRegistryType       B;
		bool                           ReturnValue;
	} params = {};

	params.A = A;
	params.B = B;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryId
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FDataRegistryId         A                              (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FDataRegistryId         B                              (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UDataRegistrySubsystem::NotEqual_DataRegistryId(const struct FDataRegistryId& A, const struct FDataRegistryId& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryId"));

	struct
	{
		struct FDataRegistryId         A;
		struct FDataRegistryId         B;
		bool                           ReturnValue;
	} params = {};

	params.A = A;
	params.B = B;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DataRegistry.DataRegistrySubsystem.IsValidDataRegistryType
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FDataRegistryType       DataRegistryType               (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UDataRegistrySubsystem::IsValidDataRegistryType(const struct FDataRegistryType& DataRegistryType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DataRegistry.DataRegistrySubsystem.IsValidDataRegistryType"));

	struct
	{
		struct FDataRegistryType       DataRegistryType;
		bool                           ReturnValue;
	} params = {};

	params.DataRegistryType = DataRegistryType;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DataRegistry.DataRegistrySubsystem.IsValidDataRegistryId
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FDataRegistryId         DataRegistryId                 (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UDataRegistrySubsystem::IsValidDataRegistryId(const struct FDataRegistryId& DataRegistryId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DataRegistry.DataRegistrySubsystem.IsValidDataRegistryId"));

	struct
	{
		struct FDataRegistryId         DataRegistryId;
		bool                           ReturnValue;
	} params = {};

	params.DataRegistryId = DataRegistryId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DataRegistry.DataRegistrySubsystem.GetCachedItemFromLookupBP
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FDataRegistryId         ItemId                         (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FDataRegistryLookup     ResolvedLookup                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTableRowBase           OutItem                        (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UDataRegistrySubsystem::GetCachedItemFromLookupBP(const struct FDataRegistryId& ItemId, const struct FDataRegistryLookup& ResolvedLookup, struct FTableRowBase* OutItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DataRegistry.DataRegistrySubsystem.GetCachedItemFromLookupBP"));

	struct
	{
		struct FDataRegistryId         ItemId;
		struct FDataRegistryLookup     ResolvedLookup;
		struct FTableRowBase           OutItem;
		bool                           ReturnValue;
	} params = {};

	params.ItemId = ItemId;
	params.ResolvedLookup = ResolvedLookup;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutItem != nullptr)
		*OutItem = params.OutItem;

	return params.ReturnValue;
}


// Function DataRegistry.DataRegistrySubsystem.GetCachedItemBP
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FDataRegistryId         ItemId                         (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTableRowBase           OutItem                        (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UDataRegistrySubsystem::GetCachedItemBP(const struct FDataRegistryId& ItemId, struct FTableRowBase* OutItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DataRegistry.DataRegistrySubsystem.GetCachedItemBP"));

	struct
	{
		struct FDataRegistryId         ItemId;
		struct FTableRowBase           OutItem;
		bool                           ReturnValue;
	} params = {};

	params.ItemId = ItemId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutItem != nullptr)
		*OutItem = params.OutItem;

	return params.ReturnValue;
}


// Function DataRegistry.DataRegistrySubsystem.FindCachedItemBP
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FDataRegistryId         ItemId                         (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EDataRegistrySubsystemGetItemResult OutResult                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTableRowBase           OutItem                        (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)

void UDataRegistrySubsystem::FindCachedItemBP(const struct FDataRegistryId& ItemId, EDataRegistrySubsystemGetItemResult* OutResult, struct FTableRowBase* OutItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DataRegistry.DataRegistrySubsystem.FindCachedItemBP"));

	struct
	{
		struct FDataRegistryId         ItemId;
		EDataRegistrySubsystemGetItemResult OutResult;
		struct FTableRowBase           OutItem;
	} params = {};

	params.ItemId = ItemId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutResult != nullptr)
		*OutResult = params.OutResult;
	if (OutItem != nullptr)
		*OutItem = params.OutItem;
}


// Function DataRegistry.DataRegistrySubsystem.EvaluateDataRegistryCurve
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FDataRegistryId         ItemId                         (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          InputValue                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          DefaultValue                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EDataRegistrySubsystemGetItemResult OutResult                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          OutValue                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UDataRegistrySubsystem::EvaluateDataRegistryCurve(const struct FDataRegistryId& ItemId, float InputValue, float DefaultValue, EDataRegistrySubsystemGetItemResult* OutResult, float* OutValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DataRegistry.DataRegistrySubsystem.EvaluateDataRegistryCurve"));

	struct
	{
		struct FDataRegistryId         ItemId;
		float                          InputValue;
		float                          DefaultValue;
		EDataRegistrySubsystemGetItemResult OutResult;
		float                          OutValue;
	} params = {};

	params.ItemId = ItemId;
	params.InputValue = InputValue;
	params.DefaultValue = DefaultValue;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutResult != nullptr)
		*OutResult = params.OutResult;
	if (OutValue != nullptr)
		*OutValue = params.OutValue;
}


// Function DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryType
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FDataRegistryType       A                              (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FDataRegistryType       B                              (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UDataRegistrySubsystem::EqualEqual_DataRegistryType(const struct FDataRegistryType& A, const struct FDataRegistryType& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryType"));

	struct
	{
		struct FDataRegistryType       A;
		struct FDataRegistryType       B;
		bool                           ReturnValue;
	} params = {};

	params.A = A;
	params.B = B;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryId
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FDataRegistryId         A                              (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FDataRegistryId         B                              (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UDataRegistrySubsystem::EqualEqual_DataRegistryId(const struct FDataRegistryId& A, const struct FDataRegistryId& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryId"));

	struct
	{
		struct FDataRegistryId         A;
		struct FDataRegistryId         B;
		bool                           ReturnValue;
	} params = {};

	params.A = A;
	params.B = B;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DataRegistry.DataRegistrySubsystem.Conv_DataRegistryTypeToString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FDataRegistryType       DataRegistryType               (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UDataRegistrySubsystem::Conv_DataRegistryTypeToString(const struct FDataRegistryType& DataRegistryType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DataRegistry.DataRegistrySubsystem.Conv_DataRegistryTypeToString"));

	struct
	{
		struct FDataRegistryType       DataRegistryType;
		struct FString                 ReturnValue;
	} params = {};

	params.DataRegistryType = DataRegistryType;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DataRegistry.DataRegistrySubsystem.Conv_DataRegistryIdToString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FDataRegistryId         DataRegistryId                 (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UDataRegistrySubsystem::Conv_DataRegistryIdToString(const struct FDataRegistryId& DataRegistryId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DataRegistry.DataRegistrySubsystem.Conv_DataRegistryIdToString"));

	struct
	{
		struct FDataRegistryId         DataRegistryId;
		struct FString                 ReturnValue;
	} params = {};

	params.DataRegistryId = DataRegistryId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DataRegistry.DataRegistrySubsystem.AcquireItemBP
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FDataRegistryId         ItemId                         (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         AcquireCallback                (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UDataRegistrySubsystem::AcquireItemBP(const struct FDataRegistryId& ItemId, const struct FScriptDelegate& AcquireCallback)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DataRegistry.DataRegistrySubsystem.AcquireItemBP"));

	struct
	{
		struct FDataRegistryId         ItemId;
		struct FScriptDelegate         AcquireCallback;
		bool                           ReturnValue;
	} params = {};

	params.ItemId = ItemId;
	params.AcquireCallback = AcquireCallback;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
