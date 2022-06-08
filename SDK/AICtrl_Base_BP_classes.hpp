#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AICtrl_Base_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AICtrl_Base_BP.AICtrl_Base_BP_C
// 0x0020 (0x0408 - 0x03E8)
class AAICtrl_Base_BP_C : public AYAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UAIAggroComponent_BP_C*                      AIAggroComponent_BP;                                      // 0x03F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UYAIPerceptionComponent*                     YAIPerception;                                            // 0x03F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AAICharacter_Base_BP_C*                      PossesedAICharacter;                                      // 0x0400(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AICtrl_Base_BP.AICtrl_Base_BP_C"));
		return ptr;
	}


	class UYAIAggroComponent* GetAggroComponent();
	void SetAIReactionContext(EYAIReactionContext newReactionContext);
	void InitializeAIBehavior();
	void BP_OnInitializeBehavior();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_AICtrl_Base_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
