// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_InputKeyNavigationBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_InputKeyNavigationBase.WBP_InputKeyNavigationBase_C.OnButtonClicked
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InputKeyNavigationBase_C::OnButtonClicked(class UWBP_ButtonBase_Btn_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InputKeyNavigationBase.WBP_InputKeyNavigationBase_C.OnButtonClicked"));

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


// Function WBP_InputKeyNavigationBase.WBP_InputKeyNavigationBase_C.AddInputKey
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_InputKeyNavigation_Btn_C* Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InputKeyNavigationBase_C::AddInputKey(class UWBP_InputKeyNavigation_Btn_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InputKeyNavigationBase.WBP_InputKeyNavigationBase_C.AddInputKey"));

	struct
	{
		class UWBP_InputKeyNavigation_Btn_C* Button;
	} params = {};

	params.Button = Button;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InputKeyNavigationBase.WBP_InputKeyNavigationBase_C.ClearInputKeys
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InputKeyNavigationBase_C::ClearInputKeys()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InputKeyNavigationBase.WBP_InputKeyNavigationBase_C.ClearInputKeys"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InputKeyNavigationBase.WBP_InputKeyNavigationBase_C.OnInputKeyClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   InputKey                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDataTableRowHandle     InputActionRowHandle           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_InputKeyNavigationBase_C::OnInputKeyClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* InputKey, int Index, const struct FDataTableRowHandle& InputActionRowHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InputKeyNavigationBase.WBP_InputKeyNavigationBase_C.OnInputKeyClicked__DelegateSignature"));

	struct
	{
		class UWBP_ButtonBase_Btn_C*   InputKey;
		int                            Index;
		struct FDataTableRowHandle     InputActionRowHandle;
	} params = {};

	params.InputKey = InputKey;
	params.Index = Index;
	params.InputActionRowHandle = InputActionRowHandle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
