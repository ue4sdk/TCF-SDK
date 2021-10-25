// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Generic_Modal_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Generic_Modal.WBP_Generic_Modal_C.HasBIDataManuallySetUp
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           hasBIData                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Generic_Modal_C::HasBIDataManuallySetUp(bool* hasBIData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Generic_Modal.WBP_Generic_Modal_C.HasBIDataManuallySetUp");

	struct
	{
		bool                           hasBIData;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (hasBIData != nullptr)
		*hasBIData = params.hasBIData;
}


// Function WBP_Generic_Modal.WBP_Generic_Modal_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_Generic_Modal_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Generic_Modal.WBP_Generic_Modal_C.BP_AnimateVisibility");

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params;

	params.newVisibility = newVisibility;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Generic_Modal.WBP_Generic_Modal_C.BP_HandleBackKey
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_Generic_Modal_C::BP_HandleBackKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Generic_Modal.WBP_Generic_Modal_C.BP_HandleBackKey");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Generic_Modal.WBP_Generic_Modal_C.SetTexts
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   headline                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   Message                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   okButtonText                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   cancelButtonText               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Generic_Modal_C::SetTexts(const struct FText& headline, const struct FText& Message, const struct FText& okButtonText, const struct FText& cancelButtonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Generic_Modal.WBP_Generic_Modal_C.SetTexts");

	struct
	{
		struct FText                   headline;
		struct FText                   Message;
		struct FText                   okButtonText;
		struct FText                   cancelButtonText;
	} params;

	params.headline = headline;
	params.Message = Message;
	params.okButtonText = okButtonText;
	params.cancelButtonText = cancelButtonText;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Generic_Modal.WBP_Generic_Modal_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Generic_Modal_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Generic_Modal.WBP_Generic_Modal_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Generic_Modal.WBP_Generic_Modal_C.BndEvt__WBP_Btn_Common_Primary_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Generic_Modal_C::BndEvt__WBP_Btn_Common_Primary_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Generic_Modal.WBP_Generic_Modal_C.BndEvt__WBP_Btn_Common_Primary_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
		class UWBP_ButtonBase_Btn_C*   Button;
	} params;

	params.Button = Button;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Generic_Modal.WBP_Generic_Modal_C.BndEvt__WBP_Btn_Common_Secondary_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Generic_Modal_C::BndEvt__WBP_Btn_Common_Secondary_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Generic_Modal.WBP_Generic_Modal_C.BndEvt__WBP_Btn_Common_Secondary_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	struct
	{
		class UWBP_ButtonBase_Btn_C*   Button;
	} params;

	params.Button = Button;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Generic_Modal.WBP_Generic_Modal_C.BP_OnWidgetHidden
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_Generic_Modal_C::BP_OnWidgetHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Generic_Modal.WBP_Generic_Modal_C.BP_OnWidgetHidden");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Generic_Modal.WBP_Generic_Modal_C.BP_SetupBIData
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 primaryButtonName              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 buttonLocation                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 secondaryButtonName            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_Generic_Modal_C::BP_SetupBIData(const struct FString& primaryButtonName, const struct FString& buttonLocation, const struct FString& secondaryButtonName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Generic_Modal.WBP_Generic_Modal_C.BP_SetupBIData");

	struct
	{
		struct FString                 primaryButtonName;
		struct FString                 buttonLocation;
		struct FString                 secondaryButtonName;
	} params;

	params.primaryButtonName = primaryButtonName;
	params.buttonLocation = buttonLocation;
	params.secondaryButtonName = secondaryButtonName;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Generic_Modal.WBP_Generic_Modal_C.ExecuteUbergraph_WBP_Generic_Modal
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Generic_Modal_C::ExecuteUbergraph_WBP_Generic_Modal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Generic_Modal.WBP_Generic_Modal_C.ExecuteUbergraph_WBP_Generic_Modal");

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
