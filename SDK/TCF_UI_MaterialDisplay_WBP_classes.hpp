#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_UI_MaterialDisplay_WBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_MaterialDisplay_WBP.UI_MaterialDisplay_WBP_C
// 0x0000 (0x0338 - 0x0338)
class UUI_MaterialDisplay_WBP_C : public UYWidget_ValueDisplay
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass UI_MaterialDisplay_WBP.UI_MaterialDisplay_WBP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
