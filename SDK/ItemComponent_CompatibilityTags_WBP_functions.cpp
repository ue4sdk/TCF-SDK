// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ItemComponent_CompatibilityTags_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ItemComponent_CompatibilityTags_WBP.ItemComponent_CompatibilityTags_WBP_C.BP_HandleSetItem
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemComponent_CompatibilityTags_WBP_C::BP_HandleSetItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_CompatibilityTags_WBP.ItemComponent_CompatibilityTags_WBP_C.BP_HandleSetItem"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ItemComponent_CompatibilityTags_WBP.ItemComponent_CompatibilityTags_WBP_C.ExecuteUbergraph_ItemComponent_CompatibilityTags_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItemComponent_CompatibilityTags_WBP_C::ExecuteUbergraph_ItemComponent_CompatibilityTags_WBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_CompatibilityTags_WBP.ItemComponent_CompatibilityTags_WBP_C.ExecuteUbergraph_ItemComponent_CompatibilityTags_WBP"));

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


// Function ItemComponent_CompatibilityTags_WBP.ItemComponent_CompatibilityTags_WBP_C.OnItemTagsReceived__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FYGameplayTagMappingRow> ItemTagsData                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UItemComponent_CompatibilityTags_WBP_C::OnItemTagsReceived__DelegateSignature(TArray<struct FYGameplayTagMappingRow>* ItemTagsData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_CompatibilityTags_WBP.ItemComponent_CompatibilityTags_WBP_C.OnItemTagsReceived__DelegateSignature"));

	struct
	{
		TArray<struct FYGameplayTagMappingRow> ItemTagsData;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ItemTagsData != nullptr)
		*ItemTagsData = params.ItemTagsData;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
