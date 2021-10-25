#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_ItemComponent_StackAmountBase_WBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ItemComponent_StackAmountBase_WBP.ItemComponent_StackAmountBase_WBP_C
// 0x0008 (0x0328 - 0x0320)
class UItemComponent_StackAmountBase_WBP_C : public UYWidget_ItemComponentTextAmount
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0320(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass ItemComponent_StackAmountBase_WBP.ItemComponent_StackAmountBase_WBP_C");
		return ptr;
	}


	void BP_HandleSetItem();
	void BP_OnAmountUpdated();
	void ExecuteUbergraph_ItemComponent_StackAmountBase_WBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
