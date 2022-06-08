#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Onboarding_FactionShop_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Onboarding_FactionShop.Onboarding_FactionShop_C
// 0x0090 (0x0270 - 0x01E0)
class UOnboarding_FactionShop_C : public UMS_Line_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FDataTableRowHandle                         factionShopSceneRowHandle;                                // 0x01E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	bool                                               CanEndSellStep;                                           // 0x01F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01F9(0x0007) MISSED OFFSET
	struct FTimerHandle                                HighlightFactionShopTimerHandle;                          // 0x0200(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         ShopNPCHandle_Korolev;                                    // 0x0208(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         ShopNPCHandle_ICA;                                        // 0x0218(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         ShopNPCHandle_Osiris;                                     // 0x0228(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FGuid                                       SelectTabHighlightGUID;                                   // 0x0238(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         SellTabHighlightRow;                                      // 0x0248(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         ShopSceneRowHandle;                                       // 0x0258(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FName                                       FactionMarkerId;                                          // 0x0268(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Onboarding_FactionShop.Onboarding_FactionShop_C"));
		return ptr;
	}


	void SetSellTabHighlightActive(bool IsActive);
	bool IsFactionShopNPC(class AYNPCObject* NPCObject);
	void HighlightClosestFactionShop();
	void SetFactionShopHighlightingActive(bool IsActive);
	void UnbindDelegatesForHighlighting();
	void BindDelegatesForHighlighting();
	void OnCustomStep1(EYMissionResultType Result);
	void OnCustomStep2(EYMissionResultType Result);
	void OnInitialStep();
	void BP_StartMetaQuest();
	void ClientBindShopOpenDelegate();
	void OnSceneRemoved(const struct FDataTableRowHandle& sceneRowHandle);
	void OnShopTabTypeOpened_TabStep(EYShopTabType ShopTabType);
	void OnFactionShopOpened(EYFaction Faction, EYShopTabType ActiveTabType);
	void ClientBindTabTypeDelegate();
	void ClientBindSellDelegates();
	void ServerTryToCompleteSellStep();
	void UnbindSellDelegatesAndComplete();
	void OnItemScrapped(const struct FString& Error);
	void OnLastStepComplete(EYMissionResultType Result);
	void ClientUnbindSellDelegates();
	void ExecuteUbergraph_Onboarding_FactionShop(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
