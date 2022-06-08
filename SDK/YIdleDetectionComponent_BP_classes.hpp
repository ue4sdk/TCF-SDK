#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YIdleDetectionComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C
// 0x0058 (0x0110 - 0x00B8)
class UYIdleDetectionComponent_BP_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FVector                                     WorldLocation_Previous;                                   // 0x00C0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsInStation;                                              // 0x00CC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	float                                              matchMaxIdleTime;                                         // 0x00D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              stationMaxIdleTime;                                       // 0x00D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                TimesCheckedDuringWarning;                                // 0x00D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	struct FTimerHandle                                TH_ShowKickWarning;                                       // 0x00E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    ShowIdleKickWarning;                                      // 0x00E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    HideIdleKickWarning;                                      // 0x00F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class APRO_PlayerCharacter_C*                      Character;                                                // 0x0108(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void CheckForIdleness();
	void ClientSendPlayerToOutpost();
	void OnEnterDBNOEvent_Event_2(class AController* Controller);
	void SendPlayerToOutpost();
	void ShowKickWarning();
	void ResetWarning();
	void Client_ShowIdleKickWarning();
	void Client_HideIdleKickWarning();
	void ServerKillPlayer();
	void OnInitializationComplete(const struct FYRuntimeInitializationContext& Result);
	void OnRequestIdleKick_Event_1();
	void TrigerIdleKickExecution();
	void ExecuteUbergraph_YIdleDetectionComponent_BP(int EntryPoint);
	void HideIdleKickWarning__DelegateSignature();
	void ShowIdleKickWarning__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
