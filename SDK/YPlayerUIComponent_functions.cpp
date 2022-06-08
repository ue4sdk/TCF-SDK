// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YPlayerUIComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YPlayerUIComponent.YPlayerUIComponent_C.IsShowingRewardWidgetCurrently
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYPlayerUIComponent_C::IsShowingRewardWidgetCurrently(bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerUIComponent.YPlayerUIComponent_C.IsShowingRewardWidgetCurrently"));

	struct
	{
		bool                           Result;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
}


// Function YPlayerUIComponent.YPlayerUIComponent_C.DetermineRewardWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Rewards_Popup_C*    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWBP_Rewards_Popup_C* UYPlayerUIComponent_C::DetermineRewardWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerUIComponent.YPlayerUIComponent_C.DetermineRewardWidget"));

	struct
	{
		class UWBP_Rewards_Popup_C*    ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function YPlayerUIComponent.YPlayerUIComponent_C.ShowPlayerQuarterUnlocks
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerUIComponent_C::ShowPlayerQuarterUnlocks()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerUIComponent.YPlayerUIComponent_C.ShowPlayerQuarterUnlocks"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayerUIComponent.YPlayerUIComponent_C.ShowTwitchDropRewards
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FYInventoryItem> GrantedItems                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UYPlayerUIComponent_C::ShowTwitchDropRewards(TArray<struct FYInventoryItem>* GrantedItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerUIComponent.YPlayerUIComponent_C.ShowTwitchDropRewards"));

	struct
	{
		TArray<struct FYInventoryItem> GrantedItems;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (GrantedItems != nullptr)
		*GrantedItems = params.GrantedItems;
}


// Function YPlayerUIComponent.YPlayerUIComponent_C.ShowInsurancePackagePopup
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYInsurancePayoutPackage Package                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerUIComponent_C::ShowInsurancePackagePopup(const struct FYInsurancePayoutPackage& Package, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerUIComponent.YPlayerUIComponent_C.ShowInsurancePackagePopup"));

	struct
	{
		struct FYInsurancePayoutPackage Package;
		int                            Index;
	} params = {};

	params.Package = Package;
	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayerUIComponent.YPlayerUIComponent_C.ShowDailyCratePopup
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 generatorId                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// TArray<struct FYInventoryItem> crateItems                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UYPlayerUIComponent_C::ShowDailyCratePopup(const struct FString& generatorId, TArray<struct FYInventoryItem> crateItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerUIComponent.YPlayerUIComponent_C.ShowDailyCratePopup"));

	struct
	{
		struct FString                 generatorId;
		TArray<struct FYInventoryItem> crateItems;
	} params = {};

	params.generatorId = generatorId;
	params.crateItems = crateItems;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayerUIComponent.YPlayerUIComponent_C.ShowRewardsFTUE
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FYInventoryItem> Items                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UYPlayerUIComponent_C::ShowRewardsFTUE(TArray<struct FYInventoryItem> Items)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerUIComponent.YPlayerUIComponent_C.ShowRewardsFTUE"));

	struct
	{
		TArray<struct FYInventoryItem> Items;
	} params = {};

	params.Items = Items;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayerUIComponent.YPlayerUIComponent_C.ShowFactionLevelUp
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYPlayerFactionLevelUpData YPlayerFactionLevelUpData      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UYPlayerUIComponent_C::ShowFactionLevelUp(const struct FYPlayerFactionLevelUpData& YPlayerFactionLevelUpData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerUIComponent.YPlayerUIComponent_C.ShowFactionLevelUp"));

	struct
	{
		struct FYPlayerFactionLevelUpData YPlayerFactionLevelUpData;
	} params = {};

	params.YPlayerFactionLevelUpData = YPlayerFactionLevelUpData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayerUIComponent.YPlayerUIComponent_C.TryShowContractRewards
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     contractRowHandle              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// bool                           ForceShow                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYPlayerUIComponent_C::TryShowContractRewards(bool ForceShow, struct FDataTableRowHandle* contractRowHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerUIComponent.YPlayerUIComponent_C.TryShowContractRewards"));

	struct
	{
		struct FDataTableRowHandle     contractRowHandle;
		bool                           ForceShow;
	} params = {};

	params.ForceShow = ForceShow;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (contractRowHandle != nullptr)
		*contractRowHandle = params.contractRowHandle;
}


// Function YPlayerUIComponent.YPlayerUIComponent_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UYPlayerUIComponent_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerUIComponent.YPlayerUIComponent_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayerUIComponent.YPlayerUIComponent_C.OnLocalPlayerFactionLevelUp_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYPlayerFactionLevelUpData playerFactionLevelUpData       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UYPlayerUIComponent_C::OnLocalPlayerFactionLevelUp_Event_1(const struct FYPlayerFactionLevelUpData& playerFactionLevelUpData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerUIComponent.YPlayerUIComponent_C.OnLocalPlayerFactionLevelUp_Event_1"));

	struct
	{
		struct FYPlayerFactionLevelUpData playerFactionLevelUpData;
	} params = {};

	params.playerFactionLevelUpData = playerFactionLevelUpData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayerUIComponent.YPlayerUIComponent_C.TryPopQueuedFactionLevelUp
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerUIComponent_C::TryPopQueuedFactionLevelUp()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerUIComponent.YPlayerUIComponent_C.TryPopQueuedFactionLevelUp"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayerUIComponent.YPlayerUIComponent_C.OnRewardsReceivedFromMetaQuest_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FYInventoryItem> rewardItems                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UYPlayerUIComponent_C::OnRewardsReceivedFromMetaQuest_Event_1(TArray<struct FYInventoryItem> rewardItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerUIComponent.YPlayerUIComponent_C.OnRewardsReceivedFromMetaQuest_Event_1"));

	struct
	{
		TArray<struct FYInventoryItem> rewardItems;
	} params = {};

	params.rewardItems = rewardItems;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayerUIComponent.YPlayerUIComponent_C.OnGeneratorCollectionSuccessful_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 generatorId                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// TArray<struct FYInventoryItem> crateItems                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UYPlayerUIComponent_C::OnGeneratorCollectionSuccessful_Event_1(const struct FString& generatorId, TArray<struct FYInventoryItem> crateItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerUIComponent.YPlayerUIComponent_C.OnGeneratorCollectionSuccessful_Event_1"));

	struct
	{
		struct FString                 generatorId;
		TArray<struct FYInventoryItem> crateItems;
	} params = {};

	params.generatorId = generatorId;
	params.crateItems = crateItems;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayerUIComponent.YPlayerUIComponent_C.OnClaimInsurancePayoutPackage_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYInsurancePayoutPackage Package                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerUIComponent_C::OnClaimInsurancePayoutPackage_Event_1(const struct FYInsurancePayoutPackage& Package, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerUIComponent.YPlayerUIComponent_C.OnClaimInsurancePayoutPackage_Event_1"));

	struct
	{
		struct FYInsurancePayoutPackage Package;
		int                            Index;
	} params = {};

	params.Package = Package;
	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayerUIComponent.YPlayerUIComponent_C.ExecuteUbergraph_YPlayerUIComponent
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerUIComponent_C::ExecuteUbergraph_YPlayerUIComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerUIComponent.YPlayerUIComponent_C.ExecuteUbergraph_YPlayerUIComponent"));

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


// Function YPlayerUIComponent.YPlayerUIComponent_C.OnFInishedShowingRewards__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerUIComponent_C::OnFInishedShowingRewards__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerUIComponent.YPlayerUIComponent_C.OnFInishedShowingRewards__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
