// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_StatsProgressBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_StatsProgressBar.WBP_StatsProgressBar_C.BP_OnStatsNumberSet
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FYStatsTypeDataEntry    statTypeDataEntry              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_StatsProgressBar_C::BP_OnStatsNumberSet(const struct FYStatsTypeDataEntry& statTypeDataEntry)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_StatsProgressBar.WBP_StatsProgressBar_C.BP_OnStatsNumberSet"));

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


// Function WBP_StatsProgressBar.WBP_StatsProgressBar_C.SetupProgressWidget
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StatsProgressBar_C::SetupProgressWidget(const struct FText& InText, float progress, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_StatsProgressBar.WBP_StatsProgressBar_C.SetupProgressWidget"));

	struct
	{
		struct FText                   InText;
		float                          progress;
		float                          Value;
	} params = {};

	params.InText = InText;
	params.progress = progress;
	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_StatsProgressBar.WBP_StatsProgressBar_C.ExecuteUbergraph_WBP_StatsProgressBar
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StatsProgressBar_C::ExecuteUbergraph_WBP_StatsProgressBar(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_StatsProgressBar.WBP_StatsProgressBar_C.ExecuteUbergraph_WBP_StatsProgressBar"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
