#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AA_BossHunt_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AA_BossHunt_BP.AA_BossHunt_BP_C
// 0x01A4 (0x03E4 - 0x0240)
class AAA_BossHunt_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UYActivityComponent*                         YActivityComponent;                                       // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UYPingableComponent*                         YPingable;                                                // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UYMapMarkerComponent*                        YMapMarker;                                               // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UYPersistentDataAISquad*                     SpawnedBossSquad;                                         // 0x0268(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<class APlayerController*, struct FYBossEncounterTrackingData> BIDamageMap;                                              // 0x0270(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	struct FTimerHandle                                BIEncounterTimer;                                         // 0x02C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Reinforcements01RadiusSpawnMin;                           // 0x02C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Reinforcements01RadiusSpawnMax;                           // 0x02CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Reinforcements02RadiusSpawnMin;                           // 0x02D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Reinforcements02RadiusSpawnMax;                           // 0x02D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AYAICharacter*                               SpawnedBossCharacter;                                     // 0x02D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<class AActor*, float>                         DamagePerParticipant;                                     // 0x02E0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	TArray<class AActor*>                              Boss_PlrDealtDmg;                                         // 0x0330(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	struct FDataTableRowHandle                         Ann_HalfHP;                                               // 0x0340(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         Ann_BossDeath;                                            // 0x0350(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         Ann_FirstDmg;                                             // 0x0360(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	bool                                               IsFirstCharacterSpawn;                                    // 0x0370(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0371(0x0003) MISSED OFFSET
	float                                              LastBossHealth;                                           // 0x0374(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               BossWasKilled;                                            // 0x0378(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0379(0x0003) MISSED OFFSET
	float                                              Reinforcement02DelayFromDT;                               // 0x037C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UYPersistentDataAISquad*>             SpawnedReinforcementSquads;                               // 0x0380(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class AActor*                                      DamageCauser;                                             // 0x0390(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               BossEncounterCurrentlyActive;                             // 0x0398(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0399(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBossSquadSpawned;                                       // 0x03A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0399(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FDataTableRowHandle                         MaterialDropOnDMG;                                        // 0x03B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	float                                              DmgThresholdForDrop;                                      // 0x03C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CurrentDmgTaken;                                          // 0x03C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MinDMGThreshold;                                          // 0x03C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MaxDMGThreshold;                                          // 0x03CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class AYPlayerState*>                       DMGContributors;                                          // 0x03D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	int                                                ScoreOnDeath;                                             // 0x03E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AA_BossHunt_BP.AA_BossHunt_BP_C"));
		return ptr;
	}


	void AddDMGtakentoCurrentDMGTaken(float B);
	void ResetThreshold();
	void DropMaterialsOnDMG();
	bool IsOverDMGThreshold();
	void OnRep_BossWasKilled();
	void GetPlayerLocationClosestToBoss(const struct FVector& SpawnLocation, bool* FoundPlayer, struct FVector* Location);
	void SpawnReinforcementSquad(const struct FVector& Spawn_Location_Override, class UYPersistentDataAISquad** PersistentSquadObject);
	void GetCurrentBossHealth(float* HEALTH);
	void CheckEncounterOverForBI();
	void RecordDamageEventForBI(bool IsDamageToBoss, float Damage, class APlayerController* Player, class ACharacter* BossCharacter);
	void OnBossDied(class AYAICharacter* characterDied, class AActor* killer);
	void BossDamage(bool IsDamageToBoss, float DamageAmount, class APlayerController* Player, class ACharacter* BossCharacter);
	void Boss_Reinforcement01();
	void Boss_Reinforcement02();
	void Boss_Reinforcement03();
	void ReinforcementsEQSDone(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);
	void OnAISpawned_Event_1(class AYAICharacter* characterSpawned);
	void OnTakeDamage_Event_1(const struct FYDealtDamageData& Data);
	void OnDealDamage_Event_1(const struct FYDealtDamageData& Data);
	void BossTakesDamage(const struct FYDealtDamageData& Data);
	void BossDealsDamage(const struct FYDealtDamageData& Data);
	void CheckHealth();
	void CheckDamage();
	void Ann_HalfHealth();
	void Ann_FirstDamage();
	void Ann_BossKilled();
	void BossCharacterSpawned(class AYAICharacter* SpawnedBossCharacter);
	void BossGotKilled();
	void CurrentHealthChangedDelegate_Event_1(float CurrentHealth, class AActor* Instigator);
	void SpawnPrimaryReinforcements();
	void SecondaryEQSFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);
	void SpawnSecondaryReinforcements(float Delay);
	void PrimarySquadDied(class UYPersistentDataAISquad* squadDied, class AActor* killer);
	void SecondarySquadDied(class UYPersistentDataAISquad* squadDied, class AActor* killer);
	void Force_Spawn_Boss_Hunt();
	void SpawnBoss();
	void UpdateMapMarkerProgressUntilBossSpawn(int Current, int Max);
	void AnnounceBossRevealed();
	void AIStateChanged_Event_1(EYAIState oldState, EYAIState currentState);
	void SetHealthToLastKnownValue();
	void Spawn_via_EQS(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);
	void RunSpawningEQS();
	void BndEvt__YActivityComponent_K2Node_ComponentBoundEvent_1_OnSetupComplete__DelegateSignature();
	void ExecuteUbergraph_AA_BossHunt_BP(int EntryPoint);
	void OnBossSquadSpawned__DelegateSignature(class UYPersistentDataAISquad* PersistentSquadObject);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
