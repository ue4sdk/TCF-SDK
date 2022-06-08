#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BackgroundDropPodSpawner_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BackgroundDropPodSpawner_BP.BackgroundDropPodSpawner_BP_C
// 0x0048 (0x0100 - 0x00B8)
class UBackgroundDropPodSpawner_BP_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UClass* /*AActor*/                           LoadedDropPodClass;                                       // 0x00C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AActor*                                      CLassToLoad;                                              // 0x00C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                        AssetClass;                                               // 0x00D0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	class APlayerState*                                ReturnValue;                                              // 0x00F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BackgroundDropPodSpawner_BP.BackgroundDropPodSpawner_BP_C"));
		return ptr;
	}


	void IsPlayerInAnotherTeam(class APlayerState* PlayerStateSpawned, bool* Result);
	void OnPlayerSpawnedAt(class AYPlayerState* PlayerState, class AActor* startActor);
	void OnLoaded_765CCE974A1B409C950961841FA0B596(class UClass* /*UObject*/ Loaded);
	void ReceiveBeginPlay();
	void ClientSpawnPodAt(const struct FVector& Location);
	void SpawnPodAt(const struct FVector& Location);
	void OnDebugSpawnPod(const struct FVector& Location);
	void BP_OnPlayerSpawnBackgroundDropPod_Event_1(class APlayerController* Controller, const struct FVector& introStartLocation);
	void ExecuteUbergraph_BackgroundDropPodSpawner_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
