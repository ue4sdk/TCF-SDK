#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YReplayPlayerController_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass YReplayPlayerController_BP.YReplayPlayerController_BP_C
// 0x0061 (0x0A59 - 0x09F8)
class AYReplayPlayerController_BP_C : public APRO_PlayerController_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UReplayControllerComponent_BP_C*             ReplayControllerComponent_BP;                             // 0x0A00(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                 // 0x0A08(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FVector                                     Locatopm;                                                 // 0x0A14(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                ReplayCharsCurrentIndex;                                  // 0x0A20(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                ReplayCharsMaxIndex;                                      // 0x0A24(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Paused;                                                   // 0x0A28(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0A29(0x0003) MISSED OFFSET
	float                                              ReplayTimeDilation;                                       // 0x0A2C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class AYReplaySpectatorPawn_BP_C*>          ReplaySpectatorPawn;                                      // 0x0A30(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	class UReplayPlayer_WBP_C*                         DebugReplayPlayer_WBP;                                    // 0x0A40(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class APRO_PlayerCharacter_C*>              Chars;                                                    // 0x0A48(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	bool                                               StartFollowingFirstPlayerASAP;                            // 0x0A58(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass YReplayPlayerController_BP.YReplayPlayerController_BP_C"));
		return ptr;
	}


	void InpActEvt_Debug_Replay_ToggleHUD_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_Debug_Replay_FreeFlyMode_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_Debug_Replay_SpeedDecrease_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_Debug_Replay_SpeedIncrease_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_Debug_Replay_NextPlayer_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_Debug_Replay_PreviousPlayer_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_Debug_Replay_Pause_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Debug_Replay_Screenshots_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Debug_Replay_GoBackToStart_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void UpdateMaxCharacterIndex();
	void SwitchReplayToNextPlayer();
	void SwitchReplayToPreviousPlayer();
	void SwitchReplayToFreeFlyMode();
	void ToggleDemoPause();
	void DemoIncreaseTimeDilation();
	void DemoDecreaseTimeDilation();
	void DemoGoBackToStart();
	void ChangePlayerIndex(int DesiredIndex);
	void OnTrySwitchToFirstPlayer();
	void SetupTimerToViewFirstPlayerInDemo();
	void RequestTimeJumpTo(int Time);
	void UpdateTimeDilation(float TimeDilation);
	void AdvanceVeryShortTimeStepIfPaused();
	void RewindVeryShortTimeStepIfPaused();
	void EnsureReplayIsPaused();
	void JumpToMarker(const struct FYReplayMarker& YReplayMarker);
	void ExecuteUbergraph_YReplayPlayerController_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
