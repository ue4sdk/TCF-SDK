// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_PRO_PlayerController_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PRO_PlayerController.PRO_PlayerController_C.BP_DebugToggleAimAssistInfo
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::BP_DebugToggleAimAssistInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController.PRO_PlayerController_C.BP_DebugToggleAimAssistInfo");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerController.PRO_PlayerController_C.BP_AimAssistAdjustYawInput
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InValue                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float APRO_PlayerController_C::BP_AimAssistAdjustYawInput(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController.PRO_PlayerController_C.BP_AimAssistAdjustYawInput");

	struct
	{
		float                          InValue;
		float                          ReturnValue;
	} params;

	params.InValue = InValue;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PRO_PlayerController.PRO_PlayerController_C.BP_AimAssistAdjustPitchInput
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InValue                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float APRO_PlayerController_C::BP_AimAssistAdjustPitchInput(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController.PRO_PlayerController_C.BP_AimAssistAdjustPitchInput");

	struct
	{
		float                          InValue;
		float                          ReturnValue;
	} params;

	params.InValue = InValue;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PRO_PlayerController.PRO_PlayerController_C.LogSpawnedActivities
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::LogSpawnedActivities()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController.PRO_PlayerController_C.LogSpawnedActivities");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerController.PRO_PlayerController_C.BP_OnTryConsumeEscapeKey
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool APRO_PlayerController_C::BP_OnTryConsumeEscapeKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController.PRO_PlayerController_C.BP_OnTryConsumeEscapeKey");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PRO_PlayerController.PRO_PlayerController_C.InpActEvt_Debug_ToggleGod_K2Node_InputActionEvent_3
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void APRO_PlayerController_C::InpActEvt_Debug_ToggleGod_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController.PRO_PlayerController_C.InpActEvt_Debug_ToggleGod_K2Node_InputActionEvent_3");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerController.PRO_PlayerController_C.InpActEvt_HideHud_K2Node_InputActionEvent_2
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void APRO_PlayerController_C::InpActEvt_HideHud_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController.PRO_PlayerController_C.InpActEvt_HideHud_K2Node_InputActionEvent_2");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerController.PRO_PlayerController_C.InpActEvt_CallEvac_K2Node_InputActionEvent_1
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void APRO_PlayerController_C::InpActEvt_CallEvac_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController.PRO_PlayerController_C.InpActEvt_CallEvac_K2Node_InputActionEvent_1");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerController.PRO_PlayerController_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void APRO_PlayerController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController.PRO_PlayerController_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerController.PRO_PlayerController_C.sendRequestAutomationStarted
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::sendRequestAutomationStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController.PRO_PlayerController_C.sendRequestAutomationStarted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerController.PRO_PlayerController_C.StartInMatchSoaktest
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::StartInMatchSoaktest()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController.PRO_PlayerController_C.StartInMatchSoaktest");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerController.PRO_PlayerController_C.RunPerformanceCapture
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 timeSeriesSpecifier            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 performanceCaptureName         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void APRO_PlayerController_C::RunPerformanceCapture(const struct FString& timeSeriesSpecifier, const struct FString& performanceCaptureName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController.PRO_PlayerController_C.RunPerformanceCapture");

	struct
	{
		struct FString                 timeSeriesSpecifier;
		struct FString                 performanceCaptureName;
	} params;

	params.timeSeriesSpecifier = timeSeriesSpecifier;
	params.performanceCaptureName = performanceCaptureName;

	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerController.PRO_PlayerController_C.nextPerformanceCycle
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::nextPerformanceCycle()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController.PRO_PlayerController_C.nextPerformanceCycle");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerController.PRO_PlayerController_C.DebugLeaveMatch
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::DebugLeaveMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController.PRO_PlayerController_C.DebugLeaveMatch");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerController.PRO_PlayerController_C.ServerDebugLeaveMatch
// (FUNC_Net, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::ServerDebugLeaveMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController.PRO_PlayerController_C.ServerDebugLeaveMatch");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerController.PRO_PlayerController_C.sendRequestSpottedPerformanceStarted
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::sendRequestSpottedPerformanceStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController.PRO_PlayerController_C.sendRequestSpottedPerformanceStarted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerController.PRO_PlayerController_C.BndEvt__m_controllerReplicationComponent_K2Node_ComponentBoundEvent_0_OnAnyPlayerTeleportedDBNO__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FYTeleportData          teleportData                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void APRO_PlayerController_C::BndEvt__m_controllerReplicationComponent_K2Node_ComponentBoundEvent_0_OnAnyPlayerTeleportedDBNO__DelegateSignature(const struct FYTeleportData& teleportData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController.PRO_PlayerController_C.BndEvt__m_controllerReplicationComponent_K2Node_ComponentBoundEvent_0_OnAnyPlayerTeleportedDBNO__DelegateSignature");

	struct
	{
		struct FYTeleportData          teleportData;
	} params;

	params.teleportData = teleportData;

	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerController.PRO_PlayerController_C.ToggleHud
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::ToggleHud()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController.PRO_PlayerController_C.ToggleHud");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerController.PRO_PlayerController_C.RequestCaptureServerPerf
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::RequestCaptureServerPerf()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController.PRO_PlayerController_C.RequestCaptureServerPerf");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerController.PRO_PlayerController_C.MatchStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMatchState                   matchState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APRO_PlayerController_C::MatchStarted(EYMatchState matchState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController.PRO_PlayerController_C.MatchStarted");

	struct
	{
		EYMatchState                   matchState;
	} params;

	params.matchState = matchState;

	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerController.PRO_PlayerController_C.StartSmokecheckInMatch
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::StartSmokecheckInMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController.PRO_PlayerController_C.StartSmokecheckInMatch");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerController.PRO_PlayerController_C.debuginitautomation
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::debuginitautomation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController.PRO_PlayerController_C.debuginitautomation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerController.PRO_PlayerController_C.startSationAutomation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::startSationAutomation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController.PRO_PlayerController_C.startSationAutomation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerController.PRO_PlayerController_C.SmokecheckMeta
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::SmokecheckMeta()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController.PRO_PlayerController_C.SmokecheckMeta");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerController.PRO_PlayerController_C.OnPlayerInventoryUpdated
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FYInventoryItem> Inventory                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void APRO_PlayerController_C::OnPlayerInventoryUpdated(TArray<struct FYInventoryItem> Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController.PRO_PlayerController_C.OnPlayerInventoryUpdated");

	struct
	{
		TArray<struct FYInventoryItem> Inventory;
	} params;

	params.Inventory = Inventory;

	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerController.PRO_PlayerController_C.startSoaktest
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::startSoaktest()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController.PRO_PlayerController_C.startSoaktest");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerController.PRO_PlayerController_C.StartSpotPerformanceCapturing
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::StartSpotPerformanceCapturing()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController.PRO_PlayerController_C.StartSpotPerformanceCapturing");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerController.PRO_PlayerController_C.startStationReconnectAutomation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::startStationReconnectAutomation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController.PRO_PlayerController_C.startStationReconnectAutomation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerController.PRO_PlayerController_C.InitSoaktest
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::InitSoaktest()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController.PRO_PlayerController_C.InitSoaktest");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerController.PRO_PlayerController_C.SmokeCheckMeta_PlayerQuarters
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::SmokeCheckMeta_PlayerQuarters()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController.PRO_PlayerController_C.SmokeCheckMeta_PlayerQuarters");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerController.PRO_PlayerController_C.BP_DebugSetMatchPhase
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     newMatchPhaseRowHandle         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void APRO_PlayerController_C::BP_DebugSetMatchPhase(const struct FDataTableRowHandle& newMatchPhaseRowHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController.PRO_PlayerController_C.BP_DebugSetMatchPhase");

	struct
	{
		struct FDataTableRowHandle     newMatchPhaseRowHandle;
	} params;

	params.newMatchPhaseRowHandle = newMatchPhaseRowHandle;

	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerController.PRO_PlayerController_C.ServerDebugSetMatchPhase
// (FUNC_Net, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     MatchPhaseDefinitionRowHandle  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void APRO_PlayerController_C::ServerDebugSetMatchPhase(const struct FDataTableRowHandle& MatchPhaseDefinitionRowHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController.PRO_PlayerController_C.ServerDebugSetMatchPhase");

	struct
	{
		struct FDataTableRowHandle     MatchPhaseDefinitionRowHandle;
	} params;

	params.MatchPhaseDefinitionRowHandle = MatchPhaseDefinitionRowHandle;

	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerController.PRO_PlayerController_C.PressedCallEvac
// (FUNC_Net, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::PressedCallEvac()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController.PRO_PlayerController_C.PressedCallEvac");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerController.PRO_PlayerController_C.NextMatchPhase
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::NextMatchPhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController.PRO_PlayerController_C.NextMatchPhase");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerController.PRO_PlayerController_C.OnSmokeTestTimeOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::OnSmokeTestTimeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController.PRO_PlayerController_C.OnSmokeTestTimeOut");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerController.PRO_PlayerController_C.HealthEmptyDelegate_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYHealthComponent*       healthComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Instigator                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APRO_PlayerController_C::HealthEmptyDelegate_Event_1(class UYHealthComponent* healthComponent, class AActor* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController.PRO_PlayerController_C.HealthEmptyDelegate_Event_1");

	struct
	{
		class UYHealthComponent*       healthComponent;
		class AActor*                  Instigator;
	} params;

	params.healthComponent = healthComponent;
	params.Instigator = Instigator;

	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerController.PRO_PlayerController_C.CustomEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYHealthComponent*       healthComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Instigator                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APRO_PlayerController_C::CustomEvent(class UYHealthComponent* healthComponent, class AActor* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController.PRO_PlayerController_C.CustomEvent");

	struct
	{
		class UYHealthComponent*       healthComponent;
		class AActor*                  Instigator;
	} params;

	params.healthComponent = healthComponent;
	params.Instigator = Instigator;

	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerController.PRO_PlayerController_C.ExecuteUbergraph_PRO_PlayerController
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APRO_PlayerController_C::ExecuteUbergraph_PRO_PlayerController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController.PRO_PlayerController_C.ExecuteUbergraph_PRO_PlayerController");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerController.PRO_PlayerController_C.CallEvacPressed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APRO_PlayerController_C* Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APRO_PlayerController_C::CallEvacPressed__DelegateSignature(class APRO_PlayerController_C* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController.PRO_PlayerController_C.CallEvacPressed__DelegateSignature");

	struct
	{
		class APRO_PlayerController_C* Player;
	} params;

	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerController.PRO_PlayerController_C.OnHasZeal__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           HasZeal                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void APRO_PlayerController_C::OnHasZeal__DelegateSignature(bool HasZeal)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController.PRO_PlayerController_C.OnHasZeal__DelegateSignature");

	struct
	{
		bool                           HasZeal;
	} params;

	params.HasZeal = HasZeal;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
