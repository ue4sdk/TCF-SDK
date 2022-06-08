// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_AlienForge_Btn_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_AlienForge_Btn.WBP_AlienForge_Btn_C.SequenceEvent__ENTRYPOINTWBP_AlienForge_Btn_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_AlienForge_Btn_C::SequenceEvent__ENTRYPOINTWBP_AlienForge_Btn_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AlienForge_Btn.WBP_AlienForge_Btn_C.SequenceEvent__ENTRYPOINTWBP_AlienForge_Btn_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_AlienForge_Btn.WBP_AlienForge_Btn_C.TryToHighlight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_AlienForge_Btn_C::TryToHighlight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AlienForge_Btn.WBP_AlienForge_Btn_C.TryToHighlight"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_AlienForge_Btn.WBP_AlienForge_Btn_C.Set Button Enabled State
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsButtonDisabled               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_AlienForge_Btn_C::Set_Button_Enabled_State(bool IsButtonDisabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AlienForge_Btn.WBP_AlienForge_Btn_C.Set Button Enabled State"));

	struct
	{
		bool                           IsButtonDisabled;
	} params = {};

	params.IsButtonDisabled = IsButtonDisabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_AlienForge_Btn.WBP_AlienForge_Btn_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_AlienForge_Btn_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AlienForge_Btn.WBP_AlienForge_Btn_C.BP_AnimateVisibility"));

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


// Function WBP_AlienForge_Btn.WBP_AlienForge_Btn_C.Set Color
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            NewPrimaryButtonColor          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_AlienForge_Btn_C::Set_Color(const struct FLinearColor& NewPrimaryButtonColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AlienForge_Btn.WBP_AlienForge_Btn_C.Set Color"));

	struct
	{
		struct FLinearColor            NewPrimaryButtonColor;
	} params = {};

	params.NewPrimaryButtonColor = NewPrimaryButtonColor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_AlienForge_Btn.WBP_AlienForge_Btn_C.SetText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_AlienForge_Btn_C::SetText(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AlienForge_Btn.WBP_AlienForge_Btn_C.SetText"));

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


// Function WBP_AlienForge_Btn.WBP_AlienForge_Btn_C.TriggerAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_AlienForge_Btn_C::TriggerAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AlienForge_Btn.WBP_AlienForge_Btn_C.TriggerAnim"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_AlienForge_Btn.WBP_AlienForge_Btn_C.Hovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_AlienForge_Btn_C::Hovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AlienForge_Btn.WBP_AlienForge_Btn_C.Hovered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_AlienForge_Btn.WBP_AlienForge_Btn_C.Unhovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_AlienForge_Btn_C::Unhovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AlienForge_Btn.WBP_AlienForge_Btn_C.Unhovered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_AlienForge_Btn.WBP_AlienForge_Btn_C.Clicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_AlienForge_Btn_C::Clicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AlienForge_Btn.WBP_AlienForge_Btn_C.Clicked"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_AlienForge_Btn.WBP_AlienForge_Btn_C.Pressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_AlienForge_Btn_C::Pressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AlienForge_Btn.WBP_AlienForge_Btn_C.Pressed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_AlienForge_Btn.WBP_AlienForge_Btn_C.Released
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_AlienForge_Btn_C::Released()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AlienForge_Btn.WBP_AlienForge_Btn_C.Released"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_AlienForge_Btn.WBP_AlienForge_Btn_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_AlienForge_Btn_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AlienForge_Btn.WBP_AlienForge_Btn_C.PreConstruct"));

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


// Function WBP_AlienForge_Btn.WBP_AlienForge_Btn_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_AlienForge_Btn_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AlienForge_Btn.WBP_AlienForge_Btn_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_AlienForge_Btn.WBP_AlienForge_Btn_C.ExecuteUbergraph_WBP_AlienForge_Btn
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_AlienForge_Btn_C::ExecuteUbergraph_WBP_AlienForge_Btn(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AlienForge_Btn.WBP_AlienForge_Btn_C.ExecuteUbergraph_WBP_AlienForge_Btn"));

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
