// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_HorizonTween_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HorizonTween.HorizonTweenEvent.Stop
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UHorizonTweenEvent::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenEvent.Stop");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HorizonTween.HorizonTweenEvent.SetFreeze
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           B                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UHorizonTweenEvent::SetFreeze(bool B)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenEvent.SetFreeze");

	struct
	{
		bool                           B;
	} params;

	params.B = B;

	UObject::ProcessEvent(fn, &params);
}


// Function HorizonTween.HorizonTweenEvent.Resume
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UHorizonTweenEvent::Resume()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenEvent.Resume");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HorizonTween.HorizonTweenEvent.Play
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UHorizonTweenEvent::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenEvent.Play");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HorizonTween.HorizonTweenEvent.Pause
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UHorizonTweenEvent::Pause()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenEvent.Pause");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HorizonTween.HorizonTweenEvent.IsFreeze
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UHorizonTweenEvent::IsFreeze()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenEvent.IsFreeze");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenEvent.GetTweenSystem
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AHorizonTweenSystem*     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class AHorizonTweenSystem* UHorizonTweenEvent::GetTweenSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenEvent.GetTweenSystem");

	struct
	{
		class AHorizonTweenSystem*     ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenEvent.GetTweenEventParam
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FHorizonTweenEventParameters ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FHorizonTweenEventParameters UHorizonTweenEvent::GetTweenEventParam()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenEvent.GetTweenEventParam");

	struct
	{
		struct FHorizonTweenEventParameters ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenEvent.GetCurrentNumOfLoop
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UHorizonTweenEvent::GetCurrentNumOfLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenEvent.GetCurrentNumOfLoop");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenEvent.GetCurrentDuration
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UHorizonTweenEvent::GetCurrentDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenEvent.GetCurrentDuration");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenEvent.GetCurrentAlpha
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UHorizonTweenEvent::GetCurrentAlpha()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenEvent.GetCurrentAlpha");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenEvent.Finish
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bTweenToEnd                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UHorizonTweenEvent::Finish(bool bTweenToEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenEvent.Finish");

	struct
	{
		bool                           bTweenToEnd;
	} params;

	params.bTweenToEnd = bTweenToEnd;

	UObject::ProcessEvent(fn, &params);
}


// Function HorizonTween.HorizonTweenActorMoveFromToEvent.GetEventParamImpl
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FHorizonTweenEventActorMoveFromToParameters ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

struct FHorizonTweenEventActorMoveFromToParameters UHorizonTweenActorMoveFromToEvent::GetEventParamImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenActorMoveFromToEvent.GetEventParamImpl");

	struct
	{
		struct FHorizonTweenEventActorMoveFromToParameters ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenActorMoveFromToEvent.GetCurrentLerp
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector UHorizonTweenActorMoveFromToEvent::GetCurrentLerp()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenActorMoveFromToEvent.GetCurrentLerp");

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenActorRotatorFromToEvent.GetEventParamImpl
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FHorizonTweenEventActorRotatorFromToParameters ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

struct FHorizonTweenEventActorRotatorFromToParameters UHorizonTweenActorRotatorFromToEvent::GetEventParamImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenActorRotatorFromToEvent.GetEventParamImpl");

	struct
	{
		struct FHorizonTweenEventActorRotatorFromToParameters ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenActorRotatorFromToEvent.GetCurrentLerp
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FRotator UHorizonTweenActorRotatorFromToEvent::GetCurrentLerp()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenActorRotatorFromToEvent.GetCurrentLerp");

	struct
	{
		struct FRotator                ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenActorScaleFromToEvent.GetEventParamImpl
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FHorizonTweenEventActorScaleFromToParameters ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

struct FHorizonTweenEventActorScaleFromToParameters UHorizonTweenActorScaleFromToEvent::GetEventParamImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenActorScaleFromToEvent.GetEventParamImpl");

	struct
	{
		struct FHorizonTweenEventActorScaleFromToParameters ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenActorScaleFromToEvent.GetCurrentLerp
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector UHorizonTweenActorScaleFromToEvent::GetCurrentLerp()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenActorScaleFromToEvent.GetCurrentLerp");

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenActorColorFromToEvent.GetEventParamImpl
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FHorizonTweenEventActorColorFromToParameters ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FHorizonTweenEventActorColorFromToParameters UHorizonTweenActorColorFromToEvent::GetEventParamImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenActorColorFromToEvent.GetEventParamImpl");

	struct
	{
		struct FHorizonTweenEventActorColorFromToParameters ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenActorColorFromToEvent.GetCurrentLerp
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FLinearColor UHorizonTweenActorColorFromToEvent::GetCurrentLerp()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenActorColorFromToEvent.GetCurrentLerp");

	struct
	{
		struct FLinearColor            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenActorMoveSplinePathEvent.GetEventParamImpl
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FHorizonTweenEventActorMoveSplinePathParameters ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

struct FHorizonTweenEventActorMoveSplinePathParameters UHorizonTweenActorMoveSplinePathEvent::GetEventParamImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenActorMoveSplinePathEvent.GetEventParamImpl");

	struct
	{
		struct FHorizonTweenEventActorMoveSplinePathParameters ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenActorMoveSplinePathEvent.GetCurrentLerp
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UHorizonTweenActorMoveSplinePathEvent::GetCurrentLerp()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenActorMoveSplinePathEvent.GetCurrentLerp");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenFloatEvent.GetEventParamImpl
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FHorizonTweenEventFloatParameters ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FHorizonTweenEventFloatParameters UHorizonTweenFloatEvent::GetEventParamImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenFloatEvent.GetEventParamImpl");

	struct
	{
		struct FHorizonTweenEventFloatParameters ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenFloatEvent.GetCurrentLerp
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UHorizonTweenFloatEvent::GetCurrentLerp()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenFloatEvent.GetCurrentLerp");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenVectorEvent.GetEventParamImpl
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FHorizonTweenEventVectorParameters ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

struct FHorizonTweenEventVectorParameters UHorizonTweenVectorEvent::GetEventParamImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenVectorEvent.GetEventParamImpl");

	struct
	{
		struct FHorizonTweenEventVectorParameters ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenVectorEvent.GetCurrentLerp
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector UHorizonTweenVectorEvent::GetCurrentLerp()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenVectorEvent.GetCurrentLerp");

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenVector2DEvent.GetEventParamImpl
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FHorizonTweenEventWidgetVector2DParameters ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FHorizonTweenEventWidgetVector2DParameters UHorizonTweenVector2DEvent::GetEventParamImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenVector2DEvent.GetEventParamImpl");

	struct
	{
		struct FHorizonTweenEventWidgetVector2DParameters ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenVector2DEvent.GetCurrentLerp
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector2D UHorizonTweenVector2DEvent::GetCurrentLerp()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenVector2DEvent.GetCurrentLerp");

	struct
	{
		struct FVector2D               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenLinearColorEvent.GetEventParamImpl
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FHorizonTweenEventLinearColorParameters ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FHorizonTweenEventLinearColorParameters UHorizonTweenLinearColorEvent::GetEventParamImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenLinearColorEvent.GetEventParamImpl");

	struct
	{
		struct FHorizonTweenEventLinearColorParameters ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenLinearColorEvent.GetCurrentLerp
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FLinearColor UHorizonTweenLinearColorEvent::GetCurrentLerp()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenLinearColorEvent.GetCurrentLerp");

	struct
	{
		struct FLinearColor            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenRotatorEvent.GetEventParamImpl
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FHorizonTweenEventRotatorParameters ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

struct FHorizonTweenEventRotatorParameters UHorizonTweenRotatorEvent::GetEventParamImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenRotatorEvent.GetEventParamImpl");

	struct
	{
		struct FHorizonTweenEventRotatorParameters ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenRotatorEvent.GetCurrentLerp
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FRotator UHorizonTweenRotatorEvent::GetCurrentLerp()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenRotatorEvent.GetCurrentLerp");

	struct
	{
		struct FRotator                ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSplinePathEvent.GetEventParamImpl
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FHorizonTweenEventSplinePathParameters ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

struct FHorizonTweenEventSplinePathParameters UHorizonTweenSplinePathEvent::GetEventParamImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSplinePathEvent.GetEventParamImpl");

	struct
	{
		struct FHorizonTweenEventSplinePathParameters ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSplinePathEvent.GetCurrentScale
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector UHorizonTweenSplinePathEvent::GetCurrentScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSplinePathEvent.GetCurrentScale");

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSplinePathEvent.GetCurrentRotation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FRotator UHorizonTweenSplinePathEvent::GetCurrentRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSplinePathEvent.GetCurrentRotation");

	struct
	{
		struct FRotator                ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSplinePathEvent.GetCurrentLocation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector UHorizonTweenSplinePathEvent::GetCurrentLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSplinePathEvent.GetCurrentLocation");

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSplinePathEvent.GetCurrentLerp
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UHorizonTweenSplinePathEvent::GetCurrentLerp()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSplinePathEvent.GetCurrentLerp");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenFunctionLibrary.VLerp
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizonTweenLerpMode> eLerpType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Start                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 End                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Alpha                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<float>                  extraParameterList             (CPF_Parm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector UHorizonTweenFunctionLibrary::VLerp(TEnumAsByte<EHorizonTweenLerpMode> eLerpType, const struct FVector& Start, const struct FVector& End, float Alpha, TArray<float> extraParameterList)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenFunctionLibrary.VLerp");

	struct
	{
		TEnumAsByte<EHorizonTweenLerpMode> eLerpType;
		struct FVector                 Start;
		struct FVector                 End;
		float                          Alpha;
		TArray<float>                  extraParameterList;
		struct FVector                 ReturnValue;
	} params;

	params.eLerpType = eLerpType;
	params.Start = Start;
	params.End = End;
	params.Alpha = Alpha;
	params.extraParameterList = extraParameterList;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenFunctionLibrary.V2DLerp
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizonTweenLerpMode> eLerpType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               Start                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               End                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Alpha                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<float>                  extraParameterList             (CPF_Parm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector2D UHorizonTweenFunctionLibrary::V2DLerp(TEnumAsByte<EHorizonTweenLerpMode> eLerpType, const struct FVector2D& Start, const struct FVector2D& End, float Alpha, TArray<float> extraParameterList)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenFunctionLibrary.V2DLerp");

	struct
	{
		TEnumAsByte<EHorizonTweenLerpMode> eLerpType;
		struct FVector2D               Start;
		struct FVector2D               End;
		float                          Alpha;
		TArray<float>                  extraParameterList;
		struct FVector2D               ReturnValue;
	} params;

	params.eLerpType = eLerpType;
	params.Start = Start;
	params.End = End;
	params.Alpha = Alpha;
	params.extraParameterList = extraParameterList;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenFunctionLibrary.SetTweenWidgetSplineComponentByComponent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FHorizonTweenEventWidgetMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class USplineComponent*        pSplineComponent               (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UHorizonTweenFunctionLibrary::SetTweenWidgetSplineComponentByComponent(class USplineComponent* pSplineComponent, struct FHorizonTweenEventWidgetMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenFunctionLibrary.SetTweenWidgetSplineComponentByComponent");

	struct
	{
		struct FHorizonTweenEventWidgetMoveSplinePathParameters paramImpl;
		class USplineComponent*        pSplineComponent;
		bool                           ReturnValue;
	} params;

	params.pSplineComponent = pSplineComponent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenFunctionLibrary.SetTweenWidgetSplineComponentByActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FHorizonTweenEventWidgetMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pActor                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UHorizonTweenFunctionLibrary::SetTweenWidgetSplineComponentByActor(class AActor* pActor, struct FHorizonTweenEventWidgetMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenFunctionLibrary.SetTweenWidgetSplineComponentByActor");

	struct
	{
		struct FHorizonTweenEventWidgetMoveSplinePathParameters paramImpl;
		class AActor*                  pActor;
		bool                           ReturnValue;
	} params;

	params.pActor = pActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenFunctionLibrary.SetTweenSceneComponentSplineComponentByComponent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FHorizonTweenEventSceneComponentMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class USplineComponent*        pSplineComponent               (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UHorizonTweenFunctionLibrary::SetTweenSceneComponentSplineComponentByComponent(class USplineComponent* pSplineComponent, struct FHorizonTweenEventSceneComponentMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenFunctionLibrary.SetTweenSceneComponentSplineComponentByComponent");

	struct
	{
		struct FHorizonTweenEventSceneComponentMoveSplinePathParameters paramImpl;
		class USplineComponent*        pSplineComponent;
		bool                           ReturnValue;
	} params;

	params.pSplineComponent = pSplineComponent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenFunctionLibrary.SetTweenSceneComponentSplineComponentByActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FHorizonTweenEventSceneComponentMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pActor                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UHorizonTweenFunctionLibrary::SetTweenSceneComponentSplineComponentByActor(class AActor* pActor, struct FHorizonTweenEventSceneComponentMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenFunctionLibrary.SetTweenSceneComponentSplineComponentByActor");

	struct
	{
		struct FHorizonTweenEventSceneComponentMoveSplinePathParameters paramImpl;
		class AActor*                  pActor;
		bool                           ReturnValue;
	} params;

	params.pActor = pActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenFunctionLibrary.SetTweenActorSplineComponentByComponent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FHorizonTweenEventActorMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class USplineComponent*        pSplineComponent               (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UHorizonTweenFunctionLibrary::SetTweenActorSplineComponentByComponent(class USplineComponent* pSplineComponent, struct FHorizonTweenEventActorMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenFunctionLibrary.SetTweenActorSplineComponentByComponent");

	struct
	{
		struct FHorizonTweenEventActorMoveSplinePathParameters paramImpl;
		class USplineComponent*        pSplineComponent;
		bool                           ReturnValue;
	} params;

	params.pSplineComponent = pSplineComponent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenFunctionLibrary.SetTweenActorSplineComponentByActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FHorizonTweenEventActorMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pActor                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UHorizonTweenFunctionLibrary::SetTweenActorSplineComponentByActor(class AActor* pActor, struct FHorizonTweenEventActorMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenFunctionLibrary.SetTweenActorSplineComponentByActor");

	struct
	{
		struct FHorizonTweenEventActorMoveSplinePathParameters paramImpl;
		class AActor*                  pActor;
		bool                           ReturnValue;
	} params;

	params.pActor = pActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenFunctionLibrary.RLerp
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizonTweenLerpMode> eLerpType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                Start                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FRotator                End                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// float                          Alpha                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<float>                  extraParameterList             (CPF_Parm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FRotator UHorizonTweenFunctionLibrary::RLerp(TEnumAsByte<EHorizonTweenLerpMode> eLerpType, const struct FRotator& Start, const struct FRotator& End, float Alpha, TArray<float> extraParameterList)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenFunctionLibrary.RLerp");

	struct
	{
		TEnumAsByte<EHorizonTweenLerpMode> eLerpType;
		struct FRotator                Start;
		struct FRotator                End;
		float                          Alpha;
		TArray<float>                  extraParameterList;
		struct FRotator                ReturnValue;
	} params;

	params.eLerpType = eLerpType;
	params.Start = Start;
	params.End = End;
	params.Alpha = Alpha;
	params.extraParameterList = extraParameterList;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenFunctionLibrary.ProcessCollision
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UHorizonTweenEvent*      pTweenEvent                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventTransformParam TransformParam                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UHorizonTweenFunctionLibrary::ProcessCollision(class UHorizonTweenEvent* pTweenEvent, const struct FHorizonTweenEventTransformParam& TransformParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenFunctionLibrary.ProcessCollision");

	struct
	{
		class UHorizonTweenEvent*      pTweenEvent;
		struct FHorizonTweenEventTransformParam TransformParam;
		bool                           ReturnValue;
	} params;

	params.pTweenEvent = pTweenEvent;
	params.TransformParam = TransformParam;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenFunctionLibrary.LinearColorLerp
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizonTweenLerpMode> eLerpType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            Start                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            End                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Alpha                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<float>                  extraParameterList             (CPF_Parm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FLinearColor UHorizonTweenFunctionLibrary::LinearColorLerp(TEnumAsByte<EHorizonTweenLerpMode> eLerpType, const struct FLinearColor& Start, const struct FLinearColor& End, float Alpha, TArray<float> extraParameterList)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenFunctionLibrary.LinearColorLerp");

	struct
	{
		TEnumAsByte<EHorizonTweenLerpMode> eLerpType;
		struct FLinearColor            Start;
		struct FLinearColor            End;
		float                          Alpha;
		TArray<float>                  extraParameterList;
		struct FLinearColor            ReturnValue;
	} params;

	params.eLerpType = eLerpType;
	params.Start = Start;
	params.End = End;
	params.Alpha = Alpha;
	params.extraParameterList = extraParameterList;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenFunctionLibrary.GetChildComponentByName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USceneComponent*         pParent                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bIncludeAllDescendants         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USceneComponent*         ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class USceneComponent* UHorizonTweenFunctionLibrary::GetChildComponentByName(class USceneComponent* pParent, const struct FName& Name, bool bIncludeAllDescendants)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenFunctionLibrary.GetChildComponentByName");

	struct
	{
		class USceneComponent*         pParent;
		struct FName                   Name;
		bool                           bIncludeAllDescendants;
		class USceneComponent*         ReturnValue;
	} params;

	params.pParent = pParent;
	params.Name = Name;
	params.bIncludeAllDescendants = bIncludeAllDescendants;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenFunctionLibrary.FloatLerp
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizonTweenLerpMode> eLerpType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Start                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          End                            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Alpha                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<float>                  extraParameterList             (CPF_Parm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UHorizonTweenFunctionLibrary::FloatLerp(TEnumAsByte<EHorizonTweenLerpMode> eLerpType, float Start, float End, float Alpha, TArray<float> extraParameterList)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenFunctionLibrary.FloatLerp");

	struct
	{
		TEnumAsByte<EHorizonTweenLerpMode> eLerpType;
		float                          Start;
		float                          End;
		float                          Alpha;
		TArray<float>                  extraParameterList;
		float                          ReturnValue;
	} params;

	params.eLerpType = eLerpType;
	params.Start = Start;
	params.End = End;
	params.Alpha = Alpha;
	params.extraParameterList = extraParameterList;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenFunctionLibrary.ConstrainsVector2D
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizonTweenVector2DConstraints> eType                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               originVec                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               replacedVec                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UHorizonTweenFunctionLibrary::ConstrainsVector2D(TEnumAsByte<EHorizonTweenVector2DConstraints> eType, const struct FVector2D& originVec, struct FVector2D* replacedVec)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenFunctionLibrary.ConstrainsVector2D");

	struct
	{
		TEnumAsByte<EHorizonTweenVector2DConstraints> eType;
		struct FVector2D               originVec;
		struct FVector2D               replacedVec;
	} params;

	params.eType = eType;
	params.originVec = originVec;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (replacedVec != nullptr)
		*replacedVec = params.replacedVec;
}


// Function HorizonTween.HorizonTweenFunctionLibrary.ConstrainsVector
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizonTweenVectorConstraints> eType                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 originVec                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 replacedVec                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UHorizonTweenFunctionLibrary::ConstrainsVector(TEnumAsByte<EHorizonTweenVectorConstraints> eType, const struct FVector& originVec, struct FVector* replacedVec)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenFunctionLibrary.ConstrainsVector");

	struct
	{
		TEnumAsByte<EHorizonTweenVectorConstraints> eType;
		struct FVector                 originVec;
		struct FVector                 replacedVec;
	} params;

	params.eType = eType;
	params.originVec = originVec;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (replacedVec != nullptr)
		*replacedVec = params.replacedVec;
}


// Function HorizonTween.HorizonTweenSceneComponentMoveFromToEvent.GetEventParamImpl
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FHorizonTweenEventSceneComponentMoveFromToParameters ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

struct FHorizonTweenEventSceneComponentMoveFromToParameters UHorizonTweenSceneComponentMoveFromToEvent::GetEventParamImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSceneComponentMoveFromToEvent.GetEventParamImpl");

	struct
	{
		struct FHorizonTweenEventSceneComponentMoveFromToParameters ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSceneComponentMoveFromToEvent.GetCurrentLerp
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector UHorizonTweenSceneComponentMoveFromToEvent::GetCurrentLerp()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSceneComponentMoveFromToEvent.GetCurrentLerp");

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSceneComponentRotatorFromToEvent.GetEventParamImpl
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FHorizonTweenEventSceneComponentRotatorFromToParameters ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

struct FHorizonTweenEventSceneComponentRotatorFromToParameters UHorizonTweenSceneComponentRotatorFromToEvent::GetEventParamImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSceneComponentRotatorFromToEvent.GetEventParamImpl");

	struct
	{
		struct FHorizonTweenEventSceneComponentRotatorFromToParameters ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSceneComponentRotatorFromToEvent.GetCurrentLerp
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FRotator UHorizonTweenSceneComponentRotatorFromToEvent::GetCurrentLerp()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSceneComponentRotatorFromToEvent.GetCurrentLerp");

	struct
	{
		struct FRotator                ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSceneComponentScaleFromToEvent.GetEventParamImpl
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FHorizonTweenEventSceneComponentScaleFromToParameters ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

struct FHorizonTweenEventSceneComponentScaleFromToParameters UHorizonTweenSceneComponentScaleFromToEvent::GetEventParamImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSceneComponentScaleFromToEvent.GetEventParamImpl");

	struct
	{
		struct FHorizonTweenEventSceneComponentScaleFromToParameters ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSceneComponentScaleFromToEvent.GetCurrentLerp
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector UHorizonTweenSceneComponentScaleFromToEvent::GetCurrentLerp()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSceneComponentScaleFromToEvent.GetCurrentLerp");

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSceneComponentColorFromToEvent.GetEventParamImpl
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FHorizonTweenEventSceneComponentColorFromToParameters ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

struct FHorizonTweenEventSceneComponentColorFromToParameters UHorizonTweenSceneComponentColorFromToEvent::GetEventParamImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSceneComponentColorFromToEvent.GetEventParamImpl");

	struct
	{
		struct FHorizonTweenEventSceneComponentColorFromToParameters ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSceneComponentColorFromToEvent.GetCurrentLerp
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FLinearColor UHorizonTweenSceneComponentColorFromToEvent::GetCurrentLerp()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSceneComponentColorFromToEvent.GetCurrentLerp");

	struct
	{
		struct FLinearColor            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSceneComponentMoveSplinePathEvent.GetEventParamImpl
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FHorizonTweenEventSceneComponentMoveSplinePathParameters ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

struct FHorizonTweenEventSceneComponentMoveSplinePathParameters UHorizonTweenSceneComponentMoveSplinePathEvent::GetEventParamImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSceneComponentMoveSplinePathEvent.GetEventParamImpl");

	struct
	{
		struct FHorizonTweenEventSceneComponentMoveSplinePathParameters ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSceneComponentMoveSplinePathEvent.GetCurrentLerp
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UHorizonTweenSceneComponentMoveSplinePathEvent::GetCurrentLerp()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSceneComponentMoveSplinePathEvent.GetCurrentLerp");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystem.StopTweenEventByObject
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 pTweenTarget                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AHorizonTweenSystem::StopTweenEventByObject(class UObject* pTweenTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.StopTweenEventByObject");

	struct
	{
		class UObject*                 pTweenTarget;
	} params;

	params.pTweenTarget = pTweenTarget;

	UObject::ProcessEvent(fn, &params);
}


// Function HorizonTween.HorizonTweenSystem.StopTweenEventByName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   EventName                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AHorizonTweenSystem::StopTweenEventByName(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.StopTweenEventByName");

	struct
	{
		struct FName                   EventName;
	} params;

	params.EventName = EventName;

	UObject::ProcessEvent(fn, &params);
}


// Function HorizonTween.HorizonTweenSystem.StopAllTweenEvent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AHorizonTweenSystem::StopAllTweenEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.StopAllTweenEvent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HorizonTween.HorizonTweenSystem.ResumeTweenEventByObject
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 pTweenTarget                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AHorizonTweenSystem::ResumeTweenEventByObject(class UObject* pTweenTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.ResumeTweenEventByObject");

	struct
	{
		class UObject*                 pTweenTarget;
	} params;

	params.pTweenTarget = pTweenTarget;

	UObject::ProcessEvent(fn, &params);
}


// Function HorizonTween.HorizonTweenSystem.ResumeTweenEventByName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   EventName                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AHorizonTweenSystem::ResumeTweenEventByName(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.ResumeTweenEventByName");

	struct
	{
		struct FName                   EventName;
	} params;

	params.EventName = EventName;

	UObject::ProcessEvent(fn, &params);
}


// Function HorizonTween.HorizonTweenSystem.ResumeAllTweenEvent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AHorizonTweenSystem::ResumeAllTweenEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.ResumeAllTweenEvent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HorizonTween.HorizonTweenSystem.RemoveTweenEventByObject
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 pTweenTarget                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AHorizonTweenSystem::RemoveTweenEventByObject(class UObject* pTweenTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.RemoveTweenEventByObject");

	struct
	{
		class UObject*                 pTweenTarget;
	} params;

	params.pTweenTarget = pTweenTarget;

	UObject::ProcessEvent(fn, &params);
}


// Function HorizonTween.HorizonTweenSystem.RemoveTweenEventByName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   EventName                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AHorizonTweenSystem::RemoveTweenEventByName(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.RemoveTweenEventByName");

	struct
	{
		struct FName                   EventName;
	} params;

	params.EventName = EventName;

	UObject::ProcessEvent(fn, &params);
}


// Function HorizonTween.HorizonTweenSystem.RemoveAllTweenEvent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AHorizonTweenSystem::RemoveAllTweenEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.RemoveAllTweenEvent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HorizonTween.HorizonTweenSystem.PlayTweenEventByObject
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 pTweenTarget                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AHorizonTweenSystem::PlayTweenEventByObject(class UObject* pTweenTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.PlayTweenEventByObject");

	struct
	{
		class UObject*                 pTweenTarget;
	} params;

	params.pTweenTarget = pTweenTarget;

	UObject::ProcessEvent(fn, &params);
}


// Function HorizonTween.HorizonTweenSystem.PlayTweenEventByName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   EventName                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AHorizonTweenSystem::PlayTweenEventByName(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.PlayTweenEventByName");

	struct
	{
		struct FName                   EventName;
	} params;

	params.EventName = EventName;

	UObject::ProcessEvent(fn, &params);
}


// Function HorizonTween.HorizonTweenSystem.PlayAllTweenEvent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AHorizonTweenSystem::PlayAllTweenEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.PlayAllTweenEvent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HorizonTween.HorizonTweenSystem.PauseTweenEventByObject
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 pTweenTarget                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AHorizonTweenSystem::PauseTweenEventByObject(class UObject* pTweenTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.PauseTweenEventByObject");

	struct
	{
		class UObject*                 pTweenTarget;
	} params;

	params.pTweenTarget = pTweenTarget;

	UObject::ProcessEvent(fn, &params);
}


// Function HorizonTween.HorizonTweenSystem.PauseTweenEventByName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   EventName                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AHorizonTweenSystem::PauseTweenEventByName(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.PauseTweenEventByName");

	struct
	{
		struct FName                   EventName;
	} params;

	params.EventName = EventName;

	UObject::ProcessEvent(fn, &params);
}


// Function HorizonTween.HorizonTweenSystem.PauseAllTweenEvent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AHorizonTweenSystem::PauseAllTweenEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.PauseAllTweenEvent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HorizonTween.HorizonTweenSystem.GetTweenEventMap
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TMap<struct FName, class UHorizonTweenEvent*> ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

TMap<struct FName, class UHorizonTweenEvent*> AHorizonTweenSystem::GetTweenEventMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.GetTweenEventMap");

	struct
	{
		TMap<struct FName, class UHorizonTweenEvent*> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystem.GetNumTweenEvent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int AHorizonTweenSystem::GetNumTweenEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.GetNumTweenEvent");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystem.FinishTweenEventByObject
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 pTweenTarget                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTweenToEnd                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AHorizonTweenSystem::FinishTweenEventByObject(class UObject* pTweenTarget, bool bTweenToEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.FinishTweenEventByObject");

	struct
	{
		class UObject*                 pTweenTarget;
		bool                           bTweenToEnd;
	} params;

	params.pTweenTarget = pTweenTarget;
	params.bTweenToEnd = bTweenToEnd;

	UObject::ProcessEvent(fn, &params);
}


// Function HorizonTween.HorizonTweenSystem.FinishTweenEventByName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   EventName                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTweenToEnd                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AHorizonTweenSystem::FinishTweenEventByName(const struct FName& EventName, bool bTweenToEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.FinishTweenEventByName");

	struct
	{
		struct FName                   EventName;
		bool                           bTweenToEnd;
	} params;

	params.EventName = EventName;
	params.bTweenToEnd = bTweenToEnd;

	UObject::ProcessEvent(fn, &params);
}


// Function HorizonTween.HorizonTweenSystem.FinishAllTweenEvent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bTweenToEnd                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AHorizonTweenSystem::FinishAllTweenEvent(bool bTweenToEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.FinishAllTweenEvent");

	struct
	{
		bool                           bTweenToEnd;
	} params;

	params.bTweenToEnd = bTweenToEnd;

	UObject::ProcessEvent(fn, &params);
}


// Function HorizonTween.HorizonTweenSystem.FindTweenEventByName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   EventName                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenEvent*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenEvent* AHorizonTweenSystem::FindTweenEventByName(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.FindTweenEventByName");

	struct
	{
		struct FName                   EventName;
		class UHorizonTweenEvent*      ReturnValue;
	} params;

	params.EventName = EventName;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystem.CreateTweenWidgetSheerFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetSheerFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetSheerFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetSheerFromToEvent* AHorizonTweenSystem::CreateTweenWidgetSheerFromToEventWithParam(class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetSheerFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.CreateTweenWidgetSheerFromToEventWithParam");

	struct
	{
		class UWidget*                 pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetSheerFromToParameters paramImpl;
		class UHorizonTweenWidgetSheerFromToEvent* ReturnValue;
	} params;

	params.pTarget = pTarget;
	params.Param = Param;

	UObject::ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystem.CreateTweenWidgetScaleFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetScaleFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetScaleFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetScaleFromToEvent* AHorizonTweenSystem::CreateTweenWidgetScaleFromToEventWithParam(class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetScaleFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.CreateTweenWidgetScaleFromToEventWithParam");

	struct
	{
		class UWidget*                 pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetScaleFromToParameters paramImpl;
		class UHorizonTweenWidgetScaleFromToEvent* ReturnValue;
	} params;

	params.pTarget = pTarget;
	params.Param = Param;

	UObject::ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystem.CreateTweenWidgetRotatorFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetRotatorFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetRotatorFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetRotatorFromToEvent* AHorizonTweenSystem::CreateTweenWidgetRotatorFromToEventWithParam(class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetRotatorFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.CreateTweenWidgetRotatorFromToEventWithParam");

	struct
	{
		class UWidget*                 pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetRotatorFromToParameters paramImpl;
		class UHorizonTweenWidgetRotatorFromToEvent* ReturnValue;
	} params;

	params.pTarget = pTarget;
	params.Param = Param;

	UObject::ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystem.CreateTweenWidgetMoveSplinePathEventWithSplineComponentAndParam
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USplineComponent*        pSplineComponent               (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetMoveSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetMoveSplinePathEvent* AHorizonTweenSystem::CreateTweenWidgetMoveSplinePathEventWithSplineComponentAndParam(class UWidget* pTarget, class USplineComponent* pSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.CreateTweenWidgetMoveSplinePathEventWithSplineComponentAndParam");

	struct
	{
		class UWidget*                 pTarget;
		class USplineComponent*        pSplineComponent;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetMoveSplinePathParameters paramImpl;
		class UHorizonTweenWidgetMoveSplinePathEvent* ReturnValue;
	} params;

	params.pTarget = pTarget;
	params.pSplineComponent = pSplineComponent;
	params.Param = Param;

	UObject::ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystem.CreateTweenWidgetMoveSplinePathEventWithSplineActorAndParam
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pWidgetWithSplineComponent     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetMoveSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetMoveSplinePathEvent* AHorizonTweenSystem::CreateTweenWidgetMoveSplinePathEventWithSplineActorAndParam(class UWidget* pTarget, class AActor* pWidgetWithSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.CreateTweenWidgetMoveSplinePathEventWithSplineActorAndParam");

	struct
	{
		class UWidget*                 pTarget;
		class AActor*                  pWidgetWithSplineComponent;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetMoveSplinePathParameters paramImpl;
		class UHorizonTweenWidgetMoveSplinePathEvent* ReturnValue;
	} params;

	params.pTarget = pTarget;
	params.pWidgetWithSplineComponent = pWidgetWithSplineComponent;
	params.Param = Param;

	UObject::ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystem.CreateTweenWidgetMoveSplinePathEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetMoveSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetMoveSplinePathEvent* AHorizonTweenSystem::CreateTweenWidgetMoveSplinePathEventWithParam(class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.CreateTweenWidgetMoveSplinePathEventWithParam");

	struct
	{
		class UWidget*                 pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetMoveSplinePathParameters paramImpl;
		class UHorizonTweenWidgetMoveSplinePathEvent* ReturnValue;
	} params;

	params.pTarget = pTarget;
	params.Param = Param;

	UObject::ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystem.CreateTweenWidgetMoveFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetMoveFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetMoveFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetMoveFromToEvent* AHorizonTweenSystem::CreateTweenWidgetMoveFromToEventWithParam(class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetMoveFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.CreateTweenWidgetMoveFromToEventWithParam");

	struct
	{
		class UWidget*                 pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetMoveFromToParameters paramImpl;
		class UHorizonTweenWidgetMoveFromToEvent* ReturnValue;
	} params;

	params.pTarget = pTarget;
	params.Param = Param;

	UObject::ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystem.CreateTweenWidgetEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetParameters Params                         (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetMoveFromToEvent* OutMoveEvent                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetRotatorFromToEvent* OutRotateEvent                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetScaleFromToEvent* OutScaleEvent                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetSheerFromToEvent* OutSheerEvent                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetColorFromToEvent* OutColorEvent                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AHorizonTweenSystem::CreateTweenWidgetEventWithParam(class UWidget* pTarget, struct FHorizonTweenEventWidgetParameters* Params, class UHorizonTweenWidgetMoveFromToEvent** OutMoveEvent, class UHorizonTweenWidgetRotatorFromToEvent** OutRotateEvent, class UHorizonTweenWidgetScaleFromToEvent** OutScaleEvent, class UHorizonTweenWidgetSheerFromToEvent** OutSheerEvent, class UHorizonTweenWidgetColorFromToEvent** OutColorEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.CreateTweenWidgetEventWithParam");

	struct
	{
		class UWidget*                 pTarget;
		struct FHorizonTweenEventWidgetParameters Params;
		class UHorizonTweenWidgetMoveFromToEvent* OutMoveEvent;
		class UHorizonTweenWidgetRotatorFromToEvent* OutRotateEvent;
		class UHorizonTweenWidgetScaleFromToEvent* OutScaleEvent;
		class UHorizonTweenWidgetSheerFromToEvent* OutSheerEvent;
		class UHorizonTweenWidgetColorFromToEvent* OutColorEvent;
	} params;

	params.pTarget = pTarget;

	UObject::ProcessEvent(fn, &params);

	if (Params != nullptr)
		*Params = params.Params;
	if (OutMoveEvent != nullptr)
		*OutMoveEvent = params.OutMoveEvent;
	if (OutRotateEvent != nullptr)
		*OutRotateEvent = params.OutRotateEvent;
	if (OutScaleEvent != nullptr)
		*OutScaleEvent = params.OutScaleEvent;
	if (OutSheerEvent != nullptr)
		*OutSheerEvent = params.OutSheerEvent;
	if (OutColorEvent != nullptr)
		*OutColorEvent = params.OutColorEvent;
}


// Function HorizonTween.HorizonTweenSystem.CreateTweenWidgetColorFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetColorFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetColorFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetColorFromToEvent* AHorizonTweenSystem::CreateTweenWidgetColorFromToEventWithParam(class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetColorFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.CreateTweenWidgetColorFromToEventWithParam");

	struct
	{
		class UWidget*                 pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetColorFromToParameters paramImpl;
		class UHorizonTweenWidgetColorFromToEvent* ReturnValue;
	} params;

	params.pTarget = pTarget;
	params.Param = Param;

	UObject::ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystem.CreateTweenVectorEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventVectorParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenVectorEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenVectorEvent* AHorizonTweenSystem::CreateTweenVectorEventWithParam(const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventVectorParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.CreateTweenVectorEventWithParam");

	struct
	{
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventVectorParameters paramImpl;
		class UHorizonTweenVectorEvent* ReturnValue;
	} params;

	params.Param = Param;

	UObject::ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystem.CreateTweenVector2DEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetVector2DParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenVector2DEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenVector2DEvent* AHorizonTweenSystem::CreateTweenVector2DEventWithParam(const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetVector2DParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.CreateTweenVector2DEventWithParam");

	struct
	{
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetVector2DParameters paramImpl;
		class UHorizonTweenVector2DEvent* ReturnValue;
	} params;

	params.Param = Param;

	UObject::ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystem.CreateTweenSplinePathEventWithParamWithSplineComponentAndParam
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class USplineComponent*        pSplineComponent               (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSplinePathEvent* AHorizonTweenSystem::CreateTweenSplinePathEventWithParamWithSplineComponentAndParam(class USplineComponent* pSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.CreateTweenSplinePathEventWithParamWithSplineComponentAndParam");

	struct
	{
		class USplineComponent*        pSplineComponent;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSplinePathParameters paramImpl;
		class UHorizonTweenSplinePathEvent* ReturnValue;
	} params;

	params.pSplineComponent = pSplineComponent;
	params.Param = Param;

	UObject::ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystem.CreateTweenSplinePathEventWithParamWithSplineActorAndParam
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  pActorWithSplineComponent      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSplinePathEvent* AHorizonTweenSystem::CreateTweenSplinePathEventWithParamWithSplineActorAndParam(class AActor* pActorWithSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.CreateTweenSplinePathEventWithParamWithSplineActorAndParam");

	struct
	{
		class AActor*                  pActorWithSplineComponent;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSplinePathParameters paramImpl;
		class UHorizonTweenSplinePathEvent* ReturnValue;
	} params;

	params.pActorWithSplineComponent = pActorWithSplineComponent;
	params.Param = Param;

	UObject::ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystem.CreateTweenSplinePathEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSplinePathEvent* AHorizonTweenSystem::CreateTweenSplinePathEventWithParam(const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.CreateTweenSplinePathEventWithParam");

	struct
	{
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSplinePathParameters paramImpl;
		class UHorizonTweenSplinePathEvent* ReturnValue;
	} params;

	params.Param = Param;

	UObject::ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystem.CreateTweenSceneComponentScaleFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class USceneComponent*         pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSceneComponentScaleFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentScaleFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSceneComponentScaleFromToEvent* AHorizonTweenSystem::CreateTweenSceneComponentScaleFromToEventWithParam(class USceneComponent* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentScaleFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.CreateTweenSceneComponentScaleFromToEventWithParam");

	struct
	{
		class USceneComponent*         pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSceneComponentScaleFromToParameters paramImpl;
		class UHorizonTweenSceneComponentScaleFromToEvent* ReturnValue;
	} params;

	params.pTarget = pTarget;
	params.Param = Param;

	UObject::ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystem.CreateTweenSceneComponentRotatorFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class USceneComponent*         pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSceneComponentRotatorFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentRotatorFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSceneComponentRotatorFromToEvent* AHorizonTweenSystem::CreateTweenSceneComponentRotatorFromToEventWithParam(class USceneComponent* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentRotatorFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.CreateTweenSceneComponentRotatorFromToEventWithParam");

	struct
	{
		class USceneComponent*         pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSceneComponentRotatorFromToParameters paramImpl;
		class UHorizonTweenSceneComponentRotatorFromToEvent* ReturnValue;
	} params;

	params.pTarget = pTarget;
	params.Param = Param;

	UObject::ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystem.CreateTweenSceneComponentMoveSplinePathEventWithSplineComponentAndParam
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class USceneComponent*         pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USplineComponent*        pSplineComponent               (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSceneComponentMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentMoveSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSceneComponentMoveSplinePathEvent* AHorizonTweenSystem::CreateTweenSceneComponentMoveSplinePathEventWithSplineComponentAndParam(class USceneComponent* pTarget, class USplineComponent* pSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.CreateTweenSceneComponentMoveSplinePathEventWithSplineComponentAndParam");

	struct
	{
		class USceneComponent*         pTarget;
		class USplineComponent*        pSplineComponent;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSceneComponentMoveSplinePathParameters paramImpl;
		class UHorizonTweenSceneComponentMoveSplinePathEvent* ReturnValue;
	} params;

	params.pTarget = pTarget;
	params.pSplineComponent = pSplineComponent;
	params.Param = Param;

	UObject::ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystem.CreateTweenSceneComponentMoveSplinePathEventWithSplineActorAndParam
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class USceneComponent*         pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pActorWithSplineComponent      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSceneComponentMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentMoveSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSceneComponentMoveSplinePathEvent* AHorizonTweenSystem::CreateTweenSceneComponentMoveSplinePathEventWithSplineActorAndParam(class USceneComponent* pTarget, class AActor* pActorWithSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.CreateTweenSceneComponentMoveSplinePathEventWithSplineActorAndParam");

	struct
	{
		class USceneComponent*         pTarget;
		class AActor*                  pActorWithSplineComponent;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSceneComponentMoveSplinePathParameters paramImpl;
		class UHorizonTweenSceneComponentMoveSplinePathEvent* ReturnValue;
	} params;

	params.pTarget = pTarget;
	params.pActorWithSplineComponent = pActorWithSplineComponent;
	params.Param = Param;

	UObject::ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystem.CreateTweenSceneComponentMoveSplinePathEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class USceneComponent*         pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSceneComponentMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentMoveSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSceneComponentMoveSplinePathEvent* AHorizonTweenSystem::CreateTweenSceneComponentMoveSplinePathEventWithParam(class USceneComponent* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.CreateTweenSceneComponentMoveSplinePathEventWithParam");

	struct
	{
		class USceneComponent*         pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSceneComponentMoveSplinePathParameters paramImpl;
		class UHorizonTweenSceneComponentMoveSplinePathEvent* ReturnValue;
	} params;

	params.pTarget = pTarget;
	params.Param = Param;

	UObject::ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystem.CreateTweenSceneComponentMoveFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class USceneComponent*         pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSceneComponentMoveFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentMoveFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSceneComponentMoveFromToEvent* AHorizonTweenSystem::CreateTweenSceneComponentMoveFromToEventWithParam(class USceneComponent* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentMoveFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.CreateTweenSceneComponentMoveFromToEventWithParam");

	struct
	{
		class USceneComponent*         pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSceneComponentMoveFromToParameters paramImpl;
		class UHorizonTweenSceneComponentMoveFromToEvent* ReturnValue;
	} params;

	params.pTarget = pTarget;
	params.Param = Param;

	UObject::ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystem.CreateTweenSceneComponentEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class USceneComponent*         pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSceneComponentParameters Params                         (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentMoveFromToEvent* OutMoveEvent                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentRotatorFromToEvent* OutRotateEvent                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentScaleFromToEvent* OutScaleEvent                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentColorFromToEvent* OutColorEvent                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AHorizonTweenSystem::CreateTweenSceneComponentEventWithParam(class USceneComponent* pTarget, struct FHorizonTweenEventSceneComponentParameters* Params, class UHorizonTweenSceneComponentMoveFromToEvent** OutMoveEvent, class UHorizonTweenSceneComponentRotatorFromToEvent** OutRotateEvent, class UHorizonTweenSceneComponentScaleFromToEvent** OutScaleEvent, class UHorizonTweenSceneComponentColorFromToEvent** OutColorEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.CreateTweenSceneComponentEventWithParam");

	struct
	{
		class USceneComponent*         pTarget;
		struct FHorizonTweenEventSceneComponentParameters Params;
		class UHorizonTweenSceneComponentMoveFromToEvent* OutMoveEvent;
		class UHorizonTweenSceneComponentRotatorFromToEvent* OutRotateEvent;
		class UHorizonTweenSceneComponentScaleFromToEvent* OutScaleEvent;
		class UHorizonTweenSceneComponentColorFromToEvent* OutColorEvent;
	} params;

	params.pTarget = pTarget;

	UObject::ProcessEvent(fn, &params);

	if (Params != nullptr)
		*Params = params.Params;
	if (OutMoveEvent != nullptr)
		*OutMoveEvent = params.OutMoveEvent;
	if (OutRotateEvent != nullptr)
		*OutRotateEvent = params.OutRotateEvent;
	if (OutScaleEvent != nullptr)
		*OutScaleEvent = params.OutScaleEvent;
	if (OutColorEvent != nullptr)
		*OutColorEvent = params.OutColorEvent;
}


// Function HorizonTween.HorizonTweenSystem.CreateTweenSceneComponentColorFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class USceneComponent*         pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSceneComponentColorFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentColorFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSceneComponentColorFromToEvent* AHorizonTweenSystem::CreateTweenSceneComponentColorFromToEventWithParam(class USceneComponent* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentColorFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.CreateTweenSceneComponentColorFromToEventWithParam");

	struct
	{
		class USceneComponent*         pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSceneComponentColorFromToParameters paramImpl;
		class UHorizonTweenSceneComponentColorFromToEvent* ReturnValue;
	} params;

	params.pTarget = pTarget;
	params.Param = Param;

	UObject::ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystem.CreateTweenRotatorEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventRotatorParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenRotatorEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenRotatorEvent* AHorizonTweenSystem::CreateTweenRotatorEventWithParam(const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventRotatorParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.CreateTweenRotatorEventWithParam");

	struct
	{
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventRotatorParameters paramImpl;
		class UHorizonTweenRotatorEvent* ReturnValue;
	} params;

	params.Param = Param;

	UObject::ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystem.CreateTweenLinearColorEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventLinearColorParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenLinearColorEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenLinearColorEvent* AHorizonTweenSystem::CreateTweenLinearColorEventWithParam(const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventLinearColorParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.CreateTweenLinearColorEventWithParam");

	struct
	{
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventLinearColorParameters paramImpl;
		class UHorizonTweenLinearColorEvent* ReturnValue;
	} params;

	params.Param = Param;

	UObject::ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystem.CreateTweenFloatEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventFloatParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenFloatEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenFloatEvent* AHorizonTweenSystem::CreateTweenFloatEventWithParam(const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventFloatParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.CreateTweenFloatEventWithParam");

	struct
	{
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventFloatParameters paramImpl;
		class UHorizonTweenFloatEvent* ReturnValue;
	} params;

	params.Param = Param;

	UObject::ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystem.CreateTweenEventWithParameter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenEvent*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenEvent* AHorizonTweenSystem::CreateTweenEventWithParameter(const struct FHorizonTweenEventParameters& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.CreateTweenEventWithParameter");

	struct
	{
		struct FHorizonTweenEventParameters Param;
		class UHorizonTweenEvent*      ReturnValue;
	} params;

	params.Param = Param;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystem.CreateTweenActorScaleFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventActorScaleFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorScaleFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenActorScaleFromToEvent* AHorizonTweenSystem::CreateTweenActorScaleFromToEventWithParam(class AActor* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorScaleFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.CreateTweenActorScaleFromToEventWithParam");

	struct
	{
		class AActor*                  pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventActorScaleFromToParameters paramImpl;
		class UHorizonTweenActorScaleFromToEvent* ReturnValue;
	} params;

	params.pTarget = pTarget;
	params.Param = Param;

	UObject::ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystem.CreateTweenActorRotatorFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventActorRotatorFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorRotatorFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenActorRotatorFromToEvent* AHorizonTweenSystem::CreateTweenActorRotatorFromToEventWithParam(class AActor* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorRotatorFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.CreateTweenActorRotatorFromToEventWithParam");

	struct
	{
		class AActor*                  pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventActorRotatorFromToParameters paramImpl;
		class UHorizonTweenActorRotatorFromToEvent* ReturnValue;
	} params;

	params.pTarget = pTarget;
	params.Param = Param;

	UObject::ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystem.CreateTweenActorMoveSplinePathEventWithSplineComponentAndParam
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USplineComponent*        pSplineComponent               (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventActorMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorMoveSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenActorMoveSplinePathEvent* AHorizonTweenSystem::CreateTweenActorMoveSplinePathEventWithSplineComponentAndParam(class AActor* pTarget, class USplineComponent* pSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.CreateTweenActorMoveSplinePathEventWithSplineComponentAndParam");

	struct
	{
		class AActor*                  pTarget;
		class USplineComponent*        pSplineComponent;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventActorMoveSplinePathParameters paramImpl;
		class UHorizonTweenActorMoveSplinePathEvent* ReturnValue;
	} params;

	params.pTarget = pTarget;
	params.pSplineComponent = pSplineComponent;
	params.Param = Param;

	UObject::ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystem.CreateTweenActorMoveSplinePathEventWithSplineActorAndParam
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pActorWithSplineComponent      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventActorMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorMoveSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenActorMoveSplinePathEvent* AHorizonTweenSystem::CreateTweenActorMoveSplinePathEventWithSplineActorAndParam(class AActor* pTarget, class AActor* pActorWithSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.CreateTweenActorMoveSplinePathEventWithSplineActorAndParam");

	struct
	{
		class AActor*                  pTarget;
		class AActor*                  pActorWithSplineComponent;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventActorMoveSplinePathParameters paramImpl;
		class UHorizonTweenActorMoveSplinePathEvent* ReturnValue;
	} params;

	params.pTarget = pTarget;
	params.pActorWithSplineComponent = pActorWithSplineComponent;
	params.Param = Param;

	UObject::ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystem.CreateTweenActorMoveSplinePathEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventActorMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorMoveSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenActorMoveSplinePathEvent* AHorizonTweenSystem::CreateTweenActorMoveSplinePathEventWithParam(class AActor* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.CreateTweenActorMoveSplinePathEventWithParam");

	struct
	{
		class AActor*                  pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventActorMoveSplinePathParameters paramImpl;
		class UHorizonTweenActorMoveSplinePathEvent* ReturnValue;
	} params;

	params.pTarget = pTarget;
	params.Param = Param;

	UObject::ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystem.CreateTweenActorMoveFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventActorMoveFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorMoveFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenActorMoveFromToEvent* AHorizonTweenSystem::CreateTweenActorMoveFromToEventWithParam(class AActor* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorMoveFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.CreateTweenActorMoveFromToEventWithParam");

	struct
	{
		class AActor*                  pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventActorMoveFromToParameters paramImpl;
		class UHorizonTweenActorMoveFromToEvent* ReturnValue;
	} params;

	params.pTarget = pTarget;
	params.Param = Param;

	UObject::ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystem.CreateTweenActorEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventActorParameters Params                         (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorMoveFromToEvent* OutMoveEvent                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorRotatorFromToEvent* OutRotateEvent                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorScaleFromToEvent* OutScaleEvent                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorColorFromToEvent* OutColorEvent                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AHorizonTweenSystem::CreateTweenActorEventWithParam(class AActor* pTarget, struct FHorizonTweenEventActorParameters* Params, class UHorizonTweenActorMoveFromToEvent** OutMoveEvent, class UHorizonTweenActorRotatorFromToEvent** OutRotateEvent, class UHorizonTweenActorScaleFromToEvent** OutScaleEvent, class UHorizonTweenActorColorFromToEvent** OutColorEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.CreateTweenActorEventWithParam");

	struct
	{
		class AActor*                  pTarget;
		struct FHorizonTweenEventActorParameters Params;
		class UHorizonTweenActorMoveFromToEvent* OutMoveEvent;
		class UHorizonTweenActorRotatorFromToEvent* OutRotateEvent;
		class UHorizonTweenActorScaleFromToEvent* OutScaleEvent;
		class UHorizonTweenActorColorFromToEvent* OutColorEvent;
	} params;

	params.pTarget = pTarget;

	UObject::ProcessEvent(fn, &params);

	if (Params != nullptr)
		*Params = params.Params;
	if (OutMoveEvent != nullptr)
		*OutMoveEvent = params.OutMoveEvent;
	if (OutRotateEvent != nullptr)
		*OutRotateEvent = params.OutRotateEvent;
	if (OutScaleEvent != nullptr)
		*OutScaleEvent = params.OutScaleEvent;
	if (OutColorEvent != nullptr)
		*OutColorEvent = params.OutColorEvent;
}


// Function HorizonTween.HorizonTweenSystem.CreateTweenActorColorFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventActorColorFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorColorFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenActorColorFromToEvent* AHorizonTweenSystem::CreateTweenActorColorFromToEventWithParam(class AActor* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorColorFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystem.CreateTweenActorColorFromToEventWithParam");

	struct
	{
		class AActor*                  pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventActorColorFromToParameters paramImpl;
		class UHorizonTweenActorColorFromToEvent* ReturnValue;
	} params;

	params.pTarget = pTarget;
	params.Param = Param;

	UObject::ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemLibrary.GetTweenSystemWithName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   SystemName                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AHorizonTweenSystem*     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class AHorizonTweenSystem* UHorizonTweenSystemLibrary::GetTweenSystemWithName(class UObject* WorldContextObject, const struct FName& SystemName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemLibrary.GetTweenSystemWithName");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FName                   SystemName;
		class AHorizonTweenSystem*     ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.SystemName = SystemName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemLibrary.GetDefaultTweenSystem
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AHorizonTweenSystem*     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class AHorizonTweenSystem* UHorizonTweenSystemLibrary::GetDefaultTweenSystem(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemLibrary.GetDefaultTweenSystem");

	struct
	{
		class UObject*                 WorldContextObject;
		class AHorizonTweenSystem*     ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenWidgetSheerFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetSheerFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetSheerFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetSheerFromToEvent* UHorizonTweenSystemLibrary::CreateTweenWidgetSheerFromToEventWithParam(class UObject* WorldContextObject, class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetSheerFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenWidgetSheerFromToEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class UWidget*                 pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetSheerFromToParameters paramImpl;
		class UHorizonTweenWidgetSheerFromToEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenWidgetScaleFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetScaleFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetScaleFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetScaleFromToEvent* UHorizonTweenSystemLibrary::CreateTweenWidgetScaleFromToEventWithParam(class UObject* WorldContextObject, class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetScaleFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenWidgetScaleFromToEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class UWidget*                 pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetScaleFromToParameters paramImpl;
		class UHorizonTweenWidgetScaleFromToEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenWidgetRotatorFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetRotatorFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetRotatorFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetRotatorFromToEvent* UHorizonTweenSystemLibrary::CreateTweenWidgetRotatorFromToEventWithParam(class UObject* WorldContextObject, class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetRotatorFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenWidgetRotatorFromToEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class UWidget*                 pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetRotatorFromToParameters paramImpl;
		class UHorizonTweenWidgetRotatorFromToEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenWidgetMoveSplinePathEventWithSplineComponentAndParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USplineComponent*        pSplineComponent               (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetMoveSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetMoveSplinePathEvent* UHorizonTweenSystemLibrary::CreateTweenWidgetMoveSplinePathEventWithSplineComponentAndParam(class UObject* WorldContextObject, class UWidget* pTarget, class USplineComponent* pSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenWidgetMoveSplinePathEventWithSplineComponentAndParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class UWidget*                 pTarget;
		class USplineComponent*        pSplineComponent;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetMoveSplinePathParameters paramImpl;
		class UHorizonTweenWidgetMoveSplinePathEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.pSplineComponent = pSplineComponent;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenWidgetMoveSplinePathEventWithSplineActorAndParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pWidgetWithSplineComponent     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetMoveSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetMoveSplinePathEvent* UHorizonTweenSystemLibrary::CreateTweenWidgetMoveSplinePathEventWithSplineActorAndParam(class UObject* WorldContextObject, class UWidget* pTarget, class AActor* pWidgetWithSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenWidgetMoveSplinePathEventWithSplineActorAndParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class UWidget*                 pTarget;
		class AActor*                  pWidgetWithSplineComponent;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetMoveSplinePathParameters paramImpl;
		class UHorizonTweenWidgetMoveSplinePathEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.pWidgetWithSplineComponent = pWidgetWithSplineComponent;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenWidgetMoveSplinePathEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetMoveSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetMoveSplinePathEvent* UHorizonTweenSystemLibrary::CreateTweenWidgetMoveSplinePathEventWithParam(class UObject* WorldContextObject, class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenWidgetMoveSplinePathEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class UWidget*                 pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetMoveSplinePathParameters paramImpl;
		class UHorizonTweenWidgetMoveSplinePathEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenWidgetMoveFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetMoveFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetMoveFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetMoveFromToEvent* UHorizonTweenSystemLibrary::CreateTweenWidgetMoveFromToEventWithParam(class UObject* WorldContextObject, class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetMoveFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenWidgetMoveFromToEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class UWidget*                 pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetMoveFromToParameters paramImpl;
		class UHorizonTweenWidgetMoveFromToEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenWidgetEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetParameters Params                         (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetMoveFromToEvent* OutMoveEvent                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetRotatorFromToEvent* OutRotateEvent                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetScaleFromToEvent* OutScaleEvent                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetSheerFromToEvent* OutSheerEvent                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetColorFromToEvent* OutColorEvent                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UHorizonTweenSystemLibrary::CreateTweenWidgetEventWithParam(class UObject* WorldContextObject, class UWidget* pTarget, struct FHorizonTweenEventWidgetParameters* Params, class UHorizonTweenWidgetMoveFromToEvent** OutMoveEvent, class UHorizonTweenWidgetRotatorFromToEvent** OutRotateEvent, class UHorizonTweenWidgetScaleFromToEvent** OutScaleEvent, class UHorizonTweenWidgetSheerFromToEvent** OutSheerEvent, class UHorizonTweenWidgetColorFromToEvent** OutColorEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenWidgetEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class UWidget*                 pTarget;
		struct FHorizonTweenEventWidgetParameters Params;
		class UHorizonTweenWidgetMoveFromToEvent* OutMoveEvent;
		class UHorizonTweenWidgetRotatorFromToEvent* OutRotateEvent;
		class UHorizonTweenWidgetScaleFromToEvent* OutScaleEvent;
		class UHorizonTweenWidgetSheerFromToEvent* OutSheerEvent;
		class UHorizonTweenWidgetColorFromToEvent* OutColorEvent;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Params != nullptr)
		*Params = params.Params;
	if (OutMoveEvent != nullptr)
		*OutMoveEvent = params.OutMoveEvent;
	if (OutRotateEvent != nullptr)
		*OutRotateEvent = params.OutRotateEvent;
	if (OutScaleEvent != nullptr)
		*OutScaleEvent = params.OutScaleEvent;
	if (OutSheerEvent != nullptr)
		*OutSheerEvent = params.OutSheerEvent;
	if (OutColorEvent != nullptr)
		*OutColorEvent = params.OutColorEvent;
}


// Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenWidgetColorFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetColorFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetColorFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetColorFromToEvent* UHorizonTweenSystemLibrary::CreateTweenWidgetColorFromToEventWithParam(class UObject* WorldContextObject, class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetColorFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenWidgetColorFromToEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class UWidget*                 pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetColorFromToParameters paramImpl;
		class UHorizonTweenWidgetColorFromToEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenVectorEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventVectorParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenVectorEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenVectorEvent* UHorizonTweenSystemLibrary::CreateTweenVectorEventWithParam(class UObject* WorldContextObject, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventVectorParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenVectorEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventVectorParameters paramImpl;
		class UHorizonTweenVectorEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenVector2DEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetVector2DParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenVector2DEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenVector2DEvent* UHorizonTweenSystemLibrary::CreateTweenVector2DEventWithParam(class UObject* WorldContextObject, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetVector2DParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenVector2DEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetVector2DParameters paramImpl;
		class UHorizonTweenVector2DEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenSplinePathEventWithParamWithSplineComponentAndParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USplineComponent*        pSplineComponent               (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSplinePathEvent* UHorizonTweenSystemLibrary::CreateTweenSplinePathEventWithParamWithSplineComponentAndParam(class UObject* WorldContextObject, class USplineComponent* pSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenSplinePathEventWithParamWithSplineComponentAndParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class USplineComponent*        pSplineComponent;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSplinePathParameters paramImpl;
		class UHorizonTweenSplinePathEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pSplineComponent = pSplineComponent;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenSplinePathEventWithParamWithSplineActorAndParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pActorWithSplineComponent      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSplinePathEvent* UHorizonTweenSystemLibrary::CreateTweenSplinePathEventWithParamWithSplineActorAndParam(class UObject* WorldContextObject, class AActor* pActorWithSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenSplinePathEventWithParamWithSplineActorAndParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class AActor*                  pActorWithSplineComponent;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSplinePathParameters paramImpl;
		class UHorizonTweenSplinePathEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pActorWithSplineComponent = pActorWithSplineComponent;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenSplinePathEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSplinePathEvent* UHorizonTweenSystemLibrary::CreateTweenSplinePathEventWithParam(class UObject* WorldContextObject, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenSplinePathEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSplinePathParameters paramImpl;
		class UHorizonTweenSplinePathEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenSceneComponentScaleFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USceneComponent*         pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSceneComponentScaleFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentScaleFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSceneComponentScaleFromToEvent* UHorizonTweenSystemLibrary::CreateTweenSceneComponentScaleFromToEventWithParam(class UObject* WorldContextObject, class USceneComponent* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentScaleFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenSceneComponentScaleFromToEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class USceneComponent*         pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSceneComponentScaleFromToParameters paramImpl;
		class UHorizonTweenSceneComponentScaleFromToEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenSceneComponentRotatorFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USceneComponent*         pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSceneComponentRotatorFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentRotatorFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSceneComponentRotatorFromToEvent* UHorizonTweenSystemLibrary::CreateTweenSceneComponentRotatorFromToEventWithParam(class UObject* WorldContextObject, class USceneComponent* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentRotatorFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenSceneComponentRotatorFromToEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class USceneComponent*         pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSceneComponentRotatorFromToParameters paramImpl;
		class UHorizonTweenSceneComponentRotatorFromToEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenSceneComponentMoveSplinePathEventWithSplineComponentAndParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USceneComponent*         pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USplineComponent*        pSplineComponent               (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSceneComponentMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentMoveSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSceneComponentMoveSplinePathEvent* UHorizonTweenSystemLibrary::CreateTweenSceneComponentMoveSplinePathEventWithSplineComponentAndParam(class UObject* WorldContextObject, class USceneComponent* pTarget, class USplineComponent* pSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenSceneComponentMoveSplinePathEventWithSplineComponentAndParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class USceneComponent*         pTarget;
		class USplineComponent*        pSplineComponent;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSceneComponentMoveSplinePathParameters paramImpl;
		class UHorizonTweenSceneComponentMoveSplinePathEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.pSplineComponent = pSplineComponent;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenSceneComponentMoveSplinePathEventWithSplineActorAndParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USceneComponent*         pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pActorWithSplineComponent      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSceneComponentMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentMoveSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSceneComponentMoveSplinePathEvent* UHorizonTweenSystemLibrary::CreateTweenSceneComponentMoveSplinePathEventWithSplineActorAndParam(class UObject* WorldContextObject, class USceneComponent* pTarget, class AActor* pActorWithSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenSceneComponentMoveSplinePathEventWithSplineActorAndParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class USceneComponent*         pTarget;
		class AActor*                  pActorWithSplineComponent;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSceneComponentMoveSplinePathParameters paramImpl;
		class UHorizonTweenSceneComponentMoveSplinePathEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.pActorWithSplineComponent = pActorWithSplineComponent;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenSceneComponentMoveSplinePathEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USceneComponent*         pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSceneComponentMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentMoveSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSceneComponentMoveSplinePathEvent* UHorizonTweenSystemLibrary::CreateTweenSceneComponentMoveSplinePathEventWithParam(class UObject* WorldContextObject, class USceneComponent* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenSceneComponentMoveSplinePathEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class USceneComponent*         pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSceneComponentMoveSplinePathParameters paramImpl;
		class UHorizonTweenSceneComponentMoveSplinePathEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenSceneComponentMoveFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USceneComponent*         pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSceneComponentMoveFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentMoveFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSceneComponentMoveFromToEvent* UHorizonTweenSystemLibrary::CreateTweenSceneComponentMoveFromToEventWithParam(class UObject* WorldContextObject, class USceneComponent* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentMoveFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenSceneComponentMoveFromToEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class USceneComponent*         pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSceneComponentMoveFromToParameters paramImpl;
		class UHorizonTweenSceneComponentMoveFromToEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenSceneComponentEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USceneComponent*         pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSceneComponentParameters Params                         (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentMoveFromToEvent* OutMoveEvent                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentRotatorFromToEvent* OutRotateEvent                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentScaleFromToEvent* OutScaleEvent                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentColorFromToEvent* OutColorEvent                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UHorizonTweenSystemLibrary::CreateTweenSceneComponentEventWithParam(class UObject* WorldContextObject, class USceneComponent* pTarget, struct FHorizonTweenEventSceneComponentParameters* Params, class UHorizonTweenSceneComponentMoveFromToEvent** OutMoveEvent, class UHorizonTweenSceneComponentRotatorFromToEvent** OutRotateEvent, class UHorizonTweenSceneComponentScaleFromToEvent** OutScaleEvent, class UHorizonTweenSceneComponentColorFromToEvent** OutColorEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenSceneComponentEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class USceneComponent*         pTarget;
		struct FHorizonTweenEventSceneComponentParameters Params;
		class UHorizonTweenSceneComponentMoveFromToEvent* OutMoveEvent;
		class UHorizonTweenSceneComponentRotatorFromToEvent* OutRotateEvent;
		class UHorizonTweenSceneComponentScaleFromToEvent* OutScaleEvent;
		class UHorizonTweenSceneComponentColorFromToEvent* OutColorEvent;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Params != nullptr)
		*Params = params.Params;
	if (OutMoveEvent != nullptr)
		*OutMoveEvent = params.OutMoveEvent;
	if (OutRotateEvent != nullptr)
		*OutRotateEvent = params.OutRotateEvent;
	if (OutScaleEvent != nullptr)
		*OutScaleEvent = params.OutScaleEvent;
	if (OutColorEvent != nullptr)
		*OutColorEvent = params.OutColorEvent;
}


// Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenSceneComponentColorFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USceneComponent*         pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSceneComponentColorFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentColorFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSceneComponentColorFromToEvent* UHorizonTweenSystemLibrary::CreateTweenSceneComponentColorFromToEventWithParam(class UObject* WorldContextObject, class USceneComponent* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentColorFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenSceneComponentColorFromToEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class USceneComponent*         pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSceneComponentColorFromToParameters paramImpl;
		class UHorizonTweenSceneComponentColorFromToEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenRotatorEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventRotatorParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenRotatorEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenRotatorEvent* UHorizonTweenSystemLibrary::CreateTweenRotatorEventWithParam(class UObject* WorldContextObject, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventRotatorParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenRotatorEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventRotatorParameters paramImpl;
		class UHorizonTweenRotatorEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenLinearColorEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventLinearColorParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenLinearColorEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenLinearColorEvent* UHorizonTweenSystemLibrary::CreateTweenLinearColorEventWithParam(class UObject* WorldContextObject, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventLinearColorParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenLinearColorEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventLinearColorParameters paramImpl;
		class UHorizonTweenLinearColorEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenFloatEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventFloatParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenFloatEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenFloatEvent* UHorizonTweenSystemLibrary::CreateTweenFloatEventWithParam(class UObject* WorldContextObject, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventFloatParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenFloatEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventFloatParameters paramImpl;
		class UHorizonTweenFloatEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenEventWithParameter
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenEvent*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenEvent* UHorizonTweenSystemLibrary::CreateTweenEventWithParameter(class UObject* WorldContextObject, const struct FHorizonTweenEventParameters& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenEventWithParameter");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FHorizonTweenEventParameters Param;
		class UHorizonTweenEvent*      ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenActorScaleFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventActorScaleFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorScaleFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenActorScaleFromToEvent* UHorizonTweenSystemLibrary::CreateTweenActorScaleFromToEventWithParam(class UObject* WorldContextObject, class AActor* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorScaleFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenActorScaleFromToEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class AActor*                  pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventActorScaleFromToParameters paramImpl;
		class UHorizonTweenActorScaleFromToEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenActorRotatorFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventActorRotatorFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorRotatorFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenActorRotatorFromToEvent* UHorizonTweenSystemLibrary::CreateTweenActorRotatorFromToEventWithParam(class UObject* WorldContextObject, class AActor* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorRotatorFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenActorRotatorFromToEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class AActor*                  pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventActorRotatorFromToParameters paramImpl;
		class UHorizonTweenActorRotatorFromToEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenActorMoveSplinePathEventWithSplineComponentAndParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USplineComponent*        pSplineComponent               (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventActorMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorMoveSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenActorMoveSplinePathEvent* UHorizonTweenSystemLibrary::CreateTweenActorMoveSplinePathEventWithSplineComponentAndParam(class UObject* WorldContextObject, class AActor* pTarget, class USplineComponent* pSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenActorMoveSplinePathEventWithSplineComponentAndParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class AActor*                  pTarget;
		class USplineComponent*        pSplineComponent;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventActorMoveSplinePathParameters paramImpl;
		class UHorizonTweenActorMoveSplinePathEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.pSplineComponent = pSplineComponent;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenActorMoveSplinePathEventWithSplineActorAndParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pActorWithSplineComponent      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventActorMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorMoveSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenActorMoveSplinePathEvent* UHorizonTweenSystemLibrary::CreateTweenActorMoveSplinePathEventWithSplineActorAndParam(class UObject* WorldContextObject, class AActor* pTarget, class AActor* pActorWithSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenActorMoveSplinePathEventWithSplineActorAndParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class AActor*                  pTarget;
		class AActor*                  pActorWithSplineComponent;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventActorMoveSplinePathParameters paramImpl;
		class UHorizonTweenActorMoveSplinePathEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.pActorWithSplineComponent = pActorWithSplineComponent;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenActorMoveSplinePathEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventActorMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorMoveSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenActorMoveSplinePathEvent* UHorizonTweenSystemLibrary::CreateTweenActorMoveSplinePathEventWithParam(class UObject* WorldContextObject, class AActor* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenActorMoveSplinePathEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class AActor*                  pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventActorMoveSplinePathParameters paramImpl;
		class UHorizonTweenActorMoveSplinePathEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenActorMoveFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventActorMoveFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorMoveFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenActorMoveFromToEvent* UHorizonTweenSystemLibrary::CreateTweenActorMoveFromToEventWithParam(class UObject* WorldContextObject, class AActor* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorMoveFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenActorMoveFromToEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class AActor*                  pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventActorMoveFromToParameters paramImpl;
		class UHorizonTweenActorMoveFromToEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenActorEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventActorParameters Params                         (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorMoveFromToEvent* OutMoveEvent                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorRotatorFromToEvent* OutRotateEvent                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorScaleFromToEvent* OutScaleEvent                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorColorFromToEvent* OutColorEvent                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UHorizonTweenSystemLibrary::CreateTweenActorEventWithParam(class UObject* WorldContextObject, class AActor* pTarget, struct FHorizonTweenEventActorParameters* Params, class UHorizonTweenActorMoveFromToEvent** OutMoveEvent, class UHorizonTweenActorRotatorFromToEvent** OutRotateEvent, class UHorizonTweenActorScaleFromToEvent** OutScaleEvent, class UHorizonTweenActorColorFromToEvent** OutColorEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenActorEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class AActor*                  pTarget;
		struct FHorizonTweenEventActorParameters Params;
		class UHorizonTweenActorMoveFromToEvent* OutMoveEvent;
		class UHorizonTweenActorRotatorFromToEvent* OutRotateEvent;
		class UHorizonTweenActorScaleFromToEvent* OutScaleEvent;
		class UHorizonTweenActorColorFromToEvent* OutColorEvent;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Params != nullptr)
		*Params = params.Params;
	if (OutMoveEvent != nullptr)
		*OutMoveEvent = params.OutMoveEvent;
	if (OutRotateEvent != nullptr)
		*OutRotateEvent = params.OutRotateEvent;
	if (OutScaleEvent != nullptr)
		*OutScaleEvent = params.OutScaleEvent;
	if (OutColorEvent != nullptr)
		*OutColorEvent = params.OutColorEvent;
}


// Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenActorColorFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventActorColorFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorColorFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenActorColorFromToEvent* UHorizonTweenSystemLibrary::CreateTweenActorColorFromToEventWithParam(class UObject* WorldContextObject, class AActor* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorColorFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemLibrary.CreateTweenActorColorFromToEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class AActor*                  pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventActorColorFromToParameters paramImpl;
		class UHorizonTweenActorColorFromToEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenWidgetSheerFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetSheerFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetSheerFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetSheerFromToEvent* UHorizonTweenSystemProxy::CreateTweenWidgetSheerFromToEventWithParam(class AHorizonTweenSystem* TweenSystem, class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetSheerFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenWidgetSheerFromToEventWithParam");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		class UWidget*                 pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetSheerFromToParameters paramImpl;
		class UHorizonTweenWidgetSheerFromToEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenWidgetSheerFromToEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               TweenFrom                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               TweenTo                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetSheerFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetSheerFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetSheerFromToEvent* UHorizonTweenSystemProxy::CreateTweenWidgetSheerFromToEvent(class AHorizonTweenSystem* TweenSystem, class UWidget* pTarget, const struct FVector2D& TweenFrom, const struct FVector2D& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetSheerFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenWidgetSheerFromToEvent");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		class UWidget*                 pTarget;
		struct FVector2D               TweenFrom;
		struct FVector2D               TweenTo;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetSheerFromToParameters paramImpl;
		class UHorizonTweenWidgetSheerFromToEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.pTarget = pTarget;
	params.TweenFrom = TweenFrom;
	params.TweenTo = TweenTo;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenWidgetScaleFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetScaleFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetScaleFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetScaleFromToEvent* UHorizonTweenSystemProxy::CreateTweenWidgetScaleFromToEventWithParam(class AHorizonTweenSystem* TweenSystem, class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetScaleFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenWidgetScaleFromToEventWithParam");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		class UWidget*                 pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetScaleFromToParameters paramImpl;
		class UHorizonTweenWidgetScaleFromToEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenWidgetScaleFromToEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               TweenFrom                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               TweenTo                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetScaleFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetScaleFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetScaleFromToEvent* UHorizonTweenSystemProxy::CreateTweenWidgetScaleFromToEvent(class AHorizonTweenSystem* TweenSystem, class UWidget* pTarget, const struct FVector2D& TweenFrom, const struct FVector2D& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetScaleFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenWidgetScaleFromToEvent");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		class UWidget*                 pTarget;
		struct FVector2D               TweenFrom;
		struct FVector2D               TweenTo;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetScaleFromToParameters paramImpl;
		class UHorizonTweenWidgetScaleFromToEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.pTarget = pTarget;
	params.TweenFrom = TweenFrom;
	params.TweenTo = TweenTo;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenWidgetRotatorFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetRotatorFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetRotatorFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetRotatorFromToEvent* UHorizonTweenSystemProxy::CreateTweenWidgetRotatorFromToEventWithParam(class AHorizonTweenSystem* TweenSystem, class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetRotatorFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenWidgetRotatorFromToEventWithParam");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		class UWidget*                 pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetRotatorFromToParameters paramImpl;
		class UHorizonTweenWidgetRotatorFromToEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenWidgetRotatorFromToEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          TweenFrom                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          TweenTo                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetRotatorFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetRotatorFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetRotatorFromToEvent* UHorizonTweenSystemProxy::CreateTweenWidgetRotatorFromToEvent(class AHorizonTweenSystem* TweenSystem, class UWidget* pTarget, float TweenFrom, float TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetRotatorFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenWidgetRotatorFromToEvent");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		class UWidget*                 pTarget;
		float                          TweenFrom;
		float                          TweenTo;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetRotatorFromToParameters paramImpl;
		class UHorizonTweenWidgetRotatorFromToEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.pTarget = pTarget;
	params.TweenFrom = TweenFrom;
	params.TweenTo = TweenTo;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenWidgetMoveSplinePathEventWithSplineComponentAndParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USplineComponent*        pSplineComponent               (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetMoveSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetMoveSplinePathEvent* UHorizonTweenSystemProxy::CreateTweenWidgetMoveSplinePathEventWithSplineComponentAndParam(class AHorizonTweenSystem* TweenSystem, class UWidget* pTarget, class USplineComponent* pSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenWidgetMoveSplinePathEventWithSplineComponentAndParam");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		class UWidget*                 pTarget;
		class USplineComponent*        pSplineComponent;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetMoveSplinePathParameters paramImpl;
		class UHorizonTweenWidgetMoveSplinePathEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.pTarget = pTarget;
	params.pSplineComponent = pSplineComponent;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenWidgetMoveSplinePathEventWithSplineActorAndParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pWidgetWithSplineComponent     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetMoveSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetMoveSplinePathEvent* UHorizonTweenSystemProxy::CreateTweenWidgetMoveSplinePathEventWithSplineActorAndParam(class AHorizonTweenSystem* TweenSystem, class UWidget* pTarget, class AActor* pWidgetWithSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenWidgetMoveSplinePathEventWithSplineActorAndParam");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		class UWidget*                 pTarget;
		class AActor*                  pWidgetWithSplineComponent;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetMoveSplinePathParameters paramImpl;
		class UHorizonTweenWidgetMoveSplinePathEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.pTarget = pTarget;
	params.pWidgetWithSplineComponent = pWidgetWithSplineComponent;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenWidgetMoveSplinePathEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetMoveSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetMoveSplinePathEvent* UHorizonTweenSystemProxy::CreateTweenWidgetMoveSplinePathEventWithParam(class AHorizonTweenSystem* TweenSystem, class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenWidgetMoveSplinePathEventWithParam");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		class UWidget*                 pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetMoveSplinePathParameters paramImpl;
		class UHorizonTweenWidgetMoveSplinePathEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenWidgetMoveFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetMoveFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetMoveFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetMoveFromToEvent* UHorizonTweenSystemProxy::CreateTweenWidgetMoveFromToEventWithParam(class AHorizonTweenSystem* TweenSystem, class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetMoveFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenWidgetMoveFromToEventWithParam");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		class UWidget*                 pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetMoveFromToParameters paramImpl;
		class UHorizonTweenWidgetMoveFromToEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenWidgetMoveFromToEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               TweenFrom                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               TweenTo                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetMoveFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetMoveFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetMoveFromToEvent* UHorizonTweenSystemProxy::CreateTweenWidgetMoveFromToEvent(class AHorizonTweenSystem* TweenSystem, class UWidget* pTarget, const struct FVector2D& TweenFrom, const struct FVector2D& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetMoveFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenWidgetMoveFromToEvent");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		class UWidget*                 pTarget;
		struct FVector2D               TweenFrom;
		struct FVector2D               TweenTo;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetMoveFromToParameters paramImpl;
		class UHorizonTweenWidgetMoveFromToEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.pTarget = pTarget;
	params.TweenFrom = TweenFrom;
	params.TweenTo = TweenTo;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenWidgetColorFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetColorFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetColorFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetColorFromToEvent* UHorizonTweenSystemProxy::CreateTweenWidgetColorFromToEventWithParam(class AHorizonTweenSystem* TweenSystem, class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetColorFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenWidgetColorFromToEventWithParam");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		class UWidget*                 pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetColorFromToParameters paramImpl;
		class UHorizonTweenWidgetColorFromToEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenWidgetColorFromToEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            TweenFrom                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            TweenTo                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetColorFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetColorFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetColorFromToEvent* UHorizonTweenSystemProxy::CreateTweenWidgetColorFromToEvent(class AHorizonTweenSystem* TweenSystem, class UWidget* pTarget, const struct FLinearColor& TweenFrom, const struct FLinearColor& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetColorFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenWidgetColorFromToEvent");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		class UWidget*                 pTarget;
		struct FLinearColor            TweenFrom;
		struct FLinearColor            TweenTo;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetColorFromToParameters paramImpl;
		class UHorizonTweenWidgetColorFromToEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.pTarget = pTarget;
	params.TweenFrom = TweenFrom;
	params.TweenTo = TweenTo;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenVectorEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventVectorParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenVectorEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenVectorEvent* UHorizonTweenSystemProxy::CreateTweenVectorEventWithParam(class AHorizonTweenSystem* TweenSystem, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventVectorParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenVectorEventWithParam");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventVectorParameters paramImpl;
		class UHorizonTweenVectorEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenVectorEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 TweenFrom                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 TweenTo                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventVectorParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenVectorEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenVectorEvent* UHorizonTweenSystemProxy::CreateTweenVectorEvent(class AHorizonTweenSystem* TweenSystem, const struct FVector& TweenFrom, const struct FVector& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventVectorParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenVectorEvent");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		struct FVector                 TweenFrom;
		struct FVector                 TweenTo;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventVectorParameters paramImpl;
		class UHorizonTweenVectorEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.TweenFrom = TweenFrom;
	params.TweenTo = TweenTo;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenVector2DEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetVector2DParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenVector2DEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenVector2DEvent* UHorizonTweenSystemProxy::CreateTweenVector2DEventWithParam(class AHorizonTweenSystem* TweenSystem, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetVector2DParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenVector2DEventWithParam");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetVector2DParameters paramImpl;
		class UHorizonTweenVector2DEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenVector2DEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               TweenFrom                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               TweenTo                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetVector2DParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenVector2DEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenVector2DEvent* UHorizonTweenSystemProxy::CreateTweenVector2DEvent(class AHorizonTweenSystem* TweenSystem, const struct FVector2D& TweenFrom, const struct FVector2D& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetVector2DParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenVector2DEvent");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		struct FVector2D               TweenFrom;
		struct FVector2D               TweenTo;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetVector2DParameters paramImpl;
		class UHorizonTweenVector2DEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.TweenFrom = TweenFrom;
	params.TweenTo = TweenTo;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenSplinePathEventWithParamWithSplineComponentAndParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USplineComponent*        pSplineComponent               (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSplinePathEvent* UHorizonTweenSystemProxy::CreateTweenSplinePathEventWithParamWithSplineComponentAndParam(class AHorizonTweenSystem* TweenSystem, class USplineComponent* pSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenSplinePathEventWithParamWithSplineComponentAndParam");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		class USplineComponent*        pSplineComponent;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSplinePathParameters paramImpl;
		class UHorizonTweenSplinePathEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.pSplineComponent = pSplineComponent;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenSplinePathEventWithParamWithSplineActorAndParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pActorWithSplineComponent      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSplinePathEvent* UHorizonTweenSystemProxy::CreateTweenSplinePathEventWithParamWithSplineActorAndParam(class AHorizonTweenSystem* TweenSystem, class AActor* pActorWithSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenSplinePathEventWithParamWithSplineActorAndParam");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		class AActor*                  pActorWithSplineComponent;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSplinePathParameters paramImpl;
		class UHorizonTweenSplinePathEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.pActorWithSplineComponent = pActorWithSplineComponent;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenSplinePathEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSplinePathEvent* UHorizonTweenSystemProxy::CreateTweenSplinePathEventWithParam(class AHorizonTweenSystem* TweenSystem, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenSplinePathEventWithParam");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSplinePathParameters paramImpl;
		class UHorizonTweenSplinePathEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenSceneComponentScaleFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USceneComponent*         pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSceneComponentScaleFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentScaleFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSceneComponentScaleFromToEvent* UHorizonTweenSystemProxy::CreateTweenSceneComponentScaleFromToEventWithParam(class AHorizonTweenSystem* TweenSystem, class USceneComponent* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentScaleFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenSceneComponentScaleFromToEventWithParam");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		class USceneComponent*         pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSceneComponentScaleFromToParameters paramImpl;
		class UHorizonTweenSceneComponentScaleFromToEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenSceneComponentScaleFromToEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USceneComponent*         pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 TweenFrom                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 TweenTo                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSceneComponentScaleFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentScaleFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSceneComponentScaleFromToEvent* UHorizonTweenSystemProxy::CreateTweenSceneComponentScaleFromToEvent(class AHorizonTweenSystem* TweenSystem, class USceneComponent* pTarget, const struct FVector& TweenFrom, const struct FVector& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentScaleFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenSceneComponentScaleFromToEvent");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		class USceneComponent*         pTarget;
		struct FVector                 TweenFrom;
		struct FVector                 TweenTo;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSceneComponentScaleFromToParameters paramImpl;
		class UHorizonTweenSceneComponentScaleFromToEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.pTarget = pTarget;
	params.TweenFrom = TweenFrom;
	params.TweenTo = TweenTo;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenSceneComponentRotatorFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USceneComponent*         pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSceneComponentRotatorFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentRotatorFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSceneComponentRotatorFromToEvent* UHorizonTweenSystemProxy::CreateTweenSceneComponentRotatorFromToEventWithParam(class AHorizonTweenSystem* TweenSystem, class USceneComponent* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentRotatorFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenSceneComponentRotatorFromToEventWithParam");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		class USceneComponent*         pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSceneComponentRotatorFromToParameters paramImpl;
		class UHorizonTweenSceneComponentRotatorFromToEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenSceneComponentRotatorFromToEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USceneComponent*         pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                TweenFrom                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FRotator                TweenTo                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSceneComponentRotatorFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentRotatorFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSceneComponentRotatorFromToEvent* UHorizonTweenSystemProxy::CreateTweenSceneComponentRotatorFromToEvent(class AHorizonTweenSystem* TweenSystem, class USceneComponent* pTarget, const struct FRotator& TweenFrom, const struct FRotator& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentRotatorFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenSceneComponentRotatorFromToEvent");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		class USceneComponent*         pTarget;
		struct FRotator                TweenFrom;
		struct FRotator                TweenTo;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSceneComponentRotatorFromToParameters paramImpl;
		class UHorizonTweenSceneComponentRotatorFromToEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.pTarget = pTarget;
	params.TweenFrom = TweenFrom;
	params.TweenTo = TweenTo;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenSceneComponentMoveSplinePathEventWithSplineComponentAndParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USceneComponent*         pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USplineComponent*        pSplineComponent               (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSceneComponentMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentMoveSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSceneComponentMoveSplinePathEvent* UHorizonTweenSystemProxy::CreateTweenSceneComponentMoveSplinePathEventWithSplineComponentAndParam(class AHorizonTweenSystem* TweenSystem, class USceneComponent* pTarget, class USplineComponent* pSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenSceneComponentMoveSplinePathEventWithSplineComponentAndParam");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		class USceneComponent*         pTarget;
		class USplineComponent*        pSplineComponent;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSceneComponentMoveSplinePathParameters paramImpl;
		class UHorizonTweenSceneComponentMoveSplinePathEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.pTarget = pTarget;
	params.pSplineComponent = pSplineComponent;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenSceneComponentMoveSplinePathEventWithSplineActorAndParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USceneComponent*         pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pActorWithSplineComponent      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSceneComponentMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentMoveSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSceneComponentMoveSplinePathEvent* UHorizonTweenSystemProxy::CreateTweenSceneComponentMoveSplinePathEventWithSplineActorAndParam(class AHorizonTweenSystem* TweenSystem, class USceneComponent* pTarget, class AActor* pActorWithSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenSceneComponentMoveSplinePathEventWithSplineActorAndParam");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		class USceneComponent*         pTarget;
		class AActor*                  pActorWithSplineComponent;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSceneComponentMoveSplinePathParameters paramImpl;
		class UHorizonTweenSceneComponentMoveSplinePathEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.pTarget = pTarget;
	params.pActorWithSplineComponent = pActorWithSplineComponent;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenSceneComponentMoveSplinePathEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USceneComponent*         pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSceneComponentMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentMoveSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSceneComponentMoveSplinePathEvent* UHorizonTweenSystemProxy::CreateTweenSceneComponentMoveSplinePathEventWithParam(class AHorizonTweenSystem* TweenSystem, class USceneComponent* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenSceneComponentMoveSplinePathEventWithParam");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		class USceneComponent*         pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSceneComponentMoveSplinePathParameters paramImpl;
		class UHorizonTweenSceneComponentMoveSplinePathEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenSceneComponentMoveFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USceneComponent*         pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSceneComponentMoveFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentMoveFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSceneComponentMoveFromToEvent* UHorizonTweenSystemProxy::CreateTweenSceneComponentMoveFromToEventWithParam(class AHorizonTweenSystem* TweenSystem, class USceneComponent* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentMoveFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenSceneComponentMoveFromToEventWithParam");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		class USceneComponent*         pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSceneComponentMoveFromToParameters paramImpl;
		class UHorizonTweenSceneComponentMoveFromToEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenSceneComponentMoveFromToEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USceneComponent*         pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 TweenFrom                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 TweenTo                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSceneComponentMoveFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentMoveFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSceneComponentMoveFromToEvent* UHorizonTweenSystemProxy::CreateTweenSceneComponentMoveFromToEvent(class AHorizonTweenSystem* TweenSystem, class USceneComponent* pTarget, const struct FVector& TweenFrom, const struct FVector& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentMoveFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenSceneComponentMoveFromToEvent");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		class USceneComponent*         pTarget;
		struct FVector                 TweenFrom;
		struct FVector                 TweenTo;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSceneComponentMoveFromToParameters paramImpl;
		class UHorizonTweenSceneComponentMoveFromToEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.pTarget = pTarget;
	params.TweenFrom = TweenFrom;
	params.TweenTo = TweenTo;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenSceneComponentColorFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USceneComponent*         pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSceneComponentColorFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentColorFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSceneComponentColorFromToEvent* UHorizonTweenSystemProxy::CreateTweenSceneComponentColorFromToEventWithParam(class AHorizonTweenSystem* TweenSystem, class USceneComponent* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentColorFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenSceneComponentColorFromToEventWithParam");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		class USceneComponent*         pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSceneComponentColorFromToParameters paramImpl;
		class UHorizonTweenSceneComponentColorFromToEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenSceneComponentColorFromToEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USceneComponent*         pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            TweenFrom                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            TweenTo                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSceneComponentColorFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentColorFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSceneComponentColorFromToEvent* UHorizonTweenSystemProxy::CreateTweenSceneComponentColorFromToEvent(class AHorizonTweenSystem* TweenSystem, class USceneComponent* pTarget, const struct FLinearColor& TweenFrom, const struct FLinearColor& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentColorFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenSceneComponentColorFromToEvent");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		class USceneComponent*         pTarget;
		struct FLinearColor            TweenFrom;
		struct FLinearColor            TweenTo;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSceneComponentColorFromToParameters paramImpl;
		class UHorizonTweenSceneComponentColorFromToEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.pTarget = pTarget;
	params.TweenFrom = TweenFrom;
	params.TweenTo = TweenTo;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenRotatorEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventRotatorParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenRotatorEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenRotatorEvent* UHorizonTweenSystemProxy::CreateTweenRotatorEventWithParam(class AHorizonTweenSystem* TweenSystem, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventRotatorParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenRotatorEventWithParam");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventRotatorParameters paramImpl;
		class UHorizonTweenRotatorEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenRotatorEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                TweenFrom                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FRotator                TweenTo                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventRotatorParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenRotatorEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenRotatorEvent* UHorizonTweenSystemProxy::CreateTweenRotatorEvent(class AHorizonTweenSystem* TweenSystem, const struct FRotator& TweenFrom, const struct FRotator& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventRotatorParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenRotatorEvent");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		struct FRotator                TweenFrom;
		struct FRotator                TweenTo;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventRotatorParameters paramImpl;
		class UHorizonTweenRotatorEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.TweenFrom = TweenFrom;
	params.TweenTo = TweenTo;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenLinearColorEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventLinearColorParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenLinearColorEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenLinearColorEvent* UHorizonTweenSystemProxy::CreateTweenLinearColorEventWithParam(class AHorizonTweenSystem* TweenSystem, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventLinearColorParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenLinearColorEventWithParam");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventLinearColorParameters paramImpl;
		class UHorizonTweenLinearColorEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenLinearColorEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            TweenFrom                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            TweenTo                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventLinearColorParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenLinearColorEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenLinearColorEvent* UHorizonTweenSystemProxy::CreateTweenLinearColorEvent(class AHorizonTweenSystem* TweenSystem, const struct FLinearColor& TweenFrom, const struct FLinearColor& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventLinearColorParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenLinearColorEvent");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		struct FLinearColor            TweenFrom;
		struct FLinearColor            TweenTo;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventLinearColorParameters paramImpl;
		class UHorizonTweenLinearColorEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.TweenFrom = TweenFrom;
	params.TweenTo = TweenTo;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenFloatEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventFloatParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenFloatEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenFloatEvent* UHorizonTweenSystemProxy::CreateTweenFloatEventWithParam(class AHorizonTweenSystem* TweenSystem, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventFloatParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenFloatEventWithParam");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventFloatParameters paramImpl;
		class UHorizonTweenFloatEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenFloatEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          TweenFrom                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          TweenTo                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventFloatParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenFloatEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenFloatEvent* UHorizonTweenSystemProxy::CreateTweenFloatEvent(class AHorizonTweenSystem* TweenSystem, float TweenFrom, float TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventFloatParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenFloatEvent");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		float                          TweenFrom;
		float                          TweenTo;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventFloatParameters paramImpl;
		class UHorizonTweenFloatEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.TweenFrom = TweenFrom;
	params.TweenTo = TweenTo;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenEventWithParameter
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenEvent*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenEvent* UHorizonTweenSystemProxy::CreateTweenEventWithParameter(class AHorizonTweenSystem* TweenSystem, const struct FHorizonTweenEventParameters& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenEventWithParameter");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		struct FHorizonTweenEventParameters Param;
		class UHorizonTweenEvent*      ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenActorScaleFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventActorScaleFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorScaleFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenActorScaleFromToEvent* UHorizonTweenSystemProxy::CreateTweenActorScaleFromToEventWithParam(class AHorizonTweenSystem* TweenSystem, class AActor* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorScaleFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenActorScaleFromToEventWithParam");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		class AActor*                  pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventActorScaleFromToParameters paramImpl;
		class UHorizonTweenActorScaleFromToEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenActorScaleFromToEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 TweenFrom                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 TweenTo                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventActorScaleFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorScaleFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenActorScaleFromToEvent* UHorizonTweenSystemProxy::CreateTweenActorScaleFromToEvent(class AHorizonTweenSystem* TweenSystem, class AActor* pTarget, const struct FVector& TweenFrom, const struct FVector& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorScaleFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenActorScaleFromToEvent");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		class AActor*                  pTarget;
		struct FVector                 TweenFrom;
		struct FVector                 TweenTo;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventActorScaleFromToParameters paramImpl;
		class UHorizonTweenActorScaleFromToEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.pTarget = pTarget;
	params.TweenFrom = TweenFrom;
	params.TweenTo = TweenTo;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenActorRotatorFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventActorRotatorFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorRotatorFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenActorRotatorFromToEvent* UHorizonTweenSystemProxy::CreateTweenActorRotatorFromToEventWithParam(class AHorizonTweenSystem* TweenSystem, class AActor* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorRotatorFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenActorRotatorFromToEventWithParam");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		class AActor*                  pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventActorRotatorFromToParameters paramImpl;
		class UHorizonTweenActorRotatorFromToEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenActorRotatorFromToEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                TweenFrom                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FRotator                TweenTo                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventActorRotatorFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorRotatorFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenActorRotatorFromToEvent* UHorizonTweenSystemProxy::CreateTweenActorRotatorFromToEvent(class AHorizonTweenSystem* TweenSystem, class AActor* pTarget, const struct FRotator& TweenFrom, const struct FRotator& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorRotatorFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenActorRotatorFromToEvent");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		class AActor*                  pTarget;
		struct FRotator                TweenFrom;
		struct FRotator                TweenTo;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventActorRotatorFromToParameters paramImpl;
		class UHorizonTweenActorRotatorFromToEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.pTarget = pTarget;
	params.TweenFrom = TweenFrom;
	params.TweenTo = TweenTo;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenActorMoveSplinePathEventWithSplineComponentAndParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USplineComponent*        pSplineComponent               (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventActorMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorMoveSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenActorMoveSplinePathEvent* UHorizonTweenSystemProxy::CreateTweenActorMoveSplinePathEventWithSplineComponentAndParam(class AHorizonTweenSystem* TweenSystem, class AActor* pTarget, class USplineComponent* pSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenActorMoveSplinePathEventWithSplineComponentAndParam");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		class AActor*                  pTarget;
		class USplineComponent*        pSplineComponent;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventActorMoveSplinePathParameters paramImpl;
		class UHorizonTweenActorMoveSplinePathEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.pTarget = pTarget;
	params.pSplineComponent = pSplineComponent;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenActorMoveSplinePathEventWithSplineActorAndParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pActorWithSplineComponent      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventActorMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorMoveSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenActorMoveSplinePathEvent* UHorizonTweenSystemProxy::CreateTweenActorMoveSplinePathEventWithSplineActorAndParam(class AHorizonTweenSystem* TweenSystem, class AActor* pTarget, class AActor* pActorWithSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenActorMoveSplinePathEventWithSplineActorAndParam");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		class AActor*                  pTarget;
		class AActor*                  pActorWithSplineComponent;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventActorMoveSplinePathParameters paramImpl;
		class UHorizonTweenActorMoveSplinePathEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.pTarget = pTarget;
	params.pActorWithSplineComponent = pActorWithSplineComponent;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenActorMoveSplinePathEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventActorMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorMoveSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenActorMoveSplinePathEvent* UHorizonTweenSystemProxy::CreateTweenActorMoveSplinePathEventWithParam(class AHorizonTweenSystem* TweenSystem, class AActor* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenActorMoveSplinePathEventWithParam");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		class AActor*                  pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventActorMoveSplinePathParameters paramImpl;
		class UHorizonTweenActorMoveSplinePathEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenActorMoveFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventActorMoveFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorMoveFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenActorMoveFromToEvent* UHorizonTweenSystemProxy::CreateTweenActorMoveFromToEventWithParam(class AHorizonTweenSystem* TweenSystem, class AActor* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorMoveFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenActorMoveFromToEventWithParam");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		class AActor*                  pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventActorMoveFromToParameters paramImpl;
		class UHorizonTweenActorMoveFromToEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenActorMoveFromToEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 TweenFrom                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 TweenTo                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventActorMoveFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorMoveFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenActorMoveFromToEvent* UHorizonTweenSystemProxy::CreateTweenActorMoveFromToEvent(class AHorizonTweenSystem* TweenSystem, class AActor* pTarget, const struct FVector& TweenFrom, const struct FVector& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorMoveFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenActorMoveFromToEvent");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		class AActor*                  pTarget;
		struct FVector                 TweenFrom;
		struct FVector                 TweenTo;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventActorMoveFromToParameters paramImpl;
		class UHorizonTweenActorMoveFromToEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.pTarget = pTarget;
	params.TweenFrom = TweenFrom;
	params.TweenTo = TweenTo;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenActorColorFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventActorColorFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorColorFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenActorColorFromToEvent* UHorizonTweenSystemProxy::CreateTweenActorColorFromToEventWithParam(class AHorizonTweenSystem* TweenSystem, class AActor* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorColorFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenActorColorFromToEventWithParam");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		class AActor*                  pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventActorColorFromToParameters paramImpl;
		class UHorizonTweenActorColorFromToEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateTweenActorColorFromToEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class AHorizonTweenSystem*     TweenSystem                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            TweenFrom                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            TweenTo                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventActorColorFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorColorFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenActorColorFromToEvent* UHorizonTweenSystemProxy::CreateTweenActorColorFromToEvent(class AHorizonTweenSystem* TweenSystem, class AActor* pTarget, const struct FLinearColor& TweenFrom, const struct FLinearColor& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorColorFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateTweenActorColorFromToEvent");

	struct
	{
		class AHorizonTweenSystem*     TweenSystem;
		class AActor*                  pTarget;
		struct FLinearColor            TweenFrom;
		struct FLinearColor            TweenTo;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventActorColorFromToParameters paramImpl;
		class UHorizonTweenActorColorFromToEvent* ReturnValue;
	} params;

	params.TweenSystem = TweenSystem;
	params.pTarget = pTarget;
	params.TweenFrom = TweenFrom;
	params.TweenTo = TweenTo;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenWidgetSheerFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetSheerFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetSheerFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetSheerFromToEvent* UHorizonTweenSystemProxy::CreateDefaultTweenWidgetSheerFromToEventWithParam(class UObject* WorldContextObject, class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetSheerFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenWidgetSheerFromToEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class UWidget*                 pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetSheerFromToParameters paramImpl;
		class UHorizonTweenWidgetSheerFromToEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenWidgetSheerFromToEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               TweenFrom                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               TweenTo                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetSheerFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetSheerFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetSheerFromToEvent* UHorizonTweenSystemProxy::CreateDefaultTweenWidgetSheerFromToEvent(class UObject* WorldContextObject, class UWidget* pTarget, const struct FVector2D& TweenFrom, const struct FVector2D& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetSheerFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenWidgetSheerFromToEvent");

	struct
	{
		class UObject*                 WorldContextObject;
		class UWidget*                 pTarget;
		struct FVector2D               TweenFrom;
		struct FVector2D               TweenTo;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetSheerFromToParameters paramImpl;
		class UHorizonTweenWidgetSheerFromToEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.TweenFrom = TweenFrom;
	params.TweenTo = TweenTo;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenWidgetScaleFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetScaleFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetScaleFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetScaleFromToEvent* UHorizonTweenSystemProxy::CreateDefaultTweenWidgetScaleFromToEventWithParam(class UObject* WorldContextObject, class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetScaleFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenWidgetScaleFromToEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class UWidget*                 pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetScaleFromToParameters paramImpl;
		class UHorizonTweenWidgetScaleFromToEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenWidgetScaleFromToEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               TweenFrom                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               TweenTo                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetScaleFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetScaleFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetScaleFromToEvent* UHorizonTweenSystemProxy::CreateDefaultTweenWidgetScaleFromToEvent(class UObject* WorldContextObject, class UWidget* pTarget, const struct FVector2D& TweenFrom, const struct FVector2D& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetScaleFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenWidgetScaleFromToEvent");

	struct
	{
		class UObject*                 WorldContextObject;
		class UWidget*                 pTarget;
		struct FVector2D               TweenFrom;
		struct FVector2D               TweenTo;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetScaleFromToParameters paramImpl;
		class UHorizonTweenWidgetScaleFromToEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.TweenFrom = TweenFrom;
	params.TweenTo = TweenTo;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenWidgetRotatorFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetRotatorFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetRotatorFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetRotatorFromToEvent* UHorizonTweenSystemProxy::CreateDefaultTweenWidgetRotatorFromToEventWithParam(class UObject* WorldContextObject, class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetRotatorFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenWidgetRotatorFromToEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class UWidget*                 pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetRotatorFromToParameters paramImpl;
		class UHorizonTweenWidgetRotatorFromToEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenWidgetRotatorFromToEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          TweenFrom                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          TweenTo                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetRotatorFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetRotatorFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetRotatorFromToEvent* UHorizonTweenSystemProxy::CreateDefaultTweenWidgetRotatorFromToEvent(class UObject* WorldContextObject, class UWidget* pTarget, float TweenFrom, float TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetRotatorFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenWidgetRotatorFromToEvent");

	struct
	{
		class UObject*                 WorldContextObject;
		class UWidget*                 pTarget;
		float                          TweenFrom;
		float                          TweenTo;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetRotatorFromToParameters paramImpl;
		class UHorizonTweenWidgetRotatorFromToEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.TweenFrom = TweenFrom;
	params.TweenTo = TweenTo;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenWidgetMoveSplinePathEventWithSplineComponentAndParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USplineComponent*        pSplineComponent               (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetMoveSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetMoveSplinePathEvent* UHorizonTweenSystemProxy::CreateDefaultTweenWidgetMoveSplinePathEventWithSplineComponentAndParam(class UObject* WorldContextObject, class UWidget* pTarget, class USplineComponent* pSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenWidgetMoveSplinePathEventWithSplineComponentAndParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class UWidget*                 pTarget;
		class USplineComponent*        pSplineComponent;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetMoveSplinePathParameters paramImpl;
		class UHorizonTweenWidgetMoveSplinePathEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.pSplineComponent = pSplineComponent;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenWidgetMoveSplinePathEventWithSplineActorAndParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pWidgetWithSplineComponent     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetMoveSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetMoveSplinePathEvent* UHorizonTweenSystemProxy::CreateDefaultTweenWidgetMoveSplinePathEventWithSplineActorAndParam(class UObject* WorldContextObject, class UWidget* pTarget, class AActor* pWidgetWithSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenWidgetMoveSplinePathEventWithSplineActorAndParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class UWidget*                 pTarget;
		class AActor*                  pWidgetWithSplineComponent;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetMoveSplinePathParameters paramImpl;
		class UHorizonTweenWidgetMoveSplinePathEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.pWidgetWithSplineComponent = pWidgetWithSplineComponent;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenWidgetMoveSplinePathEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetMoveSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetMoveSplinePathEvent* UHorizonTweenSystemProxy::CreateDefaultTweenWidgetMoveSplinePathEventWithParam(class UObject* WorldContextObject, class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenWidgetMoveSplinePathEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class UWidget*                 pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetMoveSplinePathParameters paramImpl;
		class UHorizonTweenWidgetMoveSplinePathEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenWidgetMoveFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetMoveFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetMoveFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetMoveFromToEvent* UHorizonTweenSystemProxy::CreateDefaultTweenWidgetMoveFromToEventWithParam(class UObject* WorldContextObject, class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetMoveFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenWidgetMoveFromToEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class UWidget*                 pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetMoveFromToParameters paramImpl;
		class UHorizonTweenWidgetMoveFromToEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenWidgetMoveFromToEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               TweenFrom                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               TweenTo                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetMoveFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetMoveFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetMoveFromToEvent* UHorizonTweenSystemProxy::CreateDefaultTweenWidgetMoveFromToEvent(class UObject* WorldContextObject, class UWidget* pTarget, const struct FVector2D& TweenFrom, const struct FVector2D& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetMoveFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenWidgetMoveFromToEvent");

	struct
	{
		class UObject*                 WorldContextObject;
		class UWidget*                 pTarget;
		struct FVector2D               TweenFrom;
		struct FVector2D               TweenTo;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetMoveFromToParameters paramImpl;
		class UHorizonTweenWidgetMoveFromToEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.TweenFrom = TweenFrom;
	params.TweenTo = TweenTo;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenWidgetColorFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetColorFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetColorFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetColorFromToEvent* UHorizonTweenSystemProxy::CreateDefaultTweenWidgetColorFromToEventWithParam(class UObject* WorldContextObject, class UWidget* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetColorFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenWidgetColorFromToEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class UWidget*                 pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetColorFromToParameters paramImpl;
		class UHorizonTweenWidgetColorFromToEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenWidgetColorFromToEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            TweenFrom                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            TweenTo                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetColorFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenWidgetColorFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenWidgetColorFromToEvent* UHorizonTweenSystemProxy::CreateDefaultTweenWidgetColorFromToEvent(class UObject* WorldContextObject, class UWidget* pTarget, const struct FLinearColor& TweenFrom, const struct FLinearColor& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetColorFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenWidgetColorFromToEvent");

	struct
	{
		class UObject*                 WorldContextObject;
		class UWidget*                 pTarget;
		struct FLinearColor            TweenFrom;
		struct FLinearColor            TweenTo;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetColorFromToParameters paramImpl;
		class UHorizonTweenWidgetColorFromToEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.TweenFrom = TweenFrom;
	params.TweenTo = TweenTo;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenVectorEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventVectorParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenVectorEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenVectorEvent* UHorizonTweenSystemProxy::CreateDefaultTweenVectorEventWithParam(class UObject* WorldContextObject, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventVectorParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenVectorEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventVectorParameters paramImpl;
		class UHorizonTweenVectorEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenVectorEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 TweenFrom                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 TweenTo                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventVectorParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenVectorEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenVectorEvent* UHorizonTweenSystemProxy::CreateDefaultTweenVectorEvent(class UObject* WorldContextObject, const struct FVector& TweenFrom, const struct FVector& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventVectorParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenVectorEvent");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector                 TweenFrom;
		struct FVector                 TweenTo;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventVectorParameters paramImpl;
		class UHorizonTweenVectorEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.TweenFrom = TweenFrom;
	params.TweenTo = TweenTo;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenVector2DEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetVector2DParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenVector2DEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenVector2DEvent* UHorizonTweenSystemProxy::CreateDefaultTweenVector2DEventWithParam(class UObject* WorldContextObject, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetVector2DParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenVector2DEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetVector2DParameters paramImpl;
		class UHorizonTweenVector2DEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenVector2DEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               TweenFrom                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               TweenTo                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventWidgetVector2DParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenVector2DEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenVector2DEvent* UHorizonTweenSystemProxy::CreateDefaultTweenVector2DEvent(class UObject* WorldContextObject, const struct FVector2D& TweenFrom, const struct FVector2D& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventWidgetVector2DParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenVector2DEvent");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector2D               TweenFrom;
		struct FVector2D               TweenTo;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventWidgetVector2DParameters paramImpl;
		class UHorizonTweenVector2DEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.TweenFrom = TweenFrom;
	params.TweenTo = TweenTo;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenSplinePathEventWithParamWithSplineComponentAndParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USplineComponent*        pSplineComponent               (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSplinePathEvent* UHorizonTweenSystemProxy::CreateDefaultTweenSplinePathEventWithParamWithSplineComponentAndParam(class UObject* WorldContextObject, class USplineComponent* pSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenSplinePathEventWithParamWithSplineComponentAndParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class USplineComponent*        pSplineComponent;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSplinePathParameters paramImpl;
		class UHorizonTweenSplinePathEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pSplineComponent = pSplineComponent;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenSplinePathEventWithParamWithSplineActorAndParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pActorWithSplineComponent      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSplinePathEvent* UHorizonTweenSystemProxy::CreateDefaultTweenSplinePathEventWithParamWithSplineActorAndParam(class UObject* WorldContextObject, class AActor* pActorWithSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenSplinePathEventWithParamWithSplineActorAndParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class AActor*                  pActorWithSplineComponent;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSplinePathParameters paramImpl;
		class UHorizonTweenSplinePathEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pActorWithSplineComponent = pActorWithSplineComponent;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenSplinePathEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSplinePathEvent* UHorizonTweenSystemProxy::CreateDefaultTweenSplinePathEventWithParam(class UObject* WorldContextObject, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenSplinePathEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSplinePathParameters paramImpl;
		class UHorizonTweenSplinePathEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenSceneComponentScaleFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USceneComponent*         pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSceneComponentScaleFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentScaleFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSceneComponentScaleFromToEvent* UHorizonTweenSystemProxy::CreateDefaultTweenSceneComponentScaleFromToEventWithParam(class UObject* WorldContextObject, class USceneComponent* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentScaleFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenSceneComponentScaleFromToEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class USceneComponent*         pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSceneComponentScaleFromToParameters paramImpl;
		class UHorizonTweenSceneComponentScaleFromToEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenSceneComponentScaleFromToEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USceneComponent*         pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 TweenFrom                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 TweenTo                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSceneComponentScaleFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentScaleFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSceneComponentScaleFromToEvent* UHorizonTweenSystemProxy::CreateDefaultTweenSceneComponentScaleFromToEvent(class UObject* WorldContextObject, class USceneComponent* pTarget, const struct FVector& TweenFrom, const struct FVector& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentScaleFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenSceneComponentScaleFromToEvent");

	struct
	{
		class UObject*                 WorldContextObject;
		class USceneComponent*         pTarget;
		struct FVector                 TweenFrom;
		struct FVector                 TweenTo;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSceneComponentScaleFromToParameters paramImpl;
		class UHorizonTweenSceneComponentScaleFromToEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.TweenFrom = TweenFrom;
	params.TweenTo = TweenTo;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenSceneComponentRotatorFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USceneComponent*         pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSceneComponentRotatorFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentRotatorFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSceneComponentRotatorFromToEvent* UHorizonTweenSystemProxy::CreateDefaultTweenSceneComponentRotatorFromToEventWithParam(class UObject* WorldContextObject, class USceneComponent* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentRotatorFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenSceneComponentRotatorFromToEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class USceneComponent*         pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSceneComponentRotatorFromToParameters paramImpl;
		class UHorizonTweenSceneComponentRotatorFromToEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenSceneComponentRotatorFromToEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USceneComponent*         pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                TweenFrom                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FRotator                TweenTo                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSceneComponentRotatorFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentRotatorFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSceneComponentRotatorFromToEvent* UHorizonTweenSystemProxy::CreateDefaultTweenSceneComponentRotatorFromToEvent(class UObject* WorldContextObject, class USceneComponent* pTarget, const struct FRotator& TweenFrom, const struct FRotator& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentRotatorFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenSceneComponentRotatorFromToEvent");

	struct
	{
		class UObject*                 WorldContextObject;
		class USceneComponent*         pTarget;
		struct FRotator                TweenFrom;
		struct FRotator                TweenTo;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSceneComponentRotatorFromToParameters paramImpl;
		class UHorizonTweenSceneComponentRotatorFromToEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.TweenFrom = TweenFrom;
	params.TweenTo = TweenTo;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenSceneComponentMoveSplinePathEventWithSplineComponentAndParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USceneComponent*         pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USplineComponent*        pSplineComponent               (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSceneComponentMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentMoveSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSceneComponentMoveSplinePathEvent* UHorizonTweenSystemProxy::CreateDefaultTweenSceneComponentMoveSplinePathEventWithSplineComponentAndParam(class UObject* WorldContextObject, class USceneComponent* pTarget, class USplineComponent* pSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenSceneComponentMoveSplinePathEventWithSplineComponentAndParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class USceneComponent*         pTarget;
		class USplineComponent*        pSplineComponent;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSceneComponentMoveSplinePathParameters paramImpl;
		class UHorizonTweenSceneComponentMoveSplinePathEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.pSplineComponent = pSplineComponent;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenSceneComponentMoveSplinePathEventWithSplineActorAndParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USceneComponent*         pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pActorWithSplineComponent      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSceneComponentMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentMoveSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSceneComponentMoveSplinePathEvent* UHorizonTweenSystemProxy::CreateDefaultTweenSceneComponentMoveSplinePathEventWithSplineActorAndParam(class UObject* WorldContextObject, class USceneComponent* pTarget, class AActor* pActorWithSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenSceneComponentMoveSplinePathEventWithSplineActorAndParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class USceneComponent*         pTarget;
		class AActor*                  pActorWithSplineComponent;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSceneComponentMoveSplinePathParameters paramImpl;
		class UHorizonTweenSceneComponentMoveSplinePathEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.pActorWithSplineComponent = pActorWithSplineComponent;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenSceneComponentMoveSplinePathEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USceneComponent*         pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSceneComponentMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentMoveSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSceneComponentMoveSplinePathEvent* UHorizonTweenSystemProxy::CreateDefaultTweenSceneComponentMoveSplinePathEventWithParam(class UObject* WorldContextObject, class USceneComponent* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenSceneComponentMoveSplinePathEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class USceneComponent*         pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSceneComponentMoveSplinePathParameters paramImpl;
		class UHorizonTweenSceneComponentMoveSplinePathEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenSceneComponentMoveFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USceneComponent*         pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSceneComponentMoveFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentMoveFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSceneComponentMoveFromToEvent* UHorizonTweenSystemProxy::CreateDefaultTweenSceneComponentMoveFromToEventWithParam(class UObject* WorldContextObject, class USceneComponent* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentMoveFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenSceneComponentMoveFromToEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class USceneComponent*         pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSceneComponentMoveFromToParameters paramImpl;
		class UHorizonTweenSceneComponentMoveFromToEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenSceneComponentMoveFromToEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USceneComponent*         pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 TweenFrom                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 TweenTo                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSceneComponentMoveFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentMoveFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSceneComponentMoveFromToEvent* UHorizonTweenSystemProxy::CreateDefaultTweenSceneComponentMoveFromToEvent(class UObject* WorldContextObject, class USceneComponent* pTarget, const struct FVector& TweenFrom, const struct FVector& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentMoveFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenSceneComponentMoveFromToEvent");

	struct
	{
		class UObject*                 WorldContextObject;
		class USceneComponent*         pTarget;
		struct FVector                 TweenFrom;
		struct FVector                 TweenTo;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSceneComponentMoveFromToParameters paramImpl;
		class UHorizonTweenSceneComponentMoveFromToEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.TweenFrom = TweenFrom;
	params.TweenTo = TweenTo;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenSceneComponentColorFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USceneComponent*         pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSceneComponentColorFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentColorFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSceneComponentColorFromToEvent* UHorizonTweenSystemProxy::CreateDefaultTweenSceneComponentColorFromToEventWithParam(class UObject* WorldContextObject, class USceneComponent* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentColorFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenSceneComponentColorFromToEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class USceneComponent*         pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSceneComponentColorFromToParameters paramImpl;
		class UHorizonTweenSceneComponentColorFromToEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenSceneComponentColorFromToEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USceneComponent*         pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            TweenFrom                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            TweenTo                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventSceneComponentColorFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenSceneComponentColorFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenSceneComponentColorFromToEvent* UHorizonTweenSystemProxy::CreateDefaultTweenSceneComponentColorFromToEvent(class UObject* WorldContextObject, class USceneComponent* pTarget, const struct FLinearColor& TweenFrom, const struct FLinearColor& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventSceneComponentColorFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenSceneComponentColorFromToEvent");

	struct
	{
		class UObject*                 WorldContextObject;
		class USceneComponent*         pTarget;
		struct FLinearColor            TweenFrom;
		struct FLinearColor            TweenTo;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventSceneComponentColorFromToParameters paramImpl;
		class UHorizonTweenSceneComponentColorFromToEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.TweenFrom = TweenFrom;
	params.TweenTo = TweenTo;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenRotatorEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventRotatorParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenRotatorEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenRotatorEvent* UHorizonTweenSystemProxy::CreateDefaultTweenRotatorEventWithParam(class UObject* WorldContextObject, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventRotatorParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenRotatorEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventRotatorParameters paramImpl;
		class UHorizonTweenRotatorEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenRotatorEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                TweenFrom                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FRotator                TweenTo                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventRotatorParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenRotatorEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenRotatorEvent* UHorizonTweenSystemProxy::CreateDefaultTweenRotatorEvent(class UObject* WorldContextObject, const struct FRotator& TweenFrom, const struct FRotator& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventRotatorParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenRotatorEvent");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FRotator                TweenFrom;
		struct FRotator                TweenTo;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventRotatorParameters paramImpl;
		class UHorizonTweenRotatorEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.TweenFrom = TweenFrom;
	params.TweenTo = TweenTo;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenLinearColorEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventLinearColorParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenLinearColorEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenLinearColorEvent* UHorizonTweenSystemProxy::CreateDefaultTweenLinearColorEventWithParam(class UObject* WorldContextObject, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventLinearColorParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenLinearColorEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventLinearColorParameters paramImpl;
		class UHorizonTweenLinearColorEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenLinearColorEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            TweenFrom                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            TweenTo                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventLinearColorParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenLinearColorEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenLinearColorEvent* UHorizonTweenSystemProxy::CreateDefaultTweenLinearColorEvent(class UObject* WorldContextObject, const struct FLinearColor& TweenFrom, const struct FLinearColor& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventLinearColorParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenLinearColorEvent");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FLinearColor            TweenFrom;
		struct FLinearColor            TweenTo;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventLinearColorParameters paramImpl;
		class UHorizonTweenLinearColorEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.TweenFrom = TweenFrom;
	params.TweenTo = TweenTo;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenFloatEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventFloatParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenFloatEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenFloatEvent* UHorizonTweenSystemProxy::CreateDefaultTweenFloatEventWithParam(class UObject* WorldContextObject, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventFloatParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenFloatEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventFloatParameters paramImpl;
		class UHorizonTweenFloatEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenFloatEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          TweenFrom                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          TweenTo                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventFloatParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenFloatEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenFloatEvent* UHorizonTweenSystemProxy::CreateDefaultTweenFloatEvent(class UObject* WorldContextObject, float TweenFrom, float TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventFloatParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenFloatEvent");

	struct
	{
		class UObject*                 WorldContextObject;
		float                          TweenFrom;
		float                          TweenTo;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventFloatParameters paramImpl;
		class UHorizonTweenFloatEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.TweenFrom = TweenFrom;
	params.TweenTo = TweenTo;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenEventWithParameter
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenEvent*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenEvent* UHorizonTweenSystemProxy::CreateDefaultTweenEventWithParameter(class UObject* WorldContextObject, const struct FHorizonTweenEventParameters& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenEventWithParameter");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FHorizonTweenEventParameters Param;
		class UHorizonTweenEvent*      ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenActorScaleFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventActorScaleFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorScaleFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenActorScaleFromToEvent* UHorizonTweenSystemProxy::CreateDefaultTweenActorScaleFromToEventWithParam(class UObject* WorldContextObject, class AActor* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorScaleFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenActorScaleFromToEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class AActor*                  pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventActorScaleFromToParameters paramImpl;
		class UHorizonTweenActorScaleFromToEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenActorScaleFromToEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 TweenFrom                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 TweenTo                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventActorScaleFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorScaleFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenActorScaleFromToEvent* UHorizonTweenSystemProxy::CreateDefaultTweenActorScaleFromToEvent(class UObject* WorldContextObject, class AActor* pTarget, const struct FVector& TweenFrom, const struct FVector& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorScaleFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenActorScaleFromToEvent");

	struct
	{
		class UObject*                 WorldContextObject;
		class AActor*                  pTarget;
		struct FVector                 TweenFrom;
		struct FVector                 TweenTo;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventActorScaleFromToParameters paramImpl;
		class UHorizonTweenActorScaleFromToEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.TweenFrom = TweenFrom;
	params.TweenTo = TweenTo;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenActorRotatorFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventActorRotatorFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorRotatorFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenActorRotatorFromToEvent* UHorizonTweenSystemProxy::CreateDefaultTweenActorRotatorFromToEventWithParam(class UObject* WorldContextObject, class AActor* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorRotatorFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenActorRotatorFromToEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class AActor*                  pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventActorRotatorFromToParameters paramImpl;
		class UHorizonTweenActorRotatorFromToEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenActorRotatorFromToEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                TweenFrom                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FRotator                TweenTo                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventActorRotatorFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorRotatorFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenActorRotatorFromToEvent* UHorizonTweenSystemProxy::CreateDefaultTweenActorRotatorFromToEvent(class UObject* WorldContextObject, class AActor* pTarget, const struct FRotator& TweenFrom, const struct FRotator& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorRotatorFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenActorRotatorFromToEvent");

	struct
	{
		class UObject*                 WorldContextObject;
		class AActor*                  pTarget;
		struct FRotator                TweenFrom;
		struct FRotator                TweenTo;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventActorRotatorFromToParameters paramImpl;
		class UHorizonTweenActorRotatorFromToEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.TweenFrom = TweenFrom;
	params.TweenTo = TweenTo;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenActorMoveSplinePathEventWithSplineComponentAndParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USplineComponent*        pSplineComponent               (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventActorMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorMoveSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenActorMoveSplinePathEvent* UHorizonTweenSystemProxy::CreateDefaultTweenActorMoveSplinePathEventWithSplineComponentAndParam(class UObject* WorldContextObject, class AActor* pTarget, class USplineComponent* pSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenActorMoveSplinePathEventWithSplineComponentAndParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class AActor*                  pTarget;
		class USplineComponent*        pSplineComponent;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventActorMoveSplinePathParameters paramImpl;
		class UHorizonTweenActorMoveSplinePathEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.pSplineComponent = pSplineComponent;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenActorMoveSplinePathEventWithSplineActorAndParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pActorWithSplineComponent      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventActorMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorMoveSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenActorMoveSplinePathEvent* UHorizonTweenSystemProxy::CreateDefaultTweenActorMoveSplinePathEventWithSplineActorAndParam(class UObject* WorldContextObject, class AActor* pTarget, class AActor* pActorWithSplineComponent, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenActorMoveSplinePathEventWithSplineActorAndParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class AActor*                  pTarget;
		class AActor*                  pActorWithSplineComponent;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventActorMoveSplinePathParameters paramImpl;
		class UHorizonTweenActorMoveSplinePathEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.pActorWithSplineComponent = pActorWithSplineComponent;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenActorMoveSplinePathEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventActorMoveSplinePathParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorMoveSplinePathEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenActorMoveSplinePathEvent* UHorizonTweenSystemProxy::CreateDefaultTweenActorMoveSplinePathEventWithParam(class UObject* WorldContextObject, class AActor* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorMoveSplinePathParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenActorMoveSplinePathEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class AActor*                  pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventActorMoveSplinePathParameters paramImpl;
		class UHorizonTweenActorMoveSplinePathEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenActorMoveFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventActorMoveFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorMoveFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenActorMoveFromToEvent* UHorizonTweenSystemProxy::CreateDefaultTweenActorMoveFromToEventWithParam(class UObject* WorldContextObject, class AActor* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorMoveFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenActorMoveFromToEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class AActor*                  pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventActorMoveFromToParameters paramImpl;
		class UHorizonTweenActorMoveFromToEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenActorMoveFromToEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 TweenFrom                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 TweenTo                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventActorMoveFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorMoveFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenActorMoveFromToEvent* UHorizonTweenSystemProxy::CreateDefaultTweenActorMoveFromToEvent(class UObject* WorldContextObject, class AActor* pTarget, const struct FVector& TweenFrom, const struct FVector& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorMoveFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenActorMoveFromToEvent");

	struct
	{
		class UObject*                 WorldContextObject;
		class AActor*                  pTarget;
		struct FVector                 TweenFrom;
		struct FVector                 TweenTo;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventActorMoveFromToParameters paramImpl;
		class UHorizonTweenActorMoveFromToEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.TweenFrom = TweenFrom;
	params.TweenTo = TweenTo;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenActorColorFromToEventWithParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventActorColorFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorColorFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenActorColorFromToEvent* UHorizonTweenSystemProxy::CreateDefaultTweenActorColorFromToEventWithParam(class UObject* WorldContextObject, class AActor* pTarget, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorColorFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenActorColorFromToEventWithParam");

	struct
	{
		class UObject*                 WorldContextObject;
		class AActor*                  pTarget;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventActorColorFromToParameters paramImpl;
		class UHorizonTweenActorColorFromToEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenActorColorFromToEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  pTarget                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            TweenFrom                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            TweenTo                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventParameters Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FHorizonTweenEventActorColorFromToParameters paramImpl                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UHorizonTweenActorColorFromToEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizonTweenActorColorFromToEvent* UHorizonTweenSystemProxy::CreateDefaultTweenActorColorFromToEvent(class UObject* WorldContextObject, class AActor* pTarget, const struct FLinearColor& TweenFrom, const struct FLinearColor& TweenTo, const struct FHorizonTweenEventParameters& Param, struct FHorizonTweenEventActorColorFromToParameters* paramImpl)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenSystemProxy.CreateDefaultTweenActorColorFromToEvent");

	struct
	{
		class UObject*                 WorldContextObject;
		class AActor*                  pTarget;
		struct FLinearColor            TweenFrom;
		struct FLinearColor            TweenTo;
		struct FHorizonTweenEventParameters Param;
		struct FHorizonTweenEventActorColorFromToParameters paramImpl;
		class UHorizonTweenActorColorFromToEvent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.pTarget = pTarget;
	params.TweenFrom = TweenFrom;
	params.TweenTo = TweenTo;
	params.Param = Param;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (paramImpl != nullptr)
		*paramImpl = params.paramImpl;

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenWidgetMoveFromToEvent.GetEventParamImpl
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FHorizonTweenEventWidgetMoveFromToParameters ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

struct FHorizonTweenEventWidgetMoveFromToParameters UHorizonTweenWidgetMoveFromToEvent::GetEventParamImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenWidgetMoveFromToEvent.GetEventParamImpl");

	struct
	{
		struct FHorizonTweenEventWidgetMoveFromToParameters ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenWidgetMoveFromToEvent.GetCurrentLerp
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector2D UHorizonTweenWidgetMoveFromToEvent::GetCurrentLerp()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenWidgetMoveFromToEvent.GetCurrentLerp");

	struct
	{
		struct FVector2D               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenWidgetRotatorFromToEvent.GetEventParamImpl
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FHorizonTweenEventWidgetRotatorFromToParameters ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

struct FHorizonTweenEventWidgetRotatorFromToParameters UHorizonTweenWidgetRotatorFromToEvent::GetEventParamImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenWidgetRotatorFromToEvent.GetEventParamImpl");

	struct
	{
		struct FHorizonTweenEventWidgetRotatorFromToParameters ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenWidgetRotatorFromToEvent.GetCurrentLerp
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UHorizonTweenWidgetRotatorFromToEvent::GetCurrentLerp()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenWidgetRotatorFromToEvent.GetCurrentLerp");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenWidgetScaleFromToEvent.GetEventParamImpl
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FHorizonTweenEventWidgetScaleFromToParameters ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

struct FHorizonTweenEventWidgetScaleFromToParameters UHorizonTweenWidgetScaleFromToEvent::GetEventParamImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenWidgetScaleFromToEvent.GetEventParamImpl");

	struct
	{
		struct FHorizonTweenEventWidgetScaleFromToParameters ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenWidgetScaleFromToEvent.GetCurrentLerp
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector2D UHorizonTweenWidgetScaleFromToEvent::GetCurrentLerp()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenWidgetScaleFromToEvent.GetCurrentLerp");

	struct
	{
		struct FVector2D               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenWidgetSheerFromToEvent.GetEventParamImpl
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FHorizonTweenEventWidgetSheerFromToParameters ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

struct FHorizonTweenEventWidgetSheerFromToParameters UHorizonTweenWidgetSheerFromToEvent::GetEventParamImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenWidgetSheerFromToEvent.GetEventParamImpl");

	struct
	{
		struct FHorizonTweenEventWidgetSheerFromToParameters ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenWidgetSheerFromToEvent.GetCurrentLerp
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector2D UHorizonTweenWidgetSheerFromToEvent::GetCurrentLerp()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenWidgetSheerFromToEvent.GetCurrentLerp");

	struct
	{
		struct FVector2D               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenWidgetColorFromToEvent.GetEventParamImpl
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FHorizonTweenEventWidgetColorFromToParameters ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

struct FHorizonTweenEventWidgetColorFromToParameters UHorizonTweenWidgetColorFromToEvent::GetEventParamImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenWidgetColorFromToEvent.GetEventParamImpl");

	struct
	{
		struct FHorizonTweenEventWidgetColorFromToParameters ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenWidgetColorFromToEvent.GetCurrentLerp
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FLinearColor UHorizonTweenWidgetColorFromToEvent::GetCurrentLerp()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenWidgetColorFromToEvent.GetCurrentLerp");

	struct
	{
		struct FLinearColor            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenWidgetMoveSplinePathEvent.GetEventParamImpl
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FHorizonTweenEventWidgetMoveSplinePathParameters ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

struct FHorizonTweenEventWidgetMoveSplinePathParameters UHorizonTweenWidgetMoveSplinePathEvent::GetEventParamImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenWidgetMoveSplinePathEvent.GetEventParamImpl");

	struct
	{
		struct FHorizonTweenEventWidgetMoveSplinePathParameters ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HorizonTween.HorizonTweenWidgetMoveSplinePathEvent.GetCurrentLerp
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UHorizonTweenWidgetMoveSplinePathEvent::GetCurrentLerp()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizonTween.HorizonTweenWidgetMoveSplinePathEvent.GetCurrentLerp");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
