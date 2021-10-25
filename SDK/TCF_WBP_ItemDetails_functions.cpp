// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_ItemDetails_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ItemDetails.WBP_ItemDetails_C.SequenceEvent__ENTRYPOINTWBP_ItemDetails_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ItemDetails_C::SequenceEvent__ENTRYPOINTWBP_ItemDetails_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.SequenceEvent__ENTRYPOINTWBP_ItemDetails_1");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.SetDurabilityVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visible                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ItemDetails_C::SetDurabilityVisibility(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.SetDurabilityVisibility");

	struct
	{
		bool                           Visible;
	} params;

	params.Visible = Visible;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.UpdateDurabilityIcon
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ItemDetails_C::UpdateDurabilityIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.UpdateDurabilityIcon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_ItemDetails_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.BP_AnimateVisibility");

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params;

	params.newVisibility = newVisibility;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.Update Primary Stats
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ItemDetails_C::Update_Primary_Stats()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.Update Primary Stats");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.SetFactionProgressionGain
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_ItemDetails_C::SetFactionProgressionGain(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.SetFactionProgressionGain");

	struct
	{
		struct FText                   InText;
	} params;

	params.InText = InText;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.SetPriceText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Price                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_ItemDetails_C::SetPriceText(const struct FText& Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.SetPriceText");

	struct
	{
		struct FText                   Price;
	} params;

	params.Price = Price;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.SetImage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ItemDetails_C::SetImage(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.SetImage");

	struct
	{
		class UTexture2D*              Texture;
	} params;

	params.Texture = Texture;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.ShowItemImage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           UseItemImage                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ItemDetails_C::ShowItemImage(bool UseItemImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.ShowItemImage");

	struct
	{
		bool                           UseItemImage;
	} params;

	params.UseItemImage = UseItemImage;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.ShowStatPrimary
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           StatPrimary                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ItemDetails_C::ShowStatPrimary(bool StatPrimary)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.ShowStatPrimary");

	struct
	{
		bool                           StatPrimary;
	} params;

	params.StatPrimary = StatPrimary;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.ShowStatDesc
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           StatDesc                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ItemDetails_C::ShowStatDesc(bool StatDesc)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.ShowStatDesc");

	struct
	{
		bool                           StatDesc;
	} params;

	params.StatDesc = StatDesc;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.ShowStatAttachments
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           StatAttachments                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ItemDetails_C::ShowStatAttachments(bool StatAttachments)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.ShowStatAttachments");

	struct
	{
		bool                           StatAttachments;
	} params;

	params.StatAttachments = StatAttachments;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.ShowStatPerks
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           StatPerk                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ItemDetails_C::ShowStatPerks(bool StatPerk)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.ShowStatPerks");

	struct
	{
		bool                           StatPerk;
	} params;

	params.StatPerk = StatPerk;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.ShowStatSecondary
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           StatSecondary                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ItemDetails_C::ShowStatSecondary(bool StatSecondary)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.ShowStatSecondary");

	struct
	{
		bool                           StatSecondary;
	} params;

	params.StatSecondary = StatSecondary;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_Image_WBP_K2Node_ComponentBoundEvent_6_OnItemComponentImageLoaded__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ItemDetails_C::BndEvt__ItemComponent_Image_WBP_K2Node_ComponentBoundEvent_6_OnItemComponentImageLoaded__DelegateSignature(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_Image_WBP_K2Node_ComponentBoundEvent_6_OnItemComponentImageLoaded__DelegateSignature");

	struct
	{
		class UTexture2D*              Texture;
	} params;

	params.Texture = Texture;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_TextName_WBP_K2Node_ComponentBoundEvent_7_OnItemComponentTextSet__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ItemName                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// EYItemRarityType               itemRarity                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ItemDetails_C::BndEvt__ItemComponent_TextName_WBP_K2Node_ComponentBoundEvent_7_OnItemComponentTextSet__DelegateSignature(const struct FText& ItemName, EYItemRarityType itemRarity)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_TextName_WBP_K2Node_ComponentBoundEvent_7_OnItemComponentTextSet__DelegateSignature");

	struct
	{
		struct FText                   ItemName;
		EYItemRarityType               itemRarity;
	} params;

	params.ItemName = ItemName;
	params.itemRarity = itemRarity;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_Weight_K2Node_ComponentBoundEvent_15_OnWeightTextSet__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   WeightText                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_ItemDetails_C::BndEvt__ItemComponent_Weight_K2Node_ComponentBoundEvent_15_OnWeightTextSet__DelegateSignature(const struct FText& WeightText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_Weight_K2Node_ComponentBoundEvent_15_OnWeightTextSet__DelegateSignature");

	struct
	{
		struct FText                   WeightText;
	} params;

	params.WeightText = WeightText;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_ImageAmmoType_WBP_K2Node_ComponentBoundEvent_13_OnItemComponentImageLoaded__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ItemDetails_C::BndEvt__ItemComponent_ImageAmmoType_WBP_K2Node_ComponentBoundEvent_13_OnItemComponentImageLoaded__DelegateSignature(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_ImageAmmoType_WBP_K2Node_ComponentBoundEvent_13_OnItemComponentImageLoaded__DelegateSignature");

	struct
	{
		class UTexture2D*              Texture;
	} params;

	params.Texture = Texture;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ItemDetails_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_TextDescription_WBP_K2Node_ComponentBoundEvent_3_OnItemComponentTextDescription__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Description                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_ItemDetails_C::BndEvt__ItemComponent_TextDescription_WBP_K2Node_ComponentBoundEvent_3_OnItemComponentTextDescription__DelegateSignature(const struct FText& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_TextDescription_WBP_K2Node_ComponentBoundEvent_3_OnItemComponentTextDescription__DelegateSignature");

	struct
	{
		struct FText                   Description;
	} params;

	params.Description = Description;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ItemDetails_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.ShowAmount
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           UseAmount                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ItemDetails_C::ShowAmount(bool UseAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.ShowAmount");

	struct
	{
		bool                           UseAmount;
	} params;

	params.UseAmount = UseAmount;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_StatsEntryText_WBP_C_Ammo_K2Node_ComponentBoundEvent_4_StatsNumberSet__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Label                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_ItemDetails_C::BndEvt__ItemComponent_StatsEntryText_WBP_C_Ammo_K2Node_ComponentBoundEvent_4_StatsNumberSet__DelegateSignature(const struct FText& Label, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_StatsEntryText_WBP_C_Ammo_K2Node_ComponentBoundEvent_4_StatsNumberSet__DelegateSignature");

	struct
	{
		struct FText                   Label;
		struct FText                   Value;
	} params;

	params.Label = Label;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_StatsEntryText_WBP_C_DPS_K2Node_ComponentBoundEvent_5_StatsNumberSet__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Label                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_ItemDetails_C::BndEvt__ItemComponent_StatsEntryText_WBP_C_DPS_K2Node_ComponentBoundEvent_5_StatsNumberSet__DelegateSignature(const struct FText& Label, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_StatsEntryText_WBP_C_DPS_K2Node_ComponentBoundEvent_5_StatsNumberSet__DelegateSignature");

	struct
	{
		struct FText                   Label;
		struct FText                   Value;
	} params;

	params.Label = Label;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_StatsEntryText_WBP_C_RateOfFire_K2Node_ComponentBoundEvent_8_StatsNumberSet__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Label                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_ItemDetails_C::BndEvt__ItemComponent_StatsEntryText_WBP_C_RateOfFire_K2Node_ComponentBoundEvent_8_StatsNumberSet__DelegateSignature(const struct FText& Label, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_StatsEntryText_WBP_C_RateOfFire_K2Node_ComponentBoundEvent_8_StatsNumberSet__DelegateSignature");

	struct
	{
		struct FText                   Label;
		struct FText                   Value;
	} params;

	params.Label = Label;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.ShowCompatibleWeapons
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           UseCompatibleWeapons           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ItemDetails_C::ShowCompatibleWeapons(bool UseCompatibleWeapons)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.ShowCompatibleWeapons");

	struct
	{
		bool                           UseCompatibleWeapons;
	} params;

	params.UseCompatibleWeapons = UseCompatibleWeapons;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.ShowPrice
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           UsePrice                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ItemDetails_C::ShowPrice(bool UsePrice)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.ShowPrice");

	struct
	{
		bool                           UsePrice;
	} params;

	params.UsePrice = UsePrice;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_StatsEntryText_WBP_C_Shield_K2Node_ComponentBoundEvent_9_StatsNumberSet__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Label                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_ItemDetails_C::BndEvt__ItemComponent_StatsEntryText_WBP_C_Shield_K2Node_ComponentBoundEvent_9_StatsNumberSet__DelegateSignature(const struct FText& Label, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_StatsEntryText_WBP_C_Shield_K2Node_ComponentBoundEvent_9_StatsNumberSet__DelegateSignature");

	struct
	{
		struct FText                   Label;
		struct FText                   Value;
	} params;

	params.Label = Label;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.HideSeparateStats
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ItemDetails_C::HideSeparateStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.HideSeparateStats");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.SequenceEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ItemDetails_C::SequenceEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.SequenceEvent_1");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_StatsEntryText_WBP_C_Bag_K2Node_ComponentBoundEvent_9_StatsNumberSet__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Label                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_ItemDetails_C::BndEvt__ItemComponent_StatsEntryText_WBP_C_Bag_K2Node_ComponentBoundEvent_9_StatsNumberSet__DelegateSignature(const struct FText& Label, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_StatsEntryText_WBP_C_Bag_K2Node_ComponentBoundEvent_9_StatsNumberSet__DelegateSignature");

	struct
	{
		struct FText                   Label;
		struct FText                   Value;
	} params;

	params.Label = Label;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_StatsEntryText_WBP_C_Durability_K2Node_ComponentBoundEvent_10_StatsNumberSet__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Label                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_ItemDetails_C::BndEvt__ItemComponent_StatsEntryText_WBP_C_Durability_K2Node_ComponentBoundEvent_10_StatsNumberSet__DelegateSignature(const struct FText& Label, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_StatsEntryText_WBP_C_Durability_K2Node_ComponentBoundEvent_10_StatsNumberSet__DelegateSignature");

	struct
	{
		struct FText                   Label;
		struct FText                   Value;
	} params;

	params.Label = Label;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_StackAmountText_WBP_K2Node_ComponentBoundEvent_16_OnItemComponentTextAmountUpdated__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   amountText                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_ItemDetails_C::BndEvt__ItemComponent_StackAmountText_WBP_K2Node_ComponentBoundEvent_16_OnItemComponentTextAmountUpdated__DelegateSignature(const struct FText& amountText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_StackAmountText_WBP_K2Node_ComponentBoundEvent_16_OnItemComponentTextAmountUpdated__DelegateSignature");

	struct
	{
		struct FText                   amountText;
	} params;

	params.amountText = amountText;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_StackAmountText_WBP_K2Node_ComponentBoundEvent_17_OnVisibilityChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               InVisibility                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ItemDetails_C::BndEvt__ItemComponent_StackAmountText_WBP_K2Node_ComponentBoundEvent_17_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_StackAmountText_WBP_K2Node_ComponentBoundEvent_17_OnVisibilityChangedEvent__DelegateSignature");

	struct
	{
		ESlateVisibility               InVisibility;
	} params;

	params.InVisibility = InVisibility;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_ImageAmmoType_WBP_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               InVisibility                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ItemDetails_C::BndEvt__ItemComponent_ImageAmmoType_WBP_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_ImageAmmoType_WBP_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature");

	struct
	{
		ESlateVisibility               InVisibility;
	} params;

	params.InVisibility = InVisibility;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ItemDetails_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.OnInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.OnItemSetCallback
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ItemDetails_C::OnItemSetCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.OnItemSetCallback");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.BP_AddItemComponent
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ItemComponentBase* itemComponentClass             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Visible                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ItemDetails_C::BP_AddItemComponent(class UYWidget_ItemComponentBase* itemComponentClass, bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.BP_AddItemComponent");

	struct
	{
		class UYWidget_ItemComponentBase* itemComponentClass;
		bool                           Visible;
	} params;

	params.itemComponentClass = itemComponentClass;
	params.Visible = Visible;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_RarityColor_K2Node_ComponentBoundEvent_5_OnItemRarityColorSet__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateColor             rarityColor                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_ItemDetails_C::BndEvt__ItemComponent_RarityColor_K2Node_ComponentBoundEvent_5_OnItemRarityColorSet__DelegateSignature(const struct FSlateColor& rarityColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_RarityColor_K2Node_ComponentBoundEvent_5_OnItemRarityColorSet__DelegateSignature");

	struct
	{
		struct FSlateColor             rarityColor;
	} params;

	params.rarityColor = rarityColor;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_Mods_WBP_K2Node_ComponentBoundEvent_12_OnModSlotDataAvailableSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FYItemModsInfo          itemModsInfo                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_ItemDetails_C::BndEvt__ItemComponent_Mods_WBP_K2Node_ComponentBoundEvent_12_OnModSlotDataAvailableSignature__DelegateSignature(const struct FYItemModsInfo& itemModsInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_Mods_WBP_K2Node_ComponentBoundEvent_12_OnModSlotDataAvailableSignature__DelegateSignature");

	struct
	{
		struct FYItemModsInfo          itemModsInfo;
	} params;

	params.itemModsInfo = itemModsInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__WBP_ItemDetails_WBP_Common_Btn_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ItemDetails_C::BndEvt__WBP_ItemDetails_WBP_Common_Btn_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__WBP_ItemDetails_WBP_Common_Btn_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature");

	struct
	{
		class UWBP_ButtonBase_Btn_C*   Button;
	} params;

	params.Button = Button;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.ShowStatsUnequipButton
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           StatAttachments                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ItemDetails_C::ShowStatsUnequipButton(bool StatAttachments)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.ShowStatsUnequipButton");

	struct
	{
		bool                           StatAttachments;
	} params;

	params.StatAttachments = StatAttachments;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__WBP_ItemDetails_ItemComponent_StatsEntryText_WBP_C_Penetration_K2Node_ComponentBoundEvent_0_StatsNumberSet__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Label                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_ItemDetails_C::BndEvt__WBP_ItemDetails_ItemComponent_StatsEntryText_WBP_C_Penetration_K2Node_ComponentBoundEvent_0_StatsNumberSet__DelegateSignature(const struct FText& Label, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__WBP_ItemDetails_ItemComponent_StatsEntryText_WBP_C_Penetration_K2Node_ComponentBoundEvent_0_StatsNumberSet__DelegateSignature");

	struct
	{
		struct FText                   Label;
		struct FText                   Value;
	} params;

	params.Label = Label;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDetails.WBP_ItemDetails_C.ExecuteUbergraph_WBP_ItemDetails
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ItemDetails_C::ExecuteUbergraph_WBP_ItemDetails(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemDetails.WBP_ItemDetails_C.ExecuteUbergraph_WBP_ItemDetails");

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
