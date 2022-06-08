#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Y_UIFunctionLibrary_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Y_UIFunctionLibrary_BP.Y_UIFunctionLibrary_BP_C
// 0x0000 (0x0030 - 0x0030)
class UY_UIFunctionLibrary_BP_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Y_UIFunctionLibrary_BP.Y_UIFunctionLibrary_BP_C"));
		return ptr;
	}


	static void Get_Correct_Amount(int CostAmout, int itemAmount, class UObject* __WorldContext, int* CorrectAmount);
	static void Get_if_Not_Enough_Money(class APlayerController* PlayerController, const struct FString& callerContext, const struct FYCostEntryRow& CostEntryRow, int itemAmount, class UObject* __WorldContext, bool* NotEnoughMoney);
	static void Update_Customization_State(EYQuickMenuSubScreen QuickMenuSubScreen, class APlayerController* PlayerController, class UObject* __WorldContext);
	static void Get_Filter_Type_from_Vanity_Type(EYVanityType vanityType, class UObject* __WorldContext, TEnumAsByte<En_FilterCategoryCollection>* FilterType);
	static void Get_Filter_Type_from_Customization_Category(EYCustomizationCategory vanityCustomizationType, class UObject* __WorldContext, TEnumAsByte<En_FilterCategoryCollection>* FilterType);
	static void Get_Filter_Type_from_Item_Type(EYItemType ItemType, bool isTool, class UObject* __WorldContext, TEnumAsByte<En_FilterCategoryCollection>* FilterType);
	static void Create_Generic_Tool_Tip(const struct FText& Text, class UObject* __WorldContext, class UWBP_Generic_ToolTip_C** Widget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
