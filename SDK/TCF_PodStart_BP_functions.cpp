// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_PodStart_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PodStart_BP.PodStart_BP_C.StartIntroSequence
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  startActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APodStart_BP_C::StartIntroSequence(class AActor* startActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PodStart_BP.PodStart_BP_C.StartIntroSequence");

	struct
	{
		class AActor*                  startActor;
	} params;

	params.startActor = startActor;

	UObject::ProcessEvent(fn, &params);
}


// Function PodStart_BP.PodStart_BP_C.OnIntroFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APodStart_BP_C::OnIntroFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function PodStart_BP.PodStart_BP_C.OnIntroFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PodStart_BP.PodStart_BP_C.ExecuteUbergraph_PodStart_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APodStart_BP_C::ExecuteUbergraph_PodStart_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PodStart_BP.PodStart_BP_C.ExecuteUbergraph_PodStart_BP");

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
