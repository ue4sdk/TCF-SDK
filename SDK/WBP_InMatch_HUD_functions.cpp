// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_InMatch_HUD_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_InMatch_HUD.WBP_InMatch_HUD_C.OnContractExists
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InMatch_HUD_C::OnContractExists()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InMatch_HUD.WBP_InMatch_HUD_C.OnContractExists"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InMatch_HUD.WBP_InMatch_HUD_C.SetShowContractsNavElementText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_InMatch_HUD_C::SetShowContractsNavElementText(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InMatch_HUD.WBP_InMatch_HUD_C.SetShowContractsNavElementText"));

	struct
	{
		struct FText                   Text;
	} params = {};

	params.Text = Text;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InMatch_HUD.WBP_InMatch_HUD_C.OnHealthStimStateChanged
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            abilityIndex                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           isActivated                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InMatch_HUD_C::OnHealthStimStateChanged(int abilityIndex, bool isActivated)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InMatch_HUD.WBP_InMatch_HUD_C.OnHealthStimStateChanged"));

	struct
	{
		int                            abilityIndex;
		bool                           isActivated;
	} params = {};

	params.abilityIndex = abilityIndex;
	params.isActivated = isActivated;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InMatch_HUD.WBP_InMatch_HUD_C.InitProgressBars
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InMatch_HUD_C::InitProgressBars()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InMatch_HUD.WBP_InMatch_HUD_C.InitProgressBars"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InMatch_HUD.WBP_InMatch_HUD_C.OnWeaponDataChanged
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InMatch_HUD_C::OnWeaponDataChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InMatch_HUD.WBP_InMatch_HUD_C.OnWeaponDataChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InMatch_HUD.WBP_InMatch_HUD_C.OnProgressBarDataChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   DataName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InMatch_HUD_C::OnProgressBarDataChanged(struct FName* DataName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InMatch_HUD.WBP_InMatch_HUD_C.OnProgressBarDataChanged"));

	struct
	{
		struct FName                   DataName;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (DataName != nullptr)
		*DataName = params.DataName;
}


// Function WBP_InMatch_HUD.WBP_InMatch_HUD_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_InMatch_HUD_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InMatch_HUD.WBP_InMatch_HUD_C.BP_AnimateVisibility"));

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params = {};

	params.newVisibility = newVisibility;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_InMatch_HUD.WBP_InMatch_HUD_C.OnInventoryItemAdded
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYInventoryItem         Item                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_InMatch_HUD_C::OnInventoryItemAdded(const struct FYInventoryItem& Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InMatch_HUD.WBP_InMatch_HUD_C.OnInventoryItemAdded"));

	struct
	{
		struct FYInventoryItem         Item;
	} params = {};

	params.Item = Item;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InMatch_HUD.WBP_InMatch_HUD_C.Input_ShowContractsInHud
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InMatch_HUD_C::Input_ShowContractsInHud()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InMatch_HUD.WBP_InMatch_HUD_C.Input_ShowContractsInHud"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InMatch_HUD.WBP_InMatch_HUD_C.ToggleContractsWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InMatch_HUD_C::ToggleContractsWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InMatch_HUD.WBP_InMatch_HUD_C.ToggleContractsWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InMatch_HUD.WBP_InMatch_HUD_C.BndEvt__WBP_StashLimit_HUD_K2Node_ComponentBoundEvent_0_OnWeightUpdated__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_InMatch_HUD_C::BndEvt__WBP_StashLimit_HUD_K2Node_ComponentBoundEvent_0_OnWeightUpdated__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InMatch_HUD.WBP_InMatch_HUD_C.BndEvt__WBP_StashLimit_HUD_K2Node_ComponentBoundEvent_0_OnWeightUpdated__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InMatch_HUD.WBP_InMatch_HUD_C.InitAndSetupBindings
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYRuntimeInitializationContext Result                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_InMatch_HUD_C::InitAndSetupBindings(const struct FYRuntimeInitializationContext& Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InMatch_HUD.WBP_InMatch_HUD_C.InitAndSetupBindings"));

	struct
	{
		struct FYRuntimeInitializationContext Result;
	} params = {};

	params.Result = Result;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InMatch_HUD.WBP_InMatch_HUD_C.BndEvt__WBP_InMatch_HUD_QuickMatchInfo_WBP_K2Node_ComponentBoundEvent_1_YOnQuickMatchInfoToggled__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_InMatch_HUD_C::BndEvt__WBP_InMatch_HUD_QuickMatchInfo_WBP_K2Node_ComponentBoundEvent_1_YOnQuickMatchInfoToggled__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InMatch_HUD.WBP_InMatch_HUD_C.BndEvt__WBP_InMatch_HUD_QuickMatchInfo_WBP_K2Node_ComponentBoundEvent_1_YOnQuickMatchInfoToggled__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InMatch_HUD.WBP_InMatch_HUD_C.BP_OnProviderDataChanged
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   DataName                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   dataType                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InMatch_HUD_C::BP_OnProviderDataChanged(const struct FName& DataName, const struct FName& dataType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InMatch_HUD.WBP_InMatch_HUD_C.BP_OnProviderDataChanged"));

	struct
	{
		struct FName                   DataName;
		struct FName                   dataType;
	} params = {};

	params.DataName = DataName;
	params.dataType = dataType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InMatch_HUD.WBP_InMatch_HUD_C.BndEvt__WBP_InMatch_HUD_WBP_Match_Objectives_HUD_K2Node_ComponentBoundEvent_2_OnBackInput__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_InMatch_HUD_C::BndEvt__WBP_InMatch_HUD_WBP_Match_Objectives_HUD_K2Node_ComponentBoundEvent_2_OnBackInput__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InMatch_HUD.WBP_InMatch_HUD_C.BndEvt__WBP_InMatch_HUD_WBP_Match_Objectives_HUD_K2Node_ComponentBoundEvent_2_OnBackInput__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InMatch_HUD.WBP_InMatch_HUD_C.BndEvt__WBP_InMatch_HUD_WBP_MatchInventory_HUD_K2Node_ComponentBoundEvent_3_OnInventoryScreenOpened__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_InMatch_HUD_C::BndEvt__WBP_InMatch_HUD_WBP_MatchInventory_HUD_K2Node_ComponentBoundEvent_3_OnInventoryScreenOpened__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InMatch_HUD.WBP_InMatch_HUD_C.BndEvt__WBP_InMatch_HUD_WBP_MatchInventory_HUD_K2Node_ComponentBoundEvent_3_OnInventoryScreenOpened__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InMatch_HUD.WBP_InMatch_HUD_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InMatch_HUD_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InMatch_HUD.WBP_InMatch_HUD_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InMatch_HUD.WBP_InMatch_HUD_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InMatch_HUD_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InMatch_HUD.WBP_InMatch_HUD_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InMatch_HUD.WBP_InMatch_HUD_C.Input_ShowContractsInHud_Released
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InMatch_HUD_C::Input_ShowContractsInHud_Released()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InMatch_HUD.WBP_InMatch_HUD_C.Input_ShowContractsInHud_Released"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InMatch_HUD.WBP_InMatch_HUD_C.ExecuteUbergraph_WBP_InMatch_HUD
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InMatch_HUD_C::ExecuteUbergraph_WBP_InMatch_HUD(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InMatch_HUD.WBP_InMatch_HUD_C.ExecuteUbergraph_WBP_InMatch_HUD"));

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
