// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_SettingsContent_Keybindings_classes.hpp"

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
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Keybindings.WBP_SettingsContent_Keybindings_C.UpdateWidget");

	struct
	{
		class UWBP_Keybinding_Btn_C*   KeybindingButton;
	} params;

	params.KeybindingButton = KeybindingButton;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Keybindings.WBP_SettingsContent_Keybindings_C.InitializeWidgets
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsContent_Keybindings_C::InitializeWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Keybindings.WBP_SettingsContent_Keybindings_C.InitializeWidgets");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Keybindings.WBP_SettingsContent_Keybindings_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_SettingsContent_Keybindings_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Keybindings.WBP_SettingsContent_Keybindings_C.OnInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Keybindings.WBP_SettingsContent_Keybindings_C.BP_RegisterChildren
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_SettingsContent_Keybindings_C::BP_RegisterChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Keybindings.WBP_SettingsContent_Keybindings_C.BP_RegisterChildren");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Keybindings.WBP_SettingsContent_Keybindings_C.OnKeySet
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYKeybindingData        Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_SettingsContent_Keybindings_C::OnKeySet(const struct FYKeybindingData& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Keybindings.WBP_SettingsContent_Keybindings_C.OnKeySet");

	struct
	{
		struct FYKeybindingData        Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Keybindings.WBP_SettingsContent_Keybindings_C.ExecuteUbergraph_WBP_SettingsContent_Keybindings
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsContent_Keybindings_C::ExecuteUbergraph_WBP_SettingsContent_Keybindings(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Keybindings.WBP_SettingsContent_Keybindings_C.ExecuteUbergraph_WBP_SettingsContent_Keybindings");

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
