#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YNpcVoiceOverComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass YNpcVoiceOverComponent_BP.YNpcVoiceOverComponent_BP_C
// 0x0092 (0x0152 - 0x00C0)
class UYNpcVoiceOverComponent_BP_C : public UYNpcVoiceOverComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FDataTableRowHandle                         TalkToBadumMission;                                       // 0x00C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         TalkToBadumBeforeCraftingMission;                         // 0x00D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         ContractAcceptedVO;                                       // 0x00E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	int                                                AmountOfMainContractsToGetForOnboarding;                  // 0x00F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	struct FDataTableRowHandle                         ContractClaimedVO;                                        // 0x0100(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         FactionLevelUpVO;                                         // 0x0110(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         ItemPurchasedVO;                                          // 0x0120(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         FactionItemUnlockedVO;                                    // 0x0130(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         FactionContractUnlockedVO;                                // 0x0140(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	bool                                               AlreadyPlayedFirstGreetingThisSession;                    // 0x0150(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               PlayerIsInteracting;                                      // 0x0151(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass YNpcVoiceOverComponent_BP.YNpcVoiceOverComponent_BP_C"));
		return ptr;
	}


	void OnItemPurchased(EYPurchaseWeaponShopItemStatus purchaseWeaponShopItemStatus);
	void UnbindOnFactionLevelUp();
	void FactionLevelUp(const struct FYPlayerFactionLevelUpData& playerFactionLevelUpData);
	bool ShouldBlockVoForOnboarding();
	void UnbindOnContractStatusChanged();
	void BindOnContractStatusChanged();
	void Get_VOBy_Contract_Data(const struct FYActiveContractUIData& ContractData, bool* FoundVO, struct FDataTableRowHandle* voRowHandle);
	void ContractStatusChanged(const struct FYActiveContractsUIData& activeContractsUIData);
	void OnInteractionEnded(const struct FDataTableRowHandle& sceneRowHandle);
	void OnInteractionStarted(EYInteractionType interactionType, class AYPlayerController_Match* interactingPlayer);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void BP_BindOnEvents();
	void InitializationComplete(const struct FYRuntimeInitializationContext& Result);
	void ExecuteUbergraph_YNpcVoiceOverComponent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
