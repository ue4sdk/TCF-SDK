// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Station_Inventory_Menu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Station_Inventory_Menu.WBP_Station_Inventory_Menu_C.SequenceEvent__ENTRYPOINTWBP_Station_Inventory_Menu_2
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_Inventory_Menu_C::SequenceEvent__ENTRYPOINTWBP_Station_Inventory_Menu_2()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Inventory_Menu.WBP_Station_Inventory_Menu_C.SequenceEvent__ENTRYPOINTWBP_Station_Inventory_Menu_2"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Inventory_Menu.WBP_Station_Inventory_Menu_C.SequenceEvent__ENTRYPOINTWBP_Station_Inventory_Menu_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_Inventory_Menu_C::SequenceEvent__ENTRYPOINTWBP_Station_Inventory_Menu_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Inventory_Menu.WBP_Station_Inventory_Menu_C.SequenceEvent__ENTRYPOINTWBP_Station_Inventory_Menu_1"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Inventory_Menu.WBP_Station_Inventory_Menu_C.OnToggleAttachmentScreenCallback
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_Inventory_Menu_C::OnToggleAttachmentScreenCallback()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Inventory_Menu.WBP_Station_Inventory_Menu_C.OnToggleAttachmentScreenCallback"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Inventory_Menu.WBP_Station_Inventory_Menu_C.OnDropStateChangedCallback
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDragStateData         State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_Station_Inventory_Menu_C::OnDropStateChangedCallback(const struct FYDragStateData& State)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Inventory_Menu.WBP_Station_Inventory_Menu_C.OnDropStateChangedCallback"));

	struct
	{
		struct FYDragStateData         State;
	} params;

	params.State = State;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Inventory_Menu.WBP_Station_Inventory_Menu_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_Station_Inventory_Menu_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Inventory_Menu.WBP_Station_Inventory_Menu_C.BP_AnimateVisibility"));

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params;

	params.newVisibility = newVisibility;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Station_Inventory_Menu.WBP_Station_Inventory_Menu_C.SequenceEvent_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_Inventory_Menu_C::SequenceEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Inventory_Menu.WBP_Station_Inventory_Menu_C.SequenceEvent_2"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Inventory_Menu.WBP_Station_Inventory_Menu_C.SequenceEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_Inventory_Menu_C::SequenceEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Inventory_Menu.WBP_Station_Inventory_Menu_C.SequenceEvent_1"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Inventory_Menu.WBP_Station_Inventory_Menu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Station_Inventory_Menu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Inventory_Menu.WBP_Station_Inventory_Menu_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Inventory_Menu.WBP_Station_Inventory_Menu_C.BndEvt__WBP_FilterNavigation_K2Node_ComponentBoundEvent_0_OnFilterClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FYFilterCategoriesDataEntry Categories                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TEnumAsByte<En_FilterCategoryCollection> ReturnValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Inventory_Menu_C::BndEvt__WBP_FilterNavigation_K2Node_ComponentBoundEvent_0_OnFilterClicked__DelegateSignature(const struct FYFilterCategoriesDataEntry& Categories, TEnumAsByte<En_FilterCategoryCollection> ReturnValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Inventory_Menu.WBP_Station_Inventory_Menu_C.BndEvt__WBP_FilterNavigation_K2Node_ComponentBoundEvent_0_OnFilterClicked__DelegateSignature"));

	struct
	{
		struct FYFilterCategoriesDataEntry Categories;
		TEnumAsByte<En_FilterCategoryCollection> ReturnValue;
	} params;

	params.Categories = Categories;
	params.ReturnValue = ReturnValue;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Inventory_Menu.WBP_Station_Inventory_Menu_C.OnScrapItemInputEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           wasSuccessful                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// EYPlayerSetType                slotType                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Inventory_Menu_C::OnScrapItemInputEvent(bool wasSuccessful, EYPlayerSetType slotType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Inventory_Menu.WBP_Station_Inventory_Menu_C.OnScrapItemInputEvent"));

	struct
	{
		bool                           wasSuccessful;
		EYPlayerSetType                slotType;
	} params;

	params.wasSuccessful = wasSuccessful;
	params.slotType = slotType;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Inventory_Menu.WBP_Station_Inventory_Menu_C.PlayScreenInAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_Inventory_Menu_C::PlayScreenInAnim()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Inventory_Menu.WBP_Station_Inventory_Menu_C.PlayScreenInAnim"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Inventory_Menu.WBP_Station_Inventory_Menu_C.BP_OnWidgetHidden
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_Station_Inventory_Menu_C::BP_OnWidgetHidden()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Inventory_Menu.WBP_Station_Inventory_Menu_C.BP_OnWidgetHidden"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Inventory_Menu.WBP_Station_Inventory_Menu_C.OnInitializationComplete
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYRuntimeInitializationContext Result                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Station_Inventory_Menu_C::OnInitializationComplete(const struct FYRuntimeInitializationContext& Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Inventory_Menu.WBP_Station_Inventory_Menu_C.OnInitializationComplete"));

	struct
	{
		struct FYRuntimeInitializationContext Result;
	} params;

	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Inventory_Menu.WBP_Station_Inventory_Menu_C.ExecuteUbergraph_WBP_Station_Inventory_Menu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Inventory_Menu_C::ExecuteUbergraph_WBP_Station_Inventory_Menu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Inventory_Menu.WBP_Station_Inventory_Menu_C.ExecuteUbergraph_WBP_Station_Inventory_Menu"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Inventory_Menu.WBP_Station_Inventory_Menu_C.OnScrapItemInput__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           wasSuccessful                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// EYPlayerSetType                slotType                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Inventory_Menu_C::OnScrapItemInput__DelegateSignature(bool wasSuccessful, EYPlayerSetType slotType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Inventory_Menu.WBP_Station_Inventory_Menu_C.OnScrapItemInput__DelegateSignature"));

	struct
	{
		bool                           wasSuccessful;
		EYPlayerSetType                slotType;
	} params;

	params.wasSuccessful = wasSuccessful;
	params.slotType = slotType;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
