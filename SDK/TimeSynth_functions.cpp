// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TimeSynth_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TimeSynth.TimeSynthComponent.StopSoundsOnVolumeGroupWithFadeOverride
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UTimeSynthVolumeGroup*   InVolumeGroup                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ETimeSynthEventClipQuantization EventQuantization              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTimeSynthTimeDef       FadeTime                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UTimeSynthComponent::StopSoundsOnVolumeGroupWithFadeOverride(class UTimeSynthVolumeGroup* InVolumeGroup, ETimeSynthEventClipQuantization EventQuantization, const struct FTimeSynthTimeDef& FadeTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeSynth.TimeSynthComponent.StopSoundsOnVolumeGroupWithFadeOverride"));

	struct
	{
		class UTimeSynthVolumeGroup*   InVolumeGroup;
		ETimeSynthEventClipQuantization EventQuantization;
		struct FTimeSynthTimeDef       FadeTime;
	} params = {};

	params.InVolumeGroup = InVolumeGroup;
	params.EventQuantization = EventQuantization;
	params.FadeTime = FadeTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TimeSynth.TimeSynthComponent.StopSoundsOnVolumeGroup
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UTimeSynthVolumeGroup*   InVolumeGroup                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ETimeSynthEventClipQuantization EventQuantization              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UTimeSynthComponent::StopSoundsOnVolumeGroup(class UTimeSynthVolumeGroup* InVolumeGroup, ETimeSynthEventClipQuantization EventQuantization)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeSynth.TimeSynthComponent.StopSoundsOnVolumeGroup"));

	struct
	{
		class UTimeSynthVolumeGroup*   InVolumeGroup;
		ETimeSynthEventClipQuantization EventQuantization;
	} params = {};

	params.InVolumeGroup = InVolumeGroup;
	params.EventQuantization = EventQuantization;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TimeSynth.TimeSynthComponent.StopClipWithFadeOverride
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FTimeSynthClipHandle    InClipHandle                   (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// ETimeSynthEventClipQuantization EventQuantization              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTimeSynthTimeDef       FadeTime                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UTimeSynthComponent::StopClipWithFadeOverride(const struct FTimeSynthClipHandle& InClipHandle, ETimeSynthEventClipQuantization EventQuantization, const struct FTimeSynthTimeDef& FadeTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeSynth.TimeSynthComponent.StopClipWithFadeOverride"));

	struct
	{
		struct FTimeSynthClipHandle    InClipHandle;
		ETimeSynthEventClipQuantization EventQuantization;
		struct FTimeSynthTimeDef       FadeTime;
	} params = {};

	params.InClipHandle = InClipHandle;
	params.EventQuantization = EventQuantization;
	params.FadeTime = FadeTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TimeSynth.TimeSynthComponent.StopClip
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FTimeSynthClipHandle    InClipHandle                   (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// ETimeSynthEventClipQuantization EventQuantization              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UTimeSynthComponent::StopClip(const struct FTimeSynthClipHandle& InClipHandle, ETimeSynthEventClipQuantization EventQuantization)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeSynth.TimeSynthComponent.StopClip"));

	struct
	{
		struct FTimeSynthClipHandle    InClipHandle;
		ETimeSynthEventClipQuantization EventQuantization;
	} params = {};

	params.InClipHandle = InClipHandle;
	params.EventQuantization = EventQuantization;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TimeSynth.TimeSynthComponent.SetVolumeGroup
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UTimeSynthVolumeGroup*   InVolumeGroup                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          VolumeDb                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          FadeTimeSec                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UTimeSynthComponent::SetVolumeGroup(class UTimeSynthVolumeGroup* InVolumeGroup, float VolumeDb, float FadeTimeSec)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeSynth.TimeSynthComponent.SetVolumeGroup"));

	struct
	{
		class UTimeSynthVolumeGroup*   InVolumeGroup;
		float                          VolumeDb;
		float                          FadeTimeSec;
	} params = {};

	params.InVolumeGroup = InVolumeGroup;
	params.VolumeDb = VolumeDb;
	params.FadeTimeSec = FadeTimeSec;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TimeSynth.TimeSynthComponent.SetSeed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            InSeed                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UTimeSynthComponent::SetSeed(int InSeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeSynth.TimeSynthComponent.SetSeed"));

	struct
	{
		int                            InSeed;
	} params = {};

	params.InSeed = InSeed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TimeSynth.TimeSynthComponent.SetQuantizationSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FTimeSynthQuantizationSettings InQuantizationSettings         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UTimeSynthComponent::SetQuantizationSettings(const struct FTimeSynthQuantizationSettings& InQuantizationSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeSynth.TimeSynthComponent.SetQuantizationSettings"));

	struct
	{
		struct FTimeSynthQuantizationSettings InQuantizationSettings;
	} params = {};

	params.InQuantizationSettings = InQuantizationSettings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TimeSynth.TimeSynthComponent.SetFilterSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// ETimeSynthFilter               Filter                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTimeSynthFilterSettings InSettings                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UTimeSynthComponent::SetFilterSettings(ETimeSynthFilter Filter, const struct FTimeSynthFilterSettings& InSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeSynth.TimeSynthComponent.SetFilterSettings"));

	struct
	{
		ETimeSynthFilter               Filter;
		struct FTimeSynthFilterSettings InSettings;
	} params = {};

	params.Filter = Filter;
	params.InSettings = InSettings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TimeSynth.TimeSynthComponent.SetFilterEnabled
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// ETimeSynthFilter               Filter                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bIsEnabled                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UTimeSynthComponent::SetFilterEnabled(ETimeSynthFilter Filter, bool bIsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeSynth.TimeSynthComponent.SetFilterEnabled"));

	struct
	{
		ETimeSynthFilter               Filter;
		bool                           bIsEnabled;
	} params = {};

	params.Filter = Filter;
	params.bIsEnabled = bIsEnabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TimeSynth.TimeSynthComponent.SetFFTSize
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// ETimeSynthFFTSize              InFFTSize                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UTimeSynthComponent::SetFFTSize(ETimeSynthFFTSize InFFTSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeSynth.TimeSynthComponent.SetFFTSize"));

	struct
	{
		ETimeSynthFFTSize              InFFTSize;
	} params = {};

	params.InFFTSize = InFFTSize;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TimeSynth.TimeSynthComponent.SetEnvelopeFollowerSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FTimeSynthEnvelopeFollowerSettings InSettings                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UTimeSynthComponent::SetEnvelopeFollowerSettings(const struct FTimeSynthEnvelopeFollowerSettings& InSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeSynth.TimeSynthComponent.SetEnvelopeFollowerSettings"));

	struct
	{
		struct FTimeSynthEnvelopeFollowerSettings InSettings;
	} params = {};

	params.InSettings = InSettings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TimeSynth.TimeSynthComponent.SetEnvelopeFollowerEnabled
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bInIsEnabled                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UTimeSynthComponent::SetEnvelopeFollowerEnabled(bool bInIsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeSynth.TimeSynthComponent.SetEnvelopeFollowerEnabled"));

	struct
	{
		bool                           bInIsEnabled;
	} params = {};

	params.bInIsEnabled = bInIsEnabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TimeSynth.TimeSynthComponent.SetBPM
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          BeatsPerMinute                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UTimeSynthComponent::SetBPM(float BeatsPerMinute)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeSynth.TimeSynthComponent.SetBPM"));

	struct
	{
		float                          BeatsPerMinute;
	} params = {};

	params.BeatsPerMinute = BeatsPerMinute;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TimeSynth.TimeSynthComponent.ResetSeed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UTimeSynthComponent::ResetSeed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeSynth.TimeSynthComponent.ResetSeed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TimeSynth.TimeSynthComponent.PlayClip
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UTimeSynthClip*          InClip                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UTimeSynthVolumeGroup*   InVolumeGroup                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTimeSynthClipHandle    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FTimeSynthClipHandle UTimeSynthComponent::PlayClip(class UTimeSynthClip* InClip, class UTimeSynthVolumeGroup* InVolumeGroup)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeSynth.TimeSynthComponent.PlayClip"));

	struct
	{
		class UTimeSynthClip*          InClip;
		class UTimeSynthVolumeGroup*   InVolumeGroup;
		struct FTimeSynthClipHandle    ReturnValue;
	} params = {};

	params.InClip = InClip;
	params.InVolumeGroup = InVolumeGroup;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TimeSynth.TimeSynthComponent.HasActiveClips
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UTimeSynthComponent::HasActiveClips()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeSynth.TimeSynthComponent.HasActiveClips"));

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


// Function TimeSynth.TimeSynthComponent.GetSpectralData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<struct FTimeSynthSpectralData> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<struct FTimeSynthSpectralData> UTimeSynthComponent::GetSpectralData()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeSynth.TimeSynthComponent.GetSpectralData"));

	struct
	{
		TArray<struct FTimeSynthSpectralData> ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TimeSynth.TimeSynthComponent.GetMaxActiveClipLimit
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UTimeSynthComponent::GetMaxActiveClipLimit()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeSynth.TimeSynthComponent.GetMaxActiveClipLimit"));

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


// Function TimeSynth.TimeSynthComponent.GetEnvelopeFollowerValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UTimeSynthComponent::GetEnvelopeFollowerValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeSynth.TimeSynthComponent.GetEnvelopeFollowerValue"));

	struct
	{
		float                          ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TimeSynth.TimeSynthComponent.GetBPM
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UTimeSynthComponent::GetBPM()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeSynth.TimeSynthComponent.GetBPM"));

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


// Function TimeSynth.TimeSynthComponent.AddQuantizationEventDelegate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// ETimeSynthEventQuantization    QuantizationType               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         OnQuantizationEvent            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UTimeSynthComponent::AddQuantizationEventDelegate(ETimeSynthEventQuantization QuantizationType, const struct FScriptDelegate& OnQuantizationEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TimeSynth.TimeSynthComponent.AddQuantizationEventDelegate"));

	struct
	{
		ETimeSynthEventQuantization    QuantizationType;
		struct FScriptDelegate         OnQuantizationEvent;
	} params = {};

	params.QuantizationType = QuantizationType;
	params.OnQuantizationEvent = OnQuantizationEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
