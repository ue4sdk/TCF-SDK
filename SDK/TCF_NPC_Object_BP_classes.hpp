#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_NPC_Object_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass NPC_Object_BP.NPC_Object_BP_C
// 0x0010 (0x02A0 - 0x0290)
class ANPC_Object_BP_C : public AYNPCObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UYObjectInteractionComponent*                YObjectInteraction;                                       // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass NPC_Object_BP.NPC_Object_BP_C");
		return ptr;
	}


	void SendBIStationInteractionEvent();
	void TryPlayVoiceOver();
	void BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_0_OnPlayerInteractionCompleted__DelegateSignature(EYInteractionType interactionType, class AYPlayerController_Match* interactingPlayer, bool perfectInteraction);
	void OnSceneRemoved_Event_1(const struct FDataTableRowHandle& sceneRowHandle);
	void ExecuteUbergraph_NPC_Object_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
