// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Station_Crafting_Menu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.SequenceEvent__ENTRYPOINTWBP_Station_Crafting_Menu_3
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_Crafting_Menu_C::SequenceEvent__ENTRYPOINTWBP_Station_Crafting_Menu_3()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.SequenceEvent__ENTRYPOINTWBP_Station_Crafting_Menu_3"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.SequenceEvent__ENTRYPOINTWBP_Station_Crafting_Menu_2
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_Crafting_Menu_C::SequenceEvent__ENTRYPOINTWBP_Station_Crafting_Menu_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.SequenceEvent__ENTRYPOINTWBP_Station_Crafting_Menu_2"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.SequenceEvent__ENTRYPOINTWBP_Station_Crafting_Menu_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_Crafting_Menu_C::SequenceEvent__ENTRYPOINTWBP_Station_Crafting_Menu_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.SequenceEvent__ENTRYPOINTWBP_Station_Crafting_Menu_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.Crafting In Progress
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_Station_Crafting_Menu_C::Crafting_In_Progress()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.Crafting In Progress"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.Is Item Valid For This Shop
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FYShopItem              SelectedShopItem               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_Station_Crafting_Menu_C::Is_Item_Valid_For_This_Shop(const struct FYShopItem& SelectedShopItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.Is Item Valid For This Shop"));

	struct
	{
		struct FYShopItem              SelectedShopItem;
		bool                           ReturnValue;
	} params = {};

	params.SelectedShopItem = SelectedShopItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_Station_Crafting_Menu_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.BP_AnimateVisibility"));

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


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.Selected Item Cant Be Skipped
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_Station_Crafting_Menu_C::Selected_Item_Cant_Be_Skipped()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.Selected Item Cant Be Skipped"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.Selected Item Cant Be Crafted
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_Station_Crafting_Menu_C::Selected_Item_Cant_Be_Crafted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.Selected Item Cant Be Crafted"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.Get If Selected Item Is Being Crafted
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_Station_Crafting_Menu_C::Get_If_Selected_Item_Is_Being_Crafted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.Get If Selected Item Is Being Crafted"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.Refresh Item Price
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Selected_Item_Is_Being_Crafted (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Station_Crafting_Menu_C::Refresh_Item_Price(bool Selected_Item_Is_Being_Crafted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.Refresh Item Price"));

	struct
	{
		bool                           Selected_Item_Is_Being_Crafted;
	} params = {};

	params.Selected_Item_Is_Being_Crafted = Selected_Item_Is_Being_Crafted;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.Refresh Recipe And Button
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_Crafting_Menu_C::Refresh_Recipe_And_Button()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.Refresh Recipe And Button"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.Close Loading Screen
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_Crafting_Menu_C::Close_Loading_Screen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.Close Loading Screen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.Play Flash Animations
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_Crafting_Menu_C::Play_Flash_Animations()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.Play Flash Animations"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.Get Price to Show on Crafting Button According to Context
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           SelectedItemIsBeingCrafted     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TArray<struct FYCostEntryRow>  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
// TArray<struct FYCostEntryRow>  OptionalCost                   (CPF_Parm, CPF_OutParm)

TArray<struct FYCostEntryRow> UWBP_Station_Crafting_Menu_C::Get_Price_to_Show_on_Crafting_Button_According_to_Context(bool SelectedItemIsBeingCrafted, TArray<struct FYCostEntryRow>* OptionalCost)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.Get Price to Show on Crafting Button According to Context"));

	struct
	{
		bool                           SelectedItemIsBeingCrafted;
		TArray<struct FYCostEntryRow>  ReturnValue;
		TArray<struct FYCostEntryRow>  OptionalCost;
	} params = {};

	params.SelectedItemIsBeingCrafted = SelectedItemIsBeingCrafted;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OptionalCost != nullptr)
		*OptionalCost = params.OptionalCost;

	return params.ReturnValue;
}


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.Crafting In Progress And Is The Item Currently Selected
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_Station_Crafting_Menu_C::Crafting_In_Progress_And_Is_The_Item_Currently_Selected()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.Crafting In Progress And Is The Item Currently Selected"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.Item Crafted And Selected Item Are The Same
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYControllerCraftingComponent* Controller_Crafting_Component  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_Station_Crafting_Menu_C::Item_Crafted_And_Selected_Item_Are_The_Same(class UYControllerCraftingComponent* Controller_Crafting_Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.Item Crafted And Selected Item Are The Same"));

	struct
	{
		class UYControllerCraftingComponent* Controller_Crafting_Component;
		bool                           ReturnValue;
	} params = {};

	params.Controller_Crafting_Component = Controller_Crafting_Component;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.Set Crafting Timer Current Value
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           CraftingInProgressAndIsTheItemCurrentlySelected (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Station_Crafting_Menu_C::Set_Crafting_Timer_Current_Value(bool CraftingInProgressAndIsTheItemCurrentlySelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.Set Crafting Timer Current Value"));

	struct
	{
		bool                           CraftingInProgressAndIsTheItemCurrentlySelected;
	} params = {};

	params.CraftingInProgressAndIsTheItemCurrentlySelected = CraftingInProgressAndIsTheItemCurrentlySelected;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.Handle Player Craft Button Click
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_Crafting_Menu_C::Handle_Player_Craft_Button_Click()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.Handle Player Craft Button Click"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.On Crafted Item Fail Response Received
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_Crafting_Menu_C::On_Crafted_Item_Fail_Response_Received()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.On Crafted Item Fail Response Received"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.On Item Crafting Stopped Response Received
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_Crafting_Menu_C::On_Item_Crafting_Stopped_Response_Received()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.On Item Crafting Stopped Response Received"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.On Item Crafting Started Fail Response Received
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYStartItemCraftingResultStatus startItemCraftingStatus        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Crafting_Menu_C::On_Item_Crafting_Started_Fail_Response_Received(EYStartItemCraftingResultStatus startItemCraftingStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.On Item Crafting Started Fail Response Received"));

	struct
	{
		EYStartItemCraftingResultStatus startItemCraftingStatus;
	} params = {};

	params.startItemCraftingStatus = startItemCraftingStatus;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.On Item Crafting Started Response Received
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_Crafting_Menu_C::On_Item_Crafting_Started_Response_Received()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.On Item Crafting Started Response Received"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.Update Selected Item Timer
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          remainingSeconds               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Crafting_Menu_C::Update_Selected_Item_Timer(float remainingSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.Update Selected Item Timer"));

	struct
	{
		float                          remainingSeconds;
	} params = {};

	params.remainingSeconds = remainingSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.Select Crafting Station Item
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ItemContainer*  ClickedWidget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Crafting_Menu_C::Select_Crafting_Station_Item(class UYWidget_ItemContainer* ClickedWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.Select Crafting Station Item"));

	struct
	{
		class UYWidget_ItemContainer*  ClickedWidget;
	} params = {};

	params.ClickedWidget = ClickedWidget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.On Filter Clicked
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYFilterCategoriesDataEntry Categories                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TEnumAsByte<En_FilterCategoryCollection> ReturnValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Crafting_Menu_C::On_Filter_Clicked(const struct FYFilterCategoriesDataEntry& Categories, TEnumAsByte<En_FilterCategoryCollection> ReturnValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.On Filter Clicked"));

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


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.Create Item Tile
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYResourceManagerRequestEntry Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UWBP_Station_Crafting_Menu_C::Create_Item_Tile(const struct FYResourceManagerRequestEntry& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.Create Item Tile"));

	struct
	{
		struct FYResourceManagerRequestEntry Data;
	} params = {};

	params.Data = Data;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.Request Items
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_Crafting_Menu_C::Request_Items()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.Request Items"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.Filter Tile
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ItemContainer*  itemTile                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Visible                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Station_Crafting_Menu_C::Filter_Tile(class UYWidget_ItemContainer* itemTile, bool newVisibility, bool* Visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.Filter Tile"));

	struct
	{
		class UYWidget_ItemContainer*  itemTile;
		bool                           newVisibility;
		bool                           Visible;
	} params = {};

	params.itemTile = itemTile;
	params.newVisibility = newVisibility;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Visible != nullptr)
		*Visible = params.Visible;
}


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.SequenceEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_Crafting_Menu_C::SequenceEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.SequenceEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.SequenceEvent_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_Crafting_Menu_C::SequenceEvent_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.SequenceEvent_2"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.SequenceEvent_3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_Crafting_Menu_C::SequenceEvent_3()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.SequenceEvent_3"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.WBP_CraftingProgressWidget_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_CraftingProgressWidget_C* WBP_CraftingProgressWidget     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Crafting_Menu_C::WBP_CraftingProgressWidget_Event_1(class UWBP_CraftingProgressWidget_C* WBP_CraftingProgressWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.WBP_CraftingProgressWidget_Event_1"));

	struct
	{
		class UWBP_CraftingProgressWidget_C* WBP_CraftingProgressWidget;
	} params = {};

	params.WBP_CraftingProgressWidget = WBP_CraftingProgressWidget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.BP_OnWidgetStartShow
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_Station_Crafting_Menu_C::BP_OnWidgetStartShow()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.BP_OnWidgetStartShow"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.ExecuteSpawnAction
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FYResourceManagerRequestEntry Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UWBP_Station_Crafting_Menu_C::ExecuteSpawnAction(const struct FYResourceManagerRequestEntry& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.ExecuteSpawnAction"));

	struct
	{
		struct FYResourceManagerRequestEntry Data;
	} params = {};

	params.Data = Data;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Station_Crafting_Menu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.BndEvt__WBP_Station_Crafting_Menu_WBP_Cost_K2Node_ComponentBoundEvent_0_OnPurchase__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Station_Crafting_Menu_C::BndEvt__WBP_Station_Crafting_Menu_WBP_Cost_K2Node_ComponentBoundEvent_0_OnPurchase__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.BndEvt__WBP_Station_Crafting_Menu_WBP_Cost_K2Node_ComponentBoundEvent_0_OnPurchase__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Station_Crafting_Menu_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.PreConstruct"));

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


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.BndEvt__WBP_Station_Crafting_Menu_RotationButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Station_Crafting_Menu_C::BndEvt__WBP_Station_Crafting_Menu_RotationButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.BndEvt__WBP_Station_Crafting_Menu_RotationButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.BndEvt__WBP_Station_Crafting_Menu_RotationButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Station_Crafting_Menu_C::BndEvt__WBP_Station_Crafting_Menu_RotationButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.BndEvt__WBP_Station_Crafting_Menu_RotationButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.BndEvt__WBP_Station_Crafting_Menu_WBP_Cost_Modal_K2Node_ComponentBoundEvent_3_OnButtonSecondary__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Station_Crafting_Menu_C::BndEvt__WBP_Station_Crafting_Menu_WBP_Cost_Modal_K2Node_ComponentBoundEvent_3_OnButtonSecondary__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.BndEvt__WBP_Station_Crafting_Menu_WBP_Cost_Modal_K2Node_ComponentBoundEvent_3_OnButtonSecondary__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.BndEvt__WBP_Station_Crafting_Menu_WBP_Cost_Modal_K2Node_ComponentBoundEvent_4_OnButtonPrimary__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Station_Crafting_Menu_C::BndEvt__WBP_Station_Crafting_Menu_WBP_Cost_Modal_K2Node_ComponentBoundEvent_4_OnButtonPrimary__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.BndEvt__WBP_Station_Crafting_Menu_WBP_Cost_Modal_K2Node_ComponentBoundEvent_4_OnButtonPrimary__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.BndEvt__WBP_Station_Crafting_Menu_WBP_Cost_Modal_K2Node_ComponentBoundEvent_5_OnVisibilityChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               InVisibility                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Crafting_Menu_C::BndEvt__WBP_Station_Crafting_Menu_WBP_Cost_Modal_K2Node_ComponentBoundEvent_5_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility InVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.BndEvt__WBP_Station_Crafting_Menu_WBP_Cost_Modal_K2Node_ComponentBoundEvent_5_OnVisibilityChangedEvent__DelegateSignature"));

	struct
	{
		ESlateVisibility               InVisibility;
	} params = {};

	params.InVisibility = InVisibility;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.ExecuteUbergraph_WBP_Station_Crafting_Menu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Crafting_Menu_C::ExecuteUbergraph_WBP_Station_Crafting_Menu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.ExecuteUbergraph_WBP_Station_Crafting_Menu"));

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


// Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.OnItemSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ItemBaseID                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Crafting_Menu_C::OnItemSelected__DelegateSignature(const struct FName& ItemBaseID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C.OnItemSelected__DelegateSignature"));

	struct
	{
		struct FName                   ItemBaseID;
	} params = {};

	params.ItemBaseID = ItemBaseID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
