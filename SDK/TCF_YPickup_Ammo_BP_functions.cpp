// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YPickup_Ammo_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YPickup_Ammo_BP.YPickup_Ammo_BP_C.BP_GetInteractionBlockedMessage
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// int                            numInputBindings               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText AYPickup_Ammo_BP_C::BP_GetInteractionBlockedMessage(int numInputBindings)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPickup_Ammo_BP.YPickup_Ammo_BP_C.BP_GetInteractionBlockedMessage");

	struct
	{
		int                            numInputBindings;
		struct FText                   ReturnValue;
	} params;

	params.numInputBindings = numInputBindings;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function YPickup_Ammo_BP.YPickup_Ammo_BP_C.BP_GetInteractionAvailableMessage
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// int                            numInputBindings               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText AYPickup_Ammo_BP_C::BP_GetInteractionAvailableMessage(int numInputBindings)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPickup_Ammo_BP.YPickup_Ammo_BP_C.BP_GetInteractionAvailableMessage");

	struct
	{
		int                            numInputBindings;
		struct FText                   ReturnValue;
	} params;

	params.numInputBindings = numInputBindings;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
