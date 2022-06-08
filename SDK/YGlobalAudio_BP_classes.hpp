#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YGlobalAudio_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass YGlobalAudio_BP.YGlobalAudio_BP_C
// 0x0058 (0x0090 - 0x0038)
class UYGlobalAudio_BP_C : public UYGlobalAudio
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UYGameInstance*                              OwningGameInstance;                                       // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FString                                     GlobalAudioContext;                                       // 0x0048(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	class USoundMix*                                   MIX_SFX_Match_Mute;                                       // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USoundMix*                                   MIX_SFX_Station_Mute;                                     // 0x0060(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USoundMix*                                   MIX_MUS_Match_Mute;                                       // 0x0068(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USoundMix*                                   MIX_MUS_Station_Mute;                                     // 0x0070(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USoundMix*                                   MIX_Station_PlayerMovement;                               // 0x0078(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USoundMix*                                   MIX_StationMenuDucking;                                   // 0x0080(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USoundMix*                                   Mix_MuteMenuClicks;                                       // 0x0088(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass YGlobalAudio_BP.YGlobalAudio_BP_C"));
		return ptr;
	}


	void ClearAll(const struct FString& Context);
	void BP_OnDropPodIntroStart();
	void Push(class USoundMix* soundMixModifier, const struct FString& Context);
	void BP_OnMatchJoined();
	void BP_OnDropPodIntroEnd();
	void BP_OnEnteredEndOfMatch(EYPlayerMatchFinishedResult Result);
	void BP_OnDropPodIntroSkipped();
	void Clear(class USoundMix* soundMixModifier, const struct FString& Context);
	void BP_OnLeavingEndOfMatch();
	void BP_OnLoadingScreenStart();
	void BP_OnCharacterSelectionStart();
	void BP_OnInit();
	void BP_OnStationStart();
	void BP_OnStationSceneOpen();
	void BP_OnStationSceneClose();
	void ExecuteUbergraph_YGlobalAudio_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
