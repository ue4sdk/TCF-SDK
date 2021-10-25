// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_PlayerSupport_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerSupport_WBP.PlayerSupport_WBP_C.BP_HandleBackKey
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UPlayerSupport_WBP_C::BP_HandleBackKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSupport_WBP.PlayerSupport_WBP_C.BP_HandleBackKey");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlayerSupport_WBP.PlayerSupport_WBP_C.FindColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           SUCCESS                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FSlateColor             ReturnColor                    (CPF_Parm, CPF_OutParm)

void UPlayerSupport_WBP_C::FindColor(bool SUCCESS, struct FSlateColor* ReturnColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSupport_WBP.PlayerSupport_WBP_C.FindColor");

	struct
	{
		bool                           SUCCESS;
		struct FSlateColor             ReturnColor;
	} params;

	params.SUCCESS = SUCCESS;

	UObject::ProcessEvent(fn, &params);

	if (ReturnColor != nullptr)
		*ReturnColor = params.ReturnColor;
}


// Function PlayerSupport_WBP.PlayerSupport_WBP_C.FindOptionIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

int UPlayerSupport_WBP_C::FindOptionIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSupport_WBP.PlayerSupport_WBP_C.FindOptionIndex");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlayerSupport_WBP.PlayerSupport_WBP_C.BP_HandleConfirmInput
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UPlayerSupport_WBP_C::BP_HandleConfirmInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSupport_WBP.PlayerSupport_WBP_C.BP_HandleConfirmInput");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlayerSupport_WBP.PlayerSupport_WBP_C.TrySubmit
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerSupport_WBP_C::TrySubmit()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSupport_WBP.PlayerSupport_WBP_C.TrySubmit");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerSupport_WBP.PlayerSupport_WBP_C.BndEvt__EditableText_BugTitle_K2Node_ComponentBoundEvent_315_OnEditableTextBoxCommittedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerSupport_WBP_C::BndEvt__EditableText_BugTitle_K2Node_ComponentBoundEvent_315_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSupport_WBP.PlayerSupport_WBP_C.BndEvt__EditableText_BugTitle_K2Node_ComponentBoundEvent_315_OnEditableTextBoxCommittedEvent__DelegateSignature");

	struct
	{
		struct FText                   Text;
		TEnumAsByte<ETextCommit>       CommitMethod;
	} params;

	params.Text = Text;
	params.CommitMethod = CommitMethod;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerSupport_WBP.PlayerSupport_WBP_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPlayerSupport_WBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSupport_WBP.PlayerSupport_WBP_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerSupport_WBP.PlayerSupport_WBP_C.BndEvt__EditableText_BugTitle_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UPlayerSupport_WBP_C::BndEvt__EditableText_BugTitle_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSupport_WBP.PlayerSupport_WBP_C.BndEvt__EditableText_BugTitle_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");

	struct
	{
		struct FText                   Text;
	} params;

	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerSupport_WBP.PlayerSupport_WBP_C.BndEvt__MultiEditable_BugDescription_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextChangedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UPlayerSupport_WBP_C::BndEvt__MultiEditable_BugDescription_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSupport_WBP.PlayerSupport_WBP_C.BndEvt__MultiEditable_BugDescription_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextChangedEvent__DelegateSignature");

	struct
	{
		struct FText                   Text;
	} params;

	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerSupport_WBP.PlayerSupport_WBP_C.BndEvt__YButton_Submit_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UPlayerSupport_WBP_C::BndEvt__YButton_Submit_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSupport_WBP.PlayerSupport_WBP_C.BndEvt__YButton_Submit_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerSupport_WBP.PlayerSupport_WBP_C.BndEvt__YButton_Cancel_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UPlayerSupport_WBP_C::BndEvt__YButton_Cancel_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSupport_WBP.PlayerSupport_WBP_C.BndEvt__YButton_Cancel_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerSupport_WBP.PlayerSupport_WBP_C.BndEvt__YButton_InputDescription_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UPlayerSupport_WBP_C::BndEvt__YButton_InputDescription_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSupport_WBP.PlayerSupport_WBP_C.BndEvt__YButton_InputDescription_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerSupport_WBP.PlayerSupport_WBP_C.BndEvt__YButton_InputDescription_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UPlayerSupport_WBP_C::BndEvt__YButton_InputDescription_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSupport_WBP.PlayerSupport_WBP_C.BndEvt__YButton_InputDescription_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerSupport_WBP.PlayerSupport_WBP_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerSupport_WBP_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSupport_WBP.PlayerSupport_WBP_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerSupport_WBP.PlayerSupport_WBP_C.BndEvt__MultiEditable_SupportDescription_K2Node_ComponentBoundEvent_10_OnMultiLineEditableTextCommittedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerSupport_WBP_C::BndEvt__MultiEditable_SupportDescription_K2Node_ComponentBoundEvent_10_OnMultiLineEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSupport_WBP.PlayerSupport_WBP_C.BndEvt__MultiEditable_SupportDescription_K2Node_ComponentBoundEvent_10_OnMultiLineEditableTextCommittedEvent__DelegateSignature");

	struct
	{
		struct FText                   Text;
		TEnumAsByte<ETextCommit>       CommitMethod;
	} params;

	params.Text = Text;
	params.CommitMethod = CommitMethod;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerSupport_WBP.PlayerSupport_WBP_C.ExecuteUbergraph_PlayerSupport_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerSupport_WBP_C::ExecuteUbergraph_PlayerSupport_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSupport_WBP.PlayerSupport_WBP_C.ExecuteUbergraph_PlayerSupport_WBP");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerSupport_WBP.PlayerSupport_WBP_C.OnWidgetSubmitConfirmationEnded__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerSupport_WBP_C::OnWidgetSubmitConfirmationEnded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSupport_WBP.PlayerSupport_WBP_C.OnWidgetSubmitConfirmationEnded__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerSupport_WBP.PlayerSupport_WBP_C.OnSubmit__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   BugTitle                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   BugDescription                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TArray<struct FString>         Bug_Labels                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UPlayerSupport_WBP_C::OnSubmit__DelegateSignature(const struct FText& BugTitle, const struct FText& BugDescription, TArray<struct FString>* Bug_Labels)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSupport_WBP.PlayerSupport_WBP_C.OnSubmit__DelegateSignature");

	struct
	{
		struct FText                   BugTitle;
		struct FText                   BugDescription;
		TArray<struct FString>         Bug_Labels;
	} params;

	params.BugTitle = BugTitle;
	params.BugDescription = BugDescription;

	UObject::ProcessEvent(fn, &params);

	if (Bug_Labels != nullptr)
		*Bug_Labels = params.Bug_Labels;
}


// Function PlayerSupport_WBP.PlayerSupport_WBP_C.OnCancel__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerSupport_WBP_C::OnCancel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSupport_WBP.PlayerSupport_WBP_C.OnCancel__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
