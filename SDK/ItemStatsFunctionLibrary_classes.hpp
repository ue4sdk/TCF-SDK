#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ItemStatsFunctionLibrary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ItemStatsFunctionLibrary.ItemStatsFunctionLibrary_C
// 0x0000 (0x0030 - 0x0030)
class UItemStatsFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass ItemStatsFunctionLibrary.ItemStatsFunctionLibrary_C"));
		return ptr;
	}


	static void ShouldRoundToInt(EYItemStatsType Type, class UObject* __WorldContext, bool* Return);
	static void DetemineSuffix(EYItemStatsType Selection, class UObject* __WorldContext, struct FText* suffix);
	static void ShowAsPercentage(EYItemStatsType Selection, class UObject* __WorldContext, bool* Result);
	static void IsHigherStatPositive(EYItemStatsType Selection, class UObject* __WorldContext, bool* Result);
	static void DetermineForcedMaxFloatFractionDigits(EYItemStatsType Type, class UObject* __WorldContext, int* Result);
	static void ShouldDisplayAsTextInsteadOfFloat(EYItemStatsType Type, class UObject* __WorldContext, bool* Return);
	static void TransformFloatToText(float Value, int MaxFractionDigitsAllowed, class UObject* __WorldContext, struct FText* Result);
	static void FormatTextString(bool IsPecentage, bool ShowAsBasePercentage, float Value, bool ShowSign, bool ShowValueAsText, int MaxFractionDigitsAllowed, const struct FText& suffix, class UObject* __WorldContext, struct FText* Result);
	static void SetupTextWidgetsBasedOnItemStats(const struct FYStatsTypeDataEntry& YStatsTypeDataEntry, class UTextBlock* TextWidget_TitleName, class UTextBlock* TextWidget_BaseValue, class UWidget* Widget_ParentShowDifference, class UTextBlock* TextWidget_DifferenceValue, const struct FText& OptionalTitleNameOverride, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
