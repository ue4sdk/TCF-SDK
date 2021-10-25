// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YGlobalAudio_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YGlobalAudio_BP.YGlobalAudio_BP_C.BP_OnEnteredEndOfMatch
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// EYPlayerMatchFinishedResult    Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYGlobalAudio_BP_C::BP_OnEnteredEndOfMatch(EYPlayerMatchFinishedResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function YGlobalAudio_BP.YGlobalAudio_BP_C.BP_OnEnteredEndOfMatch");

	struct
	{
		EYPlayerMatchFinishedResult    Result;
	} params;

	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}


// Function YGlobalAudio_BP.YGlobalAudio_BP_C.BP_OnLoadingScreenStart
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UYGlobalAudio_BP_C::BP_OnLoadingScreenStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function YGlobalAudio_BP.YGlobalAudio_BP_C.BP_OnLoadingScreenStart");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YGlobalAudio_BP.YGlobalAudio_BP_C.Push
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USoundMix*               soundMixModifier               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Context                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UYGlobalAudio_BP_C::Push(class USoundMix* soundMixModifier, const struct FString& Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function YGlobalAudio_BP.YGlobalAudio_BP_C.Push");

	struct
	{
		class USoundMix*               soundMixModifier;
		struct FString                 Context;
	} params;

	params.soundMixModifier = soundMixModifier;
	params.Context = Context;

	UObject::ProcessEvent(fn, &params);
}


// Function YGlobalAudio_BP.YGlobalAudio_BP_C.ClearAll
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Context                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UYGlobalAudio_BP_C::ClearAll(const struct FString& Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function YGlobalAudio_BP.YGlobalAudio_BP_C.ClearAll");

	struct
	{
		struct FString                 Context;
	} params;

	params.Context = Context;

	UObject::ProcessEvent(fn, &params);
}


// Function YGlobalAudio_BP.YGlobalAudio_BP_C.BP_OnInit
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UYGlobalAudio_BP_C::BP_OnInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function YGlobalAudio_BP.YGlobalAudio_BP_C.BP_OnInit");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YGlobalAudio_BP.YGlobalAudio_BP_C.BP_OnDropPodIntroStart
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UYGlobalAudio_BP_C::BP_OnDropPodIntroStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function YGlobalAudio_BP.YGlobalAudio_BP_C.BP_OnDropPodIntroStart");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YGlobalAudio_BP.YGlobalAudio_BP_C.BP_OnMatchJoined
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UYGlobalAudio_BP_C::BP_OnMatchJoined()
{
	static auto fn = UObject::FindObject<UFunction>("Function YGlobalAudio_BP.YGlobalAudio_BP_C.BP_OnMatchJoined");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YGlobalAudio_BP.YGlobalAudio_BP_C.BP_OnDropPodIntroEnd
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UYGlobalAudio_BP_C::BP_OnDropPodIntroEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function YGlobalAudio_BP.YGlobalAudio_BP_C.BP_OnDropPodIntroEnd");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YGlobalAudio_BP.YGlobalAudio_BP_C.BP_OnStationStart
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UYGlobalAudio_BP_C::BP_OnStationStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function YGlobalAudio_BP.YGlobalAudio_BP_C.BP_OnStationStart");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YGlobalAudio_BP.YGlobalAudio_BP_C.BP_OnDropPodIntroSkipped
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UYGlobalAudio_BP_C::BP_OnDropPodIntroSkipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function YGlobalAudio_BP.YGlobalAudio_BP_C.BP_OnDropPodIntroSkipped");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YGlobalAudio_BP.YGlobalAudio_BP_C.Pop
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USoundMix*               soundMixModifier               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Context                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UYGlobalAudio_BP_C::Pop(class USoundMix* soundMixModifier, const struct FString& Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function YGlobalAudio_BP.YGlobalAudio_BP_C.Pop");

	struct
	{
		class USoundMix*               soundMixModifier;
		struct FString                 Context;
	} params;

	params.soundMixModifier = soundMixModifier;
	params.Context = Context;

	UObject::ProcessEvent(fn, &params);
}


// Function YGlobalAudio_BP.YGlobalAudio_BP_C.ExecuteUbergraph_YGlobalAudio_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYGlobalAudio_BP_C::ExecuteUbergraph_YGlobalAudio_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function YGlobalAudio_BP.YGlobalAudio_BP_C.ExecuteUbergraph_YGlobalAudio_BP");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
