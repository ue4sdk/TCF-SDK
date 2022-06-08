#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YPlayerUIComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass YPlayerUIComponent.YPlayerUIComponent_C
// 0x0060 (0x0118 - 0x00B8)
class UYPlayerUIComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FYPlayerFactionLevelUpData                  QueuedFactionLevelUp;                                     // 0x00C0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               HasFactionLevelUpQueued;                                  // 0x00E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00E9(0x0007) MISSED OFFSET
	TArray<struct FDataTableRowHandle>                 ContractClaimedShow;                                      // 0x00F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UWBP_Rewards_Popup_C*                        CurrentRewardWidget;                                      // 0x0100(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnFInishedShowingRewards;                                 // 0x0108(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass YPlayerUIComponent.YPlayerUIComponent_C"));
		return ptr;
	}


	void IsShowingRewardWidgetCurrently(bool* Result);
	class UWBP_Rewards_Popup_C* DetermineRewardWidget();
	void ShowPlayerQuarterUnlocks();
	void ShowTwitchDropRewards(TArray<struct FYInventoryItem>* GrantedItems);
	void ShowInsurancePackagePopup(const struct FYInsurancePayoutPackage& Package, int Index);
	void ShowDailyCratePopup(const struct FString& generatorId, TArray<struct FYInventoryItem> crateItems);
	void ShowRewardsFTUE(TArray<struct FYInventoryItem> Items);
	void ShowFactionLevelUp(const struct FYPlayerFactionLevelUpData& YPlayerFactionLevelUpData);
	void TryShowContractRewards(bool ForceShow, struct FDataTableRowHandle* contractRowHandle);
	void ReceiveBeginPlay();
	void OnLocalPlayerFactionLevelUp_Event_1(const struct FYPlayerFactionLevelUpData& playerFactionLevelUpData);
	void TryPopQueuedFactionLevelUp();
	void OnRewardsReceivedFromMetaQuest_Event_1(TArray<struct FYInventoryItem> rewardItems);
	void OnGeneratorCollectionSuccessful_Event_1(const struct FString& generatorId, TArray<struct FYInventoryItem> crateItems);
	void OnClaimInsurancePayoutPackage_Event_1(const struct FYInsurancePayoutPackage& Package, int Index);
	void ExecuteUbergraph_YPlayerUIComponent(int EntryPoint);
	void OnFInishedShowingRewards__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
