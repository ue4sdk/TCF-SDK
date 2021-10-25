// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Station_Vanity_Menu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.EvaluateStackPop
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

int UWBP_Station_Vanity_Menu_C::EvaluateStackPop()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.EvaluateStackPop"));

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.ExecuteActivate
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_Station_Vanity_Menu_C::ExecuteActivate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.ExecuteActivate"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.ExecuteDeactivate
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_Station_Vanity_Menu_C::ExecuteDeactivate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.ExecuteDeactivate"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.ClearWidgetsAndRequests
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_Vanity_Menu_C::ClearWidgetsAndRequests()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.ClearWidgetsAndRequests"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.RefreshRuntimeStateOnWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYFilterItemEntry       Entry                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// class UWBP_Item_Btn_C*         CreatedBtn                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Vanity_Menu_C::RefreshRuntimeStateOnWidget(const struct FYFilterItemEntry& Entry, class UWBP_Item_Btn_C* CreatedBtn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.RefreshRuntimeStateOnWidget"));

	struct
	{
		struct FYFilterItemEntry       Entry;
		class UWBP_Item_Btn_C*         CreatedBtn;
	} params;

	params.Entry = Entry;
	params.CreatedBtn = CreatedBtn;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.RefreshedCreatedCustomizationStates
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_Vanity_Menu_C::RefreshedCreatedCustomizationStates()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.RefreshedCreatedCustomizationStates"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.SetActiveVanityScreen
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<En_VanityMenuStates> ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EYCustomizationCategory        customizationCategory          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Vanity_Menu_C::SetActiveVanityScreen(TEnumAsByte<En_VanityMenuStates> ID, EYCustomizationCategory customizationCategory)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.SetActiveVanityScreen"));

	struct
	{
		TEnumAsByte<En_VanityMenuStates> ID;
		EYCustomizationCategory        customizationCategory;
	} params;

	params.ID = ID;
	params.customizationCategory = customizationCategory;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.ConstructItemWithFilterEntry
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYFilterItemEntry       Entry                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_Station_Vanity_Menu_C::ConstructItemWithFilterEntry(const struct FYFilterItemEntry& Entry)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.ConstructItemWithFilterEntry"));

	struct
	{
		struct FYFilterItemEntry       Entry;
	} params;

	params.Entry = Entry;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.SetSelectedWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ItemContainer*  DesiredSelectedWidget          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Vanity_Menu_C::SetSelectedWidget(class UYWidget_ItemContainer* DesiredSelectedWidget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.SetSelectedWidget"));

	struct
	{
		class UYWidget_ItemContainer*  DesiredSelectedWidget;
	} params;

	params.DesiredSelectedWidget = DesiredSelectedWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.RequestAsyncCreationFromFilterSettings
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYFilterCategoriesDataEntry FilterSettings                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           ScrollIntoView                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Station_Vanity_Menu_C::RequestAsyncCreationFromFilterSettings(const struct FYFilterCategoriesDataEntry& FilterSettings, bool ScrollIntoView)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.RequestAsyncCreationFromFilterSettings"));

	struct
	{
		struct FYFilterCategoriesDataEntry FilterSettings;
		bool                           ScrollIntoView;
	} params;

	params.FilterSettings = FilterSettings;
	params.ScrollIntoView = ScrollIntoView;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.Get Filter Runtime Settings To Use
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FYFilterRuntimeSettings ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FYFilterRuntimeSettings UWBP_Station_Vanity_Menu_C::Get_Filter_Runtime_Settings_To_Use()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.Get Filter Runtime Settings To Use"));

	struct
	{
		struct FYFilterRuntimeSettings ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.IsProspectSelectionActive
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_Station_Vanity_Menu_C::IsProspectSelectionActive()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.IsProspectSelectionActive"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.BndEvt__WBP_Btn_Cancel_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Vanity_Menu_C::BndEvt__WBP_Btn_Cancel_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.BndEvt__WBP_Btn_Cancel_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature"));

	struct
	{
		class UWBP_ButtonBase_Btn_C*   Button;
	} params;

	params.Button = Button;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.OnItemClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ItemContainer*  itemWidget                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Vanity_Menu_C::OnItemClicked(class UYWidget_ItemContainer* itemWidget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.OnItemClicked"));

	struct
	{
		class UYWidget_ItemContainer*  itemWidget;
	} params;

	params.itemWidget = itemWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.ExecuteSpawnAction
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FYResourceManagerRequestEntry Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UWBP_Station_Vanity_Menu_C::ExecuteSpawnAction(const struct FYResourceManagerRequestEntry& Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.ExecuteSpawnAction"));

	struct
	{
		struct FYResourceManagerRequestEntry Data;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.BndEvt__WBP_Common_Btn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Vanity_Menu_C::BndEvt__WBP_Common_Btn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.BndEvt__WBP_Common_Btn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature"));

	struct
	{
		class UWBP_ButtonBase_Btn_C*   Button;
	} params;

	params.Button = Button;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.BndEvt__WBP_FilterNavigation_K2Node_ComponentBoundEvent_0_OnFilterClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FYFilterCategoriesDataEntry Categories                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TEnumAsByte<En_FilterCategoryCollection> ReturnValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Vanity_Menu_C::BndEvt__WBP_FilterNavigation_K2Node_ComponentBoundEvent_0_OnFilterClicked__DelegateSignature(const struct FYFilterCategoriesDataEntry& Categories, TEnumAsByte<En_FilterCategoryCollection> ReturnValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.BndEvt__WBP_FilterNavigation_K2Node_ComponentBoundEvent_0_OnFilterClicked__DelegateSignature"));

	struct
	{
		struct FYFilterCategoriesDataEntry Categories;
		TEnumAsByte<En_FilterCategoryCollection> ReturnValue;
	} params;

	params.Categories = Categories;
	params.ReturnValue = ReturnValue;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.BndEvt__Button_58_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Station_Vanity_Menu_C::BndEvt__Button_58_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.BndEvt__Button_58_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.BndEvt__RotationButton_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Station_Vanity_Menu_C::BndEvt__RotationButton_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.BndEvt__RotationButton_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.BP_OnAccept
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYVanityViewDialogOptions      Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Vanity_Menu_C::BP_OnAccept(EYVanityViewDialogOptions Type)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.BP_OnAccept"));

	struct
	{
		EYVanityViewDialogOptions      Type;
	} params;

	params.Type = Type;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.BP_OnOnDecline
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYVanityViewDialogOptions      Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Vanity_Menu_C::BP_OnOnDecline(EYVanityViewDialogOptions Type)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.BP_OnOnDecline"));

	struct
	{
		EYVanityViewDialogOptions      Type;
	} params;

	params.Type = Type;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.OnCharacterUpdated_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYCustomizationModelType       Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Vanity_Menu_C::OnCharacterUpdated_Event_1(EYCustomizationModelType Type)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.OnCharacterUpdated_Event_1"));

	struct
	{
		EYCustomizationModelType       Type;
	} params;

	params.Type = Type;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Station_Vanity_Menu_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.BP_OnWidgetHidden
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_Station_Vanity_Menu_C::BP_OnWidgetHidden()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.BP_OnWidgetHidden"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.BP_OnWidgetShown
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_Station_Vanity_Menu_C::BP_OnWidgetShown()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.BP_OnWidgetShown"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.Init
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_Vanity_Menu_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.Init"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.ExecuteUbergraph_WBP_Station_Vanity_Menu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Vanity_Menu_C::ExecuteUbergraph_WBP_Station_Vanity_Menu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C.ExecuteUbergraph_WBP_Station_Vanity_Menu"));

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
