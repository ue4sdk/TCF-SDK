// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_TabNavigationBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_TabNavigationBase.WBP_TabNavigationBase_C.Select Tab
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Force                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_TabNavigationBase_C::Select_Tab(int Index, bool Force)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabNavigationBase.WBP_TabNavigationBase_C.Select Tab"));

	struct
	{
		int                            Index;
		bool                           Force;
	} params = {};

	params.Index = Index;
	params.Force = Force;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_TabNavigationBase.WBP_TabNavigationBase_C.OnTabSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_TabElementBase_TabElem_C* TabElement                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TabNavigationBase_C::OnTabSelected(class UWBP_TabElementBase_TabElem_C* TabElement)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabNavigationBase.WBP_TabNavigationBase_C.OnTabSelected"));

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


// Function WBP_TabNavigationBase.WBP_TabNavigationBase_C.ClearTabs
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TabNavigationBase_C::ClearTabs()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabNavigationBase.WBP_TabNavigationBase_C.ClearTabs"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_TabNavigationBase.WBP_TabNavigationBase_C.AddTab
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_TabElementBase_TabElem_C* TabElement                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TabNavigationBase_C::AddTab(class UWBP_TabElementBase_TabElem_C* TabElement)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabNavigationBase.WBP_TabNavigationBase_C.AddTab"));

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


// Function WBP_TabNavigationBase.WBP_TabNavigationBase_C.OnTabChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWBP_TabElementBase_TabElem_C* TabElement                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TabNavigationBase_C::OnTabChanged__DelegateSignature(int Index, class UWBP_TabElementBase_TabElem_C* TabElement)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabNavigationBase.WBP_TabNavigationBase_C.OnTabChanged__DelegateSignature"));

	struct
	{
		int                            Index;
		class UWBP_TabElementBase_TabElem_C* TabElement;
	} params = {};

	params.Index = Index;
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
