// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Item_Preview_Btn_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.SequenceEvent__ENTRYPOINTWBP_Item_Preview_Btn_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Item_Preview_Btn_C::SequenceEvent__ENTRYPOINTWBP_Item_Preview_Btn_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.SequenceEvent__ENTRYPOINTWBP_Item_Preview_Btn_1");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Manually Hide Weight For Crate Preview
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Item_Preview_Btn_C::Manually_Hide_Weight_For_Crate_Preview()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Manually Hide Weight For Crate Preview");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Manually Set Amount For Crate Preview
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Item_Preview_Btn_C::Manually_Set_Amount_For_Crate_Preview(const struct FText& Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Manually Set Amount For Crate Preview");

	struct
	{
		struct FText                   Amount;
	} params;

	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.On Inspected Inventory Item Updated Callback
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYInventoryItem         newInventoryItem               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Item_Preview_Btn_C::On_Inspected_Inventory_Item_Updated_Callback(const struct FYInventoryItem& newInventoryItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.On Inspected Inventory Item Updated Callback");

	struct
	{
		struct FYInventoryItem         newInventoryItem;
	} params;

	params.newInventoryItem = newInventoryItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Update Slot Preview Visibility
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Item_Preview_Btn_C::Update_Slot_Preview_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Update Slot Preview Visibility");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Set Additional Info Visibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           shouldBeVisible                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Item_Preview_Btn_C::Set_Additional_Info_Visibility(bool shouldBeVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Set Additional Info Visibility");

	struct
	{
		bool                           shouldBeVisible;
	} params;

	params.shouldBeVisible = shouldBeVisible;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Update Image to Show
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Item_Preview_Btn_C::Update_Image_to_Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Update Image to Show");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Update Layout Visibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Item_Preview_Btn_C::Update_Layout_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Update Layout Visibility");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Item Set
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Item_Preview_Btn_C::Item_Set()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Item Set");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Item_Preview_Btn_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Trigger_InventoryPreviewHighlightAnimation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Item_Preview_Btn_C::Trigger_InventoryPreviewHighlightAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Trigger_InventoryPreviewHighlightAnimation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Clicked_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Item_Preview_Btn_C::Clicked_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Clicked_2");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.BndEvt__ItemComponent_AmmoAmountText_WBP_K2Node_ComponentBoundEvent_0_OnItemComponentTextAmountUpdated__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   amountText                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Item_Preview_Btn_C::BndEvt__ItemComponent_AmmoAmountText_WBP_K2Node_ComponentBoundEvent_0_OnItemComponentTextAmountUpdated__DelegateSignature(const struct FText& amountText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.BndEvt__ItemComponent_AmmoAmountText_WBP_K2Node_ComponentBoundEvent_0_OnItemComponentTextAmountUpdated__DelegateSignature");

	struct
	{
		struct FText                   amountText;
	} params;

	params.amountText = amountText;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.BndEvt__ItemComponent_Image_WBP_K2Node_ComponentBoundEvent_2_OnItemComponentImageLoaded__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Item_Preview_Btn_C::BndEvt__ItemComponent_Image_WBP_K2Node_ComponentBoundEvent_2_OnItemComponentImageLoaded__DelegateSignature(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.BndEvt__ItemComponent_Image_WBP_K2Node_ComponentBoundEvent_2_OnItemComponentImageLoaded__DelegateSignature");

	struct
	{
		class UTexture2D*              Texture;
	} params;

	params.Texture = Texture;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.BndEvt__ItemComponent_RarityColor_K2Node_ComponentBoundEvent_3_OnItemRarityColorSet__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateColor             rarityColor                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Item_Preview_Btn_C::BndEvt__ItemComponent_RarityColor_K2Node_ComponentBoundEvent_3_OnItemRarityColorSet__DelegateSignature(const struct FSlateColor& rarityColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.BndEvt__ItemComponent_RarityColor_K2Node_ComponentBoundEvent_3_OnItemRarityColorSet__DelegateSignature");

	struct
	{
		struct FSlateColor             rarityColor;
	} params;

	params.rarityColor = rarityColor;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Item_Preview_Btn_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.BndEvt__ItemComponent_Weight_K2Node_ComponentBoundEvent_1_OnWeightTextSet__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   WeightText                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Item_Preview_Btn_C::BndEvt__ItemComponent_Weight_K2Node_ComponentBoundEvent_1_OnWeightTextSet__DelegateSignature(const struct FText& WeightText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.BndEvt__ItemComponent_Weight_K2Node_ComponentBoundEvent_1_OnWeightTextSet__DelegateSignature");

	struct
	{
		struct FText                   WeightText;
	} params;

	params.WeightText = WeightText;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Released
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Item_Preview_Btn_C::Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Released");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.DragDone
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Item_Preview_Btn_C::DragDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.DragDone");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Pressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           StartedDragging                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsRightMouseButton             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Item_Preview_Btn_C::Pressed(bool StartedDragging, bool IsRightMouseButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Pressed");

	struct
	{
		bool                           StartedDragging;
		bool                           IsRightMouseButton;
	} params;

	params.StartedDragging = StartedDragging;
	params.IsRightMouseButton = IsRightMouseButton;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Unhovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Item_Preview_Btn_C::Unhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Unhovered");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Hovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Item_Preview_Btn_C::Hovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.Hovered");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.BP_AddItemComponent
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ItemComponentBase* itemComponentClass             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Visible                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Item_Preview_Btn_C::BP_AddItemComponent(class UYWidget_ItemComponentBase* itemComponentClass, bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.BP_AddItemComponent");

	struct
	{
		class UYWidget_ItemComponentBase* itemComponentClass;
		bool                           Visible;
	} params;

	params.itemComponentClass = itemComponentClass;
	params.Visible = Visible;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.BndEvt__ItemComponent_TextName_WBP_K2Node_ComponentBoundEvent_4_OnItemComponentTextSet__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ItemName                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// EYItemRarityType               itemRarity                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Item_Preview_Btn_C::BndEvt__ItemComponent_TextName_WBP_K2Node_ComponentBoundEvent_4_OnItemComponentTextSet__DelegateSignature(const struct FText& ItemName, EYItemRarityType itemRarity)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.BndEvt__ItemComponent_TextName_WBP_K2Node_ComponentBoundEvent_4_OnItemComponentTextSet__DelegateSignature");

	struct
	{
		struct FText                   ItemName;
		EYItemRarityType               itemRarity;
	} params;

	params.ItemName = ItemName;
	params.itemRarity = itemRarity;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.BndEvt__ItemComponent_ImageAmmoType_WBP_K2Node_ComponentBoundEvent_5_OnItemComponentImageLoaded__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Item_Preview_Btn_C::BndEvt__ItemComponent_ImageAmmoType_WBP_K2Node_ComponentBoundEvent_5_OnItemComponentImageLoaded__DelegateSignature(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.BndEvt__ItemComponent_ImageAmmoType_WBP_K2Node_ComponentBoundEvent_5_OnItemComponentImageLoaded__DelegateSignature");

	struct
	{
		class UTexture2D*              Texture;
	} params;

	params.Texture = Texture;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.SetSellValues
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   CurrencyReturn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   FactionProgressionIncrement    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FString                 factionRowId                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_Item_Preview_Btn_C::SetSellValues(const struct FText& CurrencyReturn, const struct FText& FactionProgressionIncrement, const struct FString& factionRowId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.SetSellValues");

	struct
	{
		struct FText                   CurrencyReturn;
		struct FText                   FactionProgressionIncrement;
		struct FString                 factionRowId;
	} params;

	params.CurrencyReturn = CurrencyReturn;
	params.FactionProgressionIncrement = FactionProgressionIncrement;
	params.factionRowId = factionRowId;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.BndEvt__ItemComponent_AmmoAmountText_WBP_K2Node_ComponentBoundEvent_6_OnVisibilityChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               InVisibility                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Item_Preview_Btn_C::BndEvt__ItemComponent_AmmoAmountText_WBP_K2Node_ComponentBoundEvent_6_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.BndEvt__ItemComponent_AmmoAmountText_WBP_K2Node_ComponentBoundEvent_6_OnVisibilityChangedEvent__DelegateSignature");

	struct
	{
		ESlateVisibility               InVisibility;
	} params;

	params.InVisibility = InVisibility;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.BndEvt__WBP_Item_Preview_Btn_ItemComponent_Insured_K2Node_ComponentBoundEvent_7_OnItemInsuredSet__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           isInsured                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Item_Preview_Btn_C::BndEvt__WBP_Item_Preview_Btn_ItemComponent_Insured_K2Node_ComponentBoundEvent_7_OnItemInsuredSet__DelegateSignature(bool isInsured)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.BndEvt__WBP_Item_Preview_Btn_ItemComponent_Insured_K2Node_ComponentBoundEvent_7_OnItemInsuredSet__DelegateSignature");

	struct
	{
		bool                           isInsured;
	} params;

	params.isInsured = isInsured;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Item_Preview_Btn_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.OnInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.BndEvt__WBP_Item_Preview_Btn_ItemComponent_LostOnDeath_K2Node_ComponentBoundEvent_8_OnItemLostOnDeathSet__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Item_Preview_Btn_C::BndEvt__WBP_Item_Preview_Btn_ItemComponent_LostOnDeath_K2Node_ComponentBoundEvent_8_OnItemLostOnDeathSet__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.BndEvt__WBP_Item_Preview_Btn_ItemComponent_LostOnDeath_K2Node_ComponentBoundEvent_8_OnItemLostOnDeathSet__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.ExecuteUbergraph_WBP_Item_Preview_Btn
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Item_Preview_Btn_C::ExecuteUbergraph_WBP_Item_Preview_Btn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Item_Preview_Btn.WBP_Item_Preview_Btn_C.ExecuteUbergraph_WBP_Item_Preview_Btn");

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
