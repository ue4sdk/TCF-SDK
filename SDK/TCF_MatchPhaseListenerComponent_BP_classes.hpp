#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_MatchPhaseListenerComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MatchPhaseListenerComponent_BP.MatchPhaseListenerComponent_BP_C
// 0x0028 (0x0228 - 0x0200)
class UMatchPhaseListenerComponent_BP_C : public USceneComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0200(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	struct FScriptMulticastDelegate                    OnReplicatedMatchPhaseDataUpdated;                        // 0x0208(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0208(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptMulticastDelegate                    OnMatchPhaseVisualsUpdated;                               // 0x0218(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0218(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass MatchPhaseListenerComponent_BP.MatchPhaseListenerComponent_BP_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void OnReplicatedMatchPhaseDataUpdated_Event(const struct FYMatchPhaseData& newMatchPhaseData);
	void OnMatchPhaseVisualsUpdatedEvent(const struct FYMatchPhaseVisualRow& VisualMatchPhaseData);
	void ExecuteUbergraph_MatchPhaseListenerComponent_BP(int EntryPoint);
	void OnMatchPhaseVisualsUpdated__DelegateSignature(const struct FYMatchPhaseVisualRow& VisualData);
	void OnReplicatedMatchPhaseDataUpdated__DelegateSignature(const struct FYMatchPhaseData& newMatchPhaseData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
