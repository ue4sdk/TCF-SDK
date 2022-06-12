// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ItemComponent_Tooltip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.StopTooltipTimer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemComponent_Tooltip_C::StopTooltipTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.StopTooltipTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.InitTooltipTimer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemComponent_Tooltip_C::InitTooltipTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.InitTooltipTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.OnShowTooltipTimer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemComponent_Tooltip_C::OnShowTooltipTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.OnShowTooltipTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.ShowTooltip
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemComponent_Tooltip_C::ShowTooltip()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.ShowTooltip"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.SetFactionId
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   factionId                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItemComponent_Tooltip_C::SetFactionId(const struct FName& factionId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.SetFactionId"));

	struct
	{
		struct FName                   factionId;
	} params = {};

	params.factionId = factionId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.SetAddPriceInfo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UItemComponent_Tooltip_C::SetAddPriceInfo(bool Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.SetAddPriceInfo"));

	struct
	{
		bool                           Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.GetTooltipWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWBP_ItemTooltip_C*      Tooltip                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItemComponent_Tooltip_C::GetTooltipWidget(class UWBP_ItemTooltip_C** Tooltip)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.GetTooltipWidget"));

	struct
	{
		class UWBP_ItemTooltip_C*      Tooltip;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Tooltip != nullptr)
		*Tooltip = params.Tooltip;
}


// Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.GetTooltipWidgetFactionShop
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWBP_ItemTooltip_C*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWBP_ItemTooltip_C* UItemComponent_Tooltip_C::GetTooltipWidgetFactionShop()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.GetTooltipWidgetFactionShop"));

	struct
	{
		class UWBP_ItemTooltip_C*      ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.GetTooltipWidgetLoadout
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWBP_ItemTooltip_C*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWBP_ItemTooltip_C* UItemComponent_Tooltip_C::GetTooltipWidgetLoadout()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.GetTooltipWidgetLoadout"));

	struct
	{
		class UWBP_ItemTooltip_C*      ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.GetTooltipWidgetStash
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWBP_ItemTooltip_C*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWBP_ItemTooltip_C* UItemComponent_Tooltip_C::GetTooltipWidgetStash()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.GetTooltipWidgetStash"));

	struct
	{
		class UWBP_ItemTooltip_C*      ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.OnLoaded_169DE2A542E1656616E06FB7CE27F426
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItemComponent_Tooltip_C::OnLoaded_169DE2A542E1656616E06FB7CE27F426(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.OnLoaded_169DE2A542E1656616E06FB7CE27F426"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.BP_ItemHoveredChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           Hovered                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UItemComponent_Tooltip_C::BP_ItemHoveredChanged(bool Hovered)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.BP_ItemHoveredChanged"));

	struct
	{
		bool                           Hovered;
	} params = {};

	params.Hovered = Hovered;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.BP_HandleSetItem
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemComponent_Tooltip_C::BP_HandleSetItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.BP_HandleSetItem"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.AddSellTooltipInfo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           AddSellInfo                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UItemComponent_Tooltip_C::AddSellTooltipInfo(bool AddSellInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.AddSellTooltipInfo"));

	struct
	{
		bool                           AddSellInfo;
	} params = {};

	params.AddSellInfo = AddSellInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.BP_HandleResetItem
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemComponent_Tooltip_C::BP_HandleResetItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.BP_HandleResetItem"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.SetFactionIcon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D> SoftTexture                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// class UWBP_ItemTooltip_C*      Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItemComponent_Tooltip_C::SetFactionIcon(TSoftObjectPtr<class UTexture2D> SoftTexture, class UWBP_ItemTooltip_C* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.SetFactionIcon"));

	struct
	{
		TSoftObjectPtr<class UTexture2D> SoftTexture;
		class UWBP_ItemTooltip_C*      Target;
	} params = {};

	params.SoftTexture = SoftTexture;
	params.Target = Target;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.ExecuteUbergraph_ItemComponent_Tooltip
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItemComponent_Tooltip_C::ExecuteUbergraph_ItemComponent_Tooltip(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_Tooltip.ItemComponent_Tooltip_C.ExecuteUbergraph_ItemComponent_Tooltip"));

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
