#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YPlayerDropPodIntroComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass YPlayerDropPodIntroComponent_BP.YPlayerDropPodIntroComponent_BP_C
// 0x0028 (0x00E0 - 0x00B8)
class UYPlayerDropPodIntroComponent_BP_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class AYPlayerController_Match*                    YPlayerController;                                        // 0x00C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AIntroActor_Base_BP_C*                       IntroActor;                                               // 0x00C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               HasStartedPlayingIntro;                                   // 0x00D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET
	class UClass* /*AActor*/                           IntroActorClass;                                          // 0x00D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass YPlayerDropPodIntroComponent_BP.YPlayerDropPodIntroComponent_BP_C"));
		return ptr;
	}


	void OnRep_HasIntroSequencesEnded();
	void AdjustTowardsGround(float playerHalfHeight, struct FTransform* InTransform, struct FTransform* OutTransform);
	void SpawnIntroActor(class AIntroActor_Base_BP_C** IntroActor, bool* returnResult);
	void EndIntroSequence();
	void StartIntroSequence();
	void ReceiveBeginPlay();
	void IntroSequenceFinished();
	void BP_OnDropPodIntroStarted_Event_1();
	void ExecuteUbergraph_YPlayerDropPodIntroComponent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
