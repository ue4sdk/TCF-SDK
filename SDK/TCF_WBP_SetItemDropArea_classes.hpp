#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_SetItemDropArea_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_SetItemDropArea.WBP_SetItemDropArea_C
// 0x0049 (0x0309 - 0x02C0)
class UWBP_SetItemDropArea_C : public UYWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            DragDetected;                                             // 0x02C8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UImage*                                      Image_66;                                                 // 0x02D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	EYInventoryPlace                                   placeToDrop;                                              // 0x02D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02D9(0x0007) MISSED OFFSET
	class UWBP_Inventory_SplitItem_Modal_C*            SplitStackWidget;                                         // 0x02E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         SFX_Drop;                                                 // 0x02E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FScriptMulticastDelegate                    OnStashDrop;                                              // 0x02F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x02F8(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               inSellScreen;                                             // 0x0308(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_SetItemDropArea.WBP_SetItemDropArea_C"));
		return ptr;
	}


	bool Should_Show_Split_Stack_Widget(class UYInventoryDragAndDropPayload* Payload);
	void ShowSplitStackWidget(const struct FYInventoryItem& Item);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void SetAreaColor(const struct FLinearColor& Specified_Color);
	void OnQuickMenuClosedCalled(bool Visibility);
	void OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnSplitCurrentDraggingStack();
	void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void ListenForSplitAfterDrag();
	void StopListeningForSplitAfterDrag();
	void OnDragCancelledOrDropped(class UDragDropOperation* Operation);
	void ExecuteUbergraph_WBP_SetItemDropArea(int EntryPoint);
	void OnStashDrop__DelegateSignature(class UDragDropOperation* DragDropOperation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
