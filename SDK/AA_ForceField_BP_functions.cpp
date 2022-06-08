// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AA_ForceField_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AA_ForceField_BP.AA_ForceField_BP_C.OnRep_ForceFieldState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_ForceField_BP_C::OnRep_ForceFieldState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.OnRep_ForceFieldState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.InitForceFieldState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_ForceField_BP_C::InitForceFieldState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.InitForceFieldState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.UpdateDecalLocations
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_ForceField_BP_C::UpdateDecalLocations()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.UpdateDecalLocations"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.UpdateMaterial
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ForceFieldEnabled              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_ForceField_BP_C::UpdateMaterial(bool ForceFieldEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.UpdateMaterial"));

	struct
	{
		bool                           ForceFieldEnabled;
	} params = {};

	params.ForceFieldEnabled = ForceFieldEnabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.UpdateForceFieldStatus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_ForceField_BP_C::UpdateForceFieldStatus()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.UpdateForceFieldStatus"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.IsForceFieldEnabled
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsPowered                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_ForceField_BP_C::IsForceFieldEnabled(bool* IsPowered)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.IsForceFieldEnabled"));

	struct
	{
		bool                           IsPowered;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsPowered != nullptr)
		*IsPowered = params.IsPowered;
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.OnRep_SafetyTriggerActive
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_ForceField_BP_C::OnRep_SafetyTriggerActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.OnRep_SafetyTriggerActive"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_ForceField_BP_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.ResetPowerUpActor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_ForceField_BP_C::ResetPowerUpActor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.ResetPowerUpActor"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.OnPoweredProgressionLootRoom
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PoweredConnectionsInt          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_ForceField_BP_C::OnPoweredProgressionLootRoom(int PoweredConnectionsInt)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.OnPoweredProgressionLootRoom"));

	struct
	{
		int                            PoweredConnectionsInt;
	} params = {};

	params.PoweredConnectionsInt = PoweredConnectionsInt;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.OnLootRoomPowered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_ForceField_BP_C::OnLootRoomPowered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.OnLootRoomPowered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.SetSafetyTriggerState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           SafetyTriggerActive            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_ForceField_BP_C::SetSafetyTriggerState(bool SafetyTriggerActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.SetSafetyTriggerState"));

	struct
	{
		bool                           SafetyTriggerActive;
	} params = {};

	params.SafetyTriggerActive = SafetyTriggerActive;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.OnSafetyTriggerStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_ForceField_BP_C::OnSafetyTriggerStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.OnSafetyTriggerStarted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.OnSafetyTriggerEnded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_ForceField_BP_C::OnSafetyTriggerEnded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.OnSafetyTriggerEnded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.OnEnabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_ForceField_BP_C::OnEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.OnEnabled"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.OnDisabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_ForceField_BP_C::OnDisabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.OnDisabled"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.FX-ForceFieldEnabled
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_ForceField_BP_C::FX_ForceFieldEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.FX-ForceFieldEnabled"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.FX-ForceFieldDisabled
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_ForceField_BP_C::FX_ForceFieldDisabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.FX-ForceFieldDisabled"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.BndEvt__AA_ForceField_BP_PowerUpComponent_K2Node_ComponentBoundEvent_1_OnPowerStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           IsPowered                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_ForceField_BP_C::BndEvt__AA_ForceField_BP_PowerUpComponent_K2Node_ComponentBoundEvent_1_OnPowerStatusChanged__DelegateSignature(bool IsPowered)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.BndEvt__AA_ForceField_BP_PowerUpComponent_K2Node_ComponentBoundEvent_1_OnPowerStatusChanged__DelegateSignature"));

	struct
	{
		bool                           IsPowered;
	} params = {};

	params.IsPowered = IsPowered;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.BndEvt__AA_ForceField_BP_PowerUpComponent_K2Node_ComponentBoundEvent_0_OnConfiguratorInitiated__DelegateSignature
// (FUNC_BlueprintEvent)

void AAA_ForceField_BP_C::BndEvt__AA_ForceField_BP_PowerUpComponent_K2Node_ComponentBoundEvent_0_OnConfiguratorInitiated__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.BndEvt__AA_ForceField_BP_PowerUpComponent_K2Node_ComponentBoundEvent_0_OnConfiguratorInitiated__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.OnRelevantToPowerup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           TRUE                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_ForceField_BP_C::OnRelevantToPowerup(bool TRUE)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.OnRelevantToPowerup"));

	struct
	{
		bool                           TRUE;
	} params = {};

	params.TRUE = TRUE;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_ForceField_BP.AA_ForceField_BP_C.ExecuteUbergraph_AA_ForceField_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_ForceField_BP_C::ExecuteUbergraph_AA_ForceField_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_ForceField_BP.AA_ForceField_BP_C.ExecuteUbergraph_AA_ForceField_BP"));

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
