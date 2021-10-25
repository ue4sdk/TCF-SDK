// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Station_WeaponDetails_Menu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Station_WeaponDetails_Menu.WBP_Station_WeaponDetails_Menu_C.SequenceEvent__ENTRYPOINTWBP_Station_WeaponDetails_Menu_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_WeaponDetails_Menu_C::SequenceEvent__ENTRYPOINTWBP_Station_WeaponDetails_Menu_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_WeaponDetails_Menu.WBP_Station_WeaponDetails_Menu_C.SequenceEvent__ENTRYPOINTWBP_Station_WeaponDetails_Menu_1"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_WeaponDetails_Menu.WBP_Station_WeaponDetails_Menu_C.InitializeAttachmentScreen
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bValidInventoryItem            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Station_WeaponDetails_Menu_C::InitializeAttachmentScreen(bool* bValidInventoryItem)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_WeaponDetails_Menu.WBP_Station_WeaponDetails_Menu_C.InitializeAttachmentScreen"));

	struct
	{
		bool                           bValidInventoryItem;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bValidInventoryItem != nullptr)
		*bValidInventoryItem = params.bValidInventoryItem;
}


// Function WBP_Station_WeaponDetails_Menu.WBP_Station_WeaponDetails_Menu_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_Station_WeaponDetails_Menu_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_WeaponDetails_Menu.WBP_Station_WeaponDetails_Menu_C.BP_AnimateVisibility"));

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params;

	params.newVisibility = newVisibility;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Station_WeaponDetails_Menu.WBP_Station_WeaponDetails_Menu_C.SequenceEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_WeaponDetails_Menu_C::SequenceEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_WeaponDetails_Menu.WBP_Station_WeaponDetails_Menu_C.SequenceEvent_1"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_WeaponDetails_Menu.WBP_Station_WeaponDetails_Menu_C.BndEvt__WBP_FilterNavigation_K2Node_ComponentBoundEvent_0_OnFilterClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FYFilterCategoriesDataEntry Categories                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TEnumAsByte<En_FilterCategoryCollection> ReturnValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_WeaponDetails_Menu_C::BndEvt__WBP_FilterNavigation_K2Node_ComponentBoundEvent_0_OnFilterClicked__DelegateSignature(const struct FYFilterCategoriesDataEntry& Categories, TEnumAsByte<En_FilterCategoryCollection> ReturnValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_WeaponDetails_Menu.WBP_Station_WeaponDetails_Menu_C.BndEvt__WBP_FilterNavigation_K2Node_ComponentBoundEvent_0_OnFilterClicked__DelegateSignature"));

	struct
	{
		struct FYFilterCategoriesDataEntry Categories;
		TEnumAsByte<En_FilterCategoryCollection> ReturnValue;
	} params;

	params.Categories = Categories;
	params.ReturnValue = ReturnValue;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_WeaponDetails_Menu.WBP_Station_WeaponDetails_Menu_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Station_WeaponDetails_Menu_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_WeaponDetails_Menu.WBP_Station_WeaponDetails_Menu_C.OnInitialized"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_WeaponDetails_Menu.WBP_Station_WeaponDetails_Menu_C.OnItemDroppedCallback
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDragDropOperation*      InDragDropOperation            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_WeaponDetails_Menu_C::OnItemDroppedCallback(class UDragDropOperation* InDragDropOperation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_WeaponDetails_Menu.WBP_Station_WeaponDetails_Menu_C.OnItemDroppedCallback"));

	struct
	{
		class UDragDropOperation*      InDragDropOperation;
	} params;

	params.InDragDropOperation = InDragDropOperation;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_WeaponDetails_Menu.WBP_Station_WeaponDetails_Menu_C.BndEvt__Button_58_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Station_WeaponDetails_Menu_C::BndEvt__Button_58_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_WeaponDetails_Menu.WBP_Station_WeaponDetails_Menu_C.BndEvt__Button_58_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_WeaponDetails_Menu.WBP_Station_WeaponDetails_Menu_C.BndEvt__RotationButton_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Station_WeaponDetails_Menu_C::BndEvt__RotationButton_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_WeaponDetails_Menu.WBP_Station_WeaponDetails_Menu_C.BndEvt__RotationButton_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_WeaponDetails_Menu.WBP_Station_WeaponDetails_Menu_C.ExecuteUbergraph_WBP_Station_WeaponDetails_Menu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_WeaponDetails_Menu_C::ExecuteUbergraph_WBP_Station_WeaponDetails_Menu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_WeaponDetails_Menu.WBP_Station_WeaponDetails_Menu_C.ExecuteUbergraph_WBP_Station_WeaponDetails_Menu"));

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
