#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Y_UIFunctionLibrary_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Y_UIFunctionLibrary_BP.Y_UIFunctionLibrary_BP_C
// 0x0000 (0x0028 - 0x0028)
class UY_UIFunctionLibrary_BP_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Y_UIFunctionLibrary_BP.Y_UIFunctionLibrary_BP_C");
		return ptr;
	}


	static void GetFilterTypeFromItemType(EYItemType ItemType, bool isTool, class UObject* __WorldContext, TEnumAsByte<En_FilterCategoryCollection>* FilterType);
	static void CreateGenericToolTip(const struct FText& Text, class UObject* __WorldContext, class UWBP_Generic_ToolTip_C** Widget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
