// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MovieSceneCapture_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMovieSceneCaptureProtocolBase::IsCapturing()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing"));

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


// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EMovieSceneCaptureProtocolState ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EMovieSceneCaptureProtocolState UMovieSceneCaptureProtocolBase::GetState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState"));

	struct
	{
		EMovieSceneCaptureProtocolState ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass* /*UMovieSceneCaptureProtocolBase*/ ProtocolType                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMovieSceneCapture::SetImageCaptureProtocolType(class UClass* /*UMovieSceneCaptureProtocolBase*/ ProtocolType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType"));

	struct
	{
		class UClass* /*UMovieSceneCaptureProtocolBase*/ ProtocolType;
	} params = {};

	params.ProtocolType = ProtocolType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass* /*UMovieSceneCaptureProtocolBase*/ ProtocolType                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMovieSceneCapture::SetAudioCaptureProtocolType(class UClass* /*UMovieSceneCaptureProtocolBase*/ ProtocolType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType"));

	struct
	{
		class UClass* /*UMovieSceneCaptureProtocolBase*/ ProtocolType;
	} params = {};

	params.ProtocolType = ProtocolType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMovieSceneCaptureProtocolBase* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UMovieSceneCaptureProtocolBase* UMovieSceneCapture::GetImageCaptureProtocol()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol"));

	struct
	{
		class UMovieSceneCaptureProtocolBase* ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMovieSceneCaptureProtocolBase* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UMovieSceneCaptureProtocolBase* UMovieSceneCapture::GetAudioCaptureProtocol()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol"));

	struct
	{
		class UMovieSceneCaptureProtocolBase* ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMovieSceneCaptureEnvironment::IsCaptureInProgress()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress"));

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


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UMovieSceneCaptureEnvironment::GetCaptureFrameNumber()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UMovieSceneCaptureEnvironment::GetCaptureElapsedTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime"));

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


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMovieSceneImageCaptureProtocolBase* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UMovieSceneImageCaptureProtocolBase* UMovieSceneCaptureEnvironment::FindImageCaptureProtocol()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol"));

	struct
	{
		class UMovieSceneImageCaptureProtocolBase* ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMovieSceneAudioCaptureProtocolBase* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UMovieSceneAudioCaptureProtocolBase* UMovieSceneCaptureEnvironment::FindAudioCaptureProtocol()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol"));

	struct
	{
		class UMovieSceneAudioCaptureProtocolBase* ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UUserDefinedCaptureProtocol::StopCapturingFinalPixels()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FCapturedPixelsID       StreamID                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UUserDefinedCaptureProtocol::StartCapturingFinalPixels(const struct FCapturedPixelsID& StreamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels"));

	struct
	{
		struct FCapturedPixelsID       StreamID;
	} params = {};

	params.StreamID = StreamID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UTexture*                Buffer                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FCapturedPixelsID       BufferID                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UUserDefinedCaptureProtocol::ResolveBuffer(class UTexture* Buffer, const struct FCapturedPixelsID& BufferID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer"));

	struct
	{
		class UTexture*                Buffer;
		struct FCapturedPixelsID       BufferID;
	} params = {};

	params.Buffer = Buffer;
	params.BufferID = BufferID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUserDefinedCaptureProtocol::OnWarmUp()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUserDefinedCaptureProtocol::OnTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUserDefinedCaptureProtocol::OnStartCapture()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UUserDefinedCaptureProtocol::OnSetup()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup"));

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


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUserDefinedCaptureProtocol::OnPreTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FCapturedPixels         Pixels                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FCapturedPixelsID       ID                             (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FFrameMetrics           FrameMetrics                   (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UUserDefinedCaptureProtocol::OnPixelsReceived(const struct FCapturedPixels& Pixels, const struct FCapturedPixelsID& ID, const struct FFrameMetrics& FrameMetrics)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived"));

	struct
	{
		struct FCapturedPixels         Pixels;
		struct FCapturedPixelsID       ID;
		struct FFrameMetrics           FrameMetrics;
	} params = {};

	params.Pixels = Pixels;
	params.ID = ID;
	params.FrameMetrics = FrameMetrics;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUserDefinedCaptureProtocol::OnPauseCapture()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUserDefinedCaptureProtocol::OnFinalize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUserDefinedCaptureProtocol::OnCaptureFrame()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UUserDefinedCaptureProtocol::OnCanFinalize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize"));

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


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUserDefinedCaptureProtocol::OnBeginFinalize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FFrameMetrics           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FFrameMetrics UUserDefinedCaptureProtocol::GetCurrentFrameMetrics()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics"));

	struct
	{
		struct FFrameMetrics           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FFrameMetrics           InFrameMetrics                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UUserDefinedCaptureProtocol::GenerateFilename(const struct FFrameMetrics& InFrameMetrics)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename"));

	struct
	{
		struct FFrameMetrics           InFrameMetrics;
		struct FString                 ReturnValue;
	} params = {};

	params.InFrameMetrics = InFrameMetrics;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FCapturedPixels         PixelData                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FCapturedPixelsID       StreamID                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FFrameMetrics           FrameMetrics                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           bCopyImageData                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UUserDefinedImageCaptureProtocol::WriteImageToDisk(const struct FCapturedPixels& PixelData, const struct FCapturedPixelsID& StreamID, const struct FFrameMetrics& FrameMetrics, bool bCopyImageData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk"));

	struct
	{
		struct FCapturedPixels         PixelData;
		struct FCapturedPixelsID       StreamID;
		struct FFrameMetrics           FrameMetrics;
		bool                           bCopyImageData;
	} params = {};

	params.PixelData = PixelData;
	params.StreamID = StreamID;
	params.FrameMetrics = FrameMetrics;
	params.bCopyImageData = bCopyImageData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UUserDefinedImageCaptureProtocol::GenerateFilenameForCurrentFrame()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame"));

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


// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UTexture*                Buffer                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FCapturedPixelsID       StreamID                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UUserDefinedImageCaptureProtocol::GenerateFilenameForBuffer(class UTexture* Buffer, const struct FCapturedPixelsID& StreamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer"));

	struct
	{
		class UTexture*                Buffer;
		struct FCapturedPixelsID       StreamID;
		struct FString                 ReturnValue;
	} params = {};

	params.Buffer = Buffer;
	params.StreamID = StreamID;

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
