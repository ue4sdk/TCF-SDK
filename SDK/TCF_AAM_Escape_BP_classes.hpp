#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AAM_Escape_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AAM_Escape_BP.AAM_Escape_BP_C
// 0x0092 (0x037A - 0x02E8)
class AAAM_Escape_BP_C : public AAAM_Base_BP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	TArray<class AAA_EscapeShipTerminal_BP_C*>         EscapeActors_All;                                         // 0x02F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	TArray<class APlayerState*>                        RecentlySpawned;                                          // 0x0300(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	bool                                               useNewEvacSelectionLogic;                                 // 0x0310(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0311(0x0003) MISSED OFFSET
	int                                                NumberOfEvacLocationsToFind;                              // 0x0314(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                NumberOfEvacLocationsToPick;                              // 0x0318(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                maxPlayersPerEvac;                                        // 0x031C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               wasSuccessful;                                            // 0x0320(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0321(0x0003) MISSED OFFSET
	int                                                NumberOfEvacLocationsSpawned;                             // 0x0324(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<class APlayerState*, struct FST_EscapeActors> PlayerstateToEscapeActorsMap;                             // 0x0328(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	bool                                               isBeginnerMatch;                                          // 0x0378(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               foundTutorialEvac;                                        // 0x0379(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AAM_Escape_BP.AAM_Escape_BP_C"));
		return ptr;
	}


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
