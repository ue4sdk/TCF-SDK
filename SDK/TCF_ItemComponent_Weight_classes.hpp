#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_ItemComponent_Weight_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ItemComponent_Weight.ItemComponent_Weight_C
// 0x00B0 (0x03B0 - 0x0300)
class UItemComponent_Weight_C : public UYWidget_ItemComponentBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0300(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FScriptMulticastDelegate                    OnWeightTextSet;                                          // 0x0308(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0308(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FYInventoryItem                             UpdatedInventoryItem;                                     // 0x0318(0x0098) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass ItemComponent_Weight.ItemComponent_Weight_C");
		return ptr;
	}


	void BP_HandleSetItem();
	void OnInitialized();
	void OnStashItemUpdatedCallback(class UYStateInventoryComponent* stateInventoryComponent, const struct FYInventoryItem& Item);
	void Refresh();
	void OnPlayerSetItemUpdatedCallback(class UYStateInventoryComponent* stateInventoryComponent, const struct FYInventoryItem& Item, EYPlayerSetType equippedSetType);
	void ExecuteUbergraph_ItemComponent_Weight(int EntryPoint);
	void OnWeightTextSet__DelegateSignature(const struct FText& WeightText);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
