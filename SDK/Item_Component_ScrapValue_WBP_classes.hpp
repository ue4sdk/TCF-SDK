#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Item_Component_ScrapValue_WBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Item_Component_ScrapValue_WBP.Item_Component_ScrapValue_WBP_C
// 0x00F8 (0x0408 - 0x0310)
class UItem_Component_ScrapValue_WBP_C : public UYWidget_ItemComponentBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0310(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UHorizontalBox*                              HorizontalBox_3;                                          // 0x0318(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UYTextBlock*                                 scrapValue;                                               // 0x0320(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UUI_ImageBase_WBP_C*                         UI_ImageBase_WBP;                                         // 0x0328(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FYInventoryItem                             UpdatedInventoryItem;                                     // 0x0330(0x00D8) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass Item_Component_ScrapValue_WBP.Item_Component_ScrapValue_WBP_C"));
		return ptr;
	}


	void GetFactionIncrementAsText(struct FText* FactionIncrementValue);
	void GetScrapReturnAsText(struct FText* CurrencyReturn);
	void Construct();
	void OnItemSet();
	void SetSellValuesOnItemPreview(const struct FString& factionRowId);
	void OnStashUpdated(class UYStateInventoryComponent* stateInventoryComponent);
	void OnInitialized();
	void OnStashItemUpdatedCallback(class UYStateInventoryComponent* stateInventoryComponent, const struct FYInventoryItem& Item);
	void OnPlayerSetItemUpdatedCallback(class UYStateInventoryComponent* stateInventoryComponent, const struct FYInventoryItem& Item, EYPlayerSetType equippedSetType);
	void Refresh();
	void ExecuteUbergraph_Item_Component_ScrapValue_WBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
