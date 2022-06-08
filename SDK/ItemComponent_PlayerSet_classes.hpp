#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ItemComponent_PlayerSet_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ItemComponent_PlayerSet.ItemComponent_PlayerSet_C
// 0x002D (0x033D - 0x0310)
class UItemComponent_PlayerSet_C : public UYWidget_ItemComponentBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0310(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	EYPlayerSetType                                    ItemSlotType;                                             // 0x0318(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0319(0x0007) MISSED OFFSET
	TArray<EYItemType>                                 CompatibleItemTypes;                                      // 0x0320(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)
	class UUserWidget*                                 Tooltip;                                                  // 0x0330(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                inventoryId;                                              // 0x0338(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsAcceptingDragItems;                                     // 0x033C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass ItemComponent_PlayerSet.ItemComponent_PlayerSet_C"));
		return ptr;
	}


	void SetInventoryId(int NewInventoryId);
	void UpdateAmmoWarning();
	void HandleDrop(class UYWidget_ItemContainer* itemWidget, class UDragDropOperation* Operation);
	void Construct();
	void BP_HandleSetItem();
	void ExecuteUbergraph_ItemComponent_PlayerSet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
