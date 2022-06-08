// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "VariantManagerContent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VariantManagerContent.LevelVariantSets.GetVariantSetByName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 VariantSetName                 (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UVariantSet*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UVariantSet* ULevelVariantSets::GetVariantSetByName(const struct FString& VariantSetName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.LevelVariantSets.GetVariantSetByName"));

	struct
	{
		struct FString                 VariantSetName;
		class UVariantSet*             ReturnValue;
	} params = {};

	params.VariantSetName = VariantSetName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VariantManagerContent.LevelVariantSets.GetVariantSet
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            VariantSetIndex                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UVariantSet*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UVariantSet* ULevelVariantSets::GetVariantSet(int VariantSetIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.LevelVariantSets.GetVariantSet"));

	struct
	{
		int                            VariantSetIndex;
		class UVariantSet*             ReturnValue;
	} params = {};

	params.VariantSetIndex = VariantSetIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VariantManagerContent.LevelVariantSets.GetNumVariantSets
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int ULevelVariantSets::GetNumVariantSets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.LevelVariantSets.GetNumVariantSets"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 VariantSetName                 (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 VariantName                    (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool ALevelVariantSetsActor::SwitchOnVariantByName(const struct FString& VariantSetName, const struct FString& VariantName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName"));

	struct
	{
		struct FString                 VariantSetName;
		struct FString                 VariantName;
		bool                           ReturnValue;
	} params = {};

	params.VariantSetName = VariantSetName;
	params.VariantName = VariantName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            VariantSetIndex                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            VariantIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool ALevelVariantSetsActor::SwitchOnVariantByIndex(int VariantSetIndex, int VariantIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex"));

	struct
	{
		int                            VariantSetIndex;
		int                            VariantIndex;
		bool                           ReturnValue;
	} params = {};

	params.VariantSetIndex = VariantSetIndex;
	params.VariantIndex = VariantIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ULevelVariantSets*       InVariantSets                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ALevelVariantSetsActor::SetLevelVariantSets(class ULevelVariantSets* InVariantSets)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets"));

	struct
	{
		class ULevelVariantSets*       InVariantSets;
	} params = {};

	params.InVariantSets = InVariantSets;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bLoad                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class ULevelVariantSets*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class ULevelVariantSets* ALevelVariantSetsActor::GetLevelVariantSets(bool bLoad)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets"));

	struct
	{
		bool                           bLoad;
		class ULevelVariantSets*       ReturnValue;
	} params = {};

	params.bLoad = bLoad;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VariantManagerContent.PropertyValue.HasRecordedData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPropertyValue::HasRecordedData()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.PropertyValue.HasRecordedData"));

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


// Function VariantManagerContent.PropertyValue.GetPropertyTooltip
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FText UPropertyValue::GetPropertyTooltip()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.PropertyValue.GetPropertyTooltip"));

	struct
	{
		struct FText                   ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VariantManagerContent.PropertyValue.GetFullDisplayString
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UPropertyValue::GetFullDisplayString()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.PropertyValue.GetFullDisplayString"));

	struct
	{
		struct FString                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VariantManagerContent.SwitchActor.SelectOption
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            OptionIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ASwitchActor::SelectOption(int OptionIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.SwitchActor.SelectOption"));

	struct
	{
		int                            OptionIndex;
	} params = {};

	params.OptionIndex = OptionIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VariantManagerContent.SwitchActor.GetSelectedOption
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int ASwitchActor::GetSelectedOption()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.SwitchActor.GetSelectedOption"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VariantManagerContent.SwitchActor.GetOptions
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<class AActor*>          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<class AActor*> ASwitchActor::GetOptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.SwitchActor.GetOptions"));

	struct
	{
		TArray<class AActor*>          ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VariantManagerContent.Variant.SwitchOn
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UVariant::SwitchOn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.SwitchOn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VariantManagerContent.Variant.SetThumbnailFromTexture
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UTexture2D*              NewThumbnail                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UVariant::SetThumbnailFromTexture(class UTexture2D* NewThumbnail)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.SetThumbnailFromTexture"));

	struct
	{
		class UTexture2D*              NewThumbnail;
	} params = {};

	params.NewThumbnail = NewThumbnail;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VariantManagerContent.Variant.SetThumbnailFromFile
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FilePath                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UVariant::SetThumbnailFromFile(const struct FString& FilePath)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.SetThumbnailFromFile"));

	struct
	{
		struct FString                 FilePath;
	} params = {};

	params.FilePath = FilePath;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VariantManagerContent.Variant.SetThumbnailFromEditorViewport
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UVariant::SetThumbnailFromEditorViewport()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.SetThumbnailFromEditorViewport"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VariantManagerContent.Variant.SetThumbnailFromCamera
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTransform              CameraTransform                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// float                          FOVDegrees                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          MinZ                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          gamma                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UVariant::SetThumbnailFromCamera(class UObject* WorldContextObject, const struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float gamma)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.SetThumbnailFromCamera"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FTransform              CameraTransform;
		float                          FOVDegrees;
		float                          MinZ;
		float                          gamma;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.CameraTransform = CameraTransform;
	params.FOVDegrees = FOVDegrees;
	params.MinZ = MinZ;
	params.gamma = gamma;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VariantManagerContent.Variant.SetDisplayText
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FText                   NewDisplayText                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UVariant::SetDisplayText(const struct FText& NewDisplayText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.SetDisplayText"));

	struct
	{
		struct FText                   NewDisplayText;
	} params = {};

	params.NewDisplayText = NewDisplayText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VariantManagerContent.Variant.SetDependency
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVariantDependency      Dependency                     (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)

void UVariant::SetDependency(int Index, struct FVariantDependency* Dependency)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.SetDependency"));

	struct
	{
		int                            Index;
		struct FVariantDependency      Dependency;
	} params = {};

	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Dependency != nullptr)
		*Dependency = params.Dependency;
}


// Function VariantManagerContent.Variant.IsActive
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UVariant::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.IsActive"));

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


// Function VariantManagerContent.Variant.GetThumbnail
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UTexture2D*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UTexture2D* UVariant::GetThumbnail()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.GetThumbnail"));

	struct
	{
		class UTexture2D*              ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VariantManagerContent.Variant.GetParent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UVariantSet*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UVariantSet* UVariant::GetParent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.GetParent"));

	struct
	{
		class UVariantSet*             ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VariantManagerContent.Variant.GetNumDependencies
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UVariant::GetNumDependencies()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.GetNumDependencies"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VariantManagerContent.Variant.GetNumActors
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UVariant::GetNumActors()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.GetNumActors"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VariantManagerContent.Variant.GetDisplayText
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FText UVariant::GetDisplayText()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.GetDisplayText"));

	struct
	{
		struct FText                   ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VariantManagerContent.Variant.GetDependents
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ULevelVariantSets*       LevelVariantSets               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bOnlyEnabledDependencies       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class UVariant*>        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<class UVariant*> UVariant::GetDependents(class ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.GetDependents"));

	struct
	{
		class ULevelVariantSets*       LevelVariantSets;
		bool                           bOnlyEnabledDependencies;
		TArray<class UVariant*>        ReturnValue;
	} params = {};

	params.LevelVariantSets = LevelVariantSets;
	params.bOnlyEnabledDependencies = bOnlyEnabledDependencies;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VariantManagerContent.Variant.GetDependency
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVariantDependency      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FVariantDependency UVariant::GetDependency(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.GetDependency"));

	struct
	{
		int                            Index;
		struct FVariantDependency      ReturnValue;
	} params = {};

	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VariantManagerContent.Variant.GetActor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            ActorIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class AActor* UVariant::GetActor(int ActorIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.GetActor"));

	struct
	{
		int                            ActorIndex;
		class AActor*                  ReturnValue;
	} params = {};

	params.ActorIndex = ActorIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VariantManagerContent.Variant.DeleteDependency
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UVariant::DeleteDependency(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.DeleteDependency"));

	struct
	{
		int                            Index;
	} params = {};

	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VariantManagerContent.Variant.AddDependency
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FVariantDependency      Dependency                     (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UVariant::AddDependency(struct FVariantDependency* Dependency)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.AddDependency"));

	struct
	{
		struct FVariantDependency      Dependency;
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Dependency != nullptr)
		*Dependency = params.Dependency;

	return params.ReturnValue;
}


// Function VariantManagerContent.VariantSet.SetThumbnailFromTexture
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UTexture2D*              NewThumbnail                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UVariantSet::SetThumbnailFromTexture(class UTexture2D* NewThumbnail)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.VariantSet.SetThumbnailFromTexture"));

	struct
	{
		class UTexture2D*              NewThumbnail;
	} params = {};

	params.NewThumbnail = NewThumbnail;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VariantManagerContent.VariantSet.SetThumbnailFromFile
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FilePath                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UVariantSet::SetThumbnailFromFile(const struct FString& FilePath)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.VariantSet.SetThumbnailFromFile"));

	struct
	{
		struct FString                 FilePath;
	} params = {};

	params.FilePath = FilePath;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VariantManagerContent.VariantSet.SetThumbnailFromEditorViewport
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UVariantSet::SetThumbnailFromEditorViewport()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.VariantSet.SetThumbnailFromEditorViewport"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VariantManagerContent.VariantSet.SetThumbnailFromCamera
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTransform              CameraTransform                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// float                          FOVDegrees                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          MinZ                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          gamma                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UVariantSet::SetThumbnailFromCamera(class UObject* WorldContextObject, const struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float gamma)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.VariantSet.SetThumbnailFromCamera"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FTransform              CameraTransform;
		float                          FOVDegrees;
		float                          MinZ;
		float                          gamma;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.CameraTransform = CameraTransform;
	params.FOVDegrees = FOVDegrees;
	params.MinZ = MinZ;
	params.gamma = gamma;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VariantManagerContent.VariantSet.SetDisplayText
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FText                   NewDisplayText                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UVariantSet::SetDisplayText(const struct FText& NewDisplayText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.VariantSet.SetDisplayText"));

	struct
	{
		struct FText                   NewDisplayText;
	} params = {};

	params.NewDisplayText = NewDisplayText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VariantManagerContent.VariantSet.GetVariantByName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 VariantName                    (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UVariant*                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UVariant* UVariantSet::GetVariantByName(const struct FString& VariantName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.VariantSet.GetVariantByName"));

	struct
	{
		struct FString                 VariantName;
		class UVariant*                ReturnValue;
	} params = {};

	params.VariantName = VariantName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VariantManagerContent.VariantSet.GetVariant
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            VariantIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UVariant*                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UVariant* UVariantSet::GetVariant(int VariantIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.VariantSet.GetVariant"));

	struct
	{
		int                            VariantIndex;
		class UVariant*                ReturnValue;
	} params = {};

	params.VariantIndex = VariantIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VariantManagerContent.VariantSet.GetThumbnail
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UTexture2D*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UTexture2D* UVariantSet::GetThumbnail()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.VariantSet.GetThumbnail"));

	struct
	{
		class UTexture2D*              ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VariantManagerContent.VariantSet.GetParent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class ULevelVariantSets*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class ULevelVariantSets* UVariantSet::GetParent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.VariantSet.GetParent"));

	struct
	{
		class ULevelVariantSets*       ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VariantManagerContent.VariantSet.GetNumVariants
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UVariantSet::GetNumVariants()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.VariantSet.GetNumVariants"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function VariantManagerContent.VariantSet.GetDisplayText
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FText UVariantSet::GetDisplayText()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.VariantSet.GetDisplayText"));

	struct
	{
		struct FText                   ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
