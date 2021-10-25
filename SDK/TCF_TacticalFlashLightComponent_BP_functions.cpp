// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_TacticalFlashLightComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.OnRep_bIsEnabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTacticalFlashLightComponent_BP_C::OnRep_bIsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.OnRep_bIsEnabled");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.Play Sound on Weapon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          VolumeMultiplier               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          PitchMultiplier                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTacticalFlashLightComponent_BP_C::Play_Sound_on_Weapon(class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.Play Sound on Weapon");

	struct
	{
		class USoundBase*              Sound;
		float                          VolumeMultiplier;
		float                          PitchMultiplier;
	} params;

	params.Sound = Sound;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;

	UObject::ProcessEvent(fn, &params);
}


// Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.BP_OnWeaponSwitched
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTacticalFlashLightComponent_BP_C::BP_OnWeaponSwitched()
{
	static auto fn = UObject::FindObject<UFunction>("Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.BP_OnWeaponSwitched");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.Turn On Light
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTacticalFlashLightComponent_BP_C::Turn_On_Light()
{
	static auto fn = UObject::FindObject<UFunction>("Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.Turn On Light");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.TurnOffLight
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTacticalFlashLightComponent_BP_C::TurnOffLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.TurnOffLight");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.ToggleLight
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTacticalFlashLightComponent_BP_C::ToggleLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.ToggleLight");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.ServerTurnOnLight
// (FUNC_Net, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTacticalFlashLightComponent_BP_C::ServerTurnOnLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.ServerTurnOnLight");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.ServerTurnOffLight
// (FUNC_Net, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTacticalFlashLightComponent_BP_C::ServerTurnOffLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.ServerTurnOffLight");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.ExecuteUbergraph_TacticalFlashLightComponent_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTacticalFlashLightComponent_BP_C::ExecuteUbergraph_TacticalFlashLightComponent_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.ExecuteUbergraph_TacticalFlashLightComponent_BP");

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
