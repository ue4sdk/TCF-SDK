// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Weapon_HUD_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Weapon_HUD_Item.WBP_Weapon_HUD_Item_C.SetMaxAmmo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            MaxAmmo                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Weapon_HUD_Item_C::SetMaxAmmo(int MaxAmmo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Weapon_HUD_Item.WBP_Weapon_HUD_Item_C.SetMaxAmmo"));

	struct
	{
		int                            MaxAmmo;
	} params = {};

	params.MaxAmmo = MaxAmmo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Weapon_HUD_Item.WBP_Weapon_HUD_Item_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Weapon_HUD_Item_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Weapon_HUD_Item.WBP_Weapon_HUD_Item_C.PreConstruct"));

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


// Function WBP_Weapon_HUD_Item.WBP_Weapon_HUD_Item_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Weapon_HUD_Item_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Weapon_HUD_Item.WBP_Weapon_HUD_Item_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Weapon_HUD_Item.WBP_Weapon_HUD_Item_C.BndEvt__ItemComponent_Image_WBP_K2Node_ComponentBoundEvent_0_OnItemComponentImageLoaded__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Weapon_HUD_Item_C::BndEvt__ItemComponent_Image_WBP_K2Node_ComponentBoundEvent_0_OnItemComponentImageLoaded__DelegateSignature(class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Weapon_HUD_Item.WBP_Weapon_HUD_Item_C.BndEvt__ItemComponent_Image_WBP_K2Node_ComponentBoundEvent_0_OnItemComponentImageLoaded__DelegateSignature"));

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


// Function WBP_Weapon_HUD_Item.WBP_Weapon_HUD_Item_C.BndEvt__ItemComponent_TextName_WBP_K2Node_ComponentBoundEvent_1_OnItemComponentTextSet__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ItemName                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// EYItemRarityType               itemRarity                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Weapon_HUD_Item_C::BndEvt__ItemComponent_TextName_WBP_K2Node_ComponentBoundEvent_1_OnItemComponentTextSet__DelegateSignature(const struct FText& ItemName, EYItemRarityType itemRarity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Weapon_HUD_Item.WBP_Weapon_HUD_Item_C.BndEvt__ItemComponent_TextName_WBP_K2Node_ComponentBoundEvent_1_OnItemComponentTextSet__DelegateSignature"));

	struct
	{
		struct FText                   ItemName;
		EYItemRarityType               itemRarity;
	} params = {};

	params.ItemName = ItemName;
	params.itemRarity = itemRarity;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Weapon_HUD_Item.WBP_Weapon_HUD_Item_C.BndEvt__ItemComponent_RarityColor_K2Node_ComponentBoundEvent_2_OnItemRarityColorSet__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateColor             rarityColor                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Weapon_HUD_Item_C::BndEvt__ItemComponent_RarityColor_K2Node_ComponentBoundEvent_2_OnItemRarityColorSet__DelegateSignature(const struct FSlateColor& rarityColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Weapon_HUD_Item.WBP_Weapon_HUD_Item_C.BndEvt__ItemComponent_RarityColor_K2Node_ComponentBoundEvent_2_OnItemRarityColorSet__DelegateSignature"));

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


// Function WBP_Weapon_HUD_Item.WBP_Weapon_HUD_Item_C.ItemSet
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Weapon_HUD_Item_C::ItemSet()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Weapon_HUD_Item.WBP_Weapon_HUD_Item_C.ItemSet"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Weapon_HUD_Item.WBP_Weapon_HUD_Item_C.BndEvt__ItemComponent_AmmoAmountText_WBP_K2Node_ComponentBoundEvent_4_OnItemComponentTextAmountUpdated__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   amountText                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Weapon_HUD_Item_C::BndEvt__ItemComponent_AmmoAmountText_WBP_K2Node_ComponentBoundEvent_4_OnItemComponentTextAmountUpdated__DelegateSignature(const struct FText& amountText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Weapon_HUD_Item.WBP_Weapon_HUD_Item_C.BndEvt__ItemComponent_AmmoAmountText_WBP_K2Node_ComponentBoundEvent_4_OnItemComponentTextAmountUpdated__DelegateSignature"));

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


// Function WBP_Weapon_HUD_Item.WBP_Weapon_HUD_Item_C.ExecuteUbergraph_WBP_Weapon_HUD_Item
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Weapon_HUD_Item_C::ExecuteUbergraph_WBP_Weapon_HUD_Item(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Weapon_HUD_Item.WBP_Weapon_HUD_Item_C.ExecuteUbergraph_WBP_Weapon_HUD_Item"));

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
