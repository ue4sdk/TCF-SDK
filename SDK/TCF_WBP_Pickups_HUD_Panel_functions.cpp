// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Pickups_HUD_Panel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Pickups_HUD_Panel.WBP_Pickups_HUD_Panel_C.OnItemFadedOut
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Pickups_HUD_Panel_C::OnItemFadedOut()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Pickups_HUD_Panel.WBP_Pickups_HUD_Panel_C.OnItemFadedOut"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Pickups_HUD_Panel.WBP_Pickups_HUD_Panel_C.AddItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYInventoryItem         Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Pickups_HUD_Panel_C::AddItem(const struct FYInventoryItem& Item)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Pickups_HUD_Panel.WBP_Pickups_HUD_Panel_C.AddItem"));

	struct
	{
		struct FYInventoryItem         Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Pickups_HUD_Panel.WBP_Pickups_HUD_Panel_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Pickups_HUD_Panel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Pickups_HUD_Panel.WBP_Pickups_HUD_Panel_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Pickups_HUD_Panel.WBP_Pickups_HUD_Panel_C.ExecuteUbergraph_WBP_Pickups_HUD_Panel
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Pickups_HUD_Panel_C::ExecuteUbergraph_WBP_Pickups_HUD_Panel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Pickups_HUD_Panel.WBP_Pickups_HUD_Panel_C.ExecuteUbergraph_WBP_Pickups_HUD_Panel"));

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
