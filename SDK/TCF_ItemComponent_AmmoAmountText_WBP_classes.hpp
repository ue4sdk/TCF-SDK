#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_ItemComponent_AmmoAmountText_WBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ItemComponent_AmmoAmountText_WBP.ItemComponent_AmmoAmountText_WBP_C
// 0x0000 (0x0328 - 0x0328)
class UItemComponent_AmmoAmountText_WBP_C : public UItemComponent_StackAmountBase_WBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass ItemComponent_AmmoAmountText_WBP.ItemComponent_AmmoAmountText_WBP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
