// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AA_ForceField_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AA_ForceField_BP.AA_ForceField_BP_C.OnRep_ForceFieldState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_ForceField_BP_C::OnRep_ForceFieldState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.OnRep_ForceFieldState"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.InitForceFieldState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_ForceField_BP_C::InitForceFieldState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.InitForceFieldState"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.UpdateDecalLocations
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_ForceField_BP_C::UpdateDecalLocations()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.UpdateDecalLocations"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.UpdateMaterial
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ForceFieldEnabled              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_ForceField_BP_C::UpdateMaterial(bool ForceFieldEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.UpdateMaterial"));

	struct
	{
		bool                           ForceFieldEnabled;
	} params;

	params.ForceFieldEnabled = ForceFieldEnabled;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.UpdateForceFieldStatus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_ForceField_BP_C::UpdateForceFieldStatus()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.UpdateForceFieldStatus"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.Is Force Field Enabled
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsPowered                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_ForceField_BP_C::Is_Force_Field_Enabled(bool* IsPowered)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.Is Force Field Enabled"));

	struct
	{
		bool                           IsPowered;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsPowered != nullptr)
		*IsPowered = params.IsPowered;
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.OnRep_SafetyTriggerActive
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_ForceField_BP_C::OnRep_SafetyTriggerActive()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.OnRep_SafetyTriggerActive"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_ForceField_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.ResetPowerUpActor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_ForceField_BP_C::ResetPowerUpActor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.ResetPowerUpActor"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.OnPoweredProgressionLootRoom
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PoweredConnectionsInt          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_ForceField_BP_C::OnPoweredProgressionLootRoom(int PoweredConnectionsInt)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.OnPoweredProgressionLootRoom"));

	struct
	{
		int                            PoweredConnectionsInt;
	} params;

	params.PoweredConnectionsInt = PoweredConnectionsInt;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.OnLootRoomPowered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_ForceField_BP_C::OnLootRoomPowered()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.OnLootRoomPowered"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.SetSafetyTriggerState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           SafetyTriggerActive            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_ForceField_BP_C::SetSafetyTriggerState(bool SafetyTriggerActive)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.SetSafetyTriggerState"));

	struct
	{
		bool                           SafetyTriggerActive;
	} params;

	params.SafetyTriggerActive = SafetyTriggerActive;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.OnSafetyTriggerStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_ForceField_BP_C::OnSafetyTriggerStarted()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.OnSafetyTriggerStarted"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.OnSafetyTriggerEnded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_ForceField_BP_C::OnSafetyTriggerEnded()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.OnSafetyTriggerEnded"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.OnEnabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_ForceField_BP_C::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.OnEnabled"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.OnDisabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_ForceField_BP_C::OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.OnDisabled"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.FX-ForceFieldEnabled
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_ForceField_BP_C::FX_ForceFieldEnabled()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.FX-ForceFieldEnabled"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.FX-ForceFieldDisabled
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_ForceField_BP_C::FX_ForceFieldDisabled()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.FX-ForceFieldDisabled"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.BndEvt__AA_ForceField_BP_PowerUpComponent_K2Node_ComponentBoundEvent_1_OnPowerStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           IsPowered                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_ForceField_BP_C::BndEvt__AA_ForceField_BP_PowerUpComponent_K2Node_ComponentBoundEvent_1_OnPowerStatusChanged__DelegateSignature(bool IsPowered)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.BndEvt__AA_ForceField_BP_PowerUpComponent_K2Node_ComponentBoundEvent_1_OnPowerStatusChanged__DelegateSignature"));

	struct
	{
		bool                           IsPowered;
	} params;

	params.IsPowered = IsPowered;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.BndEvt__AA_ForceField_BP_PowerUpComponent_K2Node_ComponentBoundEvent_0_OnConfiguratorInitiated__DelegateSignature
// (FUNC_BlueprintEvent)

void AAA_ForceField_BP_C::BndEvt__AA_ForceField_BP_PowerUpComponent_K2Node_ComponentBoundEvent_0_OnConfiguratorInitiated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.BndEvt__AA_ForceField_BP_PowerUpComponent_K2Node_ComponentBoundEvent_0_OnConfiguratorInitiated__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.OnRelevantToPowerup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           TRUE                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_ForceField_BP_C::OnRelevantToPowerup(bool TRUE)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.OnRelevantToPowerup"));

	struct
	{
		bool                           TRUE;
	} params;

	params.TRUE = TRUE;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.ExecuteUbergraph_AA_ForceField_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_ForceField_BP_C::ExecuteUbergraph_AA_ForceField_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.ExecuteUbergraph_AA_ForceField_BP"));

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
