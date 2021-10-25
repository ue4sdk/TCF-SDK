#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_ItemTileBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_ItemTileBase.WBP_ItemTileBase_C
// 0x0058 (0x05D8 - 0x0580)
class UWBP_ItemTileBase_C : public UYWidget_ItemContainer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0580(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FDataTableRowHandle                         DoubleLeftClickAudioHandle;                               // 0x0588(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         RightClickAudioHandle;                                    // 0x0598(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	bool                                               IsInInventoryView;                                        // 0x05A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x05A9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    SellScreenDoubleClickOfStashItem;                         // 0x05B0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x05A9(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               ItemWidgetIsPartOfSellList;                               // 0x05C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x7];                                       // 0x05C1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    SellScreenDoubleClickOfSellListItem;                      // 0x05C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData03[0xF];                                       // 0x05C1(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_ItemTileBase.WBP_ItemTileBase_C");
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
	void ExecuteUbergraph_WBP_ItemTileBase(int EntryPoint);
	void SellScreenDoubleClickOfSellListItem__DelegateSignature(class UYWidget_ItemContainer* itemContainer);
	void SellScreenDoubleClickOfStashItem__DelegateSignature(class UYWidget_ItemContainer* itemContainer);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
