// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PowerRestoredComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PowerRestoredComponent.PowerRestoredComponent_C.UpdateReference
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPowerRestoredComponent_C::UpdateReference()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PowerRestoredComponent.PowerRestoredComponent_C.UpdateReference"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PowerRestoredComponent.PowerRestoredComponent_C.PowerLostLight
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPowerRestoredComponent_C::PowerLostLight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PowerRestoredComponent.PowerRestoredComponent_C.PowerLostLight"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PowerRestoredComponent.PowerRestoredComponent_C.PowerGainedLight
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPowerRestoredComponent_C::PowerGainedLight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PowerRestoredComponent.PowerRestoredComponent_C.PowerGainedLight"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PowerRestoredComponent.PowerRestoredComponent_C.FindPowerSources
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPowerRestoredComponent_C::FindPowerSources()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PowerRestoredComponent.PowerRestoredComponent_C.FindPowerSources"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PowerRestoredComponent.PowerRestoredComponent_C.PowerLostEmissives
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPowerRestoredComponent_C::PowerLostEmissives()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PowerRestoredComponent.PowerRestoredComponent_C.PowerLostEmissives"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PowerRestoredComponent.PowerRestoredComponent_C.PowerGainedEmissives
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPowerRestoredComponent_C::PowerGainedEmissives()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PowerRestoredComponent.PowerRestoredComponent_C.PowerGainedEmissives"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PowerRestoredComponent.PowerRestoredComponent_C.CreatePowerSourceEventBindings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPowerUpComponent_C*     PowerSourceComponent           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void UPowerRestoredComponent_C::CreatePowerSourceEventBindings(class UPowerUpComponent_C* PowerSourceComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PowerRestoredComponent.PowerRestoredComponent_C.CreatePowerSourceEventBindings"));

	struct
	{
		class UPowerUpComponent_C*     PowerSourceComponent;
	} params = {};

	params.PowerSourceComponent = PowerSourceComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PowerRestoredComponent.PowerRestoredComponent_C.ReceivesAnyPower
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReceivesPower                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPowerRestoredComponent_C::ReceivesAnyPower(bool* ReceivesPower)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PowerRestoredComponent.PowerRestoredComponent_C.ReceivesAnyPower"));

	struct
	{
		bool                           ReceivesPower;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ReceivesPower != nullptr)
		*ReceivesPower = params.ReceivesPower;
}


// Function PowerRestoredComponent.PowerRestoredComponent_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPowerRestoredComponent_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PowerRestoredComponent.PowerRestoredComponent_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PowerRestoredComponent.PowerRestoredComponent_C.OnPowerRestored
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPowerRestoredComponent_C::OnPowerRestored(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PowerRestoredComponent.PowerRestoredComponent_C.OnPowerRestored"));

	struct
	{
		class AActor*                  Actor;
	} params = {};

	params.Actor = Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PowerRestoredComponent.PowerRestoredComponent_C.OnPowerLost
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPowerRestoredComponent_C::OnPowerLost(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PowerRestoredComponent.PowerRestoredComponent_C.OnPowerLost"));

	struct
	{
		class AActor*                  Actor;
	} params = {};

	params.Actor = Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PowerRestoredComponent.PowerRestoredComponent_C.GetPowerSources
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPowerRestoredComponent_C::GetPowerSources()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PowerRestoredComponent.PowerRestoredComponent_C.GetPowerSources"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PowerRestoredComponent.PowerRestoredComponent_C.ClearPowerSources
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPowerRestoredComponent_C::ClearPowerSources()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PowerRestoredComponent.PowerRestoredComponent_C.ClearPowerSources"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PowerRestoredComponent.PowerRestoredComponent_C.ResolvePowerSourceReferences
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPowerRestoredComponent_C::ResolvePowerSourceReferences()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PowerRestoredComponent.PowerRestoredComponent_C.ResolvePowerSourceReferences"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PowerRestoredComponent.PowerRestoredComponent_C.OnPowerupCompleted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPowerRestoredComponent_C::OnPowerupCompleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PowerRestoredComponent.PowerRestoredComponent_C.OnPowerupCompleted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PowerRestoredComponent.PowerRestoredComponent_C.OnPowerupIncomplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPowerRestoredComponent_C::OnPowerupIncomplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PowerRestoredComponent.PowerRestoredComponent_C.OnPowerupIncomplete"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PowerRestoredComponent.PowerRestoredComponent_C.OpPowerUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           HasPower                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPowerRestoredComponent_C::OpPowerUpdate(bool HasPower)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PowerRestoredComponent.PowerRestoredComponent_C.OpPowerUpdate"));

	struct
	{
		bool                           HasPower;
	} params = {};

	params.HasPower = HasPower;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PowerRestoredComponent.PowerRestoredComponent_C.DebugShowConnections
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPowerRestoredComponent_C::DebugShowConnections()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PowerRestoredComponent.PowerRestoredComponent_C.DebugShowConnections"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PowerRestoredComponent.PowerRestoredComponent_C.ExecuteUbergraph_PowerRestoredComponent
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPowerRestoredComponent_C::ExecuteUbergraph_PowerRestoredComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PowerRestoredComponent.PowerRestoredComponent_C.ExecuteUbergraph_PowerRestoredComponent"));

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


// Function PowerRestoredComponent.PowerRestoredComponent_C.LostPower__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPowerRestoredComponent_C::LostPower__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PowerRestoredComponent.PowerRestoredComponent_C.LostPower__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PowerRestoredComponent.PowerRestoredComponent_C.HasPower__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPowerRestoredComponent_C::HasPower__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PowerRestoredComponent.PowerRestoredComponent_C.HasPower__DelegateSignature"));

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
