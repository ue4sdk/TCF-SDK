#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Attachments_List_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_Attachments_List.WBP_Attachments_List_C
// 0x0219 (0x06B9 - 0x04A0)
class UWBP_Attachments_List_C : public UYWidget_Inventory_Base
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWBP_FullMessage_C*                          WBP_FullMessage;                                          // 0x04A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Inventory_PlayerSet_DropArea_Attachments_C* WBP_Inventory_PlayerSet_DropArea_Attachments;             // 0x04B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWrapBox*                                    WrapBox_1;                                                // 0x04B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	bool                                               IsTooltip;                                                // 0x04C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04C1(0x0007) MISSED OFFSET
	TMap<EYModificationSlotType, class UWBP_Item_Preview_Attachments_Btn_C*> ModificationSlotItemContainers;                           // 0x04C8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	struct FYItemModsInfo                              CachedModsInfo;                                           // 0x0518(0x0070) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FYInventoryItem                             CachedInventoryItem;                                      // 0x0588(0x00D8) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	EYInsuranceStatus                                  CachedParentWeaponInsuranceStatus;                        // 0x0660(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0661(0x0007) MISSED OFFSET
	TMap<int, EYModificationSlotType>                  ExecutionData;                                            // 0x0668(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	EYInsuranceType                                    CachedParentWeaponInsuranceType;                          // 0x06B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_Attachments_List.WBP_Attachments_List_C"));
		return ptr;
	}


	void ClearItemModsInfo();
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
