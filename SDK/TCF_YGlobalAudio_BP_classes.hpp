#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YGlobalAudio_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass YGlobalAudio_BP.YGlobalAudio_BP_C
// 0x0050 (0x0080 - 0x0030)
class UYGlobalAudio_BP_C : public UYGlobalAudio
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FDataTableRowHandle                         Music_Station;                                            // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	class UYGameInstance*                              OwningGameInstance;                                       // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USoundBase*                                  SFX_EvacShip;                                             // 0x0050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAudioComponent*                             SFX_SpaceShip_Component;                                  // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FString                                     GlobalAudioContext;                                       // 0x0060(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	class USoundMix*                                   DropPodIntroMix;                                          // 0x0070(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USoundMix*                                   MatchJoinedSoundMix;                                      // 0x0078(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass YGlobalAudio_BP.YGlobalAudio_BP_C");
		return ptr;
	}


	void BP_OnEnteredEndOfMatch(EYPlayerMatchFinishedResult Result);
	void BP_OnLoadingScreenStart();
	void Push(class USoundMix* soundMixModifier, const struct FString& Context);
	void ClearAll(const struct FString& Context);
	void BP_OnInit();
	void BP_OnDropPodIntroStart();
	void BP_OnMatchJoined();
	void BP_OnDropPodIntroEnd();
	void BP_OnStationStart();
	void BP_OnDropPodIntroSkipped();
	void Pop(class USoundMix* soundMixModifier, const struct FString& Context);
	void ExecuteUbergraph_YGlobalAudio_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
