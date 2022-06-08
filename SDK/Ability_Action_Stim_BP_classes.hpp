#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Ability_Action_Stim_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Action_Stim_BP.Ability_Action_Stim_BP_C
// 0x0050 (0x01D8 - 0x0188)
class UAbility_Action_Stim_BP_C : public UYCharacterAbilityComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0188(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FDataTableRowHandle                         StimSpinupLoopAudioRowHandle;                             // 0x0190(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	class UAudioComponent*                             StimLoopingAudioComponent;                                // 0x01A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              FadeOutAudioLoopSound;                                    // 0x01A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01AC(0x0004) MISSED OFFSET
	struct FDataTableRowHandle                         StimFinishAudioRowHandle;                                 // 0x01B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         StimActivateAudioRowHandle;                               // 0x01C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	class UCurveFloat*                                 StimPitchModificationCurve;                               // 0x01D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Ability_Action_Stim_BP.Ability_Action_Stim_BP_C"));
		return ptr;
	}


	void StopLoopSfx();
	void PlayLoopSfx();
	void OnAbilityStateChanged_Event_1(EYAbilityState State, EYAbilityState oldState);
	void ReceiveBeginPlay();
	void PlayFinishedSfx();
	void PlayActivateSfx();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_Ability_Action_Stim_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
