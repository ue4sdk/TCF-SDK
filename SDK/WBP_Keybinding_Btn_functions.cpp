// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Keybinding_Btn_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Keybinding_Btn.WBP_Keybinding_Btn_C.SetKey
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYInputKeybindingType          KeySelector                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FInputChord             keybinding                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_Keybinding_Btn_C::SetKey(EYInputKeybindingType KeySelector, const struct FInputChord& keybinding)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Keybinding_Btn.WBP_Keybinding_Btn_C.SetKey"));

	struct
	{
		EYInputKeybindingType          KeySelector;
		struct FInputChord             keybinding;
	} params = {};

	params.KeySelector = KeySelector;
	params.keybinding = keybinding;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Keybinding_Btn.WBP_Keybinding_Btn_C.UpdateKeybindings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Keybinding_Btn_C::UpdateKeybindings()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Keybinding_Btn.WBP_Keybinding_Btn_C.UpdateKeybindings"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Keybinding_Btn.WBP_Keybinding_Btn_C.SetKeybindings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYKeybindingData        Keybindings                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Keybinding_Btn_C::SetKeybindings(const struct FYKeybindingData& Keybindings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Keybinding_Btn.WBP_Keybinding_Btn_C.SetKeybindings"));

	struct
	{
		struct FYKeybindingData        Keybindings;
	} params = {};

	params.Keybindings = Keybindings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Keybinding_Btn.WBP_Keybinding_Btn_C.UpdateText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UInputKeySelector*       KeySelector                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FInputChord             InputChord                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_Keybinding_Btn_C::UpdateText(class UInputKeySelector* KeySelector, const struct FInputChord& InputChord)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Keybinding_Btn.WBP_Keybinding_Btn_C.UpdateText"));

	struct
	{
		class UInputKeySelector*       KeySelector;
		struct FInputChord             InputChord;
	} params = {};

	params.KeySelector = KeySelector;
	params.InputChord = InputChord;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Keybinding_Btn.WBP_Keybinding_Btn_C.UpdateTextSecondary
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FInputChord             InputChord                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_Keybinding_Btn_C::UpdateTextSecondary(const struct FInputChord& InputChord)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Keybinding_Btn.WBP_Keybinding_Btn_C.UpdateTextSecondary"));

	struct
	{
		struct FInputChord             InputChord;
	} params = {};

	params.InputChord = InputChord;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Keybinding_Btn.WBP_Keybinding_Btn_C.UpdateTextPrimary
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FInputChord             InputChord                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_Keybinding_Btn_C::UpdateTextPrimary(const struct FInputChord& InputChord)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Keybinding_Btn.WBP_Keybinding_Btn_C.UpdateTextPrimary"));

	struct
	{
		struct FInputChord             InputChord;
	} params = {};

	params.InputChord = InputChord;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Keybinding_Btn.WBP_Keybinding_Btn_C.BndEvt__MainKeyBinding_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FInputChord             SelectedKey                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_Keybinding_Btn_C::BndEvt__MainKeyBinding_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Keybinding_Btn.WBP_Keybinding_Btn_C.BndEvt__MainKeyBinding_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature"));

	struct
	{
		struct FInputChord             SelectedKey;
	} params = {};

	params.SelectedKey = SelectedKey;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Keybinding_Btn.WBP_Keybinding_Btn_C.BndEvt__MainKeyBinding_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Keybinding_Btn_C::BndEvt__MainKeyBinding_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Keybinding_Btn.WBP_Keybinding_Btn_C.BndEvt__MainKeyBinding_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Keybinding_Btn.WBP_Keybinding_Btn_C.BndEvt__AlternateKeyBinding_K2Node_ComponentBoundEvent_2_OnIsSelectingKeyChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Keybinding_Btn_C::BndEvt__AlternateKeyBinding_K2Node_ComponentBoundEvent_2_OnIsSelectingKeyChanged__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Keybinding_Btn.WBP_Keybinding_Btn_C.BndEvt__AlternateKeyBinding_K2Node_ComponentBoundEvent_2_OnIsSelectingKeyChanged__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Keybinding_Btn.WBP_Keybinding_Btn_C.BndEvt__AlternateKeyBinding_K2Node_ComponentBoundEvent_3_OnKeySelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FInputChord             SelectedKey                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_Keybinding_Btn_C::BndEvt__AlternateKeyBinding_K2Node_ComponentBoundEvent_3_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Keybinding_Btn.WBP_Keybinding_Btn_C.BndEvt__AlternateKeyBinding_K2Node_ComponentBoundEvent_3_OnKeySelected__DelegateSignature"));

	struct
	{
		struct FInputChord             SelectedKey;
	} params = {};

	params.SelectedKey = SelectedKey;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Keybinding_Btn.WBP_Keybinding_Btn_C.ExecuteUbergraph_WBP_Keybinding_Btn
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Keybinding_Btn_C::ExecuteUbergraph_WBP_Keybinding_Btn(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Keybinding_Btn.WBP_Keybinding_Btn_C.ExecuteUbergraph_WBP_Keybinding_Btn"));

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
