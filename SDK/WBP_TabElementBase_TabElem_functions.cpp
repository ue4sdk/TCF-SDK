// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_TabElementBase_TabElem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_TabElementBase_TabElem.WBP_TabElementBase_TabElem_C.GetTabName
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   Name                           (CPF_Parm, CPF_OutParm)

void UWBP_TabElementBase_TabElem_C::GetTabName(struct FText* Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabElementBase_TabElem.WBP_TabElementBase_TabElem_C.GetTabName"));

	struct
	{
		struct FText                   Name;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Name != nullptr)
		*Name = params.Name;
}


// Function WBP_TabElementBase_TabElem.WBP_TabElementBase_TabElem_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_TabElementBase_TabElem_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabElementBase_TabElem.WBP_TabElementBase_TabElem_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_TabElementBase_TabElem.WBP_TabElementBase_TabElem_C.Unhovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TabElementBase_TabElem_C::Unhovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabElementBase_TabElem.WBP_TabElementBase_TabElem_C.Unhovered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_TabElementBase_TabElem.WBP_TabElementBase_TabElem_C.Clicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TabElementBase_TabElem_C::Clicked(class UWBP_ButtonBase_Btn_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabElementBase_TabElem.WBP_TabElementBase_TabElem_C.Clicked"));

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


// Function WBP_TabElementBase_TabElem.WBP_TabElementBase_TabElem_C.Hovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TabElementBase_TabElem_C::Hovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabElementBase_TabElem.WBP_TabElementBase_TabElem_C.Hovered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_TabElementBase_TabElem.WBP_TabElementBase_TabElem_C.OnSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TabElementBase_TabElem_C::OnSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabElementBase_TabElem.WBP_TabElementBase_TabElem_C.OnSelected"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_TabElementBase_TabElem.WBP_TabElementBase_TabElem_C.OnDeselected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TabElementBase_TabElem_C::OnDeselected()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabElementBase_TabElem.WBP_TabElementBase_TabElem_C.OnDeselected"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_TabElementBase_TabElem.WBP_TabElementBase_TabElem_C.Base_Clicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TabElementBase_TabElem_C::Base_Clicked(class UWBP_ButtonBase_Btn_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabElementBase_TabElem.WBP_TabElementBase_TabElem_C.Base_Clicked"));

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


// Function WBP_TabElementBase_TabElem.WBP_TabElementBase_TabElem_C.Base_Unhovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TabElementBase_TabElem_C::Base_Unhovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabElementBase_TabElem.WBP_TabElementBase_TabElem_C.Base_Unhovered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_TabElementBase_TabElem.WBP_TabElementBase_TabElem_C.Base_Hovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TabElementBase_TabElem_C::Base_Hovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabElementBase_TabElem.WBP_TabElementBase_TabElem_C.Base_Hovered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_TabElementBase_TabElem.WBP_TabElementBase_TabElem_C.ExecuteUbergraph_WBP_TabElementBase_TabElem
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TabElementBase_TabElem_C::ExecuteUbergraph_WBP_TabElementBase_TabElem(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabElementBase_TabElem.WBP_TabElementBase_TabElem_C.ExecuteUbergraph_WBP_TabElementBase_TabElem"));

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


// Function WBP_TabElementBase_TabElem.WBP_TabElementBase_TabElem_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_TabElementBase_TabElem_C* TabElement                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TabElementBase_TabElem_C::OnClicked__DelegateSignature(class UWBP_TabElementBase_TabElem_C* TabElement)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabElementBase_TabElem.WBP_TabElementBase_TabElem_C.OnClicked__DelegateSignature"));

	struct
	{
		class UWBP_TabElementBase_TabElem_C* TabElement;
	} params = {};

	params.TabElement = TabElement;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
