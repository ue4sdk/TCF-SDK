// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AC_Uplink_Console_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AC_Uplink_Console_BP.AC_Uplink_Console_BP_C.OnRep_RarityLevelHardDrive
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Console_BP_C::OnRep_RarityLevelHardDrive()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Console_BP.AC_Uplink_Console_BP_C.OnRep_RarityLevelHardDrive"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Console_BP.AC_Uplink_Console_BP_C.OnRep_HasHardDrive
// (FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Console_BP_C::OnRep_HasHardDrive()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Console_BP.AC_Uplink_Console_BP_C.OnRep_HasHardDrive"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Console_BP.AC_Uplink_Console_BP_C.InitVariables
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Console_BP_C::InitVariables()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Console_BP.AC_Uplink_Console_BP_C.InitVariables"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Console_BP.AC_Uplink_Console_BP_C.OnRep_UplinkState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Console_BP_C::OnRep_UplinkState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Console_BP.AC_Uplink_Console_BP_C.OnRep_UplinkState"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Console_BP.AC_Uplink_Console_BP_C.FX-LookedAt TL__FinishedFunc
// (FUNC_BlueprintEvent)

void AAC_Uplink_Console_BP_C::FX_LookedAt_TL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Console_BP.AC_Uplink_Console_BP_C.FX-LookedAt TL__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Console_BP.AC_Uplink_Console_BP_C.FX-LookedAt TL__UpdateFunc
// (FUNC_BlueprintEvent)

void AAC_Uplink_Console_BP_C::FX_LookedAt_TL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Console_BP.AC_Uplink_Console_BP_C.FX-LookedAt TL__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Console_BP.AC_Uplink_Console_BP_C.OnUplinkStateUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EUplinkState_Enum> newState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_Uplink_Console_BP_C::OnUplinkStateUpdate(TEnumAsByte<EUplinkState_Enum> newState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Console_BP.AC_Uplink_Console_BP_C.OnUplinkStateUpdate"));

	struct
	{
		TEnumAsByte<EUplinkState_Enum> newState;
	} params;

	params.newState = newState;

	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Console_BP.AC_Uplink_Console_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAC_Uplink_Console_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Console_BP.AC_Uplink_Console_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Console_BP.AC_Uplink_Console_BP_C.OnPlayerInteractHardDriveSlot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerController_Match* interactingPlayer              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_Uplink_Console_BP_C::OnPlayerInteractHardDriveSlot(class AYPlayerController_Match* interactingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Console_BP.AC_Uplink_Console_BP_C.OnPlayerInteractHardDriveSlot"));

	struct
	{
		class AYPlayerController_Match* interactingPlayer;
	} params;

	params.interactingPlayer = interactingPlayer;

	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Console_BP.AC_Uplink_Console_BP_C.FX-OnScreenTextUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Console_BP_C::FX_OnScreenTextUpdate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Console_BP.AC_Uplink_Console_BP_C.FX-OnScreenTextUpdate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Console_BP.AC_Uplink_Console_BP_C.FX-OnHardDriveInserted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Console_BP_C::FX_OnHardDriveInserted()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Console_BP.AC_Uplink_Console_BP_C.FX-OnHardDriveInserted"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Console_BP.AC_Uplink_Console_BP_C.FX-OnHardDriveRemoved
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Console_BP_C::FX_OnHardDriveRemoved()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Console_BP.AC_Uplink_Console_BP_C.FX-OnHardDriveRemoved"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Console_BP.AC_Uplink_Console_BP_C.FX-OnFailedInteract
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerController_Match* Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_Uplink_Console_BP_C::FX_OnFailedInteract(class AYPlayerController_Match* Player)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Console_BP.AC_Uplink_Console_BP_C.FX-OnFailedInteract"));

	struct
	{
		class AYPlayerController_Match* Player;
	} params;

	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Console_BP.AC_Uplink_Console_BP_C.FX-OnLookedAt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           CanInteract                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAC_Uplink_Console_BP_C::FX_OnLookedAt(bool CanInteract)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Console_BP.AC_Uplink_Console_BP_C.FX-OnLookedAt"));

	struct
	{
		bool                           CanInteract;
	} params;

	params.CanInteract = CanInteract;

	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Console_BP.AC_Uplink_Console_BP_C.BndEvt__AC_Uplink_Console_BP_YLocalPlayerProximity_K2Node_ComponentBoundEvent_0_OnPlayerNotCloseAnymore__DelegateSignature
// (FUNC_BlueprintEvent)

void AAC_Uplink_Console_BP_C::BndEvt__AC_Uplink_Console_BP_YLocalPlayerProximity_K2Node_ComponentBoundEvent_0_OnPlayerNotCloseAnymore__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Console_BP.AC_Uplink_Console_BP_C.BndEvt__AC_Uplink_Console_BP_YLocalPlayerProximity_K2Node_ComponentBoundEvent_0_OnPlayerNotCloseAnymore__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Console_BP.AC_Uplink_Console_BP_C.OnInteractableUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Interactable                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAC_Uplink_Console_BP_C::OnInteractableUpdate(bool Interactable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Console_BP.AC_Uplink_Console_BP_C.OnInteractableUpdate"));

	struct
	{
		bool                           Interactable;
	} params;

	params.Interactable = Interactable;

	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Console_BP.AC_Uplink_Console_BP_C.ExecuteUbergraph_AC_Uplink_Console_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_Uplink_Console_BP_C::ExecuteUbergraph_AC_Uplink_Console_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Console_BP.AC_Uplink_Console_BP_C.ExecuteUbergraph_AC_Uplink_Console_BP"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Console_BP.AC_Uplink_Console_BP_C.OnHardDriveInteracted__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerController_Match* interactingPlayer              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_Uplink_Console_BP_C::OnHardDriveInteracted__DelegateSignature(class AYPlayerController_Match* interactingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Console_BP.AC_Uplink_Console_BP_C.OnHardDriveInteracted__DelegateSignature"));

	struct
	{
		class AYPlayerController_Match* interactingPlayer;
	} params;

	params.interactingPlayer = interactingPlayer;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
