// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_BP_AimAssistInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AimAssistInterface.BP_AimAssistInterface_C.GetAutoAimRotator
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRotator                AutoAimRotator                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_AimAssistInterface_C::GetAutoAimRotator(struct FRotator* AutoAimRotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AimAssistInterface.BP_AimAssistInterface_C.GetAutoAimRotator");

	struct
	{
		struct FRotator                AutoAimRotator;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AutoAimRotator != nullptr)
		*AutoAimRotator = params.AutoAimRotator;
}


// Function BP_AimAssistInterface.BP_AimAssistInterface_C.CharacterChangeState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_CharacterAimState> newState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssistInterface_C::CharacterChangeState(TEnumAsByte<ENUM_CharacterAimState> newState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AimAssistInterface.BP_AimAssistInterface_C.CharacterChangeState");

	struct
	{
		TEnumAsByte<ENUM_CharacterAimState> newState;
	} params;

	params.newState = newState;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_AimAssistInterface.BP_AimAssistInterface_C.InitializeAimAssistWPNPreset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 PresetName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UBP_AimAssistInterface_C::InitializeAimAssistWPNPreset(const struct FString& PresetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AimAssistInterface.BP_AimAssistInterface_C.InitializeAimAssistWPNPreset");

	struct
	{
		struct FString                 PresetName;
	} params;

	params.PresetName = PresetName;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
