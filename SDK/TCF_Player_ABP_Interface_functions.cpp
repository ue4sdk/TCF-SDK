// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Player_ABP_Interface_classes.hpp"

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
	static auto fn = UObject::FindObject<UFunction>("Function Player_ABP_Interface.Player_ABP_Interface_C.SetUnarmedMode");

	struct
	{
		bool                           Unarmed;
	} params;

	params.Unarmed = Unarmed;

	UObject::ProcessEvent(fn, &params);
}


// Function Player_ABP_Interface.Player_ABP_Interface_C.DisableWeaponSway
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayer_ABP_Interface_C::DisableWeaponSway()
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_ABP_Interface.Player_ABP_Interface_C.DisableWeaponSway");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
