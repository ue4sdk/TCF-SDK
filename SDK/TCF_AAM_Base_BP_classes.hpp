#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AAM_Base_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AAM_Base_BP.AAM_Base_BP_C
// 0x0028 (0x02E8 - 0x02C0)
class AAAM_Base_BP_C : public AYActivityActorManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	float                                              InitialStartDelayVarianceMultipler_RespawnCheck;          // 0x02D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                MatchStartActorsLeftToSpawn;                              // 0x02D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                RespawnTimerHandle;                                       // 0x02D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                InitialRespawnTimerHandle;                                // 0x02E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AAM_Base_BP.AAM_Base_BP_C"));
		return ptr;
	}


	void DetermineMinimumDistanceToPlayers(float* Result);
	class AActor* BP_SpawnActivityActorFromToken(const struct FYSpawnActivityActorTokenData& requestData);
	struct FString BP_GetDebugDescription();
	void RequestActorSpawnToken(class AYActivityLocation* Location, class UYActivityRegisterComponent* RegisterComponentOverride);
	void RequestActorSpawnTokens(int Amount);
	void GetActorClassToSpawn(class AYActivityLocation* Location, class UClass** ActivityActorClass);
	void OnRespawnCheck();
	void ProgressInitialSpawning();
	void SetupMatchStartSpawning();
	void OnProgressInitialSpawning();
	void ReceiveBeginPlay();
	void SetupLoopingRespawnChecks();
	void RespawnCheck();
	void DebugRequestTriggerActivity(class APlayerController* requestingPlayer);
	void OnSpawnTokensEmpty_Event_1();
	void UnbindFromTokensEmpty();
	void ExecuteUbergraph_AAM_Base_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
