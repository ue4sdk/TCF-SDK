#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_MineralBIHookComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MineralBIHookComponent_BP.MineralBIHookComponent_BP_C
// 0x0068 (0x0118 - 0x00B0)
class UMineralBIHookComponent_BP_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FString                                     MineralID;                                                // 0x00B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FString                                     MineralType;                                              // 0x00C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	struct FString                                     UsedToolID;                                               // 0x00D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	class AYPlayerController*                          CurrentPlayer;                                            // 0x00E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                SendBiDataTimer;                                          // 0x00F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              GameTimeStartedInteractingWithMineral;                    // 0x00F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                ChunksRemaining;                                          // 0x00FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                HitCount;                                                 // 0x0100(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                ChunksTotal;                                              // 0x0104(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<int>                                        ChunkIDsDestroyed;                                        // 0x0108(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass MineralBIHookComponent_BP.MineralBIHookComponent_BP_C"));
		return ptr;
	}


	void OnDamageTaken(const struct FYDealtDamageData& damageData);
	void Reset();
	void TrySendBiDataAndReset();
	void InitializeForPlayer(const struct FYDealtDamageData& damageData, class AYPlayerController* PlayerController);
	void OnTakeDamage_Event_1(const struct FYDealtDamageData& Data);
	void OnInactivityTimerElapsed();
	void OnChunkDestroyed_Event_1(int chunkID, const struct FVector& chunkLocation, const struct FVector& chunkExtends);
	void InitializeMineralBIHook(const struct FString& MineralType);
	void NotifyActorIsDepleted();
	void ExecuteUbergraph_MineralBIHookComponent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
