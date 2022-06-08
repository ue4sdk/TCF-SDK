// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LiveLink_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LiveLink.LiveLinkBlueprintLibrary.TransformNames
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle     SubjectFrameHandle             (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FName>           TransformNames                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void ULiveLinkBlueprintLibrary::TransformNames(struct FSubjectFrameHandle* SubjectFrameHandle, TArray<struct FName>* TransformNames)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkBlueprintLibrary.TransformNames"));

	struct
	{
		struct FSubjectFrameHandle     SubjectFrameHandle;
		TArray<struct FName>           TransformNames;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
	if (TransformNames != nullptr)
		*TransformNames = params.TransformNames;
}


// Function LiveLink.LiveLinkBlueprintLibrary.TransformName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FLiveLinkTransform      LiveLinkTransform              (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FName                   Name                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ULiveLinkBlueprintLibrary::TransformName(struct FLiveLinkTransform* LiveLinkTransform, struct FName* Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkBlueprintLibrary.TransformName"));

	struct
	{
		struct FLiveLinkTransform      LiveLinkTransform;
		struct FName                   Name;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;
	if (Name != nullptr)
		*Name = params.Name;
}


// Function LiveLink.LiveLinkBlueprintLibrary.SetLiveLinkSubjectEnabled
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectKey     SubjectKey                     (CPF_ConstParm, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bEnabled                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ULiveLinkBlueprintLibrary::SetLiveLinkSubjectEnabled(const struct FLiveLinkSubjectKey& SubjectKey, bool bEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkBlueprintLibrary.SetLiveLinkSubjectEnabled"));

	struct
	{
		struct FLiveLinkSubjectKey     SubjectKey;
		bool                           bEnabled;
	} params = {};

	params.SubjectKey = SubjectKey;
	params.bEnabled = bEnabled;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function LiveLink.LiveLinkBlueprintLibrary.RemoveSource
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle   SourceHandle                   (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool ULiveLinkBlueprintLibrary::RemoveSource(struct FLiveLinkSourceHandle* SourceHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkBlueprintLibrary.RemoveSource"));

	struct
	{
		struct FLiveLinkSourceHandle   SourceHandle;
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (SourceHandle != nullptr)
		*SourceHandle = params.SourceHandle;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.ParentBoneSpaceTransform
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FLiveLinkTransform      LiveLinkTransform              (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FTransform              Transform                      (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void ULiveLinkBlueprintLibrary::ParentBoneSpaceTransform(struct FLiveLinkTransform* LiveLinkTransform, struct FTransform* Transform)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkBlueprintLibrary.ParentBoneSpaceTransform"));

	struct
	{
		struct FLiveLinkTransform      LiveLinkTransform;
		struct FTransform              Transform;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;
	if (Transform != nullptr)
		*Transform = params.Transform;
}


// Function LiveLink.LiveLinkBlueprintLibrary.NumberOfTransforms
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle     SubjectFrameHandle             (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int ULiveLinkBlueprintLibrary::NumberOfTransforms(struct FSubjectFrameHandle* SubjectFrameHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkBlueprintLibrary.NumberOfTransforms"));

	struct
	{
		struct FSubjectFrameHandle     SubjectFrameHandle;
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.IsSpecificLiveLinkSubjectEnabled
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectKey     SubjectKey                     (CPF_ConstParm, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bForThisFrame                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool ULiveLinkBlueprintLibrary::IsSpecificLiveLinkSubjectEnabled(const struct FLiveLinkSubjectKey& SubjectKey, bool bForThisFrame)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkBlueprintLibrary.IsSpecificLiveLinkSubjectEnabled"));

	struct
	{
		struct FLiveLinkSubjectKey     SubjectKey;
		bool                           bForThisFrame;
		bool                           ReturnValue;
	} params = {};

	params.SubjectKey = SubjectKey;
	params.bForThisFrame = bForThisFrame;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.IsSourceStillValid
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle   SourceHandle                   (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool ULiveLinkBlueprintLibrary::IsSourceStillValid(struct FLiveLinkSourceHandle* SourceHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkBlueprintLibrary.IsSourceStillValid"));

	struct
	{
		struct FLiveLinkSourceHandle   SourceHandle;
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (SourceHandle != nullptr)
		*SourceHandle = params.SourceHandle;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.IsLiveLinkSubjectEnabled
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectName    SubjectName                    (CPF_ConstParm, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool ULiveLinkBlueprintLibrary::IsLiveLinkSubjectEnabled(const struct FLiveLinkSubjectName& SubjectName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkBlueprintLibrary.IsLiveLinkSubjectEnabled"));

	struct
	{
		struct FLiveLinkSubjectName    SubjectName;
		bool                           ReturnValue;
	} params = {};

	params.SubjectName = SubjectName;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.HasParent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FLiveLinkTransform      LiveLinkTransform              (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool ULiveLinkBlueprintLibrary::HasParent(struct FLiveLinkTransform* LiveLinkTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkBlueprintLibrary.HasParent"));

	struct
	{
		struct FLiveLinkTransform      LiveLinkTransform;
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle     SubjectFrameHandle             (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FName                   TransformName                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLiveLinkTransform      LiveLinkTransform              (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)

void ULiveLinkBlueprintLibrary::GetTransformByName(const struct FName& TransformName, struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkTransform* LiveLinkTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByName"));

	struct
	{
		struct FSubjectFrameHandle     SubjectFrameHandle;
		struct FName                   TransformName;
		struct FLiveLinkTransform      LiveLinkTransform;
	} params = {};

	params.TransformName = TransformName;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByIndex
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle     SubjectFrameHandle             (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// int                            TransformIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLiveLinkTransform      LiveLinkTransform              (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)

void ULiveLinkBlueprintLibrary::GetTransformByIndex(int TransformIndex, struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkTransform* LiveLinkTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByIndex"));

	struct
	{
		struct FSubjectFrameHandle     SubjectFrameHandle;
		int                            TransformIndex;
		struct FLiveLinkTransform      LiveLinkTransform;
	} params = {};

	params.TransformIndex = TransformIndex;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetSpecificLiveLinkSubjectRole
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectKey     SubjectKey                     (CPF_ConstParm, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UClass* /*ULiveLinkRole*/ ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UClass* /*ULiveLinkRole*/ ULiveLinkBlueprintLibrary::GetSpecificLiveLinkSubjectRole(const struct FLiveLinkSubjectKey& SubjectKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkBlueprintLibrary.GetSpecificLiveLinkSubjectRole"));

	struct
	{
		struct FLiveLinkSubjectKey     SubjectKey;
		class UClass* /*ULiveLinkRole*/ ReturnValue;
	} params = {};

	params.SubjectKey = SubjectKey;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceType
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle   SourceHandle                   (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FText ULiveLinkBlueprintLibrary::GetSourceType(struct FLiveLinkSourceHandle* SourceHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkBlueprintLibrary.GetSourceType"));

	struct
	{
		struct FLiveLinkSourceHandle   SourceHandle;
		struct FText                   ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (SourceHandle != nullptr)
		*SourceHandle = params.SourceHandle;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceStatus
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle   SourceHandle                   (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FText ULiveLinkBlueprintLibrary::GetSourceStatus(struct FLiveLinkSourceHandle* SourceHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkBlueprintLibrary.GetSourceStatus"));

	struct
	{
		struct FLiveLinkSourceHandle   SourceHandle;
		struct FText                   ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (SourceHandle != nullptr)
		*SourceHandle = params.SourceHandle;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceMachineName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle   SourceHandle                   (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FText ULiveLinkBlueprintLibrary::GetSourceMachineName(struct FLiveLinkSourceHandle* SourceHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkBlueprintLibrary.GetSourceMachineName"));

	struct
	{
		struct FLiveLinkSourceHandle   SourceHandle;
		struct FText                   ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (SourceHandle != nullptr)
		*SourceHandle = params.SourceHandle;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetRootTransform
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle     SubjectFrameHandle             (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FLiveLinkTransform      LiveLinkTransform              (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)

void ULiveLinkBlueprintLibrary::GetRootTransform(struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkTransform* LiveLinkTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkBlueprintLibrary.GetRootTransform"));

	struct
	{
		struct FSubjectFrameHandle     SubjectFrameHandle;
		struct FLiveLinkTransform      LiveLinkTransform;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetPropertyValue
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FLiveLinkBasicBlueprintData BasicData                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FName                   PropertyName                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Value                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool ULiveLinkBlueprintLibrary::GetPropertyValue(const struct FName& PropertyName, struct FLiveLinkBasicBlueprintData* BasicData, float* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkBlueprintLibrary.GetPropertyValue"));

	struct
	{
		struct FLiveLinkBasicBlueprintData BasicData;
		struct FName                   PropertyName;
		float                          Value;
		bool                           ReturnValue;
	} params = {};

	params.PropertyName = PropertyName;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (BasicData != nullptr)
		*BasicData = params.BasicData;
	if (Value != nullptr)
		*Value = params.Value;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetParent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FLiveLinkTransform      LiveLinkTransform              (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FLiveLinkTransform      Parent                         (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)

void ULiveLinkBlueprintLibrary::GetParent(struct FLiveLinkTransform* LiveLinkTransform, struct FLiveLinkTransform* Parent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkBlueprintLibrary.GetParent"));

	struct
	{
		struct FLiveLinkTransform      LiveLinkTransform;
		struct FLiveLinkTransform      Parent;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;
	if (Parent != nullptr)
		*Parent = params.Parent;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetMetadata
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle     SubjectFrameHandle             (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FSubjectMetadata        MetaData                       (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)

void ULiveLinkBlueprintLibrary::GetMetadata(struct FSubjectFrameHandle* SubjectFrameHandle, struct FSubjectMetadata* MetaData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkBlueprintLibrary.GetMetadata"));

	struct
	{
		struct FSubjectFrameHandle     SubjectFrameHandle;
		struct FSubjectMetadata        MetaData;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
	if (MetaData != nullptr)
		*MetaData = params.MetaData;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjects
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bIncludeDisabledSubject        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bIncludeVirtualSubject         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FLiveLinkSubjectKey> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<struct FLiveLinkSubjectKey> ULiveLinkBlueprintLibrary::GetLiveLinkSubjects(bool bIncludeDisabledSubject, bool bIncludeVirtualSubject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjects"));

	struct
	{
		bool                           bIncludeDisabledSubject;
		bool                           bIncludeVirtualSubject;
		TArray<struct FLiveLinkSubjectKey> ReturnValue;
	} params = {};

	params.bIncludeDisabledSubject = bIncludeDisabledSubject;
	params.bIncludeVirtualSubject = bIncludeVirtualSubject;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjectRole
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectName    SubjectName                    (CPF_ConstParm, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UClass* /*ULiveLinkRole*/ ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UClass* /*ULiveLinkRole*/ ULiveLinkBlueprintLibrary::GetLiveLinkSubjectRole(const struct FLiveLinkSubjectName& SubjectName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjectRole"));

	struct
	{
		struct FLiveLinkSubjectName    SubjectName;
		class UClass* /*ULiveLinkRole*/ ReturnValue;
	} params = {};

	params.SubjectName = SubjectName;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkEnabledSubjectNames
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bIncludeVirtualSubject         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FLiveLinkSubjectName> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<struct FLiveLinkSubjectName> ULiveLinkBlueprintLibrary::GetLiveLinkEnabledSubjectNames(bool bIncludeVirtualSubject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkEnabledSubjectNames"));

	struct
	{
		bool                           bIncludeVirtualSubject;
		TArray<struct FLiveLinkSubjectName> ReturnValue;
	} params = {};

	params.bIncludeVirtualSubject = bIncludeVirtualSubject;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetCurves
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle     SubjectFrameHandle             (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TMap<struct FName, float>      Curves                         (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)

void ULiveLinkBlueprintLibrary::GetCurves(struct FSubjectFrameHandle* SubjectFrameHandle, TMap<struct FName, float>* Curves)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkBlueprintLibrary.GetCurves"));

	struct
	{
		struct FSubjectFrameHandle     SubjectFrameHandle;
		TMap<struct FName, float>      Curves;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
	if (Curves != nullptr)
		*Curves = params.Curves;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetChildren
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FLiveLinkTransform      LiveLinkTransform              (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FLiveLinkTransform> Children                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void ULiveLinkBlueprintLibrary::GetChildren(struct FLiveLinkTransform* LiveLinkTransform, TArray<struct FLiveLinkTransform>* Children)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkBlueprintLibrary.GetChildren"));

	struct
	{
		struct FLiveLinkTransform      LiveLinkTransform;
		TArray<struct FLiveLinkTransform> Children;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;
	if (Children != nullptr)
		*Children = params.Children;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetBasicData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle     SubjectFrameHandle             (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FLiveLinkBasicBlueprintData BasicBlueprintData             (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)

void ULiveLinkBlueprintLibrary::GetBasicData(struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkBasicBlueprintData* BasicBlueprintData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkBlueprintLibrary.GetBasicData"));

	struct
	{
		struct FSubjectFrameHandle     SubjectFrameHandle;
		struct FLiveLinkBasicBlueprintData BasicBlueprintData;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
	if (BasicBlueprintData != nullptr)
		*BasicBlueprintData = params.BasicBlueprintData;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetAnimationStaticData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle     SubjectFrameHandle             (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FLiveLinkSkeletonStaticData AnimationStaticData            (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool ULiveLinkBlueprintLibrary::GetAnimationStaticData(struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkSkeletonStaticData* AnimationStaticData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkBlueprintLibrary.GetAnimationStaticData"));

	struct
	{
		struct FSubjectFrameHandle     SubjectFrameHandle;
		struct FLiveLinkSkeletonStaticData AnimationStaticData;
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
	if (AnimationStaticData != nullptr)
		*AnimationStaticData = params.AnimationStaticData;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetAnimationFrameData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle     SubjectFrameHandle             (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FLiveLinkAnimationFrameData AnimationFrameData             (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool ULiveLinkBlueprintLibrary::GetAnimationFrameData(struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkAnimationFrameData* AnimationFrameData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkBlueprintLibrary.GetAnimationFrameData"));

	struct
	{
		struct FSubjectFrameHandle     SubjectFrameHandle;
		struct FLiveLinkAnimationFrameData AnimationFrameData;
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
	if (AnimationFrameData != nullptr)
		*AnimationFrameData = params.AnimationFrameData;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameWithSpecificRole
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectName    SubjectName                    (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UClass* /*ULiveLinkRole*/ Role                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLiveLinkBaseBlueprintData OutBlueprintData               (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool ULiveLinkBlueprintLibrary::EvaluateLiveLinkFrameWithSpecificRole(const struct FLiveLinkSubjectName& SubjectName, class UClass* /*ULiveLinkRole*/ Role, struct FLiveLinkBaseBlueprintData* OutBlueprintData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameWithSpecificRole"));

	struct
	{
		struct FLiveLinkSubjectName    SubjectName;
		class UClass* /*ULiveLinkRole*/ Role;
		struct FLiveLinkBaseBlueprintData OutBlueprintData;
		bool                           ReturnValue;
	} params = {};

	params.SubjectName = SubjectName;
	params.Role = Role;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutBlueprintData != nullptr)
		*OutBlueprintData = params.OutBlueprintData;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtWorldTimeOffset
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectName    SubjectName                    (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UClass* /*ULiveLinkRole*/ Role                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          WorldTimeOffset                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLiveLinkBaseBlueprintData OutBlueprintData               (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool ULiveLinkBlueprintLibrary::EvaluateLiveLinkFrameAtWorldTimeOffset(const struct FLiveLinkSubjectName& SubjectName, class UClass* /*ULiveLinkRole*/ Role, float WorldTimeOffset, struct FLiveLinkBaseBlueprintData* OutBlueprintData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtWorldTimeOffset"));

	struct
	{
		struct FLiveLinkSubjectName    SubjectName;
		class UClass* /*ULiveLinkRole*/ Role;
		float                          WorldTimeOffset;
		struct FLiveLinkBaseBlueprintData OutBlueprintData;
		bool                           ReturnValue;
	} params = {};

	params.SubjectName = SubjectName;
	params.Role = Role;
	params.WorldTimeOffset = WorldTimeOffset;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutBlueprintData != nullptr)
		*OutBlueprintData = params.OutBlueprintData;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtSceneTime
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectName    SubjectName                    (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UClass* /*ULiveLinkRole*/ Role                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTimecode               SceneTime                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLiveLinkBaseBlueprintData OutBlueprintData               (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool ULiveLinkBlueprintLibrary::EvaluateLiveLinkFrameAtSceneTime(const struct FLiveLinkSubjectName& SubjectName, class UClass* /*ULiveLinkRole*/ Role, const struct FTimecode& SceneTime, struct FLiveLinkBaseBlueprintData* OutBlueprintData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtSceneTime"));

	struct
	{
		struct FLiveLinkSubjectName    SubjectName;
		class UClass* /*ULiveLinkRole*/ Role;
		struct FTimecode               SceneTime;
		struct FLiveLinkBaseBlueprintData OutBlueprintData;
		bool                           ReturnValue;
	} params = {};

	params.SubjectName = SubjectName;
	params.Role = Role;
	params.SceneTime = SceneTime;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutBlueprintData != nullptr)
		*OutBlueprintData = params.OutBlueprintData;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrame
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectRepresentation SubjectRepresentation          (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FLiveLinkBaseBlueprintData OutBlueprintData               (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool ULiveLinkBlueprintLibrary::EvaluateLiveLinkFrame(const struct FLiveLinkSubjectRepresentation& SubjectRepresentation, struct FLiveLinkBaseBlueprintData* OutBlueprintData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrame"));

	struct
	{
		struct FLiveLinkSubjectRepresentation SubjectRepresentation;
		struct FLiveLinkBaseBlueprintData OutBlueprintData;
		bool                           ReturnValue;
	} params = {};

	params.SubjectRepresentation = SubjectRepresentation;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutBlueprintData != nullptr)
		*OutBlueprintData = params.OutBlueprintData;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.ComponentSpaceTransform
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FLiveLinkTransform      LiveLinkTransform              (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FTransform              Transform                      (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void ULiveLinkBlueprintLibrary::ComponentSpaceTransform(struct FLiveLinkTransform* LiveLinkTransform, struct FTransform* Transform)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkBlueprintLibrary.ComponentSpaceTransform"));

	struct
	{
		struct FLiveLinkTransform      LiveLinkTransform;
		struct FTransform              Transform;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;
	if (Transform != nullptr)
		*Transform = params.Transform;
}


// Function LiveLink.LiveLinkBlueprintLibrary.ChildCount
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FLiveLinkTransform      LiveLinkTransform              (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int ULiveLinkBlueprintLibrary::ChildCount(struct FLiveLinkTransform* LiveLinkTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkBlueprintLibrary.ChildCount"));

	struct
	{
		struct FLiveLinkTransform      LiveLinkTransform;
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectStaticData_Internal
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FLiveLinkBaseStaticData InStruct                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool ULiveLinkBlueprintVirtualSubject::UpdateVirtualSubjectStaticData_Internal(const struct FLiveLinkBaseStaticData& InStruct)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectStaticData_Internal"));

	struct
	{
		struct FLiveLinkBaseStaticData InStruct;
		bool                           ReturnValue;
	} params = {};

	params.InStruct = InStruct;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectFrameData_Internal
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FLiveLinkBaseFrameData  InStruct                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           bInShouldStampCurrentTime      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool ULiveLinkBlueprintVirtualSubject::UpdateVirtualSubjectFrameData_Internal(const struct FLiveLinkBaseFrameData& InStruct, bool bInShouldStampCurrentTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectFrameData_Internal"));

	struct
	{
		struct FLiveLinkBaseFrameData  InStruct;
		bool                           bInShouldStampCurrentTime;
		bool                           ReturnValue;
	} params = {};

	params.InStruct = InStruct;
	params.bInShouldStampCurrentTime = bInShouldStampCurrentTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintVirtualSubject.OnUpdate
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULiveLinkBlueprintVirtualSubject::OnUpdate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkBlueprintVirtualSubject.OnUpdate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LiveLink.LiveLinkBlueprintVirtualSubject.OnInitialize
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULiveLinkBlueprintVirtualSubject::OnInitialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkBlueprintVirtualSubject.OnInitialize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LiveLink.LiveLinkComponent.GetSubjectDataAtWorldTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   SubjectName                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          WorldTime                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bSuccess                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FSubjectFrameHandle     SubjectFrameHandle             (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)

void ULiveLinkComponent::GetSubjectDataAtWorldTime(const struct FName& SubjectName, float WorldTime, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkComponent.GetSubjectDataAtWorldTime"));

	struct
	{
		struct FName                   SubjectName;
		float                          WorldTime;
		bool                           bSuccess;
		struct FSubjectFrameHandle     SubjectFrameHandle;
	} params = {};

	params.SubjectName = SubjectName;
	params.WorldTime = WorldTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
}


// Function LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   SubjectName                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTimecode               SceneTime                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bSuccess                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FSubjectFrameHandle     SubjectFrameHandle             (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)

void ULiveLinkComponent::GetSubjectDataAtSceneTime(const struct FName& SubjectName, const struct FTimecode& SceneTime, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime"));

	struct
	{
		struct FName                   SubjectName;
		struct FTimecode               SceneTime;
		bool                           bSuccess;
		struct FSubjectFrameHandle     SubjectFrameHandle;
	} params = {};

	params.SubjectName = SubjectName;
	params.SceneTime = SceneTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
}


// Function LiveLink.LiveLinkComponent.GetSubjectData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   SubjectName                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bSuccess                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FSubjectFrameHandle     SubjectFrameHandle             (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)

void ULiveLinkComponent::GetSubjectData(const struct FName& SubjectName, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkComponent.GetSubjectData"));

	struct
	{
		struct FName                   SubjectName;
		bool                           bSuccess;
		struct FSubjectFrameHandle     SubjectFrameHandle;
	} params = {};

	params.SubjectName = SubjectName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
}


// Function LiveLink.LiveLinkComponent.GetAvailableSubjectNames
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FName>           SubjectNames                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void ULiveLinkComponent::GetAvailableSubjectNames(TArray<struct FName>* SubjectNames)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkComponent.GetAvailableSubjectNames"));

	struct
	{
		TArray<struct FName>           SubjectNames;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SubjectNames != nullptr)
		*SubjectNames = params.SubjectNames;
}


// Function LiveLink.LiveLinkInstance.SetSubject
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectName    SubjectName                    (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ULiveLinkInstance::SetSubject(const struct FLiveLinkSubjectName& SubjectName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkInstance.SetSubject"));

	struct
	{
		struct FLiveLinkSubjectName    SubjectName;
	} params = {};

	params.SubjectName = SubjectName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LiveLink.LiveLinkInstance.SetRetargetAsset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass* /*ULiveLinkRetargetAsset*/ RetargetAsset                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ULiveLinkInstance::SetRetargetAsset(class UClass* /*ULiveLinkRetargetAsset*/ RetargetAsset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkInstance.SetRetargetAsset"));

	struct
	{
		class UClass* /*ULiveLinkRetargetAsset*/ RetargetAsset;
	} params = {};

	params.RetargetAsset = RetargetAsset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LiveLink.LiveLinkMessageBusFinder.GetAvailableProviders
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FProviderPollResult> AvailableProviders             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void ULiveLinkMessageBusFinder::GetAvailableProviders(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, float Duration, TArray<struct FProviderPollResult>* AvailableProviders)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkMessageBusFinder.GetAvailableProviders"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FLatentActionInfo       LatentInfo;
		float                          Duration;
		TArray<struct FProviderPollResult> AvailableProviders;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.Duration = Duration;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AvailableProviders != nullptr)
		*AvailableProviders = params.AvailableProviders;
}


// Function LiveLink.LiveLinkMessageBusFinder.ConstructMessageBusFinder
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ULiveLinkMessageBusFinder* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class ULiveLinkMessageBusFinder* ULiveLinkMessageBusFinder::ConstructMessageBusFinder()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkMessageBusFinder.ConstructMessageBusFinder"));

	struct
	{
		class ULiveLinkMessageBusFinder* ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkMessageBusFinder.ConnectToProvider
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FProviderPollResult     provider                       (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FLiveLinkSourceHandle   SourceHandle                   (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)

void ULiveLinkMessageBusFinder::ConnectToProvider(struct FProviderPollResult* provider, struct FLiveLinkSourceHandle* SourceHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkMessageBusFinder.ConnectToProvider"));

	struct
	{
		struct FProviderPollResult     provider;
		struct FLiveLinkSourceHandle   SourceHandle;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (provider != nullptr)
		*provider = params.provider;
	if (SourceHandle != nullptr)
		*SourceHandle = params.SourceHandle;
}


// Function LiveLink.LiveLinkPreset.BuildFromClient
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ULiveLinkPreset::BuildFromClient()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkPreset.BuildFromClient"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LiveLink.LiveLinkPreset.ApplyToClient
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool ULiveLinkPreset::ApplyToClient()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkPreset.ApplyToClient"));

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


// Function LiveLink.LiveLinkPreset.AddToClient
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_Const)
// Parameters:
// bool                           bRecreatePresets               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool ULiveLinkPreset::AddToClient(bool bRecreatePresets)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkPreset.AddToClient"));

	struct
	{
		bool                           bRecreatePresets;
		bool                           ReturnValue;
	} params = {};

	params.bRecreatePresets = bRecreatePresets;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkRemapAsset.RemapCurveElements
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// TMap<struct FName, float>      CurveItems                     (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void ULiveLinkRemapAsset::RemapCurveElements(TMap<struct FName, float>* CurveItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkRemapAsset.RemapCurveElements"));

	struct
	{
		TMap<struct FName, float>      CurveItems;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CurveItems != nullptr)
		*CurveItems = params.CurveItems;
}


// Function LiveLink.LiveLinkRemapAsset.GetRemappedCurveName
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FName                   CurveName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FName ULiveLinkRemapAsset::GetRemappedCurveName(const struct FName& CurveName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkRemapAsset.GetRemappedCurveName"));

	struct
	{
		struct FName                   CurveName;
		struct FName                   ReturnValue;
	} params = {};

	params.CurveName = CurveName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkRemapAsset.GetRemappedBoneName
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FName                   BoneName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FName ULiveLinkRemapAsset::GetRemappedBoneName(const struct FName& BoneName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LiveLink.LiveLinkRemapAsset.GetRemappedBoneName"));

	struct
	{
		struct FName                   BoneName;
		struct FName                   ReturnValue;
	} params = {};

	params.BoneName = BoneName;

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
