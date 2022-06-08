// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_MatchInventory_HUD_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.SequenceEvent__ENTRYPOINTWBP_MatchInventory_HUD_2
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_MatchInventory_HUD_C::SequenceEvent__ENTRYPOINTWBP_MatchInventory_HUD_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.SequenceEvent__ENTRYPOINTWBP_MatchInventory_HUD_2"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.SequenceEvent__ENTRYPOINTWBP_MatchInventory_HUD_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Inventory_Loadout_C* WBP_Inventory_Loadout          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_MatchInventory_HUD_C::SequenceEvent__ENTRYPOINTWBP_MatchInventory_HUD_1(class UWBP_Inventory_Loadout_C* WBP_Inventory_Loadout)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.SequenceEvent__ENTRYPOINTWBP_MatchInventory_HUD_1"));

	struct
	{
		class UWBP_Inventory_Loadout_C* WBP_Inventory_Loadout;
	} params = {};

	params.WBP_Inventory_Loadout = WBP_Inventory_Loadout;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.OnSortingMethodChangedCallback
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_MatchInventory_HUD_C::OnSortingMethodChangedCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.OnSortingMethodChangedCallback"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.BP_HandleBackKey
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_MatchInventory_HUD_C::BP_HandleBackKey()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.BP_HandleBackKey"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.DetermineLootContainerWidgetType
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  InteractingActor               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EYLootContainerWidgetType      Type                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_MatchInventory_HUD_C::DetermineLootContainerWidgetType(class AActor* InteractingActor, EYLootContainerWidgetType* Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.DetermineLootContainerWidgetType"));

	struct
	{
		class AActor*                  InteractingActor;
		EYLootContainerWidgetType      Type;
	} params = {};

	params.InteractingActor = InteractingActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Type != nullptr)
		*Type = params.Type;
}


// Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.OnInspectedInventoryItemUpdatedCallback
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYInventoryItem         newInventoryItem               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_MatchInventory_HUD_C::OnInspectedInventoryItemUpdatedCallback(const struct FYInventoryItem& newInventoryItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.OnInspectedInventoryItemUpdatedCallback"));

	struct
	{
		struct FYInventoryItem         newInventoryItem;
	} params = {};

	params.newInventoryItem = newInventoryItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.ClearWeaponInspection
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_MatchInventory_HUD_C::ClearWeaponInspection()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.ClearWeaponInspection"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.OnToggleAttachmentScreenCallback
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_MatchInventory_HUD_C::OnToggleAttachmentScreenCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.OnToggleAttachmentScreenCallback"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_MatchInventory_HUD_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.BP_AnimateVisibility"));

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


// Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.SequenceEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_MatchInventory_HUD_C::SequenceEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.SequenceEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.OnInventoryStateEntered
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_MatchInventory_HUD_C::OnInventoryStateEntered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.OnInventoryStateEntered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.OnInventoryStateLeft
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInterrupted                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_MatchInventory_HUD_C::OnInventoryStateLeft(bool bInterrupted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.OnInventoryStateLeft"));

	struct
	{
		bool                           bInterrupted;
	} params = {};

	params.bInterrupted = bInterrupted;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.UpdateOtherContainerVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_MatchInventory_HUD_C::UpdateOtherContainerVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.UpdateOtherContainerVisibility"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_MatchInventory_HUD_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.OnBackpackLootedCallback
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_MatchInventory_HUD_C::OnBackpackLootedCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.OnBackpackLootedCallback"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.WBP_Inventory_Loadout_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Inventory_Loadout_C* WBP_Inventory_Loadout          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_MatchInventory_HUD_C::WBP_Inventory_Loadout_Event_1(class UWBP_Inventory_Loadout_C* WBP_Inventory_Loadout)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.WBP_Inventory_Loadout_Event_1"));

	struct
	{
		class UWBP_Inventory_Loadout_C* WBP_Inventory_Loadout;
	} params = {};

	params.WBP_Inventory_Loadout = WBP_Inventory_Loadout;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.BndEvt__WBP_MatchInventory_HUD_WBP_InputKeyNavigation_K2Node_ComponentBoundEvent_1_OnInputKeyClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   InputKey                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDataTableRowHandle     InputActionRowHandle           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_MatchInventory_HUD_C::BndEvt__WBP_MatchInventory_HUD_WBP_InputKeyNavigation_K2Node_ComponentBoundEvent_1_OnInputKeyClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* InputKey, int Index, const struct FDataTableRowHandle& InputActionRowHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.BndEvt__WBP_MatchInventory_HUD_WBP_InputKeyNavigation_K2Node_ComponentBoundEvent_1_OnInputKeyClicked__DelegateSignature"));

	struct
	{
		class UWBP_ButtonBase_Btn_C*   InputKey;
		int                            Index;
		struct FDataTableRowHandle     InputActionRowHandle;
	} params = {};

	params.InputKey = InputKey;
	params.Index = Index;
	params.InputActionRowHandle = InputActionRowHandle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.OnSortingModeChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_MatchInventory_HUD_C::OnSortingModeChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.OnSortingModeChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_MatchInventory_HUD_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.BP_OnWidgetShown
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_MatchInventory_HUD_C::BP_OnWidgetShown()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.BP_OnWidgetShown"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.ExecuteUbergraph_WBP_MatchInventory_HUD
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_MatchInventory_HUD_C::ExecuteUbergraph_WBP_MatchInventory_HUD(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C.ExecuteUbergraph_WBP_MatchInventory_HUD"));

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
