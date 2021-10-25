#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_ItemComponent_ImageAmmoType_WBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ItemComponent_ImageAmmoType_WBP.ItemComponent_ImageAmmoType_WBP_C
// 0x0000 (0x0310 - 0x0310)
class UItemComponent_ImageAmmoType_WBP_C : public UYWidget_ItemComponentImageAmmoType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass ItemComponent_ImageAmmoType_WBP.ItemComponent_ImageAmmoType_WBP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
