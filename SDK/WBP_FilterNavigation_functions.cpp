// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_FilterNavigation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_FilterNavigation.WBP_FilterNavigation_C.GetActiveFilterSetup
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FStucture_FilterData    filterSetup                    (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UWBP_FilterNavigation_C::GetActiveFilterSetup(struct FStucture_FilterData* filterSetup)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_FilterNavigation.WBP_FilterNavigation_C.GetActiveFilterSetup"));

	struct
	{
		struct FStucture_FilterData    filterSetup;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (filterSetup != nullptr)
		*filterSetup = params.filterSetup;
}


// Function WBP_FilterNavigation.WBP_FilterNavigation_C.GetFilterState
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<En_FilterCategoryCollection> FilterEnum                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYFilterCategoriesDataEntry FilterCategories               (CPF_Parm, CPF_OutParm)

void UWBP_FilterNavigation_C::GetFilterState(TEnumAsByte<En_FilterCategoryCollection>* FilterEnum, struct FYFilterCategoriesDataEntry* FilterCategories)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_FilterNavigation.WBP_FilterNavigation_C.GetFilterState"));

	struct
	{
		TEnumAsByte<En_FilterCategoryCollection> FilterEnum;
		struct FYFilterCategoriesDataEntry FilterCategories;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (FilterEnum != nullptr)
		*FilterEnum = params.FilterEnum;
	if (FilterCategories != nullptr)
		*FilterCategories = params.FilterCategories;
}


// Function WBP_FilterNavigation.WBP_FilterNavigation_C.GetFilterActiveCategories
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FYFilterCategoriesDataEntry ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FYFilterCategoriesDataEntry UWBP_FilterNavigation_C::GetFilterActiveCategories()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_FilterNavigation.WBP_FilterNavigation_C.GetFilterActiveCategories"));

	struct
	{
		struct FYFilterCategoriesDataEntry ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_FilterNavigation.WBP_FilterNavigation_C.GetFilterActiveCategory
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<En_FilterCategoryCollection> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

TEnumAsByte<En_FilterCategoryCollection> UWBP_FilterNavigation_C::GetFilterActiveCategory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_FilterNavigation.WBP_FilterNavigation_C.GetFilterActiveCategory"));

	struct
	{
		TEnumAsByte<En_FilterCategoryCollection> ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_FilterNavigation.WBP_FilterNavigation_C.SetSelectedFilterByIndex
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           TriggerSelectedCallback        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_FilterNavigation_C::SetSelectedFilterByIndex(int Index, bool TriggerSelectedCallback)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_FilterNavigation.WBP_FilterNavigation_C.SetSelectedFilterByIndex"));

	struct
	{
		int                            Index;
		bool                           TriggerSelectedCallback;
	} params = {};

	params.Index = Index;
	params.TriggerSelectedCallback = TriggerSelectedCallback;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_FilterNavigation.WBP_FilterNavigation_C.SetSelectedFilterByButton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Filter_Btn_C*       FilterButton                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           TriggerSelectedCallback        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_FilterNavigation_C::SetSelectedFilterByButton(class UWBP_Filter_Btn_C* FilterButton, bool TriggerSelectedCallback)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_FilterNavigation.WBP_FilterNavigation_C.SetSelectedFilterByButton"));

	struct
	{
		class UWBP_Filter_Btn_C*       FilterButton;
		bool                           TriggerSelectedCallback;
	} params = {};

	params.FilterButton = FilterButton;
	params.TriggerSelectedCallback = TriggerSelectedCallback;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_FilterNavigation.WBP_FilterNavigation_C.SetFilterSelection
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Selection                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            SelectedOption                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           TriggerSelectedCallback        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           returnResult                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_FilterNavigation_C::SetFilterSelection(const struct FString& Selection, int SelectedOption, bool TriggerSelectedCallback, bool* returnResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_FilterNavigation.WBP_FilterNavigation_C.SetFilterSelection"));

	struct
	{
		struct FString                 Selection;
		int                            SelectedOption;
		bool                           TriggerSelectedCallback;
		bool                           returnResult;
	} params = {};

	params.Selection = Selection;
	params.SelectedOption = SelectedOption;
	params.TriggerSelectedCallback = TriggerSelectedCallback;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (returnResult != nullptr)
		*returnResult = params.returnResult;
}


// Function WBP_FilterNavigation.WBP_FilterNavigation_C.CreateFilterFromArray
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FStucture_FilterData> InFilters                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            SelectedOption                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           TriggerSelectedCallback        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FString                 FilterCollectionId             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_FilterNavigation_C::CreateFilterFromArray(int SelectedOption, bool TriggerSelectedCallback, const struct FString& FilterCollectionId, TArray<struct FStucture_FilterData>* InFilters)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_FilterNavigation.WBP_FilterNavigation_C.CreateFilterFromArray"));

	struct
	{
		TArray<struct FStucture_FilterData> InFilters;
		int                            SelectedOption;
		bool                           TriggerSelectedCallback;
		struct FString                 FilterCollectionId;
	} params = {};

	params.SelectedOption = SelectedOption;
	params.TriggerSelectedCallback = TriggerSelectedCallback;
	params.FilterCollectionId = FilterCollectionId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InFilters != nullptr)
		*InFilters = params.InFilters;
}


// Function WBP_FilterNavigation.WBP_FilterNavigation_C.CreateFilter
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FStucture_FilterData    Content                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// bool                           IsSelected                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           TriggerSelectedCallback        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_FilterNavigation_C::CreateFilter(const struct FStucture_FilterData& Content, bool IsSelected, bool TriggerSelectedCallback)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_FilterNavigation.WBP_FilterNavigation_C.CreateFilter"));

	struct
	{
		struct FStucture_FilterData    Content;
		bool                           IsSelected;
		bool                           TriggerSelectedCallback;
	} params = {};

	params.Content = Content;
	params.IsSelected = IsSelected;
	params.TriggerSelectedCallback = TriggerSelectedCallback;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_FilterNavigation.WBP_FilterNavigation_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_FilterNavigation_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_FilterNavigation.WBP_FilterNavigation_C.PreConstruct"));

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


// Function WBP_FilterNavigation.WBP_FilterNavigation_C.OnFilterButtonClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Filter_Btn_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_FilterNavigation_C::OnFilterButtonClicked(class UWBP_Filter_Btn_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_FilterNavigation.WBP_FilterNavigation_C.OnFilterButtonClicked"));

	struct
	{
		class UWBP_Filter_Btn_C*       Button;
	} params = {};

	params.Button = Button;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_FilterNavigation.WBP_FilterNavigation_C.ResetToDefault
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_FilterNavigation_C::ResetToDefault()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_FilterNavigation.WBP_FilterNavigation_C.ResetToDefault"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_FilterNavigation.WBP_FilterNavigation_C.ExecuteUbergraph_WBP_FilterNavigation
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_FilterNavigation_C::ExecuteUbergraph_WBP_FilterNavigation(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_FilterNavigation.WBP_FilterNavigation_C.ExecuteUbergraph_WBP_FilterNavigation"));

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


// Function WBP_FilterNavigation.WBP_FilterNavigation_C.OnFilterClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYFilterCategoriesDataEntry Categories                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TEnumAsByte<En_FilterCategoryCollection> ReturnValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_FilterNavigation_C::OnFilterClicked__DelegateSignature(const struct FYFilterCategoriesDataEntry& Categories, TEnumAsByte<En_FilterCategoryCollection> ReturnValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_FilterNavigation.WBP_FilterNavigation_C.OnFilterClicked__DelegateSignature"));

	struct
	{
		struct FYFilterCategoriesDataEntry Categories;
		TEnumAsByte<En_FilterCategoryCollection> ReturnValue;
	} params = {};

	params.Categories = Categories;
	params.ReturnValue = ReturnValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
