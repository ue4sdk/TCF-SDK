#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PlayerCharacterOutlineComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C
// 0x0031 (0x00E9 - 0x00B8)
class UPlayerCharacterOutlineComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FTimerHandle                                TimerHandle_ShowLastDamagedPawn;                          // 0x00C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              TimeWhenLastDamagedLocal;                                 // 0x00C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               ShowRedOutlineDueDamage;                                  // 0x00CC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	float                                              DurationShowHostileOutline;                               // 0x00D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	class AYPlayerState*                               YPlayerStateOwner;                                        // 0x00D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AYPlayerCharacter*                           YPlayerCharacterOwner;                                    // 0x00E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               ShowGoldOutline;                                          // 0x00E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C"));
		return ptr;
	}


	void GetDamageOutlineDuration(float* Damage_Outline_Hostile_Players_Duration);
	void DetermineStencilValueForSquad(int* StencilValue);
	void ReceiveBeginPlay();
	void YOnPlayerStateSet_Event(class AYPlayerState* PlayerState);
	void UpdateOutline();
	void SetStencilValueOnAllRelevantMeshes(int StencilValue, bool RenderInStencil);
	void OnMeshInitializedDelegate_Event_1();
	void HealthEmptyDelegate_Event_1(class UYHealthComponent* healthComponent, class AActor* Instigator);
	void BindingToPlayerState();
	void BindingToPlayerCharacter();
	void OnMeshViewStateChanged_Event_1(EYMeshViewState newViewState);
	void OnDamageTimerFInished();
	void OnTakeDamage_Event_1(const struct FYDealtDamageData& Data);
	void TriggerRedOutline();
	void OnSquadInfoUpdated_Event_1(TArray<struct FYOutpostFriendInfo> squadMemberInfos);
	void OnBagMeshChangedEvent_Event_1();
	void ExecuteUbergraph_PlayerCharacterOutlineComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
