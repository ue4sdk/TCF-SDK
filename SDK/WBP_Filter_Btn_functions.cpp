// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Filter_Btn_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Filter_Btn.WBP_Filter_Btn_C.SequenceEvent__ENTRYPOINTWBP_Filter_Btn_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Filter_Btn_C::SequenceEvent__ENTRYPOINTWBP_Filter_Btn_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Filter_Btn.WBP_Filter_Btn_C.SequenceEvent__ENTRYPOINTWBP_Filter_Btn_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Filter_Btn.WBP_Filter_Btn_C.TryHighlightSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Filter_Btn_C::TryHighlightSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Filter_Btn.WBP_Filter_Btn_C.TryHighlightSelected"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Filter_Btn.WBP_Filter_Btn_C.GetSpecificFilterData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FStructure_FilterCategoryBtnData Value                          (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)
// bool                           FoundValue                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TEnumAsByte<En_FilterCategoryCollection> ReturnCategory                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Filter_Btn_C::GetSpecificFilterData(struct FStructure_FilterCategoryBtnData* Value, bool* FoundValue, TEnumAsByte<En_FilterCategoryCollection>* ReturnCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Filter_Btn.WBP_Filter_Btn_C.GetSpecificFilterData"));

	struct
	{
		struct FStructure_FilterCategoryBtnData Value;
		bool                           FoundValue;
		TEnumAsByte<En_FilterCategoryCollection> ReturnCategory;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Value != nullptr)
		*Value = params.Value;
	if (FoundValue != nullptr)
		*FoundValue = params.FoundValue;
	if (ReturnCategory != nullptr)
		*ReturnCategory = params.ReturnCategory;
}


// Function WBP_Filter_Btn.WBP_Filter_Btn_C.Get Filter Categories
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FYFilterCategoriesDataEntry ReturnFilterCategories         (CPF_Parm, CPF_OutParm)
// TEnumAsByte<En_FilterCategoryCollection> ReturnEnum                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

bool UWBP_Filter_Btn_C::Get_Filter_Categories(struct FYFilterCategoriesDataEntry* ReturnFilterCategories, TEnumAsByte<En_FilterCategoryCollection>* ReturnEnum)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Filter_Btn.WBP_Filter_Btn_C.Get Filter Categories"));

	struct
	{
		bool                           ReturnValue;
		struct FYFilterCategoriesDataEntry ReturnFilterCategories;
		TEnumAsByte<En_FilterCategoryCollection> ReturnEnum;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ReturnFilterCategories != nullptr)
		*ReturnFilterCategories = params.ReturnFilterCategories;
	if (ReturnEnum != nullptr)
		*ReturnEnum = params.ReturnEnum;

	return params.ReturnValue;
}


// Function WBP_Filter_Btn.WBP_Filter_Btn_C.GetFilterLabel
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UWBP_Filter_Btn_C::GetFilterLabel()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Filter_Btn.WBP_Filter_Btn_C.GetFilterLabel"));

	struct
	{
		struct FText                   ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_Filter_Btn.WBP_Filter_Btn_C.Btn_List_Simple_HighlightSheen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Filter_Btn_C::Btn_List_Simple_HighlightSheen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Filter_Btn.WBP_Filter_Btn_C.Btn_List_Simple_HighlightSheen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Filter_Btn.WBP_Filter_Btn_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Filter_Btn_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Filter_Btn.WBP_Filter_Btn_C.PreConstruct"));

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


// Function WBP_Filter_Btn.WBP_Filter_Btn_C.Hovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Filter_Btn_C::Hovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Filter_Btn.WBP_Filter_Btn_C.Hovered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Filter_Btn.WBP_Filter_Btn_C.Unhovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Filter_Btn_C::Unhovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Filter_Btn.WBP_Filter_Btn_C.Unhovered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Filter_Btn.WBP_Filter_Btn_C.Clicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Filter_Btn_C::Clicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Filter_Btn.WBP_Filter_Btn_C.Clicked"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Filter_Btn.WBP_Filter_Btn_C.Pressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Filter_Btn_C::Pressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Filter_Btn.WBP_Filter_Btn_C.Pressed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Filter_Btn.WBP_Filter_Btn_C.Released
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Filter_Btn_C::Released()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Filter_Btn.WBP_Filter_Btn_C.Released"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Filter_Btn.WBP_Filter_Btn_C.SetIsSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShouldBeSelected               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Filter_Btn_C::SetIsSelected(bool ShouldBeSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Filter_Btn.WBP_Filter_Btn_C.SetIsSelected"));

	struct
	{
		bool                           ShouldBeSelected;
	} params = {};

	params.ShouldBeSelected = ShouldBeSelected;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Filter_Btn.WBP_Filter_Btn_C.ForceSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Filter_Btn_C::ForceSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Filter_Btn.WBP_Filter_Btn_C.ForceSelected"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Filter_Btn.WBP_Filter_Btn_C.ExecuteUbergraph_WBP_Filter_Btn
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Filter_Btn_C::ExecuteUbergraph_WBP_Filter_Btn(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Filter_Btn.WBP_Filter_Btn_C.ExecuteUbergraph_WBP_Filter_Btn"));

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


// Function WBP_Filter_Btn.WBP_Filter_Btn_C.OnFilterButtonClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Filter_Btn_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Filter_Btn_C::OnFilterButtonClicked__DelegateSignature(class UWBP_Filter_Btn_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Filter_Btn.WBP_Filter_Btn_C.OnFilterButtonClicked__DelegateSignature"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
