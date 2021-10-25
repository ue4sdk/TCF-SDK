// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Common_Btn_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Common_Btn.WBP_Common_Btn_C.SequenceEvent__ENTRYPOINTWBP_Common_Btn_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Common_Btn_C::SequenceEvent__ENTRYPOINTWBP_Common_Btn_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Common_Btn.WBP_Common_Btn_C.SequenceEvent__ENTRYPOINTWBP_Common_Btn_1");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Common_Btn.WBP_Common_Btn_C.Set Button Enabled State
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsButtonDisabled               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper)

void UWBP_Common_Btn_C::Set_Button_Enabled_State(bool IsButtonDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Common_Btn.WBP_Common_Btn_C.Set Button Enabled State");

	struct
	{
		bool                           IsButtonDisabled;
	} params;

	params.IsButtonDisabled = IsButtonDisabled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Common_Btn.WBP_Common_Btn_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_Common_Btn_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Common_Btn.WBP_Common_Btn_C.BP_AnimateVisibility");

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params;

	params.newVisibility = newVisibility;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Common_Btn.WBP_Common_Btn_C.Set Color
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            NewSecondaryButtonColor        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            NewPrimaryButtonColor          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Common_Btn_C::Set_Color(const struct FLinearColor& NewSecondaryButtonColor, const struct FLinearColor& NewPrimaryButtonColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Common_Btn.WBP_Common_Btn_C.Set Color");

	struct
	{
		struct FLinearColor            NewSecondaryButtonColor;
		struct FLinearColor            NewPrimaryButtonColor;
	} params;

	params.NewSecondaryButtonColor = NewSecondaryButtonColor;
	params.NewPrimaryButtonColor = NewPrimaryButtonColor;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Common_Btn.WBP_Common_Btn_C.SetText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Common_Btn_C::SetText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Common_Btn.WBP_Common_Btn_C.SetText");

	struct
	{
		struct FText                   Text;
	} params;

	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Common_Btn.WBP_Common_Btn_C.Hovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Common_Btn_C::Hovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Common_Btn.WBP_Common_Btn_C.Hovered");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Common_Btn.WBP_Common_Btn_C.Unhovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Common_Btn_C::Unhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Common_Btn.WBP_Common_Btn_C.Unhovered");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Common_Btn.WBP_Common_Btn_C.Clicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Common_Btn_C::Clicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Common_Btn.WBP_Common_Btn_C.Clicked");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Common_Btn.WBP_Common_Btn_C.Pressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Common_Btn_C::Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Common_Btn.WBP_Common_Btn_C.Pressed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Common_Btn.WBP_Common_Btn_C.Released
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Common_Btn_C::Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Common_Btn.WBP_Common_Btn_C.Released");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Common_Btn.WBP_Common_Btn_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Common_Btn_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Common_Btn.WBP_Common_Btn_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Common_Btn.WBP_Common_Btn_C.TriggerAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Common_Btn_C::TriggerAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Common_Btn.WBP_Common_Btn_C.TriggerAnim");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Common_Btn.WBP_Common_Btn_C.ExecuteUbergraph_WBP_Common_Btn
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Common_Btn_C::ExecuteUbergraph_WBP_Common_Btn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Common_Btn.WBP_Common_Btn_C.ExecuteUbergraph_WBP_Common_Btn");

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
