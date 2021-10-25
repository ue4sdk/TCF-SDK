// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_TabNavigation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_TabNavigation.WBP_TabNavigation_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_TabNavigation_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabNavigation.WBP_TabNavigation_C.BP_AnimateVisibility");

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params;

	params.newVisibility = newVisibility;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_TabNavigation.WBP_TabNavigation_C.ClearTabs
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TabNavigation_C::ClearTabs()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabNavigation.WBP_TabNavigation_C.ClearTabs");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabNavigation.WBP_TabNavigation_C.CreateTab
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FStucture_TabData       Content                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWBP_Tab_Btn_C*          Tab_Button                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TabNavigation_C::CreateTab(const struct FStucture_TabData& Content, int Index, class UWBP_Tab_Btn_C** Tab_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabNavigation.WBP_TabNavigation_C.CreateTab");

	struct
	{
		struct FStucture_TabData       Content;
		int                            Index;
		class UWBP_Tab_Btn_C*          Tab_Button;
	} params;

	params.Content = Content;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);

	if (Tab_Button != nullptr)
		*Tab_Button = params.Tab_Button;
}


// Function WBP_TabNavigation.WBP_TabNavigation_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_TabNavigation_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabNavigation.WBP_TabNavigation_C.OnInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabNavigation.WBP_TabNavigation_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_TabNavigation_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabNavigation.WBP_TabNavigation_C.Destruct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabNavigation.WBP_TabNavigation_C.OnTabPrevious
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TabNavigation_C::OnTabPrevious()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabNavigation.WBP_TabNavigation_C.OnTabPrevious");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabNavigation.WBP_TabNavigation_C.OnTabNext
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TabNavigation_C::OnTabNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabNavigation.WBP_TabNavigation_C.OnTabNext");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabNavigation.WBP_TabNavigation_C.BP_OnWidgetShown
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_TabNavigation_C::BP_OnWidgetShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabNavigation.WBP_TabNavigation_C.BP_OnWidgetShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabNavigation.WBP_TabNavigation_C.SetPendingVisibility
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newPendingVisibility           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           atConstruct                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_TabNavigation_C::SetPendingVisibility(ESlateVisibility newPendingVisibility, bool atConstruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabNavigation.WBP_TabNavigation_C.SetPendingVisibility");

	struct
	{
		ESlateVisibility               newPendingVisibility;
		bool                           atConstruct;
	} params;

	params.newPendingVisibility = newPendingVisibility;
	params.atConstruct = atConstruct;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabNavigation.WBP_TabNavigation_C.RefreshInput
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TabNavigation_C::RefreshInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabNavigation.WBP_TabNavigation_C.RefreshInput");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabNavigation.WBP_TabNavigation_C.BP_OnWidgetHidden
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_TabNavigation_C::BP_OnWidgetHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabNavigation.WBP_TabNavigation_C.BP_OnWidgetHidden");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabNavigation.WBP_TabNavigation_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_TabNavigation_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabNavigation.WBP_TabNavigation_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabNavigation.WBP_TabNavigation_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_TabNavigation_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabNavigation.WBP_TabNavigation_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabNavigation.WBP_TabNavigation_C.Refresh
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TabNavigation_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabNavigation.WBP_TabNavigation_C.Refresh");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabNavigation.WBP_TabNavigation_C.ExecuteUbergraph_WBP_TabNavigation
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TabNavigation_C::ExecuteUbergraph_WBP_TabNavigation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TabNavigation.WBP_TabNavigation_C.ExecuteUbergraph_WBP_TabNavigation");

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
