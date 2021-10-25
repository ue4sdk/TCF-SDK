#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Attachments_List_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_Attachments_List.WBP_Attachments_List_C
// 0x01C8 (0x0610 - 0x0448)
class UWBP_Attachments_List_C : public UYWidget_Inventory_Base
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0448(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWBP_FullMessage_C*                          WBP_FullMessage;                                          // 0x0450(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Inventory_PlayerSet_DropArea_Attachments_C* WBP_Inventory_PlayerSet_DropArea_Attachments;             // 0x0458(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWrapBox*                                    WrapBox_1;                                                // 0x0460(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	bool                                               IsTooltip;                                                // 0x0468(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0469(0x0007) MISSED OFFSET
	TMap<EYModificationSlotType, class UWBP_Item_Preview_Attachments_Btn_C*> ModificationSlotItemContainers;                           // 0x0470(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	struct FYItemModsInfo                              CachedModsInfo;                                           // 0x04C0(0x0060) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FYInventoryItem                             CachedInventoryItem;                                      // 0x0520(0x0098) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	EYInsuranceStatus                                  CachedIsParentWeaponInsured;                              // 0x05B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x7];                                       // 0x05B9(0x0007) MISSED OFFSET
	TMap<int, EYModificationSlotType>                  ExecutionData;                                            // 0x05C0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_Attachments_List.WBP_Attachments_List_C");
		return ptr;
	}


	void HasCreatedAttachmentWidgets(bool* HasCreatedWidgets);
	void UpdateItemModsInfo();
	void CreateAttachment(const struct FYResourceManagerRequestEntry& Data);
	void OnAttachmentMoved(class UDragDropOperation* DragDropOperation);
	void ModItemDragDoneCallback();
	void SetItemModsInfo(const struct FYItemModsInfo& InItemModsInfo, const struct FYInventoryItem& inInventoryItem);
	bool BP_CanMoveItem(const struct FYInventoryItem& inventoryItem, class UUserWidget* InWidget);
	void CreateModAttachmentItemPlates();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnInitialized();
	void OnInvalidDragDropOperationDetected();
	void OnValidDragDropOperationDetected();
	void ExecuteSpawnAction(const struct FYResourceManagerRequestEntry& Data);
	void ExecuteUbergraph_WBP_Attachments_List(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
