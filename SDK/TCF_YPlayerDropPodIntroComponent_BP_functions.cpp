// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YPlayerDropPodIntroComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YPlayerDropPodIntroComponent_BP.YPlayerDropPodIntroComponent_BP_C.OnRep_HasIntroSequencesEnded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerDropPodIntroComponent_BP_C::OnRep_HasIntroSequencesEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerDropPodIntroComponent_BP.YPlayerDropPodIntroComponent_BP_C.OnRep_HasIntroSequencesEnded");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerDropPodIntroComponent_BP.YPlayerDropPodIntroComponent_BP_C.AdjustTowardsGround
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          playerHalfHeight               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTransform              InTransform                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FTransform              OutTransform                   (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor)

void UYPlayerDropPodIntroComponent_BP_C::AdjustTowardsGround(float playerHalfHeight, struct FTransform* InTransform, struct FTransform* OutTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerDropPodIntroComponent_BP.YPlayerDropPodIntroComponent_BP_C.AdjustTowardsGround");

	struct
	{
		float                          playerHalfHeight;
		struct FTransform              InTransform;
		struct FTransform              OutTransform;
	} params;

	params.playerHalfHeight = playerHalfHeight;

	UObject::ProcessEvent(fn, &params);

	if (InTransform != nullptr)
		*InTransform = params.InTransform;
	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;
}


// Function YPlayerDropPodIntroComponent_BP.YPlayerDropPodIntroComponent_BP_C.SpawnIntroActor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AIntroActor_Base_BP_C*   IntroActor                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           returnResult                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYPlayerDropPodIntroComponent_BP_C::SpawnIntroActor(class AIntroActor_Base_BP_C** IntroActor, bool* returnResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerDropPodIntroComponent_BP.YPlayerDropPodIntroComponent_BP_C.SpawnIntroActor");

	struct
	{
		class AIntroActor_Base_BP_C*   IntroActor;
		bool                           returnResult;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IntroActor != nullptr)
		*IntroActor = params.IntroActor;
	if (returnResult != nullptr)
		*returnResult = params.returnResult;
}


// Function YPlayerDropPodIntroComponent_BP.YPlayerDropPodIntroComponent_BP_C.EndIntroSequence
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerDropPodIntroComponent_BP_C::EndIntroSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerDropPodIntroComponent_BP.YPlayerDropPodIntroComponent_BP_C.EndIntroSequence");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerDropPodIntroComponent_BP.YPlayerDropPodIntroComponent_BP_C.StartIntroSequence
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerDropPodIntroComponent_BP_C::StartIntroSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerDropPodIntroComponent_BP.YPlayerDropPodIntroComponent_BP_C.StartIntroSequence");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerDropPodIntroComponent_BP.YPlayerDropPodIntroComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UYPlayerDropPodIntroComponent_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerDropPodIntroComponent_BP.YPlayerDropPodIntroComponent_BP_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerDropPodIntroComponent_BP.YPlayerDropPodIntroComponent_BP_C.IntroSequenceFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerDropPodIntroComponent_BP_C::IntroSequenceFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerDropPodIntroComponent_BP.YPlayerDropPodIntroComponent_BP_C.IntroSequenceFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerDropPodIntroComponent_BP.YPlayerDropPodIntroComponent_BP_C.BP_OnDropPodIntroStarted_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerDropPodIntroComponent_BP_C::BP_OnDropPodIntroStarted_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerDropPodIntroComponent_BP.YPlayerDropPodIntroComponent_BP_C.BP_OnDropPodIntroStarted_Event_1");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerDropPodIntroComponent_BP.YPlayerDropPodIntroComponent_BP_C.ExecuteUbergraph_YPlayerDropPodIntroComponent_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerDropPodIntroComponent_BP_C::ExecuteUbergraph_YPlayerDropPodIntroComponent_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerDropPodIntroComponent_BP.YPlayerDropPodIntroComponent_BP_C.ExecuteUbergraph_YPlayerDropPodIntroComponent_BP");

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
