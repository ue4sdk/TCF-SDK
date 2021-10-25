#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_ItemComponent_SetItem_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ItemComponent_SetItem.ItemComponent_SetItem_C
// 0x00C8 (0x03E8 - 0x0320)
class UItemComponent_SetItem_C : public UYWidget_ItemComponentSetItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0320(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FYInventoryItem                             inventoryItem;                                            // 0x0328(0x0098) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	EYPlayerSetType                                    ItemSlotType;                                             // 0x03C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	EYInventoryListType                                ItemListType;                                             // 0x03C1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsSet;                                                    // 0x03C2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x5];                                       // 0x03C3(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnItemScrapped;                                           // 0x03C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x03C3(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptMulticastDelegate                    OnItemScrapValueChanged;                                  // 0x03D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x03D8(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass ItemComponent_SetItem.ItemComponent_SetItem_C"));
		return ptr;
	}


	void SetInventoryType(EYInventoryListType listType);
	void SetInventoryItemData(const struct FYInventoryItem& Item, EYPlayerSetType ItemSlotType);
	void BP_SetWeaponCounters(const struct FYUIWeaponAmmoData& uiWeaponAmmoData);
	void BP_HandleSetItem();
	void ExecuteUbergraph_ItemComponent_SetItem(int EntryPoint);
	void OnItemScrapValueChanged__DelegateSignature(const struct FText& ScrapValueText);
	void OnItemScrapped__DelegateSignature(const struct FYInventoryItem& Item);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
