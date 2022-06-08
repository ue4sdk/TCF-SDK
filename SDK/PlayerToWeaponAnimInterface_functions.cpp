// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PlayerToWeaponAnimInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerToWeaponAnimInterface.PlayerToWeaponAnimInterface_C.UpdateRecallmesh
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           RecallState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerToWeaponAnimInterface_C::UpdateRecallmesh(bool RecallState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerToWeaponAnimInterface.PlayerToWeaponAnimInterface_C.UpdateRecallmesh"));

	struct
	{
		bool                           RecallState;
	} params = {};

	params.RecallState = RecallState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerToWeaponAnimInterface.PlayerToWeaponAnimInterface_C.SendTurnDeltaOffsetToWeapon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DYaw                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          DPitch                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerToWeaponAnimInterface_C::SendTurnDeltaOffsetToWeapon(float DYaw, float DPitch)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerToWeaponAnimInterface.PlayerToWeaponAnimInterface_C.SendTurnDeltaOffsetToWeapon"));

	struct
	{
		float                          DYaw;
		float                          DPitch;
	} params = {};

	params.DYaw = DYaw;
	params.DPitch = DPitch;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerToWeaponAnimInterface.PlayerToWeaponAnimInterface_C.IsFirstPersonWeapon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsFirstPerson                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerToWeaponAnimInterface_C::IsFirstPersonWeapon(bool IsFirstPerson)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerToWeaponAnimInterface.PlayerToWeaponAnimInterface_C.IsFirstPersonWeapon"));

	struct
	{
		bool                           IsFirstPerson;
	} params = {};

	params.IsFirstPerson = IsFirstPerson;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerToWeaponAnimInterface.PlayerToWeaponAnimInterface_C.WalkOut
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerToWeaponAnimInterface_C::WalkOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerToWeaponAnimInterface.PlayerToWeaponAnimInterface_C.WalkOut"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerToWeaponAnimInterface.PlayerToWeaponAnimInterface_C.LightImpact
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerToWeaponAnimInterface_C::LightImpact()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerToWeaponAnimInterface.PlayerToWeaponAnimInterface_C.LightImpact"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerToWeaponAnimInterface.PlayerToWeaponAnimInterface_C.JumpLand
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerToWeaponAnimInterface_C::JumpLand()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerToWeaponAnimInterface.PlayerToWeaponAnimInterface_C.JumpLand"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
