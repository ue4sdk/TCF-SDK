// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ItemComponent_Crafting_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ItemComponent_Crafting.ItemComponent_Crafting_C.BP_HandleSetItem
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemComponent_Crafting_C::BP_HandleSetItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_Crafting.ItemComponent_Crafting_C.BP_HandleSetItem"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ItemComponent_Crafting.ItemComponent_Crafting_C.ExecuteUbergraph_ItemComponent_Crafting
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItemComponent_Crafting_C::ExecuteUbergraph_ItemComponent_Crafting(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_Crafting.ItemComponent_Crafting_C.ExecuteUbergraph_ItemComponent_Crafting"));

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
