// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ScannerWeaponComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.GetCharacterLocation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector UScannerWeaponComponent_BP_C::GetCharacterLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.GetCharacterLocation"));

	struct
	{
		struct FVector                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.GetCharacter
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class AActor* UScannerWeaponComponent_BP_C::GetCharacter()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.GetCharacter"));

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


// Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.AddPingWidgetWithDelay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UActorComponent*         ScannableComponent             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScannerWeaponComponent_BP_C::AddPingWidgetWithDelay(class UActorComponent* ScannableComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.AddPingWidgetWithDelay"));

	struct
	{
		class UActorComponent*         ScannableComponent;
	} params = {};

	params.ScannableComponent = ScannableComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.CalcPingDelay
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UActorComponent*         ScannableComponent             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UScannerWeaponComponent_BP_C::CalcPingDelay(class UActorComponent* ScannableComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.CalcPingDelay"));

	struct
	{
		class UActorComponent*         ScannableComponent;
		float                          ReturnValue;
	} params = {};

	params.ScannableComponent = ScannableComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.ScanForScannableComponents
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScannerWeaponComponent_BP_C::ScanForScannableComponents()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.ScanForScannableComponents"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.GetWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ScannerInterface_C* AsWBP_Scanner_Interface        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void UScannerWeaponComponent_BP_C::GetWidget(class UWBP_ScannerInterface_C** AsWBP_Scanner_Interface)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.GetWidget"));

	struct
	{
		class UWBP_ScannerInterface_C* AsWBP_Scanner_Interface;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AsWBP_Scanner_Interface != nullptr)
		*AsWBP_Scanner_Interface = params.AsWBP_Scanner_Interface;
}


// Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.FadeOutRechargeSound
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScannerWeaponComponent_BP_C::FadeOutRechargeSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.FadeOutRechargeSound"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScannerWeaponComponent_BP_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.ReceiveEndPlay"));

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


// Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.OnWeaponCantBeFired_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScannerWeaponComponent_BP_C::OnWeaponCantBeFired_Event()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.OnWeaponCantBeFired_Event"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.OnWeaponRefireCooldownTimeChanged_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          percentage                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScannerWeaponComponent_BP_C::OnWeaponRefireCooldownTimeChanged_Event(float percentage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.OnWeaponRefireCooldownTimeChanged_Event"));

	struct
	{
		float                          percentage;
	} params = {};

	params.percentage = percentage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.OnWeaponRefireCooldownTimeFinished_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScannerWeaponComponent_BP_C::OnWeaponRefireCooldownTimeFinished_Event()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.OnWeaponRefireCooldownTimeFinished_Event"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.OnWeaponFired_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWeaponPlayerControllerRuntimeComponent* weaponPlayerControllerRuntimeComponent (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScannerWeaponComponent_BP_C::OnWeaponFired_Event(class UYWeaponPlayerControllerRuntimeComponent* weaponPlayerControllerRuntimeComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.OnWeaponFired_Event"));

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


// Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.PlayScanFeedbackDelayed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           isSuccess                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UScannerWeaponComponent_BP_C::PlayScanFeedbackDelayed(bool isSuccess)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.PlayScanFeedbackDelayed"));

	struct
	{
		bool                           isSuccess;
	} params = {};

	params.isSuccess = isSuccess;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.OnPlayScanFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScannerWeaponComponent_BP_C::OnPlayScanFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.OnPlayScanFX"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.UpdateRefireProgress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          percentage                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScannerWeaponComponent_BP_C::UpdateRefireProgress(float percentage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.UpdateRefireProgress"));

	struct
	{
		float                          percentage;
	} params = {};

	params.percentage = percentage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UScannerWeaponComponent_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.ExecuteUbergraph_ScannerWeaponComponent_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScannerWeaponComponent_BP_C::ExecuteUbergraph_ScannerWeaponComponent_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.ExecuteUbergraph_ScannerWeaponComponent_BP"));

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
