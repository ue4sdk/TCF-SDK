// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Player_ABP_Interface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Player_ABP_Interface.Player_ABP_Interface_C.SetUnarmedMode
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Unarmed                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayer_ABP_Interface_C::SetUnarmedMode(bool Unarmed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Player_ABP_Interface.Player_ABP_Interface_C.SetUnarmedMode"));

	struct
	{
		bool                           Unarmed;
	} params = {};

	params.Unarmed = Unarmed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Player_ABP_Interface.Player_ABP_Interface_C.DisableWeaponSway
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayer_ABP_Interface_C::DisableWeaponSway()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Player_ABP_Interface.Player_ABP_Interface_C.DisableWeaponSway"));

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
