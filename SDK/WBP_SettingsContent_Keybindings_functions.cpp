// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_SettingsContent_Keybindings_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_SettingsContent_Keybindings.WBP_SettingsContent_Keybindings_C.UpdateWidget
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Keybinding_Btn_C*   KeybindingButton               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsContent_Keybindings_C::UpdateWidget(class UWBP_Keybinding_Btn_C* KeybindingButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Keybindings.WBP_SettingsContent_Keybindings_C.UpdateWidget"));

	struct
	{
		class UWBP_Keybinding_Btn_C*   KeybindingButton;
	} params = {};

	params.KeybindingButton = KeybindingButton;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Keybindings.WBP_SettingsContent_Keybindings_C.InitializeWidgets
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsContent_Keybindings_C::InitializeWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Keybindings.WBP_SettingsContent_Keybindings_C.InitializeWidgets"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Keybindings.WBP_SettingsContent_Keybindings_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_SettingsContent_Keybindings_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Keybindings.WBP_SettingsContent_Keybindings_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Keybindings.WBP_SettingsContent_Keybindings_C.BP_RegisterChildren
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_SettingsContent_Keybindings_C::BP_RegisterChildren()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Keybindings.WBP_SettingsContent_Keybindings_C.BP_RegisterChildren"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Keybindings.WBP_SettingsContent_Keybindings_C.OnKeySet
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYKeybindingData        Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_SettingsContent_Keybindings_C::OnKeySet(const struct FYKeybindingData& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Keybindings.WBP_SettingsContent_Keybindings_C.OnKeySet"));

	struct
	{
		struct FYKeybindingData        Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Keybindings.WBP_SettingsContent_Keybindings_C.ExecuteUbergraph_WBP_SettingsContent_Keybindings
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsContent_Keybindings_C::ExecuteUbergraph_WBP_SettingsContent_Keybindings(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Keybindings.WBP_SettingsContent_Keybindings_C.ExecuteUbergraph_WBP_SettingsContent_Keybindings"));

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
