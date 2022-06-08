#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_ItemTileBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_ItemTileBase.WBP_ItemTileBase_C
// 0x0098 (0x0670 - 0x05D8)
class UWBP_ItemTileBase_C : public UYWidget_ItemContainer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05D8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FDataTableRowHandle                         DoubleLeftClickAudioHandle;                               // 0x05E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         RightClickAudioHandle;                                    // 0x05F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	bool                                               IsInInventoryView;                                        // 0x0600(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0601(0x0007) MISSED OFFSET
	struct FMulticastScriptDelegate                    SellScreenDoubleClickOfStashItem;                         // 0x0608(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               ItemWidgetIsPartOfSellList;                               // 0x0618(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0619(0x0007) MISSED OFFSET
	struct FMulticastScriptDelegate                    SellScreenDoubleClickOfSellListItem;                      // 0x0620(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FDataTableRowHandle                         HoveredSound;                                             // 0x0630(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)
	struct FDataTableRowHandle                         UnhoveredSound;                                           // 0x0640(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)
	struct FDataTableRowHandle                         PressedSound;                                             // 0x0650(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)
	struct FDataTableRowHandle                         ReleasedSound;                                            // 0x0660(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_ItemTileBase.WBP_ItemTileBase_C"));
		return ptr;
	}


	void AutoMoveItemToTarget(int Amount);
	bool IsInteractable();
	void NotifyWeaponInspectionInteraction();
	void Notify_Sell_Screen_Interaction();
	void Should_Show_Alternate_Icon(bool* ShouldShowAlternateIcon);
	void Find_Target_Component_Id_Based_on_Context(int* TargetInventoryId, EYPlayerSetType* targetSetType);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent);
	void Hovered();
	void Unhovered();
	void Pressed(bool StartedDragging, bool IsRightMouseButton);
	void Released();
	void DragDone();
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void ClearSelection();
	void DropAnim();
	void ExecuteUbergraph_WBP_ItemTileBase(int EntryPoint);
	void SellScreenDoubleClickOfSellListItem__DelegateSignature(class UYWidget_ItemContainer* itemContainer);
	void SellScreenDoubleClickOfStashItem__DelegateSignature(class UYWidget_ItemContainer* itemContainer);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
