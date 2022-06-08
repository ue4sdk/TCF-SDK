// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Tool_HUD_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Tool_HUD_Item.WBP_Tool_HUD_Item_C.SetHighlight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           UseHighlight                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Tool_HUD_Item_C::SetHighlight(bool UseHighlight)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Tool_HUD_Item.WBP_Tool_HUD_Item_C.SetHighlight"));

	struct
	{
		bool                           UseHighlight;
	} params = {};

	params.UseHighlight = UseHighlight;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Tool_HUD_Item.WBP_Tool_HUD_Item_C.UpdateAmount
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Tool_HUD_Item_C::UpdateAmount()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Tool_HUD_Item.WBP_Tool_HUD_Item_C.UpdateAmount"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Tool_HUD_Item.WBP_Tool_HUD_Item_C.UpdateState
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYAbilityUIData         abilityData                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Tool_HUD_Item_C::UpdateState(struct FYAbilityUIData* abilityData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Tool_HUD_Item.WBP_Tool_HUD_Item_C.UpdateState"));

	struct
	{
		struct FYAbilityUIData         abilityData;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (abilityData != nullptr)
		*abilityData = params.abilityData;
}


// Function WBP_Tool_HUD_Item.WBP_Tool_HUD_Item_C.UpdateCooldown
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Tool_HUD_Item_C::UpdateCooldown(float Delta)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Tool_HUD_Item.WBP_Tool_HUD_Item_C.UpdateCooldown"));

	struct
	{
		float                          Delta;
	} params = {};

	params.Delta = Delta;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Tool_HUD_Item.WBP_Tool_HUD_Item_C.SetItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYInventoryItem         inventoryItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Tool_HUD_Item_C::SetItem(const struct FYInventoryItem& inventoryItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Tool_HUD_Item.WBP_Tool_HUD_Item_C.SetItem"));

	struct
	{
		struct FYInventoryItem         inventoryItem;
	} params = {};

	params.inventoryItem = inventoryItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Tool_HUD_Item.WBP_Tool_HUD_Item_C.SetIsEmpty
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsEmpty                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Tool_HUD_Item_C::SetIsEmpty(bool IsEmpty)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Tool_HUD_Item.WBP_Tool_HUD_Item_C.SetIsEmpty"));

	struct
	{
		bool                           IsEmpty;
	} params = {};

	params.IsEmpty = IsEmpty;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Tool_HUD_Item.WBP_Tool_HUD_Item_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Tool_HUD_Item_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Tool_HUD_Item.WBP_Tool_HUD_Item_C.PreConstruct"));

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


// Function WBP_Tool_HUD_Item.WBP_Tool_HUD_Item_C.BndEvt__ItemComponent_Image_WBP_K2Node_ComponentBoundEvent_0_OnItemComponentImageLoaded__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Tool_HUD_Item_C::BndEvt__ItemComponent_Image_WBP_K2Node_ComponentBoundEvent_0_OnItemComponentImageLoaded__DelegateSignature(class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Tool_HUD_Item.WBP_Tool_HUD_Item_C.BndEvt__ItemComponent_Image_WBP_K2Node_ComponentBoundEvent_0_OnItemComponentImageLoaded__DelegateSignature"));

	struct
	{
		class UTexture2D*              Texture;
	} params = {};

	params.Texture = Texture;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Tool_HUD_Item.WBP_Tool_HUD_Item_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Tool_HUD_Item_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Tool_HUD_Item.WBP_Tool_HUD_Item_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Tool_HUD_Item.WBP_Tool_HUD_Item_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Tool_HUD_Item_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Tool_HUD_Item.WBP_Tool_HUD_Item_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Tool_HUD_Item.WBP_Tool_HUD_Item_C.ItemSet
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Tool_HUD_Item_C::ItemSet()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Tool_HUD_Item.WBP_Tool_HUD_Item_C.ItemSet"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Tool_HUD_Item.WBP_Tool_HUD_Item_C.BndEvt__WBP_Tool_HUD_Item_ItemComponent_RarityColor_K2Node_ComponentBoundEvent_1_OnItemRarityColorSet__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateColor             rarityColor                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Tool_HUD_Item_C::BndEvt__WBP_Tool_HUD_Item_ItemComponent_RarityColor_K2Node_ComponentBoundEvent_1_OnItemRarityColorSet__DelegateSignature(const struct FSlateColor& rarityColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Tool_HUD_Item.WBP_Tool_HUD_Item_C.BndEvt__WBP_Tool_HUD_Item_ItemComponent_RarityColor_K2Node_ComponentBoundEvent_1_OnItemRarityColorSet__DelegateSignature"));

	struct
	{
		struct FSlateColor             rarityColor;
	} params = {};

	params.rarityColor = rarityColor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Tool_HUD_Item.WBP_Tool_HUD_Item_C.BndEvt__WBP_Tool_HUD_Item_ItemComponent_StackAmountText_WBP_K2Node_ComponentBoundEvent_2_OnItemComponentTextAmountUpdated__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   amountText                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Tool_HUD_Item_C::BndEvt__WBP_Tool_HUD_Item_ItemComponent_StackAmountText_WBP_K2Node_ComponentBoundEvent_2_OnItemComponentTextAmountUpdated__DelegateSignature(const struct FText& amountText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Tool_HUD_Item.WBP_Tool_HUD_Item_C.BndEvt__WBP_Tool_HUD_Item_ItemComponent_StackAmountText_WBP_K2Node_ComponentBoundEvent_2_OnItemComponentTextAmountUpdated__DelegateSignature"));

	struct
	{
		struct FText                   amountText;
	} params = {};

	params.amountText = amountText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Tool_HUD_Item.WBP_Tool_HUD_Item_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Tool_HUD_Item_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Tool_HUD_Item.WBP_Tool_HUD_Item_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Tool_HUD_Item.WBP_Tool_HUD_Item_C.BP_OnSelectedToolChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Tool_HUD_Item_C::BP_OnSelectedToolChanged_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Tool_HUD_Item.WBP_Tool_HUD_Item_C.BP_OnSelectedToolChanged_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Tool_HUD_Item.WBP_Tool_HUD_Item_C.BP_OnSelectedConsumableChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Tool_HUD_Item_C::BP_OnSelectedConsumableChanged_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Tool_HUD_Item.WBP_Tool_HUD_Item_C.BP_OnSelectedConsumableChanged_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Tool_HUD_Item.WBP_Tool_HUD_Item_C.ExecuteUbergraph_WBP_Tool_HUD_Item
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Tool_HUD_Item_C::ExecuteUbergraph_WBP_Tool_HUD_Item(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Tool_HUD_Item.WBP_Tool_HUD_Item_C.ExecuteUbergraph_WBP_Tool_HUD_Item"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
