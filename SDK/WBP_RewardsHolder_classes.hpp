#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_RewardsHolder_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_RewardsHolder.WBP_RewardsHolder_C
// 0x0038 (0x02A8 - 0x0270)
class UWBP_RewardsHolder_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWrapBox*                                    RewardItemsContainer;                                     // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UYTextBlock*                                 Txt_RewardsItemCategory;                                  // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FText                                       LabelText;                                                // 0x0288(0x0020) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_RewardsHolder.WBP_RewardsHolder_C"));
		return ptr;
	}


	void SetShopItemsUnlocked(TArray<struct FYContractUnlockReward> Items);
	void SetContractsUnlocked(TArray<struct FDataTableRowHandle>* unlockedContracts);
	void SetContractRewards(TArray<struct FYContractReward> YContractReward, const struct FString& contractId);
	void SetLabelText(const struct FText& txt);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_RewardsHolder(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
