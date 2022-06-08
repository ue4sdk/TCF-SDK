// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PRO_PlayerController_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PRO_PlayerController.PRO_PlayerController_C.Start New Capture
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::Start_New_Capture()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.Start New Capture"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.Debug Trigger Stats Capture
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::Debug_Trigger_Stats_Capture()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.Debug Trigger Stats Capture"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.Smokecheck_CompareInventoryWithDataAsset
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::Smokecheck_CompareInventoryWithDataAsset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.Smokecheck_CompareInventoryWithDataAsset"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.GettingStuckDetection
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Stuck                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void APRO_PlayerController_C::GettingStuckDetection(bool* Stuck)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.GettingStuckDetection"));

	struct
	{
		bool                           Stuck;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Stuck != nullptr)
		*Stuck = params.Stuck;
}


// Function PRO_PlayerController.PRO_PlayerController_C.BP_DebugToggleAimAssistInfo
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::BP_DebugToggleAimAssistInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.BP_DebugToggleAimAssistInfo"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.BP_AimAssistAdjustYawInput
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InValue                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float APRO_PlayerController_C::BP_AimAssistAdjustYawInput(float InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.BP_AimAssistAdjustYawInput"));

	struct
	{
		float                          InValue;
		float                          ReturnValue;
	} params = {};

	params.InValue = InValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function PRO_PlayerController.PRO_PlayerController_C.BP_AimAssistAdjustPitchInput
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InValue                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float APRO_PlayerController_C::BP_AimAssistAdjustPitchInput(float InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.BP_AimAssistAdjustPitchInput"));

	struct
	{
		float                          InValue;
		float                          ReturnValue;
	} params = {};

	params.InValue = InValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function PRO_PlayerController.PRO_PlayerController_C.LogSpawnedActivities
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::LogSpawnedActivities()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.LogSpawnedActivities"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.BP_OnTryConsumeEscapeKey
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool APRO_PlayerController_C::BP_OnTryConsumeEscapeKey()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.BP_OnTryConsumeEscapeKey"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function PRO_PlayerController.PRO_PlayerController_C.InpActEvt_ToggleLight_K2Node_InputActionEvent_3
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void APRO_PlayerController_C::InpActEvt_ToggleLight_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.InpActEvt_ToggleLight_K2Node_InputActionEvent_3"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.InpActEvt_Debug_ToggleGod_K2Node_InputActionEvent_2
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void APRO_PlayerController_C::InpActEvt_Debug_ToggleGod_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.InpActEvt_Debug_ToggleGod_K2Node_InputActionEvent_2"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.InpActEvt_CallEvac_K2Node_InputActionEvent_1
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void APRO_PlayerController_C::InpActEvt_CallEvac_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.InpActEvt_CallEvac_K2Node_InputActionEvent_1"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.ServerChangeFlashlighState
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bNewState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void APRO_PlayerController_C::ServerChangeFlashlighState(bool bNewState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.ServerChangeFlashlighState"));

	struct
	{
		bool                           bNewState;
	} params = {};

	params.bNewState = bNewState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.Server_ReplicateVOData
// (FUNC_Net, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FST_EffortData          InEffortData                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APRO_PlayerController_C::Server_ReplicateVOData(const struct FST_EffortData& InEffortData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.Server_ReplicateVOData"));

	struct
	{
		struct FST_EffortData          InEffortData;
	} params = {};

	params.InEffortData = InEffortData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.StartSmokecheckInMatch
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::StartSmokecheckInMatch()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.StartSmokecheckInMatch"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.OnSmokeTestTimeOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::OnSmokeTestTimeOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.OnSmokeTestTimeOut"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.Smokecheck_InventoryPersistence_Match
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::Smokecheck_InventoryPersistence_Match()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.Smokecheck_InventoryPersistence_Match"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.SmokeCheckMeta_PlayerQuarters
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::SmokeCheckMeta_PlayerQuarters()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.SmokeCheckMeta_PlayerQuarters"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.Smokecheck_GivePlayerInventory
// (FUNC_Net, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::Smokecheck_GivePlayerInventory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.Smokecheck_GivePlayerInventory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.StartInMatchSoaktest
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::StartInMatchSoaktest()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.StartInMatchSoaktest"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.SendRequestAutomationStarted
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::SendRequestAutomationStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.SendRequestAutomationStarted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.SendRequestSpottedPerformanceStarted
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::SendRequestSpottedPerformanceStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.SendRequestSpottedPerformanceStarted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.RequestCaptureServerPerf
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::RequestCaptureServerPerf()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.RequestCaptureServerPerf"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.startSoaktest
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::startSoaktest()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.startSoaktest"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.HealthEmptyDelegate_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYHealthComponent*       healthComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Instigator                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APRO_PlayerController_C::HealthEmptyDelegate_Event_1(class UYHealthComponent* healthComponent, class AActor* Instigator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.HealthEmptyDelegate_Event_1"));

	struct
	{
		class UYHealthComponent*       healthComponent;
		class AActor*                  Instigator;
	} params = {};

	params.healthComponent = healthComponent;
	params.Instigator = Instigator;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.StartStationAutomation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::StartStationAutomation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.StartStationAutomation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.startStationReconnectAutomation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::startStationReconnectAutomation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.startStationReconnectAutomation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.RunPerformanceCapture
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 timeSeriesSpecifier            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 performanceCaptureName         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           captureSimpleData              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void APRO_PlayerController_C::RunPerformanceCapture(const struct FString& timeSeriesSpecifier, const struct FString& performanceCaptureName, bool captureSimpleData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.RunPerformanceCapture"));

	struct
	{
		struct FString                 timeSeriesSpecifier;
		struct FString                 performanceCaptureName;
		bool                           captureSimpleData;
	} params = {};

	params.timeSeriesSpecifier = timeSeriesSpecifier;
	params.performanceCaptureName = performanceCaptureName;
	params.captureSimpleData = captureSimpleData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.NextPerformanceCycle
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::NextPerformanceCycle()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.NextPerformanceCycle"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.MatchStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMatchState                   matchState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APRO_PlayerController_C::MatchStarted(EYMatchState matchState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.MatchStarted"));

	struct
	{
		EYMatchState                   matchState;
	} params = {};

	params.matchState = matchState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.DebugInitAutomation
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::DebugInitAutomation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.DebugInitAutomation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.InitAutomation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::InitAutomation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.InitAutomation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.StartSpotPerformanceCapturing
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::StartSpotPerformanceCapturing()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.StartSpotPerformanceCapturing"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.OnHealthEmptyCallback
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYHealthComponent*       healthComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Instigator                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APRO_PlayerController_C::OnHealthEmptyCallback(class UYHealthComponent* healthComponent, class AActor* Instigator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.OnHealthEmptyCallback"));

	struct
	{
		class UYHealthComponent*       healthComponent;
		class AActor*                  Instigator;
	} params = {};

	params.healthComponent = healthComponent;
	params.Instigator = Instigator;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.Automation_AddComponentRPCDontCall
// (FUNC_Net, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UClass>    NewComponent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void APRO_PlayerController_C::Automation_AddComponentRPCDontCall(TSoftClassPtr<class UClass> NewComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.Automation_AddComponentRPCDontCall"));

	struct
	{
		TSoftClassPtr<class UClass>    NewComponent;
	} params = {};

	params.NewComponent = NewComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.Automation_AddComponent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UClass>    NewComponent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void APRO_PlayerController_C::Automation_AddComponent(TSoftClassPtr<class UClass> NewComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.Automation_AddComponent"));

	struct
	{
		TSoftClassPtr<class UClass>    NewComponent;
	} params = {};

	params.NewComponent = NewComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.Automation_Teleport
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 NewLocaiton                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APRO_PlayerController_C::Automation_Teleport(const struct FVector& NewLocaiton)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.Automation_Teleport"));

	struct
	{
		struct FVector                 NewLocaiton;
	} params = {};

	params.NewLocaiton = NewLocaiton;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void APRO_PlayerController_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.DebugLeaveMatch
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::DebugLeaveMatch()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.DebugLeaveMatch"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.ServerDebugLeaveMatch
// (FUNC_Net, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::ServerDebugLeaveMatch()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.ServerDebugLeaveMatch"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.BndEvt__m_controllerReplicationComponent_K2Node_ComponentBoundEvent_0_OnAnyPlayerTeleportedDBNO__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FYTeleportData          teleportData                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void APRO_PlayerController_C::BndEvt__m_controllerReplicationComponent_K2Node_ComponentBoundEvent_0_OnAnyPlayerTeleportedDBNO__DelegateSignature(const struct FYTeleportData& teleportData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.BndEvt__m_controllerReplicationComponent_K2Node_ComponentBoundEvent_0_OnAnyPlayerTeleportedDBNO__DelegateSignature"));

	struct
	{
		struct FYTeleportData          teleportData;
	} params = {};

	params.teleportData = teleportData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.ToggleHud
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::ToggleHud()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.ToggleHud"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.BP_DebugSetMatchPhase
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     newMatchPhaseRowHandle         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// int                            visualVariationIndex           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bForceTransition               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void APRO_PlayerController_C::BP_DebugSetMatchPhase(const struct FDataTableRowHandle& newMatchPhaseRowHandle, int visualVariationIndex, bool bForceTransition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.BP_DebugSetMatchPhase"));

	struct
	{
		struct FDataTableRowHandle     newMatchPhaseRowHandle;
		int                            visualVariationIndex;
		bool                           bForceTransition;
	} params = {};

	params.newMatchPhaseRowHandle = newMatchPhaseRowHandle;
	params.visualVariationIndex = visualVariationIndex;
	params.bForceTransition = bForceTransition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.ServerDebugSetMatchPhase
// (FUNC_Net, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     MatchPhaseDefinitionRowHandle  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// int                            visualVariationIndex           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ForceTransition                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void APRO_PlayerController_C::ServerDebugSetMatchPhase(const struct FDataTableRowHandle& MatchPhaseDefinitionRowHandle, int visualVariationIndex, bool ForceTransition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.ServerDebugSetMatchPhase"));

	struct
	{
		struct FDataTableRowHandle     MatchPhaseDefinitionRowHandle;
		int                            visualVariationIndex;
		bool                           ForceTransition;
	} params = {};

	params.MatchPhaseDefinitionRowHandle = MatchPhaseDefinitionRowHandle;
	params.visualVariationIndex = visualVariationIndex;
	params.ForceTransition = ForceTransition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.PressedCallEvac
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::PressedCallEvac()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.PressedCallEvac"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.NextMatchPhase
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ForceTransition                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void APRO_PlayerController_C::NextMatchPhase(bool ForceTransition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.NextMatchPhase"));

	struct
	{
		bool                           ForceTransition;
	} params = {};

	params.ForceTransition = ForceTransition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.OnInterruptionStateChangedCallback
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYInterruptionCause            interruptionCause              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           newState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void APRO_PlayerController_C::OnInterruptionStateChangedCallback(EYInterruptionCause interruptionCause, bool newState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.OnInterruptionStateChangedCallback"));

	struct
	{
		EYInterruptionCause            interruptionCause;
		bool                           newState;
	} params = {};

	params.interruptionCause = interruptionCause;
	params.newState = newState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.OnInterruptionClearedCallback
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::OnInterruptionClearedCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.OnInterruptionClearedCallback"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.ExecuteUbergraph_PRO_PlayerController
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APRO_PlayerController_C::ExecuteUbergraph_PRO_PlayerController(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.ExecuteUbergraph_PRO_PlayerController"));

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


// Function PRO_PlayerController.PRO_PlayerController_C.OnAutomationComponentCreated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_C::OnAutomationComponentCreated__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.OnAutomationComponentCreated__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.CallEvacPressed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APRO_PlayerController_C* Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APRO_PlayerController_C::CallEvacPressed__DelegateSignature(class APRO_PlayerController_C* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.CallEvacPressed__DelegateSignature"));

	struct
	{
		class APRO_PlayerController_C* Player;
	} params = {};

	params.Player = Player;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerController.PRO_PlayerController_C.OnHasZeal__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           HasZeal                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void APRO_PlayerController_C::OnHasZeal__DelegateSignature(bool HasZeal)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerController.PRO_PlayerController_C.OnHasZeal__DelegateSignature"));

	struct
	{
		bool                           HasZeal;
	} params = {};

	params.HasZeal = HasZeal;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
