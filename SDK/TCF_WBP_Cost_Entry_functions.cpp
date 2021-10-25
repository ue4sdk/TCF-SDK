// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Cost_Entry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Cost_Entry.WBP_Cost_Entry_C.SetShowDisabled
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Disabled                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Cost_Entry_C::SetShowDisabled(bool Disabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Cost_Entry.WBP_Cost_Entry_C.SetShowDisabled");

	struct
	{
		bool                           Disabled;
	} params;

	params.Disabled = Disabled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Cost_Entry.WBP_Cost_Entry_C.SetupTooltipData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Header                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   Description                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   AdditionalHeaderText           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Cost_Entry_C::SetupTooltipData(const struct FText& Header, const struct FText& Description, const struct FText& AdditionalHeaderText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Cost_Entry.WBP_Cost_Entry_C.SetupTooltipData");

	struct
	{
		struct FText                   Header;
		struct FText                   Description;
		struct FText                   AdditionalHeaderText;
	} params;

	params.Header = Header;
	params.Description = Description;
	params.AdditionalHeaderText = AdditionalHeaderText;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Cost_Entry.WBP_Cost_Entry_C.Get_CostItem_ToolTipWidget_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UWBP_Cost_Entry_C::Get_CostItem_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Cost_Entry.WBP_Cost_Entry_C.Get_CostItem_ToolTipWidget_1");

	struct
	{
		class UWidget*                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Cost_Entry.WBP_Cost_Entry_C.ShouldShowDivider
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           shouldShowDivide               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Cost_Entry_C::ShouldShowDivider(bool shouldShowDivide)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Cost_Entry.WBP_Cost_Entry_C.ShouldShowDivider");

	struct
	{
		bool                           shouldShowDivide;
	} params;

	params.shouldShowDivide = shouldShowDivide;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Cost_Entry.WBP_Cost_Entry_C.Setup Contract Reward Faction Progression
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYFaction                      faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            RewardAmount                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Cost_Entry_C::Setup_Contract_Reward_Faction_Progression(EYFaction faction, int RewardAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Cost_Entry.WBP_Cost_Entry_C.Setup Contract Reward Faction Progression");

	struct
	{
		EYFaction                      faction;
		int                            RewardAmount;
	} params;

	params.faction = faction;
	params.RewardAmount = RewardAmount;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Cost_Entry.WBP_Cost_Entry_C.Setup Contract Reward
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 contractId                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FYContractReward        contractReward                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           showDivider                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Cost_Entry_C::Setup_Contract_Reward(const struct FString& contractId, const struct FYContractReward& contractReward, bool showDivider)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Cost_Entry.WBP_Cost_Entry_C.Setup Contract Reward");

	struct
	{
		struct FString                 contractId;
		struct FYContractReward        contractReward;
		bool                           showDivider;
	} params;

	params.contractId = contractId;
	params.contractReward = contractReward;
	params.showDivider = showDivider;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Cost_Entry.WBP_Cost_Entry_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Cost_Entry_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Cost_Entry.WBP_Cost_Entry_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Cost_Entry.WBP_Cost_Entry_C.SetValue
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Cost_Entry_C::SetValue(const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Cost_Entry.WBP_Cost_Entry_C.SetValue");

	struct
	{
		struct FText                   Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Cost_Entry.WBP_Cost_Entry_C.SetImage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D> SoftTexture                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void UWBP_Cost_Entry_C::SetImage(TSoftObjectPtr<class UTexture2D> SoftTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Cost_Entry.WBP_Cost_Entry_C.SetImage");

	struct
	{
		TSoftObjectPtr<class UTexture2D> SoftTexture;
	} params;

	params.SoftTexture = SoftTexture;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Cost_Entry.WBP_Cost_Entry_C.ExecuteUbergraph_WBP_Cost_Entry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Cost_Entry_C::ExecuteUbergraph_WBP_Cost_Entry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Cost_Entry.WBP_Cost_Entry_C.ExecuteUbergraph_WBP_Cost_Entry");

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
