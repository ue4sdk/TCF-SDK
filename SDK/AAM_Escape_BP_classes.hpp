#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AAM_Escape_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AAM_Escape_BP.AAM_Escape_BP_C
// 0x00A2 (0x039A - 0x02F8)
class AAAM_Escape_BP_C : public AAAM_Base_BP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	TArray<class AAA_EscapeShipTerminal_BP_C*>         EscapeActors_All;                                         // 0x0300(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	TArray<class APlayerState*>                        RecentlySpawned;                                          // 0x0310(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	int                                                NumberOfEvacLocationsToFind;                              // 0x0320(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                NumberOfEvacLocationsToPick;                              // 0x0324(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                maxPlayersPerEvac;                                        // 0x0328(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               wasSuccessful;                                            // 0x032C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x032D(0x0003) MISSED OFFSET
	int                                                NumberOfEvacLocationsSpawned;                             // 0x0330(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0334(0x0004) MISSED OFFSET
	TMap<class APlayerState*, struct FST_EscapeActors> PlayerstateToEscapeActorsMap;                             // 0x0338(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	bool                                               foundTutorialEvac;                                        // 0x0388(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0389(0x0003) MISSED OFFSET
	float                                              BeginnerEvac_MinDistance;                                 // 0x038C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UDataTable*                                  CustomEvacDistancesDT;                                    // 0x0390(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsDebug;                                                  // 0x0398(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               isSoloPlayer;                                             // 0x0399(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AAM_Escape_BP.AAM_Escape_BP_C"));
		return ptr;
	}


	void CheckForBeginnerMatch(bool* BeginnerMatch);
	void FindClosestEvac(TArray<float>* AllEscapeDistances, float* ClosestEvacDistance);
	bool ShouldUseCustomEvac(class APawn* Pawn);
	TArray<float> GetEvacLocationsForLevel(const struct FString& LevelName, bool* CustomDistancesFound);
	void SelectCustomEvacLocations(TMap<float, class AAA_EscapeShipTerminal_BP_C*> EscapeActorsByDistance, class APawn* Pawn, TArray<class AAA_EscapeShipTerminal_BP_C*> CustomEscapeActors, TArray<float>* EscapeDistances, int* NumberOfEvacLocationsToPick);
	void FindEscapeLocationForPlayers();
	void ApplyMapSpecificTuningValues();
	void FindEscapeLocation(class APlayerState* PlayerState, TArray<class AAA_EscapeShipTerminal_BP_C*>* EscapeActors);
	void ReceiveBeginPlay();
	void OnPlayerJoined(class APlayerState* PlayerState);
	void OnEscapeLocationsCached();
	void OnActivitiesSpawned_Event_1();
	void BP_OnInitialActorSpawningFinished_Event_1(class AYActivityActorManager* activityActorManager);
	void OnPlayerLeft(class APlayerState* PlayerState);
	void DEBUG_EnableAllEvacLocations();
	void ExecuteUbergraph_AAM_Escape_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
