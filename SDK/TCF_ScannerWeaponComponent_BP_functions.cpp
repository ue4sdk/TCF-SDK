// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_ScannerWeaponComponent_BP_classes.hpp"

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
	static auto fn = UObject::FindObject<UFunction>("Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.GetCharacterLocation");

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.GetCharacter
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class AActor* UScannerWeaponComponent_BP_C::GetCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.GetCharacter");

	struct
	{
		class AActor*                  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.AddPingWidgetWithDelay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UActorComponent*         ScannableComponent             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScannerWeaponComponent_BP_C::AddPingWidgetWithDelay(class UActorComponent* ScannableComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.AddPingWidgetWithDelay");

	struct
	{
		class UActorComponent*         ScannableComponent;
	} params;

	params.ScannableComponent = ScannableComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.CalcPingDelay
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UActorComponent*         ScannableComponent             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UScannerWeaponComponent_BP_C::CalcPingDelay(class UActorComponent* ScannableComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.CalcPingDelay");

	struct
	{
		class UActorComponent*         ScannableComponent;
		float                          ReturnValue;
	} params;

	params.ScannableComponent = ScannableComponent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.ScanForScannableComponents
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScannerWeaponComponent_BP_C::ScanForScannableComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.ScanForScannableComponents");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.GetWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ScannerInterface_C* AsWBP_Scanner_Interface        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void UScannerWeaponComponent_BP_C::GetWidget(class UWBP_ScannerInterface_C** AsWBP_Scanner_Interface)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.GetWidget");

	struct
	{
		class UWBP_ScannerInterface_C* AsWBP_Scanner_Interface;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AsWBP_Scanner_Interface != nullptr)
		*AsWBP_Scanner_Interface = params.AsWBP_Scanner_Interface;
}


// Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.FadeOutRechargeSound
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScannerWeaponComponent_BP_C::FadeOutRechargeSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.FadeOutRechargeSound");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.Init
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UYWeaponPlayerControllerRuntimeComponent* weaponRuntimeComponent         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UYPlayerCharacterWeaponComponent* characterWeaponComponent       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScannerWeaponComponent_BP_C::Init(class UYWeaponPlayerControllerRuntimeComponent* weaponRuntimeComponent, class UYPlayerCharacterWeaponComponent* characterWeaponComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.Init");

	struct
	{
		class UYWeaponPlayerControllerRuntimeComponent* weaponRuntimeComponent;
		class UYPlayerCharacterWeaponComponent* characterWeaponComponent;
	} params;

	params.weaponRuntimeComponent = weaponRuntimeComponent;
	params.characterWeaponComponent = characterWeaponComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScannerWeaponComponent_BP_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.ReceiveEndPlay");

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.OnWeaponCantBeFired_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScannerWeaponComponent_BP_C::OnWeaponCantBeFired_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.OnWeaponCantBeFired_Event");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.OnWeaponRefireCooldownTimeChanged_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          percentage                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScannerWeaponComponent_BP_C::OnWeaponRefireCooldownTimeChanged_Event(float percentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.OnWeaponRefireCooldownTimeChanged_Event");

	struct
	{
		float                          percentage;
	} params;

	params.percentage = percentage;

	UObject::ProcessEvent(fn, &params);
}


// Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.OnWeaponRefireCooldownTimeFinished_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScannerWeaponComponent_BP_C::OnWeaponRefireCooldownTimeFinished_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.OnWeaponRefireCooldownTimeFinished_Event");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.OnWeaponFired_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWeaponPlayerControllerRuntimeComponent* weaponPlayerControllerRuntimeComponent (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScannerWeaponComponent_BP_C::OnWeaponFired_Event(class UYWeaponPlayerControllerRuntimeComponent* weaponPlayerControllerRuntimeComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.OnWeaponFired_Event");

	struct
	{
		class UYWeaponPlayerControllerRuntimeComponent* weaponPlayerControllerRuntimeComponent;
	} params;

	params.weaponPlayerControllerRuntimeComponent = weaponPlayerControllerRuntimeComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.PlayScanFeedbackDelayed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsSuccess                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UScannerWeaponComponent_BP_C::PlayScanFeedbackDelayed(bool IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.PlayScanFeedbackDelayed");

	struct
	{
		bool                           IsSuccess;
	} params;

	params.IsSuccess = IsSuccess;

	UObject::ProcessEvent(fn, &params);
}


// Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.OnPlayScanFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScannerWeaponComponent_BP_C::OnPlayScanFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.OnPlayScanFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.UpdateRefireProgress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          percentage                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScannerWeaponComponent_BP_C::UpdateRefireProgress(float percentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.UpdateRefireProgress");

	struct
	{
		float                          percentage;
	} params;

	params.percentage = percentage;

	UObject::ProcessEvent(fn, &params);
}


// Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.ExecuteUbergraph_ScannerWeaponComponent_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScannerWeaponComponent_BP_C::ExecuteUbergraph_ScannerWeaponComponent_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C.ExecuteUbergraph_ScannerWeaponComponent_BP");

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
