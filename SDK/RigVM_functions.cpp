// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RigVM_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RigVM.RigVM.SetParameterValueVector2D
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               InValue                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            InArrayIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void URigVM::SetParameterValueVector2D(const struct FName& InParameterName, const struct FVector2D& InValue, int InArrayIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RigVM.RigVM.SetParameterValueVector2D"));

	struct
	{
		struct FName                   InParameterName;
		struct FVector2D               InValue;
		int                            InArrayIndex;
	} params = {};

	params.InParameterName = InParameterName;
	params.InValue = InValue;
	params.InArrayIndex = InArrayIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RigVM.RigVM.SetParameterValueVector
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 InValue                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            InArrayIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void URigVM::SetParameterValueVector(const struct FName& InParameterName, const struct FVector& InValue, int InArrayIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RigVM.RigVM.SetParameterValueVector"));

	struct
	{
		struct FName                   InParameterName;
		struct FVector                 InValue;
		int                            InArrayIndex;
	} params = {};

	params.InParameterName = InParameterName;
	params.InValue = InValue;
	params.InArrayIndex = InArrayIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RigVM.RigVM.SetParameterValueTransform
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTransform              InValue                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// int                            InArrayIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void URigVM::SetParameterValueTransform(const struct FName& InParameterName, const struct FTransform& InValue, int InArrayIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RigVM.RigVM.SetParameterValueTransform"));

	struct
	{
		struct FName                   InParameterName;
		struct FTransform              InValue;
		int                            InArrayIndex;
	} params = {};

	params.InParameterName = InParameterName;
	params.InValue = InValue;
	params.InArrayIndex = InArrayIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RigVM.RigVM.SetParameterValueString
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 InValue                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            InArrayIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void URigVM::SetParameterValueString(const struct FName& InParameterName, const struct FString& InValue, int InArrayIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RigVM.RigVM.SetParameterValueString"));

	struct
	{
		struct FName                   InParameterName;
		struct FString                 InValue;
		int                            InArrayIndex;
	} params = {};

	params.InParameterName = InParameterName;
	params.InValue = InValue;
	params.InArrayIndex = InArrayIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RigVM.RigVM.SetParameterValueQuat
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FQuat                   InValue                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// int                            InArrayIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void URigVM::SetParameterValueQuat(const struct FName& InParameterName, const struct FQuat& InValue, int InArrayIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RigVM.RigVM.SetParameterValueQuat"));

	struct
	{
		struct FName                   InParameterName;
		struct FQuat                   InValue;
		int                            InArrayIndex;
	} params = {};

	params.InParameterName = InParameterName;
	params.InValue = InValue;
	params.InArrayIndex = InArrayIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RigVM.RigVM.SetParameterValueName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   InValue                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            InArrayIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void URigVM::SetParameterValueName(const struct FName& InParameterName, const struct FName& InValue, int InArrayIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RigVM.RigVM.SetParameterValueName"));

	struct
	{
		struct FName                   InParameterName;
		struct FName                   InValue;
		int                            InArrayIndex;
	} params = {};

	params.InParameterName = InParameterName;
	params.InValue = InValue;
	params.InArrayIndex = InArrayIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RigVM.RigVM.SetParameterValueInt
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            InValue                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            InArrayIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void URigVM::SetParameterValueInt(const struct FName& InParameterName, int InValue, int InArrayIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RigVM.RigVM.SetParameterValueInt"));

	struct
	{
		struct FName                   InParameterName;
		int                            InValue;
		int                            InArrayIndex;
	} params = {};

	params.InParameterName = InParameterName;
	params.InValue = InValue;
	params.InArrayIndex = InArrayIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RigVM.RigVM.SetParameterValueFloat
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          InValue                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            InArrayIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void URigVM::SetParameterValueFloat(const struct FName& InParameterName, float InValue, int InArrayIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RigVM.RigVM.SetParameterValueFloat"));

	struct
	{
		struct FName                   InParameterName;
		float                          InValue;
		int                            InArrayIndex;
	} params = {};

	params.InParameterName = InParameterName;
	params.InValue = InValue;
	params.InArrayIndex = InArrayIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RigVM.RigVM.SetParameterValueBool
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           InValue                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            InArrayIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void URigVM::SetParameterValueBool(const struct FName& InParameterName, bool InValue, int InArrayIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RigVM.RigVM.SetParameterValueBool"));

	struct
	{
		struct FName                   InParameterName;
		bool                           InValue;
		int                            InArrayIndex;
	} params = {};

	params.InParameterName = InParameterName;
	params.InValue = InValue;
	params.InArrayIndex = InArrayIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RigVM.RigVM.GetRigVMFunctionName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_Const)
// Parameters:
// int                            InFunctionIndex                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString URigVM::GetRigVMFunctionName(int InFunctionIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RigVM.RigVM.GetRigVMFunctionName"));

	struct
	{
		int                            InFunctionIndex;
		struct FString                 ReturnValue;
	} params = {};

	params.InFunctionIndex = InFunctionIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function RigVM.RigVM.GetParameterValueVector2D
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            InArrayIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector2D URigVM::GetParameterValueVector2D(const struct FName& InParameterName, int InArrayIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RigVM.RigVM.GetParameterValueVector2D"));

	struct
	{
		struct FName                   InParameterName;
		int                            InArrayIndex;
		struct FVector2D               ReturnValue;
	} params = {};

	params.InParameterName = InParameterName;
	params.InArrayIndex = InArrayIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function RigVM.RigVM.GetParameterValueVector
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            InArrayIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector URigVM::GetParameterValueVector(const struct FName& InParameterName, int InArrayIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RigVM.RigVM.GetParameterValueVector"));

	struct
	{
		struct FName                   InParameterName;
		int                            InArrayIndex;
		struct FVector                 ReturnValue;
	} params = {};

	params.InParameterName = InParameterName;
	params.InArrayIndex = InArrayIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function RigVM.RigVM.GetParameterValueTransform
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            InArrayIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FTransform URigVM::GetParameterValueTransform(const struct FName& InParameterName, int InArrayIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RigVM.RigVM.GetParameterValueTransform"));

	struct
	{
		struct FName                   InParameterName;
		int                            InArrayIndex;
		struct FTransform              ReturnValue;
	} params = {};

	params.InParameterName = InParameterName;
	params.InArrayIndex = InArrayIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function RigVM.RigVM.GetParameterValueString
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            InArrayIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString URigVM::GetParameterValueString(const struct FName& InParameterName, int InArrayIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RigVM.RigVM.GetParameterValueString"));

	struct
	{
		struct FName                   InParameterName;
		int                            InArrayIndex;
		struct FString                 ReturnValue;
	} params = {};

	params.InParameterName = InParameterName;
	params.InArrayIndex = InArrayIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function RigVM.RigVM.GetParameterValueQuat
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            InArrayIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FQuat                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FQuat URigVM::GetParameterValueQuat(const struct FName& InParameterName, int InArrayIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RigVM.RigVM.GetParameterValueQuat"));

	struct
	{
		struct FName                   InParameterName;
		int                            InArrayIndex;
		struct FQuat                   ReturnValue;
	} params = {};

	params.InParameterName = InParameterName;
	params.InArrayIndex = InArrayIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function RigVM.RigVM.GetParameterValueName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            InArrayIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FName URigVM::GetParameterValueName(const struct FName& InParameterName, int InArrayIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RigVM.RigVM.GetParameterValueName"));

	struct
	{
		struct FName                   InParameterName;
		int                            InArrayIndex;
		struct FName                   ReturnValue;
	} params = {};

	params.InParameterName = InParameterName;
	params.InArrayIndex = InArrayIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function RigVM.RigVM.GetParameterValueInt
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            InArrayIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int URigVM::GetParameterValueInt(const struct FName& InParameterName, int InArrayIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RigVM.RigVM.GetParameterValueInt"));

	struct
	{
		struct FName                   InParameterName;
		int                            InArrayIndex;
		int                            ReturnValue;
	} params = {};

	params.InParameterName = InParameterName;
	params.InArrayIndex = InArrayIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function RigVM.RigVM.GetParameterValueFloat
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            InArrayIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float URigVM::GetParameterValueFloat(const struct FName& InParameterName, int InArrayIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RigVM.RigVM.GetParameterValueFloat"));

	struct
	{
		struct FName                   InParameterName;
		int                            InArrayIndex;
		float                          ReturnValue;
	} params = {};

	params.InParameterName = InParameterName;
	params.InArrayIndex = InArrayIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function RigVM.RigVM.GetParameterValueBool
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            InArrayIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool URigVM::GetParameterValueBool(const struct FName& InParameterName, int InArrayIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RigVM.RigVM.GetParameterValueBool"));

	struct
	{
		struct FName                   InParameterName;
		int                            InArrayIndex;
		bool                           ReturnValue;
	} params = {};

	params.InParameterName = InParameterName;
	params.InArrayIndex = InArrayIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function RigVM.RigVM.GetParameterArraySize
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   InParameterName                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int URigVM::GetParameterArraySize(const struct FName& InParameterName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RigVM.RigVM.GetParameterArraySize"));

	struct
	{
		struct FName                   InParameterName;
		int                            ReturnValue;
	} params = {};

	params.InParameterName = InParameterName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function RigVM.RigVM.Execute
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InEntryName                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool URigVM::Execute(const struct FName& InEntryName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RigVM.RigVM.Execute"));

	struct
	{
		struct FName                   InEntryName;
		bool                           ReturnValue;
	} params = {};

	params.InEntryName = InEntryName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function RigVM.RigVM.AddRigVMFunction
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// class UScriptStruct*           InRigVMStruct                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   InMethodName                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int URigVM::AddRigVMFunction(class UScriptStruct* InRigVMStruct, const struct FName& InMethodName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RigVM.RigVM.AddRigVMFunction"));

	struct
	{
		class UScriptStruct*           InRigVMStruct;
		struct FName                   InMethodName;
		int                            ReturnValue;
	} params = {};

	params.InRigVMStruct = InRigVMStruct;
	params.InMethodName = InMethodName;

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
