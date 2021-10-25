#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AIAggroComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AIAggroComponent_BP.AIAggroComponent_BP_C
// 0x0010 (0x01A0 - 0x0190)
class UAIAggroComponent_BP_C : public UYAIAggroComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0190(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UBlackboardComponent*                        BlackboardComponent;                                      // 0x0198(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass AIAggroComponent_BP.AIAggroComponent_BP_C");
		return ptr;
	}


	void UpdateVisibilityValues(class AActor* targetActor, const struct FYAITargetInfo& targetInfo);
	void TrySetReplicatedCombatTarget(class AActor* Actor);
	void UpdateBlackboard(class AActor* AggroActor, const struct FYAITargetInfo& targetInfo);
	void ReceiveBeginPlay();
	void BP_UpdateAggroTarget(class AActor* Actor, const struct FYAITargetInfo& aiTargetInfo);
	void ExecuteUbergraph_AIAggroComponent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
