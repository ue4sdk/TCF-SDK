// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Encounters_Item_Prospectors_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Encounters_Item_Prospectors.WBP_Encounters_Item_Prospectors_C.UpdateWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Encounters_Item_Prospectors_C::UpdateWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Encounters_Item_Prospectors.WBP_Encounters_Item_Prospectors_C.UpdateWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Encounters_Item_Prospectors.WBP_Encounters_Item_Prospectors_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_Encounters_Item_Prospectors_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Encounters_Item_Prospectors.WBP_Encounters_Item_Prospectors_C.BP_AnimateVisibility"));

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


// Function WBP_Encounters_Item_Prospectors.WBP_Encounters_Item_Prospectors_C.BndEvt__WBP_Encounters_Item_Prospectors_WBP_Social_Btn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Encounters_Item_Prospectors_C::BndEvt__WBP_Encounters_Item_Prospectors_WBP_Social_Btn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Encounters_Item_Prospectors.WBP_Encounters_Item_Prospectors_C.BndEvt__WBP_Encounters_Item_Prospectors_WBP_Social_Btn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature"));

	struct
	{
		class UWBP_ButtonBase_Btn_C*   Button;
	} params = {};

	params.Button = Button;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Encounters_Item_Prospectors.WBP_Encounters_Item_Prospectors_C.TryDisableInvite
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 UserId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_Encounters_Item_Prospectors_C::TryDisableInvite(const struct FString& UserId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Encounters_Item_Prospectors.WBP_Encounters_Item_Prospectors_C.TryDisableInvite"));

	struct
	{
		struct FString                 UserId;
	} params = {};

	params.UserId = UserId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Encounters_Item_Prospectors.WBP_Encounters_Item_Prospectors_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Encounters_Item_Prospectors_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Encounters_Item_Prospectors.WBP_Encounters_Item_Prospectors_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Encounters_Item_Prospectors.WBP_Encounters_Item_Prospectors_C.BndEvt__WBP_Encounters_Item_Prospectors_WBP_Report_Btn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Encounters_Item_Prospectors_C::BndEvt__WBP_Encounters_Item_Prospectors_WBP_Report_Btn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Encounters_Item_Prospectors.WBP_Encounters_Item_Prospectors_C.BndEvt__WBP_Encounters_Item_Prospectors_WBP_Report_Btn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature"));

	struct
	{
		class UWBP_ButtonBase_Btn_C*   Button;
	} params = {};

	params.Button = Button;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Encounters_Item_Prospectors.WBP_Encounters_Item_Prospectors_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Encounters_Item_Prospectors_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Encounters_Item_Prospectors.WBP_Encounters_Item_Prospectors_C.PreConstruct"));

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


// Function WBP_Encounters_Item_Prospectors.WBP_Encounters_Item_Prospectors_C.TryDisableReport
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 UserId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_Encounters_Item_Prospectors_C::TryDisableReport(const struct FString& UserId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Encounters_Item_Prospectors.WBP_Encounters_Item_Prospectors_C.TryDisableReport"));

	struct
	{
		struct FString                 UserId;
	} params = {};

	params.UserId = UserId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Encounters_Item_Prospectors.WBP_Encounters_Item_Prospectors_C.ExecuteUbergraph_WBP_Encounters_Item_Prospectors
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Encounters_Item_Prospectors_C::ExecuteUbergraph_WBP_Encounters_Item_Prospectors(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Encounters_Item_Prospectors.WBP_Encounters_Item_Prospectors_C.ExecuteUbergraph_WBP_Encounters_Item_Prospectors"));

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


// Function WBP_Encounters_Item_Prospectors.WBP_Encounters_Item_Prospectors_C.OnInviteSent__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 UsderID                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_Encounters_Item_Prospectors_C::OnInviteSent__DelegateSignature(const struct FString& UsderID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Encounters_Item_Prospectors.WBP_Encounters_Item_Prospectors_C.OnInviteSent__DelegateSignature"));

	struct
	{
		struct FString                 UsderID;
	} params = {};

	params.UsderID = UsderID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
