#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PlayerBIHookComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerBIHookComponent_BP.PlayerBIHookComponent_BP_C
// 0x00F8 (0x01B0 - 0x00B8)
class UPlayerBIHookComponent_BP_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FTimerHandle                                TimerHandleSendLaserDrill;                                // 0x00C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FYLaserDrillActivityStats                   LaserDrillEvent;                                          // 0x00C8(0x00E0) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class AActor*                                      LaserDrill;                                               // 0x01A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass PlayerBIHookComponent_BP.PlayerBIHookComponent_BP_C"));
		return ptr;
	}


	void GetPlayerDistanceTo(class AActor* actorContext, float* Distance);
	void SendInteractedWIthLaserDrill(const struct FYLaserDrillActivityStats& anyAnalyticsStruct, class AActor* LaserDrill);
	void SendLaserDrillBiHookNow();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnTrySending();
	void RestartTrySendingTimer(float Time);
	void ExecuteUbergraph_PlayerBIHookComponent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
