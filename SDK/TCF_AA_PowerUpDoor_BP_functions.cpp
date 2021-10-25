// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AA_PowerUpDoor_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.NewFunction_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUpDoor_BP_C::NewFunction_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.NewFunction_1"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.OnRep_IsPowered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUpDoor_BP_C::OnRep_IsPowered()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.OnRep_IsPowered"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.Init Event Listeners
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUpDoor_BP_C::Init_Event_Listeners()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.Init Event Listeners"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.RefreshState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUpDoor_BP_C::RefreshState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.RefreshState"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.GetIsPowered
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsPowered                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_PowerUpDoor_BP_C::GetIsPowered(bool* IsPowered)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.GetIsPowered"));

	struct
	{
		bool                           IsPowered;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsPowered != nullptr)
		*IsPowered = params.IsPowered;
}


// Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUpDoor_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.OnPoweredProgressionLootRoom
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PoweredConnectionsInt          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_PowerUpDoor_BP_C::OnPoweredProgressionLootRoom(int PoweredConnectionsInt)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.OnPoweredProgressionLootRoom"));

	struct
	{
		int                            PoweredConnectionsInt;
	} params;

	params.PoweredConnectionsInt = PoweredConnectionsInt;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.OnLootRoomPowered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUpDoor_BP_C::OnLootRoomPowered()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.OnLootRoomPowered"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAA_PowerUpDoor_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.OnRegularTriggerPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_PowerUpDoor_BP_C::OnRegularTriggerPressed(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.OnRegularTriggerPressed"));

	struct
	{
		class APlayerController*       PlayerController;
	} params;

	params.PlayerController = PlayerController;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.OnRegularTriggerInteract
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYInteractionType              interactionType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AYPlayerController_Match* interactingPlayer              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           perfectInteraction             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_PowerUpDoor_BP_C::OnRegularTriggerInteract(EYInteractionType interactionType, class AYPlayerController_Match* interactingPlayer, bool perfectInteraction)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.OnRegularTriggerInteract"));

	struct
	{
		EYInteractionType              interactionType;
		class AYPlayerController_Match* interactingPlayer;
		bool                           perfectInteraction;
	} params;

	params.interactionType = interactionType;
	params.interactingPlayer = interactingPlayer;
	params.perfectInteraction = perfectInteraction;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.CloseDoorDuePowerOff
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUpDoor_BP_C::CloseDoorDuePowerOff()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.CloseDoorDuePowerOff"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.OnSafetyTriggerStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUpDoor_BP_C::OnSafetyTriggerStarted()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.OnSafetyTriggerStarted"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.OnSafetyTriggerEnded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUpDoor_BP_C::OnSafetyTriggerEnded()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.OnSafetyTriggerEnded"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.OnDamageTriggered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUpDoor_BP_C::OnDamageTriggered()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.OnDamageTriggered"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.FX-PowerGained
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUpDoor_BP_C::FX_PowerGained()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.FX-PowerGained"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.FX-PowerLost
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUpDoor_BP_C::FX_PowerLost()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.FX-PowerLost"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.FX-PowerLostShutdown
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUpDoor_BP_C::FX_PowerLostShutdown()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.FX-PowerLostShutdown"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.BndEvt__AA_PowerUpDoor_BP_PowerUpComponent_K2Node_ComponentBoundEvent_0_OnPowerStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           IsPowered                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_PowerUpDoor_BP_C::BndEvt__AA_PowerUpDoor_BP_PowerUpComponent_K2Node_ComponentBoundEvent_0_OnPowerStatusChanged__DelegateSignature(bool IsPowered)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.BndEvt__AA_PowerUpDoor_BP_PowerUpComponent_K2Node_ComponentBoundEvent_0_OnPowerStatusChanged__DelegateSignature"));

	struct
	{
		bool                           IsPowered;
	} params;

	params.IsPowered = IsPowered;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.FX-DoorCloseTimer
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUpDoor_BP_C::FX_DoorCloseTimer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.FX-DoorCloseTimer"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.BndEvt__AA_PowerUpDoor_BP_PowerUpComponent_K2Node_ComponentBoundEvent_1_OnConfiguratorInitiated__DelegateSignature
// (FUNC_BlueprintEvent)

void AAA_PowerUpDoor_BP_C::BndEvt__AA_PowerUpDoor_BP_PowerUpComponent_K2Node_ComponentBoundEvent_1_OnConfiguratorInitiated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.BndEvt__AA_PowerUpDoor_BP_PowerUpComponent_K2Node_ComponentBoundEvent_1_OnConfiguratorInitiated__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.ResetPowerUpActor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUpDoor_BP_C::ResetPowerUpActor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.ResetPowerUpActor"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.OnRelevantToPowerup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           TRUE                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_PowerUpDoor_BP_C::OnRelevantToPowerup(bool TRUE)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.OnRelevantToPowerup"));

	struct
	{
		bool                           TRUE;
	} params;

	params.TRUE = TRUE;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.ExecuteUbergraph_AA_PowerUpDoor_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_PowerUpDoor_BP_C::ExecuteUbergraph_AA_PowerUpDoor_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.ExecuteUbergraph_AA_PowerUpDoor_BP"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.OnDoorIsOpenChanged_0__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AAA_PowerUpDoor_BP_C*    Door                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_PowerUpDoor_BP_C::OnDoorIsOpenChanged_0__DelegateSignature(class AAA_PowerUpDoor_BP_C* Door)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C.OnDoorIsOpenChanged_0__DelegateSignature"));

	struct
	{
		class AAA_PowerUpDoor_BP_C*    Door;
	} params;

	params.Door = Door;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
