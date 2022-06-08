// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Station_Provider_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Station_Provider.WBP_Station_Provider_C.Update Customization State
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EYQuickMenuSubScreen           QuickMenuSubScreen             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Provider_C::Update_Customization_State(class APlayerController* PlayerController, EYQuickMenuSubScreen QuickMenuSubScreen)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Provider.WBP_Station_Provider_C.Update Customization State"));

	struct
	{
		class APlayerController*       PlayerController;
		EYQuickMenuSubScreen           QuickMenuSubScreen;
	} params = {};

	params.PlayerController = PlayerController;
	params.QuickMenuSubScreen = QuickMenuSubScreen;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Provider.WBP_Station_Provider_C.ConsumeShopReturnTabIndex
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_Provider_C::ConsumeShopReturnTabIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Provider.WBP_Station_Provider_C.ConsumeShopReturnTabIndex"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Provider.WBP_Station_Provider_C.SelectTabIndex
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Provider_C::SelectTabIndex(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Provider.WBP_Station_Provider_C.SelectTabIndex"));

	struct
	{
		int                            Index;
	} params = {};

	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Provider.WBP_Station_Provider_C.GetShopReturnTabIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Provider_C::GetShopReturnTabIndex(int* Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Provider.WBP_Station_Provider_C.GetShopReturnTabIndex"));

	struct
	{
		int                            Index;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Index != nullptr)
		*Index = params.Index;
}


// Function WBP_Station_Provider.WBP_Station_Provider_C.SetShopReturnTabIndex
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Provider_C::SetShopReturnTabIndex(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Provider.WBP_Station_Provider_C.SetShopReturnTabIndex"));

	struct
	{
		int                            Index;
	} params = {};

	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Provider.WBP_Station_Provider_C.BP_ToggleInventoryMenu
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_Station_Provider_C::BP_ToggleInventoryMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Provider.WBP_Station_Provider_C.BP_ToggleInventoryMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Provider.WBP_Station_Provider_C.BP_ToggleObjectiveList
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_Station_Provider_C::BP_ToggleObjectiveList()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Provider.WBP_Station_Provider_C.BP_ToggleObjectiveList"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Provider.WBP_Station_Provider_C.BP_ToggleAurumShop
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_Station_Provider_C::BP_ToggleAurumShop()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Provider.WBP_Station_Provider_C.BP_ToggleAurumShop"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Provider.WBP_Station_Provider_C.BP_ToggleFortunaPass
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_Station_Provider_C::BP_ToggleFortunaPass()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Provider.WBP_Station_Provider_C.BP_ToggleFortunaPass"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Provider.WBP_Station_Provider_C.BP_ToggleShop
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_Station_Provider_C::BP_ToggleShop()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Provider.WBP_Station_Provider_C.BP_ToggleShop"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Provider.WBP_Station_Provider_C.ExecuteUbergraph_WBP_Station_Provider
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Provider_C::ExecuteUbergraph_WBP_Station_Provider(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Provider.WBP_Station_Provider_C.ExecuteUbergraph_WBP_Station_Provider"));

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


// Function WBP_Station_Provider.WBP_Station_Provider_C.OnSelectTabIndex__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Provider_C::OnSelectTabIndex__DelegateSignature(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Provider.WBP_Station_Provider_C.OnSelectTabIndex__DelegateSignature"));

	struct
	{
		int                            Index;
	} params = {};

	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
