// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PowerUpComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PowerUpComponent.PowerUpComponent_C.RefreshPowerStatus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPowerUpComponent_C::RefreshPowerStatus()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PowerUpComponent.PowerUpComponent_C.RefreshPowerStatus"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PowerUpComponent.PowerUpComponent_C.RemovePowerSource
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPowerUpComponent_C::RemovePowerSource(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PowerUpComponent.PowerUpComponent_C.RemovePowerSource"));

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


// Function PowerUpComponent.PowerUpComponent_C.AddPowerSource
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPowerUpComponent_C::AddPowerSource(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PowerUpComponent.PowerUpComponent_C.AddPowerSource"));

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


// Function PowerUpComponent.PowerUpComponent_C.ConfiguratorInitiated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPowerUpComponent_C::ConfiguratorInitiated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PowerUpComponent.PowerUpComponent_C.ConfiguratorInitiated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PowerUpComponent.PowerUpComponent_C.SendInitEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPowerUpComponent_C::SendInitEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PowerUpComponent.PowerUpComponent_C.SendInitEvent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PowerUpComponent.PowerUpComponent_C.ExecuteUbergraph_PowerUpComponent
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPowerUpComponent_C::ExecuteUbergraph_PowerUpComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PowerUpComponent.PowerUpComponent_C.ExecuteUbergraph_PowerUpComponent"));

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


// Function PowerUpComponent.PowerUpComponent_C.OnConfiguratorInitiated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPowerUpComponent_C::OnConfiguratorInitiated__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PowerUpComponent.PowerUpComponent_C.OnConfiguratorInitiated__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PowerUpComponent.PowerUpComponent_C.OnPowerSourceDisabled__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPowerUpComponent_C::OnPowerSourceDisabled__DelegateSignature(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PowerUpComponent.PowerUpComponent_C.OnPowerSourceDisabled__DelegateSignature"));

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


// Function PowerUpComponent.PowerUpComponent_C.OnPowerSourceEnabled__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPowerUpComponent_C::OnPowerSourceEnabled__DelegateSignature(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PowerUpComponent.PowerUpComponent_C.OnPowerSourceEnabled__DelegateSignature"));

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


// Function PowerUpComponent.PowerUpComponent_C.OnPowerStatusChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsPowered                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPowerUpComponent_C::OnPowerStatusChanged__DelegateSignature(bool IsPowered)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PowerUpComponent.PowerUpComponent_C.OnPowerStatusChanged__DelegateSignature"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
