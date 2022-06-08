// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DLSSBlueprint_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DLSSBlueprint.DLSSLibrary.SetDLSSSharpness
// (FUNC_Final, FUNC_RequiredAPI, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Sharpness                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UDLSSLibrary::SetDLSSSharpness(float Sharpness)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DLSSBlueprint.DLSSLibrary.SetDLSSSharpness"));

	struct
	{
		float                          Sharpness;
	} params = {};

	params.Sharpness = Sharpness;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function DLSSBlueprint.DLSSLibrary.SetDLSSMode
// (FUNC_Final, FUNC_RequiredAPI, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EUDLSSMode                     DLSSMode                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UDLSSLibrary::SetDLSSMode(EUDLSSMode DLSSMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DLSSBlueprint.DLSSLibrary.SetDLSSMode"));

	struct
	{
		EUDLSSMode                     DLSSMode;
	} params = {};

	params.DLSSMode = DLSSMode;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function DLSSBlueprint.DLSSLibrary.QueryDLSSSupport
// (FUNC_Final, FUNC_RequiredAPI, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EUDLSSSupport                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EUDLSSSupport UDLSSLibrary::QueryDLSSSupport()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DLSSBlueprint.DLSSLibrary.QueryDLSSSupport"));

	struct
	{
		EUDLSSSupport                  ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DLSSBlueprint.DLSSLibrary.IsDLSSSupported
// (FUNC_Final, FUNC_RequiredAPI, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UDLSSLibrary::IsDLSSSupported()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DLSSBlueprint.DLSSLibrary.IsDLSSSupported"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported
// (FUNC_Final, FUNC_RequiredAPI, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EUDLSSMode                     DLSSMode                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UDLSSLibrary::IsDLSSModeSupported(EUDLSSMode DLSSMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported"));

	struct
	{
		EUDLSSMode                     DLSSMode;
		bool                           ReturnValue;
	} params = {};

	params.DLSSMode = DLSSMode;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DLSSBlueprint.DLSSLibrary.IsDLAAEnabled
// (FUNC_Final, FUNC_RequiredAPI, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UDLSSLibrary::IsDLAAEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DLSSBlueprint.DLSSLibrary.IsDLAAEnabled"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes
// (FUNC_Final, FUNC_RequiredAPI, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<EUDLSSMode>             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<EUDLSSMode> UDLSSLibrary::GetSupportedDLSSModes()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes"));

	struct
	{
		TArray<EUDLSSMode>             ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DLSSBlueprint.DLSSLibrary.GetDLSSSharpness
// (FUNC_Final, FUNC_RequiredAPI, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UDLSSLibrary::GetDLSSSharpness()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DLSSBlueprint.DLSSLibrary.GetDLSSSharpness"));

	struct
	{
		float                          ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange
// (FUNC_Final, FUNC_RequiredAPI, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          MinScreenPercentage            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          MaxScreenPercentage            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UDLSSLibrary::GetDLSSScreenPercentageRange(float* MinScreenPercentage, float* MaxScreenPercentage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange"));

	struct
	{
		float                          MinScreenPercentage;
		float                          MaxScreenPercentage;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (MinScreenPercentage != nullptr)
		*MinScreenPercentage = params.MinScreenPercentage;
	if (MaxScreenPercentage != nullptr)
		*MaxScreenPercentage = params.MaxScreenPercentage;
}


// Function DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation
// (FUNC_Final, FUNC_RequiredAPI, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EUDLSSMode                     DLSSMode                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               ScreenResolution               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bIsSupported                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          OptimalScreenPercentage        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bIsFixedScreenPercentage       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          MinScreenPercentage            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          MaxScreenPercentage            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          OptimalSharpness               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UDLSSLibrary::GetDLSSModeInformation(EUDLSSMode DLSSMode, const struct FVector2D& ScreenResolution, bool* bIsSupported, float* OptimalScreenPercentage, bool* bIsFixedScreenPercentage, float* MinScreenPercentage, float* MaxScreenPercentage, float* OptimalSharpness)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation"));

	struct
	{
		EUDLSSMode                     DLSSMode;
		struct FVector2D               ScreenResolution;
		bool                           bIsSupported;
		float                          OptimalScreenPercentage;
		bool                           bIsFixedScreenPercentage;
		float                          MinScreenPercentage;
		float                          MaxScreenPercentage;
		float                          OptimalSharpness;
	} params = {};

	params.DLSSMode = DLSSMode;
	params.ScreenResolution = ScreenResolution;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (bIsSupported != nullptr)
		*bIsSupported = params.bIsSupported;
	if (OptimalScreenPercentage != nullptr)
		*OptimalScreenPercentage = params.OptimalScreenPercentage;
	if (bIsFixedScreenPercentage != nullptr)
		*bIsFixedScreenPercentage = params.bIsFixedScreenPercentage;
	if (MinScreenPercentage != nullptr)
		*MinScreenPercentage = params.MinScreenPercentage;
	if (MaxScreenPercentage != nullptr)
		*MaxScreenPercentage = params.MaxScreenPercentage;
	if (OptimalSharpness != nullptr)
		*OptimalSharpness = params.OptimalSharpness;
}


// Function DLSSBlueprint.DLSSLibrary.GetDLSSMode
// (FUNC_Final, FUNC_RequiredAPI, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EUDLSSMode                     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EUDLSSMode UDLSSLibrary::GetDLSSMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DLSSBlueprint.DLSSLibrary.GetDLSSMode"));

	struct
	{
		EUDLSSMode                     ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion
// (FUNC_Final, FUNC_RequiredAPI, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            MinDriverVersionMajor          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            MinDriverVersionMinor          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UDLSSLibrary::GetDLSSMinimumDriverVersion(int* MinDriverVersionMajor, int* MinDriverVersionMinor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion"));

	struct
	{
		int                            MinDriverVersionMajor;
		int                            MinDriverVersionMinor;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (MinDriverVersionMajor != nullptr)
		*MinDriverVersionMajor = params.MinDriverVersionMajor;
	if (MinDriverVersionMinor != nullptr)
		*MinDriverVersionMinor = params.MinDriverVersionMinor;
}


// Function DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode
// (FUNC_Final, FUNC_RequiredAPI, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EUDLSSMode                     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EUDLSSMode UDLSSLibrary::GetDefaultDLSSMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode"));

	struct
	{
		EUDLSSMode                     ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DLSSBlueprint.DLSSLibrary.EnableDLAA
// (FUNC_Final, FUNC_RequiredAPI, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UDLSSLibrary::EnableDLAA(bool bEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DLSSBlueprint.DLSSLibrary.EnableDLAA"));

	struct
	{
		bool                           bEnabled;
	} params = {};

	params.bEnabled = bEnabled;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
