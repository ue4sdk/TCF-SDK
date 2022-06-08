#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ItemComponent_Clickable_WBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ItemComponent_Clickable_WBP.ItemComponent_Clickable_WBP_C
// 0x04F8 (0x0818 - 0x0320)
class UItemComponent_Clickable_WBP_C : public UYWidget_ItemComponentClickable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0320(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FButtonStyle                                NormalButtonStyle;                                        // 0x0328(0x0278) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FButtonStyle                                HoveredButtonStyle;                                       // 0x05A0(0x0278) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass ItemComponent_Clickable_WBP.ItemComponent_Clickable_WBP_C"));
		return ptr;
	}


	void BP_SetIsSelected(bool IsSelected);
	void Construct();
	void BP_ItemHoveredChanged(bool Hovered);
	void BP_ItemPressed();
	void BP_ItemReleased();
	void ExecuteUbergraph_ItemComponent_Clickable_WBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
