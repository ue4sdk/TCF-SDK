// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ItemComponent_ImageFactionLock_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ItemComponent_ImageFactionLock_WBP.ItemComponent_ImageFactionLock_WBP_C.DetermineLockText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FItemLockInfo           Info                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// struct FText                   Result                         (CPF_Parm, CPF_OutParm)

void UItemComponent_ImageFactionLock_WBP_C::DetermineLockText(struct FItemLockInfo* Info, struct FText* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_ImageFactionLock_WBP.ItemComponent_ImageFactionLock_WBP_C.DetermineLockText"));

	struct
	{
		struct FItemLockInfo           Info;
		struct FText                   Result;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Info != nullptr)
		*Info = params.Info;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function ItemComponent_ImageFactionLock_WBP.ItemComponent_ImageFactionLock_WBP_C.BP_SetUnlockText
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FItemLockInfo           Info                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UItemComponent_ImageFactionLock_WBP_C::BP_SetUnlockText(const struct FItemLockInfo& Info)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_ImageFactionLock_WBP.ItemComponent_ImageFactionLock_WBP_C.BP_SetUnlockText"));

	struct
	{
		struct FItemLockInfo           Info;
	} params = {};

	params.Info = Info;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ItemComponent_ImageFactionLock_WBP.ItemComponent_ImageFactionLock_WBP_C.ExecuteUbergraph_ItemComponent_ImageFactionLock_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItemComponent_ImageFactionLock_WBP_C::ExecuteUbergraph_ItemComponent_ImageFactionLock_WBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_ImageFactionLock_WBP.ItemComponent_ImageFactionLock_WBP_C.ExecuteUbergraph_ItemComponent_ImageFactionLock_WBP"));

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
