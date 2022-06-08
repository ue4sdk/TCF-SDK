// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_ToggleText_Btn_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ToggleText_Btn.WBP_ToggleText_Btn_C.SetOptionalCost
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_ToggleText_Btn_C::SetOptionalCost(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ToggleText_Btn.WBP_ToggleText_Btn_C.SetOptionalCost"));

	struct
	{
		struct FText                   InText;
	} params = {};

	params.InText = InText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ToggleText_Btn.WBP_ToggleText_Btn_C.SetPrimaryCost
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_ToggleText_Btn_C::SetPrimaryCost(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ToggleText_Btn.WBP_ToggleText_Btn_C.SetPrimaryCost"));

	struct
	{
		struct FText                   InText;
	} params = {};

	params.InText = InText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ToggleText_Btn.WBP_ToggleText_Btn_C.Set Icon Visibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visibility                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ToggleText_Btn_C::Set_Icon_Visibility(bool Visibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ToggleText_Btn.WBP_ToggleText_Btn_C.Set Icon Visibility"));

	struct
	{
		bool                           Visibility;
	} params = {};

	params.Visibility = Visibility;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ToggleText_Btn.WBP_ToggleText_Btn_C.SetToggled
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           NewToggled                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           CallDelegate                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ToggleText_Btn_C::SetToggled(bool NewToggled, bool CallDelegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ToggleText_Btn.WBP_ToggleText_Btn_C.SetToggled"));

	struct
	{
		bool                           NewToggled;
		bool                           CallDelegate;
	} params = {};

	params.NewToggled = NewToggled;
	params.CallDelegate = CallDelegate;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ToggleText_Btn.WBP_ToggleText_Btn_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ToggleText_Btn_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ToggleText_Btn.WBP_ToggleText_Btn_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ToggleText_Btn.WBP_ToggleText_Btn_C.BndEvt__Btn_InputRight_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_ToggleText_Btn_C::BndEvt__Btn_InputRight_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ToggleText_Btn.WBP_ToggleText_Btn_C.BndEvt__Btn_InputRight_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ToggleText_Btn.WBP_ToggleText_Btn_C.BndEvt__Btn_InputRight_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_ToggleText_Btn_C::BndEvt__Btn_InputRight_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ToggleText_Btn.WBP_ToggleText_Btn_C.BndEvt__Btn_InputRight_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ToggleText_Btn.WBP_ToggleText_Btn_C.BndEvt__Btn_InputLeft_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_ToggleText_Btn_C::BndEvt__Btn_InputLeft_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ToggleText_Btn.WBP_ToggleText_Btn_C.BndEvt__Btn_InputLeft_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ToggleText_Btn.WBP_ToggleText_Btn_C.BndEvt__Btn_InputLeft_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_ToggleText_Btn_C::BndEvt__Btn_InputLeft_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ToggleText_Btn.WBP_ToggleText_Btn_C.BndEvt__Btn_InputLeft_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ToggleText_Btn.WBP_ToggleText_Btn_C.BndEvt__Btn_InputLeft_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_ToggleText_Btn_C::BndEvt__Btn_InputLeft_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ToggleText_Btn.WBP_ToggleText_Btn_C.BndEvt__Btn_InputLeft_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ToggleText_Btn.WBP_ToggleText_Btn_C.BndEvt__Btn_InputRight_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_ToggleText_Btn_C::BndEvt__Btn_InputRight_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ToggleText_Btn.WBP_ToggleText_Btn_C.BndEvt__Btn_InputRight_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ToggleText_Btn.WBP_ToggleText_Btn_C.ExecuteUbergraph_WBP_ToggleText_Btn
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ToggleText_Btn_C::ExecuteUbergraph_WBP_ToggleText_Btn(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ToggleText_Btn.WBP_ToggleText_Btn_C.ExecuteUbergraph_WBP_ToggleText_Btn"));

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


// Function WBP_ToggleText_Btn.WBP_ToggleText_Btn_C.OnToggleChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ToggleText_Btn_C::OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ToggleText_Btn.WBP_ToggleText_Btn_C.OnToggleChanged__DelegateSignature"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
