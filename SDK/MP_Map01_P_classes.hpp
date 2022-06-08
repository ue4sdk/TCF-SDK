#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MP_Map01_P_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MP_Map01_P.MP_Map01_P_C
// 0x0028 (0x02F8 - 0x02D0)
class AMP_Map01_P_C : public AYLevelScript
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	bool                                               recordProfiles;                                           // 0x02D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               serverPerfRunning;                                        // 0x02D9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x6];                                       // 0x02DA(0x0006) MISSED OFFSET
	struct FString                                     timeSeriesSpecifier;                                      // 0x02E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	class ALevelSequenceActor*                         Sequence_MatchEcape_2_ExecuteUbergraph_MP_Map01_P_RefProperty;// 0x02F0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass MP_Map01_P.MP_Map01_P_C"));
		return ptr;
	}


	void CaptureServerPerf();
	void CaptureAutomationServerPerf();
	void BndEvt__TriggerVolume5_2_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void ReceiveBeginPlay();
	void ToggleEndOfMatchLevelVisibility(bool IsVisible);
	void CancelMatchEscapeSequence(class UYSpectateComponent* spectateComponent);
	void PlayMatchEscapeSequence(class UYSpectateComponent* spectateComponent);
	void ExecuteUbergraph_MP_Map01_P(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
