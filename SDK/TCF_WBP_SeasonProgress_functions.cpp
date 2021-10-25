// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_SeasonProgress_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_SeasonProgress.WBP_SeasonProgress_C.BP_OnPlayerSeasonDataUpdated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// int                            CurrentLevel                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            currentXP                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            neededXP                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           HasPurchasedSeasonPass         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SeasonProgress_C::BP_OnPlayerSeasonDataUpdated(int CurrentLevel, int currentXP, int neededXP, bool HasPurchasedSeasonPass)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SeasonProgress.WBP_SeasonProgress_C.BP_OnPlayerSeasonDataUpdated"));

	struct
	{
		int                            CurrentLevel;
		int                            currentXP;
		int                            neededXP;
		bool                           HasPurchasedSeasonPass;
	} params;

	params.CurrentLevel = CurrentLevel;
	params.currentXP = currentXP;
	params.neededXP = neededXP;
	params.HasPurchasedSeasonPass = HasPurchasedSeasonPass;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SeasonProgress.WBP_SeasonProgress_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_SeasonProgress_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SeasonProgress.WBP_SeasonProgress_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SeasonProgress.WBP_SeasonProgress_C.ExecuteUbergraph_WBP_SeasonProgress
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SeasonProgress_C::ExecuteUbergraph_WBP_SeasonProgress(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SeasonProgress.WBP_SeasonProgress_C.ExecuteUbergraph_WBP_SeasonProgress"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
