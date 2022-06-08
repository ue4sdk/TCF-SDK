// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_StartupMessagesContainer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_StartupMessagesContainer.WBP_StartupMessagesContainer_C.CreateKeybindingWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYKeybindingData        keybinding                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UWBP_SettingEntry_Item_C* Widget                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StartupMessagesContainer_C::CreateKeybindingWidget(const struct FYKeybindingData& keybinding, class UWBP_SettingEntry_Item_C** Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_StartupMessagesContainer.WBP_StartupMessagesContainer_C.CreateKeybindingWidget"));

	struct
	{
		struct FYKeybindingData        keybinding;
		class UWBP_SettingEntry_Item_C* Widget;
	} params = {};

	params.keybinding = keybinding;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function WBP_StartupMessagesContainer.WBP_StartupMessagesContainer_C.BP_OnWidgetStartShow
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_StartupMessagesContainer_C::BP_OnWidgetStartShow()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_StartupMessagesContainer.WBP_StartupMessagesContainer_C.BP_OnWidgetStartShow"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_StartupMessagesContainer.WBP_StartupMessagesContainer_C.BP_OnWidgetHidden
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_StartupMessagesContainer_C::BP_OnWidgetHidden()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_StartupMessagesContainer.WBP_StartupMessagesContainer_C.BP_OnWidgetHidden"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_StartupMessagesContainer.WBP_StartupMessagesContainer_C.OnCompleteInitialization
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYRuntimeInitializationContext Result                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_StartupMessagesContainer_C::OnCompleteInitialization(const struct FYRuntimeInitializationContext& Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_StartupMessagesContainer.WBP_StartupMessagesContainer_C.OnCompleteInitialization"));

	struct
	{
		struct FYRuntimeInitializationContext Result;
	} params = {};

	params.Result = Result;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_StartupMessagesContainer.WBP_StartupMessagesContainer_C.BndEvt__WBP_StartupMessagesContainer_WBP_Generic_Modal_K2Node_ComponentBoundEvent_2_OnButtonPrimary__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_StartupMessagesContainer_C::BndEvt__WBP_StartupMessagesContainer_WBP_Generic_Modal_K2Node_ComponentBoundEvent_2_OnButtonPrimary__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_StartupMessagesContainer.WBP_StartupMessagesContainer_C.BndEvt__WBP_StartupMessagesContainer_WBP_Generic_Modal_K2Node_ComponentBoundEvent_2_OnButtonPrimary__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_StartupMessagesContainer.WBP_StartupMessagesContainer_C.OnWelcomeVisibilityChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               InVisibility                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StartupMessagesContainer_C::OnWelcomeVisibilityChanged(ESlateVisibility InVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_StartupMessagesContainer.WBP_StartupMessagesContainer_C.OnWelcomeVisibilityChanged"));

	struct
	{
		ESlateVisibility               InVisibility;
	} params = {};

	params.InVisibility = InVisibility;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_StartupMessagesContainer.WBP_StartupMessagesContainer_C.OnKeybindingsVisibilityChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               InVisibility                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StartupMessagesContainer_C::OnKeybindingsVisibilityChanged(ESlateVisibility InVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_StartupMessagesContainer.WBP_StartupMessagesContainer_C.OnKeybindingsVisibilityChanged"));

	struct
	{
		ESlateVisibility               InVisibility;
	} params = {};

	params.InVisibility = InVisibility;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_StartupMessagesContainer.WBP_StartupMessagesContainer_C.TryShowKeybindingsModal
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_StartupMessagesContainer_C::TryShowKeybindingsModal()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_StartupMessagesContainer.WBP_StartupMessagesContainer_C.TryShowKeybindingsModal"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_StartupMessagesContainer.WBP_StartupMessagesContainer_C.BndEvt__WBP_StartupMessagesContainer_WBP_RetentionBonus_K2Node_ComponentBoundEvent_0_OnDismissed__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_StartupMessagesContainer_C::BndEvt__WBP_StartupMessagesContainer_WBP_RetentionBonus_K2Node_ComponentBoundEvent_0_OnDismissed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_StartupMessagesContainer.WBP_StartupMessagesContainer_C.BndEvt__WBP_StartupMessagesContainer_WBP_RetentionBonus_K2Node_ComponentBoundEvent_0_OnDismissed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_StartupMessagesContainer.WBP_StartupMessagesContainer_C.ExecuteUbergraph_WBP_StartupMessagesContainer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StartupMessagesContainer_C::ExecuteUbergraph_WBP_StartupMessagesContainer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_StartupMessagesContainer.WBP_StartupMessagesContainer_C.ExecuteUbergraph_WBP_StartupMessagesContainer"));

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
