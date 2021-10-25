// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_I_PowerUp_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function I_PowerUp_BP.I_PowerUp_BP_C.OnRelevantToPowerup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           TRUE                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UI_PowerUp_BP_C::OnRelevantToPowerup(bool TRUE)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function I_PowerUp_BP.I_PowerUp_BP_C.OnRelevantToPowerup"));

	struct
	{
		bool                           TRUE;
	} params;

	params.TRUE = TRUE;

	UObject::ProcessEvent(fn, &params);
}


// Function I_PowerUp_BP.I_PowerUp_BP_C.OnLootRoomPowered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UI_PowerUp_BP_C::OnLootRoomPowered()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function I_PowerUp_BP.I_PowerUp_BP_C.OnLootRoomPowered"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function I_PowerUp_BP.I_PowerUp_BP_C.OnPoweredProgressionLootRoom
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PoweredConnectionsInt          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UI_PowerUp_BP_C::OnPoweredProgressionLootRoom(int PoweredConnectionsInt)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function I_PowerUp_BP.I_PowerUp_BP_C.OnPoweredProgressionLootRoom"));

	struct
	{
		int                            PoweredConnectionsInt;
	} params;

	params.PoweredConnectionsInt = PoweredConnectionsInt;

	UObject::ProcessEvent(fn, &params);
}


// Function I_PowerUp_BP.I_PowerUp_BP_C.ResetPowerUpActor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UI_PowerUp_BP_C::ResetPowerUpActor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function I_PowerUp_BP.I_PowerUp_BP_C.ResetPowerUpActor"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
