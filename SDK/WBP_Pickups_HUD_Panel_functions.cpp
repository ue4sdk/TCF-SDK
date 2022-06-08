// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Pickups_HUD_Panel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Pickups_HUD_Panel.WBP_Pickups_HUD_Panel_C.OnItemFadedOut
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Pickups_HUD_Panel_C::OnItemFadedOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Pickups_HUD_Panel.WBP_Pickups_HUD_Panel_C.OnItemFadedOut"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Pickups_HUD_Panel.WBP_Pickups_HUD_Panel_C.AddItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYInventoryItem         Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Pickups_HUD_Panel_C::AddItem(const struct FYInventoryItem& Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Pickups_HUD_Panel.WBP_Pickups_HUD_Panel_C.AddItem"));

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


// Function WBP_Pickups_HUD_Panel.WBP_Pickups_HUD_Panel_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Pickups_HUD_Panel_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Pickups_HUD_Panel.WBP_Pickups_HUD_Panel_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Pickups_HUD_Panel.WBP_Pickups_HUD_Panel_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Pickups_HUD_Panel_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Pickups_HUD_Panel.WBP_Pickups_HUD_Panel_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Pickups_HUD_Panel.WBP_Pickups_HUD_Panel_C.OnPlayerSetUpdatedCallback
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYStateInventoryComponent* stateInventoryComponent        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Pickups_HUD_Panel_C::OnPlayerSetUpdatedCallback(class UYStateInventoryComponent* stateInventoryComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Pickups_HUD_Panel.WBP_Pickups_HUD_Panel_C.OnPlayerSetUpdatedCallback"));

	struct
	{
		class UYStateInventoryComponent* stateInventoryComponent;
	} params = {};

	params.stateInventoryComponent = stateInventoryComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Pickups_HUD_Panel.WBP_Pickups_HUD_Panel_C.OnCompleteInitialization
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYRuntimeInitializationContext Result                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Pickups_HUD_Panel_C::OnCompleteInitialization(const struct FYRuntimeInitializationContext& Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Pickups_HUD_Panel.WBP_Pickups_HUD_Panel_C.OnCompleteInitialization"));

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


// Function WBP_Pickups_HUD_Panel.WBP_Pickups_HUD_Panel_C.OnWeightChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Pickups_HUD_Panel_C::OnWeightChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Pickups_HUD_Panel.WBP_Pickups_HUD_Panel_C.OnWeightChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Pickups_HUD_Panel.WBP_Pickups_HUD_Panel_C.ExecuteUbergraph_WBP_Pickups_HUD_Panel
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Pickups_HUD_Panel_C::ExecuteUbergraph_WBP_Pickups_HUD_Panel(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Pickups_HUD_Panel.WBP_Pickups_HUD_Panel_C.ExecuteUbergraph_WBP_Pickups_HUD_Panel"));

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
