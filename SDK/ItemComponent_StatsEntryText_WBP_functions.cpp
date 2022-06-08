// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ItemComponent_StatsEntryText_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ItemComponent_StatsEntryText_WBP.ItemComponent_StatsEntryText_WBP_C.BP_OnStatsNumberSet
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FYStatsTypeDataEntry    statTypeDataEntry              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UItemComponent_StatsEntryText_WBP_C::BP_OnStatsNumberSet(const struct FYStatsTypeDataEntry& statTypeDataEntry)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_StatsEntryText_WBP.ItemComponent_StatsEntryText_WBP_C.BP_OnStatsNumberSet"));

	struct
	{
		struct FYStatsTypeDataEntry    statTypeDataEntry;
	} params = {};

	params.statTypeDataEntry = statTypeDataEntry;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ItemComponent_StatsEntryText_WBP.ItemComponent_StatsEntryText_WBP_C.BP_ShowStatPossibleRange
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          minPossibleValue               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          maxPossibleValue               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItemComponent_StatsEntryText_WBP_C::BP_ShowStatPossibleRange(float minPossibleValue, float maxPossibleValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_StatsEntryText_WBP.ItemComponent_StatsEntryText_WBP_C.BP_ShowStatPossibleRange"));

	struct
	{
		float                          minPossibleValue;
		float                          maxPossibleValue;
	} params = {};

	params.minPossibleValue = minPossibleValue;
	params.maxPossibleValue = maxPossibleValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ItemComponent_StatsEntryText_WBP.ItemComponent_StatsEntryText_WBP_C.ExecuteUbergraph_ItemComponent_StatsEntryText_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItemComponent_StatsEntryText_WBP_C::ExecuteUbergraph_ItemComponent_StatsEntryText_WBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_StatsEntryText_WBP.ItemComponent_StatsEntryText_WBP_C.ExecuteUbergraph_ItemComponent_StatsEntryText_WBP"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ItemComponent_StatsEntryText_WBP.ItemComponent_StatsEntryText_WBP_C.StatsNumberSet__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Label                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UItemComponent_StatsEntryText_WBP_C::StatsNumberSet__DelegateSignature(const struct FText& Label, const struct FText& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_StatsEntryText_WBP.ItemComponent_StatsEntryText_WBP_C.StatsNumberSet__DelegateSignature"));

	struct
	{
		struct FText                   Label;
		struct FText                   Value;
	} params = {};

	params.Label = Label;
	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
