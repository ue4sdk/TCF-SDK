#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PodStart_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PodStart_BP.PodStart_BP_C
// 0x0016 (0x0280 - 0x026A)
class APodStart_BP_C : public AIntroActor_Base_BP_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x026A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class AYPodActor*                                  SpawnPodActor;                                            // 0x0278(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass PodStart_BP.PodStart_BP_C"));
		return ptr;
	}


	void StartIntroSequence(class AActor* startActor);
	void OnIntroFinished();
	void ExecuteUbergraph_PodStart_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
