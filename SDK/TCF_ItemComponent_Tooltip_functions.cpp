// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_ItemComponent_Tooltip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.SetFactionId
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   factionId                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItemComponent_Tooltip_C::SetFactionId(const struct FName& factionId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.SetFactionId");

	struct
	{
		struct FName                   factionId;
	} params;

	params.factionId = factionId;

	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.SetAddPriceInfo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UItemComponent_Tooltip_C::SetAddPriceInfo(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.SetAddPriceInfo");

	struct
	{
		bool                           Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.GetTooltipWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWBP_ItemTooltip_C*      Tooltip                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItemComponent_Tooltip_C::GetTooltipWidget(class UWBP_ItemTooltip_C** Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.GetTooltipWidget");

	struct
	{
		class UWBP_ItemTooltip_C*      Tooltip;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Tooltip != nullptr)
		*Tooltip = params.Tooltip;
}


// Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.GetTooltipWidgetFactionShop
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWBP_ItemTooltip_C*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWBP_ItemTooltip_C* UItemComponent_Tooltip_C::GetTooltipWidgetFactionShop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.GetTooltipWidgetFactionShop");

	struct
	{
		class UWBP_ItemTooltip_C*      ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.GetTooltipWidgetLoadout
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWBP_ItemTooltip_C*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWBP_ItemTooltip_C* UItemComponent_Tooltip_C::GetTooltipWidgetLoadout()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.GetTooltipWidgetLoadout");

	struct
	{
		class UWBP_ItemTooltip_C*      ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.GetTooltipWidgetStash
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWBP_ItemTooltip_C*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWBP_ItemTooltip_C* UItemComponent_Tooltip_C::GetTooltipWidgetStash()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.GetTooltipWidgetStash");

	struct
	{
		class UWBP_ItemTooltip_C*      ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.BP_ItemHoveredChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           Hovered                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UItemComponent_Tooltip_C::BP_ItemHoveredChanged(bool Hovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.BP_ItemHoveredChanged");

	struct
	{
		bool                           Hovered;
	} params;

	params.Hovered = Hovered;

	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.BP_HandleSetItem
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemComponent_Tooltip_C::BP_HandleSetItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.BP_HandleSetItem");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.AddSellTooltipInfo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           AddSellInfo                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UItemComponent_Tooltip_C::AddSellTooltipInfo(bool AddSellInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.AddSellTooltipInfo");

	struct
	{
		bool                           AddSellInfo;
	} params;

	params.AddSellInfo = AddSellInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.BP_HandleResetItem
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemComponent_Tooltip_C::BP_HandleResetItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.BP_HandleResetItem");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.ExecuteUbergraph_ItemComponent_Tooltip
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItemComponent_Tooltip_C::ExecuteUbergraph_ItemComponent_Tooltip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.ExecuteUbergraph_ItemComponent_Tooltip");

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
