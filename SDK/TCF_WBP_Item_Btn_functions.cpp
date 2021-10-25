// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Item_Btn_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Item_Btn.WBP_Item_Btn_C.SequenceEvent__ENTRYPOINTWBP_Item_Btn_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Item_Btn_C::SequenceEvent__ENTRYPOINTWBP_Item_Btn_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.SequenceEvent__ENTRYPOINTWBP_Item_Btn_1"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.OnClicked
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ItemContainer*  itemWidget                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Item_Btn_C::OnClicked(class UYWidget_ItemContainer* itemWidget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.OnClicked"));

	struct
	{
		class UYWidget_ItemContainer*  itemWidget;
	} params;

	params.itemWidget = itemWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.UpdateDurabilityIcon
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Item_Btn_C::UpdateDurabilityIcon()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.UpdateDurabilityIcon"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.OnInspectedInventoryItemUpdatedCallback
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYInventoryItem         newInventoryItem               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Item_Btn_C::OnInspectedInventoryItemUpdatedCallback(const struct FYInventoryItem& newInventoryItem)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.OnInspectedInventoryItemUpdatedCallback"));

	struct
	{
		struct FYInventoryItem         newInventoryItem;
	} params;

	params.newInventoryItem = newInventoryItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.UpdateSlotPreviewVisibility
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Item_Btn_C::UpdateSlotPreviewVisibility()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.UpdateSlotPreviewVisibility"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.IsSplittable
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsSplittable                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Item_Btn_C::IsSplittable(bool* IsSplittable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.IsSplittable"));

	struct
	{
		bool                           IsSplittable;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsSplittable != nullptr)
		*IsSplittable = params.IsSplittable;
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.GetTooltipNoAmmo
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 Tooltip                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Item_Btn_C::GetTooltipNoAmmo(class UWidget** Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.GetTooltipNoAmmo"));

	struct
	{
		class UWidget*                 Tooltip;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Tooltip != nullptr)
		*Tooltip = params.Tooltip;
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.OnMouseMove
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_Item_Btn_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.OnMouseMove"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.SetAmmoAvailable
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           AmmoAvailable                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Item_Btn_C::SetAmmoAvailable(bool AmmoAvailable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.SetAmmoAvailable"));

	struct
	{
		bool                           AmmoAvailable;
	} params;

	params.AmmoAvailable = AmmoAvailable;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.ItemSet
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Item_Btn_C::ItemSet()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.ItemSet"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.ShowKmarks
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Item_Btn_C::ShowKmarks()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.ShowKmarks"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.SetLocked
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   LockedReason                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TEnumAsByte<En_ItemBtnLockedState> State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Item_Btn_C::SetLocked(const struct FText& LockedReason, TEnumAsByte<En_ItemBtnLockedState> State)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.SetLocked"));

	struct
	{
		struct FText                   LockedReason;
		TEnumAsByte<En_ItemBtnLockedState> State;
	} params;

	params.LockedReason = LockedReason;
	params.State = State;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.HACK_SetSizeOverride
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               Size                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Item_Btn_C::HACK_SetSizeOverride(const struct FVector2D& Size)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.HACK_SetSizeOverride"));

	struct
	{
		struct FVector2D               Size;
	} params;

	params.Size = Size;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.HACK_UpdateSizeOverride
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Item_Btn_C::HACK_UpdateSizeOverride()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.HACK_UpdateSizeOverride"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.SetImage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Image                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Item_Btn_C::SetImage(class UTexture2D* Image)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.SetImage"));

	struct
	{
		class UTexture2D*              Image;
	} params;

	params.Image = Image;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.OnLoaded_20435FCA4F7360BB299AE0918DDDA79E
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Item_Btn_C::OnLoaded_20435FCA4F7360BB299AE0918DDDA79E(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.OnLoaded_20435FCA4F7360BB299AE0918DDDA79E"));

	struct
	{
		class UObject*                 Loaded;
	} params;

	params.Loaded = Loaded;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.BndEvt__ItemComponent_RarityColor_K2Node_ComponentBoundEvent_5_OnItemRarityColorSet__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateColor             rarityColor                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Item_Btn_C::BndEvt__ItemComponent_RarityColor_K2Node_ComponentBoundEvent_5_OnItemRarityColorSet__DelegateSignature(const struct FSlateColor& rarityColor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.BndEvt__ItemComponent_RarityColor_K2Node_ComponentBoundEvent_5_OnItemRarityColorSet__DelegateSignature"));

	struct
	{
		struct FSlateColor             rarityColor;
	} params;

	params.rarityColor = rarityColor;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.BndEvt__ItemComponent_Image_WBP_K2Node_ComponentBoundEvent_6_OnItemComponentImageLoaded__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Item_Btn_C::BndEvt__ItemComponent_Image_WBP_K2Node_ComponentBoundEvent_6_OnItemComponentImageLoaded__DelegateSignature(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.BndEvt__ItemComponent_Image_WBP_K2Node_ComponentBoundEvent_6_OnItemComponentImageLoaded__DelegateSignature"));

	struct
	{
		class UTexture2D*              Texture;
	} params;

	params.Texture = Texture;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.BndEvt__ItemComponent_TextName_WBP_K2Node_ComponentBoundEvent_7_OnItemComponentTextSet__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ItemName                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// EYItemRarityType               itemRarity                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Item_Btn_C::BndEvt__ItemComponent_TextName_WBP_K2Node_ComponentBoundEvent_7_OnItemComponentTextSet__DelegateSignature(const struct FText& ItemName, EYItemRarityType itemRarity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.BndEvt__ItemComponent_TextName_WBP_K2Node_ComponentBoundEvent_7_OnItemComponentTextSet__DelegateSignature"));

	struct
	{
		struct FText                   ItemName;
		EYItemRarityType               itemRarity;
	} params;

	params.ItemName = ItemName;
	params.itemRarity = itemRarity;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Item_Btn_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.BndEvt__ItemComponent_ImageAmmoType_WBP_K2Node_ComponentBoundEvent_13_OnItemComponentImageLoaded__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Item_Btn_C::BndEvt__ItemComponent_ImageAmmoType_WBP_K2Node_ComponentBoundEvent_13_OnItemComponentImageLoaded__DelegateSignature(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.BndEvt__ItemComponent_ImageAmmoType_WBP_K2Node_ComponentBoundEvent_13_OnItemComponentImageLoaded__DelegateSignature"));

	struct
	{
		class UTexture2D*              Texture;
	} params;

	params.Texture = Texture;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.Provider_OnDataChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   DataName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Item_Btn_C::Provider_OnDataChanged(const struct FName& DataName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.Provider_OnDataChanged"));

	struct
	{
		struct FName                   DataName;
	} params;

	params.DataName = DataName;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.BP_AddItemComponent
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ItemComponentBase* itemComponentClass             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Visible                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Item_Btn_C::BP_AddItemComponent(class UYWidget_ItemComponentBase* itemComponentClass, bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.BP_AddItemComponent"));

	struct
	{
		class UYWidget_ItemComponentBase* itemComponentClass;
		bool                           Visible;
	} params;

	params.itemComponentClass = itemComponentClass;
	params.Visible = Visible;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.SetAmountText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Item_Btn_C::SetAmountText(const struct FText& Amount)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.SetAmountText"));

	struct
	{
		struct FText                   Amount;
	} params;

	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.Trigger_InventoryHighlightAnimation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Item_Btn_C::Trigger_InventoryHighlightAnimation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.Trigger_InventoryHighlightAnimation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.BndEvt__ItemComponent_Weight_K2Node_ComponentBoundEvent_15_OnWeightTextSet__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   WeightText                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Item_Btn_C::BndEvt__ItemComponent_Weight_K2Node_ComponentBoundEvent_15_OnWeightTextSet__DelegateSignature(const struct FText& WeightText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.BndEvt__ItemComponent_Weight_K2Node_ComponentBoundEvent_15_OnWeightTextSet__DelegateSignature"));

	struct
	{
		struct FText                   WeightText;
	} params;

	params.WeightText = WeightText;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Item_Btn_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.Pressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           StartedDragging                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsRightMouseButton             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Item_Btn_C::Pressed(bool StartedDragging, bool IsRightMouseButton)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.Pressed"));

	struct
	{
		bool                           StartedDragging;
		bool                           IsRightMouseButton;
	} params;

	params.StartedDragging = StartedDragging;
	params.IsRightMouseButton = IsRightMouseButton;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.Released
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Item_Btn_C::Released()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.Released"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.Unhovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Item_Btn_C::Unhovered()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.Unhovered"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.Hovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Item_Btn_C::Hovered()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.Hovered"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.DragDone
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Item_Btn_C::DragDone()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.DragDone"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.BndEvt__m_button_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Item_Btn_C::BndEvt__m_button_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.BndEvt__m_button_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.BndEvt__m_button_K2Node_ComponentBoundEvent_17_OnButtonReleasedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Item_Btn_C::BndEvt__m_button_K2Node_ComponentBoundEvent_17_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.BndEvt__m_button_K2Node_ComponentBoundEvent_17_OnButtonReleasedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.BndEvt__m_button_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Item_Btn_C::BndEvt__m_button_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.BndEvt__m_button_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.BndEvt__m_button_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Item_Btn_C::BndEvt__m_button_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.BndEvt__m_button_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.OnSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ItemContainer*  itemWidget                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Item_Btn_C::OnSelected(class UYWidget_ItemContainer* itemWidget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.OnSelected"));

	struct
	{
		class UYWidget_ItemContainer*  itemWidget;
	} params;

	params.itemWidget = itemWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.SetSellValues
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   CurrencyReturn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   FactionProgressionIncrement    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FString                 factionRowId                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_Item_Btn_C::SetSellValues(const struct FText& CurrencyReturn, const struct FText& FactionProgressionIncrement, const struct FString& factionRowId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.SetSellValues"));

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


// Function WBP_Item_Btn.WBP_Item_Btn_C.BndEvt__m_button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Item_Btn_C::BndEvt__m_button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.BndEvt__m_button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.SetEquppedState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           EquippedState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Item_Btn_C::SetEquppedState(bool EquippedState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.SetEquppedState"));

	struct
	{
		bool                           EquippedState;
	} params;

	params.EquippedState = EquippedState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.BndEvt__WBP_Item_Btn_ItemComponent_Insured_K2Node_ComponentBoundEvent_0_OnItemInsuredSet__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           isInsured                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Item_Btn_C::BndEvt__WBP_Item_Btn_ItemComponent_Insured_K2Node_ComponentBoundEvent_0_OnItemInsuredSet__DelegateSignature(bool isInsured)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.BndEvt__WBP_Item_Btn_ItemComponent_Insured_K2Node_ComponentBoundEvent_0_OnItemInsuredSet__DelegateSignature"));

	struct
	{
		bool                           isInsured;
	} params;

	params.isInsured = isInsured;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Item_Btn_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.OnInitialized"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.BndEvt__WBP_Item_Btn_ItemComponent_LostOnDeath_K2Node_ComponentBoundEvent_2_OnItemLostOnDeathSet__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Item_Btn_C::BndEvt__WBP_Item_Btn_ItemComponent_LostOnDeath_K2Node_ComponentBoundEvent_2_OnItemLostOnDeathSet__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.BndEvt__WBP_Item_Btn_ItemComponent_LostOnDeath_K2Node_ComponentBoundEvent_2_OnItemLostOnDeathSet__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Item_Btn.WBP_Item_Btn_C.ExecuteUbergraph_WBP_Item_Btn
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Item_Btn_C::ExecuteUbergraph_WBP_Item_Btn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Btn.WBP_Item_Btn_C.ExecuteUbergraph_WBP_Item_Btn"));

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
