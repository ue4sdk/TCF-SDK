// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_IntroActor_Base_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IntroActor_Base_BP.IntroActor_Base_BP_C.StartIntroSequence
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  startActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AIntroActor_Base_BP_C::StartIntroSequence(class AActor* startActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroActor_Base_BP.IntroActor_Base_BP_C.StartIntroSequence");

	struct
	{
		class AActor*                  startActor;
	} params;

	params.startActor = startActor;

	UObject::ProcessEvent(fn, &params);
}


// Function IntroActor_Base_BP.IntroActor_Base_BP_C.IntroSequenceFinished__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AIntroActor_Base_BP_C::IntroSequenceFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroActor_Base_BP.IntroActor_Base_BP_C.IntroSequenceFinished__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
