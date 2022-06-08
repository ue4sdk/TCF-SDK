// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ItemComponent_MatchAmmo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ItemComponent_MatchAmmo.ItemComponent_MatchAmmo_C.GetTotalAmmoInBag
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FDataTableRowHandle     rowHandle                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// int                            TotalAmmo                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItemComponent_MatchAmmo_C::GetTotalAmmoInBag(const struct FDataTableRowHandle& rowHandle, int* TotalAmmo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_MatchAmmo.ItemComponent_MatchAmmo_C.GetTotalAmmoInBag"));

	struct
	{
		struct FDataTableRowHandle     rowHandle;
		int                            TotalAmmo;
	} params = {};

	params.rowHandle = rowHandle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TotalAmmo != nullptr)
		*TotalAmmo = params.TotalAmmo;
}


// Function ItemComponent_MatchAmmo.ItemComponent_MatchAmmo_C.BP_HandleSetItem
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemComponent_MatchAmmo_C::BP_HandleSetItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_MatchAmmo.ItemComponent_MatchAmmo_C.BP_HandleSetItem"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ItemComponent_MatchAmmo.ItemComponent_MatchAmmo_C.ExecuteUbergraph_ItemComponent_MatchAmmo
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItemComponent_MatchAmmo_C::ExecuteUbergraph_ItemComponent_MatchAmmo(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_MatchAmmo.ItemComponent_MatchAmmo_C.ExecuteUbergraph_ItemComponent_MatchAmmo"));

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
