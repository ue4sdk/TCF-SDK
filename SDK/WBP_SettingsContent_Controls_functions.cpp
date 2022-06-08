// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_SettingsContent_Controls_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.UpdateScopedSensitivityTexts
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsContent_Controls_C::UpdateScopedSensitivityTexts()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.UpdateScopedSensitivityTexts"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.Provider_OnDataChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   DataName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   dataType                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsContent_Controls_C::Provider_OnDataChanged(struct FName* DataName, struct FName* dataType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.Provider_OnDataChanged"));

	struct
	{
		struct FName                   DataName;
		struct FName                   dataType;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (DataName != nullptr)
		*DataName = params.DataName;
	if (dataType != nullptr)
		*dataType = params.dataType;
}


// Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.Initialize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsContent_Controls_C::Initialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.Initialize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.RegisterWidgets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsContent_Controls_C::RegisterWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.RegisterWidgets"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.UpdateScopedSensitivityCategory
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsContent_Controls_C::UpdateScopedSensitivityCategory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.UpdateScopedSensitivityCategory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_Selector_Btn_MouseSensitivity_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Selector_Btn_C*     selector                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FStructure_SelectorData Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_SettingsContent_Controls_C::BndEvt__WBP_Selector_Btn_MouseSensitivity_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_Selector_Btn_MouseSensitivity_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature"));

	struct
	{
		class UWBP_Selector_Btn_C*     selector;
		struct FStructure_SelectorData Value;
	} params = {};

	params.selector = selector;
	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_Selector_Btn_ScopedSensitivity_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Selector_Btn_C*     selector                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FStructure_SelectorData Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_SettingsContent_Controls_C::BndEvt__WBP_Selector_Btn_ScopedSensitivity_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_Selector_Btn_ScopedSensitivity_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature"));

	struct
	{
		class UWBP_Selector_Btn_C*     selector;
		struct FStructure_SelectorData Value;
	} params = {};

	params.selector = selector;
	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_Selector_Btn_ADSSensitivity_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Selector_Btn_C*     selector                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FStructure_SelectorData Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_SettingsContent_Controls_C::BndEvt__WBP_Selector_Btn_ADSSensitivity_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_Selector_Btn_ADSSensitivity_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature"));

	struct
	{
		class UWBP_Selector_Btn_C*     selector;
		struct FStructure_SelectorData Value;
	} params = {};

	params.selector = selector;
	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_ToggleText_Btn_CrouchToggle_K2Node_ComponentBoundEvent_3_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Controls_C::BndEvt__WBP_ToggleText_Btn_CrouchToggle_K2Node_ComponentBoundEvent_3_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_ToggleText_Btn_CrouchToggle_K2Node_ComponentBoundEvent_3_OnToggleChanged__DelegateSignature"));

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           Toggled;
	} params = {};

	params.Toggle = Toggle;
	params.Toggled = Toggled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_ToggleText_Btn_FOVBasedSensitivityScaling_K2Node_ComponentBoundEvent_4_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Controls_C::BndEvt__WBP_ToggleText_Btn_FOVBasedSensitivityScaling_K2Node_ComponentBoundEvent_4_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_ToggleText_Btn_FOVBasedSensitivityScaling_K2Node_ComponentBoundEvent_4_OnToggleChanged__DelegateSignature"));

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           Toggled;
	} params = {};

	params.Toggle = Toggle;
	params.Toggled = Toggled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_ToggleText_Btn_InvertX_K2Node_ComponentBoundEvent_6_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Controls_C::BndEvt__WBP_ToggleText_Btn_InvertX_K2Node_ComponentBoundEvent_6_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_ToggleText_Btn_InvertX_K2Node_ComponentBoundEvent_6_OnToggleChanged__DelegateSignature"));

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           Toggled;
	} params = {};

	params.Toggle = Toggle;
	params.Toggled = Toggled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_ToggleText_Btn_InvertY_K2Node_ComponentBoundEvent_7_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Controls_C::BndEvt__WBP_ToggleText_Btn_InvertY_K2Node_ComponentBoundEvent_7_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_ToggleText_Btn_InvertY_K2Node_ComponentBoundEvent_7_OnToggleChanged__DelegateSignature"));

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           Toggled;
	} params = {};

	params.Toggle = Toggle;
	params.Toggled = Toggled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_ToggleText_Btn_MouseSmoothing_K2Node_ComponentBoundEvent_8_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Controls_C::BndEvt__WBP_ToggleText_Btn_MouseSmoothing_K2Node_ComponentBoundEvent_8_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_ToggleText_Btn_MouseSmoothing_K2Node_ComponentBoundEvent_8_OnToggleChanged__DelegateSignature"));

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           Toggled;
	} params = {};

	params.Toggle = Toggle;
	params.Toggled = Toggled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_ToggleText_Btn_PerScopeSensitivity_K2Node_ComponentBoundEvent_9_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Controls_C::BndEvt__WBP_ToggleText_Btn_PerScopeSensitivity_K2Node_ComponentBoundEvent_9_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_ToggleText_Btn_PerScopeSensitivity_K2Node_ComponentBoundEvent_9_OnToggleChanged__DelegateSignature"));

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           Toggled;
	} params = {};

	params.Toggle = Toggle;
	params.Toggled = Toggled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_ToggleText_Btn_SprintToggle_K2Node_ComponentBoundEvent_12_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Controls_C::BndEvt__WBP_ToggleText_Btn_SprintToggle_K2Node_ComponentBoundEvent_12_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_ToggleText_Btn_SprintToggle_K2Node_ComponentBoundEvent_12_OnToggleChanged__DelegateSignature"));

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           Toggled;
	} params = {};

	params.Toggle = Toggle;
	params.Toggled = Toggled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_ToggleText_Btn_TargettingToggle_K2Node_ComponentBoundEvent_13_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Controls_C::BndEvt__WBP_ToggleText_Btn_TargettingToggle_K2Node_ComponentBoundEvent_13_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_ToggleText_Btn_TargettingToggle_K2Node_ComponentBoundEvent_13_OnToggleChanged__DelegateSignature"));

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           Toggled;
	} params = {};

	params.Toggle = Toggle;
	params.Toggled = Toggled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_Selector_Btn_ScopedSensitivity_2x_K2Node_ComponentBoundEvent_16_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Selector_Btn_C*     selector                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FStructure_SelectorData Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_SettingsContent_Controls_C::BndEvt__WBP_Selector_Btn_ScopedSensitivity_2x_K2Node_ComponentBoundEvent_16_OnValueChanged__DelegateSignature(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_Selector_Btn_ScopedSensitivity_2x_K2Node_ComponentBoundEvent_16_OnValueChanged__DelegateSignature"));

	struct
	{
		class UWBP_Selector_Btn_C*     selector;
		struct FStructure_SelectorData Value;
	} params = {};

	params.selector = selector;
	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_Selector_Btn_ScopedSensitivity_4x_K2Node_ComponentBoundEvent_17_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Selector_Btn_C*     selector                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FStructure_SelectorData Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_SettingsContent_Controls_C::BndEvt__WBP_Selector_Btn_ScopedSensitivity_4x_K2Node_ComponentBoundEvent_17_OnValueChanged__DelegateSignature(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_Selector_Btn_ScopedSensitivity_4x_K2Node_ComponentBoundEvent_17_OnValueChanged__DelegateSignature"));

	struct
	{
		class UWBP_Selector_Btn_C*     selector;
		struct FStructure_SelectorData Value;
	} params = {};

	params.selector = selector;
	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_Selector_Btn_ScopedSensitivity_8x_K2Node_ComponentBoundEvent_18_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Selector_Btn_C*     selector                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FStructure_SelectorData Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_SettingsContent_Controls_C::BndEvt__WBP_Selector_Btn_ScopedSensitivity_8x_K2Node_ComponentBoundEvent_18_OnValueChanged__DelegateSignature(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_Selector_Btn_ScopedSensitivity_8x_K2Node_ComponentBoundEvent_18_OnValueChanged__DelegateSignature"));

	struct
	{
		class UWBP_Selector_Btn_C*     selector;
		struct FStructure_SelectorData Value;
	} params = {};

	params.selector = selector;
	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_Selector_Btn_ScopedSensitivity_16x_K2Node_ComponentBoundEvent_19_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Selector_Btn_C*     selector                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FStructure_SelectorData Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_SettingsContent_Controls_C::BndEvt__WBP_Selector_Btn_ScopedSensitivity_16x_K2Node_ComponentBoundEvent_19_OnValueChanged__DelegateSignature(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_Selector_Btn_ScopedSensitivity_16x_K2Node_ComponentBoundEvent_19_OnValueChanged__DelegateSignature"));

	struct
	{
		class UWBP_Selector_Btn_C*     selector;
		struct FStructure_SelectorData Value;
	} params = {};

	params.selector = selector;
	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_ToggleText_Btn_LeaningToggle_K2Node_ComponentBoundEvent_20_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Controls_C::BndEvt__WBP_ToggleText_Btn_LeaningToggle_K2Node_ComponentBoundEvent_20_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.BndEvt__WBP_ToggleText_Btn_LeaningToggle_K2Node_ComponentBoundEvent_20_OnToggleChanged__DelegateSignature"));

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           Toggled;
	} params = {};

	params.Toggle = Toggle;
	params.Toggled = Toggled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.ExecuteUbergraph_WBP_SettingsContent_Controls
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsContent_Controls_C::ExecuteUbergraph_WBP_SettingsContent_Controls(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C.ExecuteUbergraph_WBP_SettingsContent_Controls"));

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
