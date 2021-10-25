// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_ItemStatsFunctionLibrary_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ItemStatsFunctionLibrary.ItemStatsFunctionLibrary_C.DetemineSuffix
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EYItemStatsType                Selection                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   suffix                         (CPF_Parm, CPF_OutParm)

void UItemStatsFunctionLibrary_C::DetemineSuffix(EYItemStatsType Selection, class UObject* __WorldContext, struct FText* suffix)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemStatsFunctionLibrary.ItemStatsFunctionLibrary_C.DetemineSuffix");

	struct
	{
		EYItemStatsType                Selection;
		class UObject*                 __WorldContext;
		struct FText                   suffix;
	} params;

	params.Selection = Selection;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (suffix != nullptr)
		*suffix = params.suffix;
}


// Function ItemStatsFunctionLibrary.ItemStatsFunctionLibrary_C.ShowAsPercentage
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EYItemStatsType                Selection                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UItemStatsFunctionLibrary_C::ShowAsPercentage(EYItemStatsType Selection, class UObject* __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemStatsFunctionLibrary.ItemStatsFunctionLibrary_C.ShowAsPercentage");

	struct
	{
		EYItemStatsType                Selection;
		class UObject*                 __WorldContext;
		bool                           Result;
	} params;

	params.Selection = Selection;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ItemStatsFunctionLibrary.ItemStatsFunctionLibrary_C.IsHigherStatPositive
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EYItemStatsType                Selection                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UItemStatsFunctionLibrary_C::IsHigherStatPositive(EYItemStatsType Selection, class UObject* __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemStatsFunctionLibrary.ItemStatsFunctionLibrary_C.IsHigherStatPositive");

	struct
	{
		EYItemStatsType                Selection;
		class UObject*                 __WorldContext;
		bool                           Result;
	} params;

	params.Selection = Selection;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ItemStatsFunctionLibrary.ItemStatsFunctionLibrary_C.DetermineForcedMaxFloatFractionDigits
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EYItemStatsType                Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItemStatsFunctionLibrary_C::DetermineForcedMaxFloatFractionDigits(EYItemStatsType Type, class UObject* __WorldContext, int* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemStatsFunctionLibrary.ItemStatsFunctionLibrary_C.DetermineForcedMaxFloatFractionDigits");

	struct
	{
		EYItemStatsType                Type;
		class UObject*                 __WorldContext;
		int                            Result;
	} params;

	params.Type = Type;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ItemStatsFunctionLibrary.ItemStatsFunctionLibrary_C.ShouldDisplayAsTextInsteadOfFloat
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EYItemStatsType                Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Return                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UItemStatsFunctionLibrary_C::ShouldDisplayAsTextInsteadOfFloat(EYItemStatsType Type, class UObject* __WorldContext, bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemStatsFunctionLibrary.ItemStatsFunctionLibrary_C.ShouldDisplayAsTextInsteadOfFloat");

	struct
	{
		EYItemStatsType                Type;
		class UObject*                 __WorldContext;
		bool                           Return;
	} params;

	params.Type = Type;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Return != nullptr)
		*Return = params.Return;
}


// Function ItemStatsFunctionLibrary.ItemStatsFunctionLibrary_C.TransformFloatToText
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            MaxFractionDigitsAllowed       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Result                         (CPF_Parm, CPF_OutParm)

void UItemStatsFunctionLibrary_C::TransformFloatToText(float Value, int MaxFractionDigitsAllowed, class UObject* __WorldContext, struct FText* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemStatsFunctionLibrary.ItemStatsFunctionLibrary_C.TransformFloatToText");

	struct
	{
		float                          Value;
		int                            MaxFractionDigitsAllowed;
		class UObject*                 __WorldContext;
		struct FText                   Result;
	} params;

	params.Value = Value;
	params.MaxFractionDigitsAllowed = MaxFractionDigitsAllowed;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ItemStatsFunctionLibrary.ItemStatsFunctionLibrary_C.FormatTextString
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsPecentage                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ShowAsBasePercentage           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ShowSign                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ShowValueAsText                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            MaxFractionDigitsAllowed       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   suffix                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Result                         (CPF_Parm, CPF_OutParm)

void UItemStatsFunctionLibrary_C::FormatTextString(bool IsPecentage, bool ShowAsBasePercentage, float Value, bool ShowSign, bool ShowValueAsText, int MaxFractionDigitsAllowed, const struct FText& suffix, class UObject* __WorldContext, struct FText* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemStatsFunctionLibrary.ItemStatsFunctionLibrary_C.FormatTextString");

	struct
	{
		bool                           IsPecentage;
		bool                           ShowAsBasePercentage;
		float                          Value;
		bool                           ShowSign;
		bool                           ShowValueAsText;
		int                            MaxFractionDigitsAllowed;
		struct FText                   suffix;
		class UObject*                 __WorldContext;
		struct FText                   Result;
	} params;

	params.IsPecentage = IsPecentage;
	params.ShowAsBasePercentage = ShowAsBasePercentage;
	params.Value = Value;
	params.ShowSign = ShowSign;
	params.ShowValueAsText = ShowValueAsText;
	params.MaxFractionDigitsAllowed = MaxFractionDigitsAllowed;
	params.suffix = suffix;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ItemStatsFunctionLibrary.ItemStatsFunctionLibrary_C.SetupTextWidgetsBasedOnItemStats
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYStatsTypeDataEntry    YStatsTypeDataEntry            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UTextBlock*              TextWidget_TitleName           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTextBlock*              TextWidget_BaseValue           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 Widget_ParentShowDifference    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTextBlock*              TextWidget_DifferenceValue     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   OptionalTitleNameOverride      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItemStatsFunctionLibrary_C::SetupTextWidgetsBasedOnItemStats(const struct FYStatsTypeDataEntry& YStatsTypeDataEntry, class UTextBlock* TextWidget_TitleName, class UTextBlock* TextWidget_BaseValue, class UWidget* Widget_ParentShowDifference, class UTextBlock* TextWidget_DifferenceValue, const struct FText& OptionalTitleNameOverride, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemStatsFunctionLibrary.ItemStatsFunctionLibrary_C.SetupTextWidgetsBasedOnItemStats");

	struct
	{
		struct FYStatsTypeDataEntry    YStatsTypeDataEntry;
		class UTextBlock*              TextWidget_TitleName;
		class UTextBlock*              TextWidget_BaseValue;
		class UWidget*                 Widget_ParentShowDifference;
		class UTextBlock*              TextWidget_DifferenceValue;
		struct FText                   OptionalTitleNameOverride;
		class UObject*                 __WorldContext;
	} params;

	params.YStatsTypeDataEntry = YStatsTypeDataEntry;
	params.TextWidget_TitleName = TextWidget_TitleName;
	params.TextWidget_BaseValue = TextWidget_BaseValue;
	params.Widget_ParentShowDifference = Widget_ParentShowDifference;
	params.TextWidget_DifferenceValue = TextWidget_DifferenceValue;
	params.OptionalTitleNameOverride = OptionalTitleNameOverride;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
