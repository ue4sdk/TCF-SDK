#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AB_Turret_Pawn_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AB_Turret_Pawn_BP.AB_Turret_Pawn_BP_C
// 0x0070 (0x03F8 - 0x0388)
class AAB_Turret_Pawn_BP_C : public AYTurretPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FTimerHandle                                MontageTimerHandle;                                       // 0x0390(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystem*                             DestroyExplosion;                                         // 0x0398(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         TurretShootAudio;                                         // 0x03A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	float                                              DeployTime;                                               // 0x03B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03B4(0x0004) MISSED OFFSET
	struct FDataTableRowHandle                         TurretDeployAudio;                                        // 0x03B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	bool                                               shouldAttackPlayers;                                      // 0x03C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               PlayedDestructionVFX;                                     // 0x03C9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x6];                                       // 0x03CA(0x0006) MISSED OFFSET
	struct FDataTableRowHandle                         TurretActiveLoopSfx;                                      // 0x03D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         TurretDestroyedSfx;                                       // 0x03E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	class UAudioComponent*                             TurretActiveSfxHandle;                                    // 0x03F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AB_Turret_Pawn_BP.AB_Turret_Pawn_BP_C"));
		return ptr;
	}


	void OnMontageFinished();
	void IsPlayingMontage(bool* Result);
	void ReceiveBeginPlay();
	void OnTurretFired();
	void MulticastOnTurretFired();
	void PlayDeploy();
	void OnDeath(class AActor* instigatorActor);
	void Setup_Outlines();
	void Play_OroDeploy_VO();
	void Play_OroShooting_VO();
	void Play_OroIdle_VO();
	void Play_OroSwitchTargets_VO();
	void Play_OroDestroyed_VO();
	void Play_OroShutdown_VO();
	void ReceiveDestroyed();
	void TryPlayExplosionVFX();
	void TurretStateChangedDelegate_Event_1(EYTurretState newState);
	void FadeOutLoopSfx();
	void ExecuteUbergraph_AB_Turret_Pawn_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
