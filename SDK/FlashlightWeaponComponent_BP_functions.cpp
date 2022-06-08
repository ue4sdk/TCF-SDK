// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FlashlightWeaponComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FlashlightWeaponComponent_BP.FlashlightWeaponComponent_BP_C.GetCharacter
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class AActor* UFlashlightWeaponComponent_BP_C::GetCharacter()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FlashlightWeaponComponent_BP.FlashlightWeaponComponent_BP_C.GetCharacter"));

	struct
	{
		class AActor*                  ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function FlashlightWeaponComponent_BP.FlashlightWeaponComponent_BP_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFlashlightWeaponComponent_BP_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FlashlightWeaponComponent_BP.FlashlightWeaponComponent_BP_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params = {};

	params.EndPlayReason = EndPlayReason;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FlashlightWeaponComponent_BP.FlashlightWeaponComponent_BP_C.OnWeaponFired_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWeaponPlayerControllerRuntimeComponent* weaponPlayerControllerRuntimeComponent (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFlashlightWeaponComponent_BP_C::OnWeaponFired_Event(class UYWeaponPlayerControllerRuntimeComponent* weaponPlayerControllerRuntimeComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FlashlightWeaponComponent_BP.FlashlightWeaponComponent_BP_C.OnWeaponFired_Event"));

	struct
	{
		class UYWeaponPlayerControllerRuntimeComponent* weaponPlayerControllerRuntimeComponent;
	} params = {};

	params.weaponPlayerControllerRuntimeComponent = weaponPlayerControllerRuntimeComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FlashlightWeaponComponent_BP.FlashlightWeaponComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFlashlightWeaponComponent_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FlashlightWeaponComponent_BP.FlashlightWeaponComponent_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FlashlightWeaponComponent_BP.FlashlightWeaponComponent_BP_C.ExecuteUbergraph_FlashlightWeaponComponent_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFlashlightWeaponComponent_BP_C::ExecuteUbergraph_FlashlightWeaponComponent_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FlashlightWeaponComponent_BP.FlashlightWeaponComponent_BP_C.ExecuteUbergraph_FlashlightWeaponComponent_BP"));

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
