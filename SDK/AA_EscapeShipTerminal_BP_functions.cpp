// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AA_EscapeShipTerminal_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.SendBIData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYEscapeBIHookStep             step                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  playerContext                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_EscapeShipTerminal_BP_C::SendBIData(EYEscapeBIHookStep step, class AActor* playerContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.SendBIData"));

	struct
	{
		EYEscapeBIHookStep             step;
		class AActor*                  playerContext;
	} params = {};

	params.step = step;
	params.playerContext = playerContext;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnRep_isEvacActive
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_EscapeShipTerminal_BP_C::OnRep_isEvacActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnRep_isEvacActive"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.GetShipLandingTransformLocal
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FTransform              Result                         (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_EscapeShipTerminal_BP_C::GetShipLandingTransformLocal(struct FTransform* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.GetShipLandingTransformLocal"));

	struct
	{
		struct FTransform              Result;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.GetShipLandingTransformWorld
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              Result                         (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_EscapeShipTerminal_BP_C::GetShipLandingTransformWorld(struct FTransform* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.GetShipLandingTransformWorld"));

	struct
	{
		struct FTransform              Result;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.CanUpdateBeaconPlayerProximity
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           CanUpdate                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_EscapeShipTerminal_BP_C::CanUpdateBeaconPlayerProximity(bool* CanUpdate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.CanUpdateBeaconPlayerProximity"));

	struct
	{
		bool                           CanUpdate;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CanUpdate != nullptr)
		*CanUpdate = params.CanUpdate;
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.UpdatePlayerAmountInProximity
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            AmountOfPlayersInProximity     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_EscapeShipTerminal_BP_C::UpdatePlayerAmountInProximity(int* AmountOfPlayersInProximity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.UpdatePlayerAmountInProximity"));

	struct
	{
		int                            AmountOfPlayersInProximity;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AmountOfPlayersInProximity != nullptr)
		*AmountOfPlayersInProximity = params.AmountOfPlayersInProximity;
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnRep_PlayersInProximityInt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_EscapeShipTerminal_BP_C::OnRep_PlayersInProximityInt()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnRep_PlayersInProximityInt"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnRep_BeaconMeshes
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_EscapeShipTerminal_BP_C::OnRep_BeaconMeshes()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnRep_BeaconMeshes"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnRep_EvacShip
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_EscapeShipTerminal_BP_C::OnRep_EvacShip()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnRep_EvacShip"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.UpdateBeaconActors
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_EscapeShipTerminal_BP_C::UpdateBeaconActors()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.UpdateBeaconActors"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.GetBeaconMeshes
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_EscapeShipTerminal_BP_C::GetBeaconMeshes()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.GetBeaconMeshes"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.InitBeaconSettings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_EscapeShipTerminal_BP_C::InitBeaconSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.InitBeaconSettings"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.DetermineShipID
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 BIActorID                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void AAA_EscapeShipTerminal_BP_C::DetermineShipID(struct FString* BIActorID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.DetermineShipID"));

	struct
	{
		struct FString                 BIActorID;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (BIActorID != nullptr)
		*BIActorID = params.BIActorID;
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.isLocalPlayerRegisteredToThisTerminal
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           isRegistered                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_EscapeShipTerminal_BP_C::isLocalPlayerRegisteredToThisTerminal(bool* isRegistered)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.isLocalPlayerRegisteredToThisTerminal"));

	struct
	{
		bool                           isRegistered;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (isRegistered != nullptr)
		*isRegistered = params.isRegistered;
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.SpawnEvacShip
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AAC_EvacShip_BP_C*       SpawnedEscapeActor             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_EscapeShipTerminal_BP_C::SpawnEvacShip(class AAC_EvacShip_BP_C** SpawnedEscapeActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.SpawnEvacShip"));

	struct
	{
		class AAC_EvacShip_BP_C*       SpawnedEscapeActor;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SpawnedEscapeActor != nullptr)
		*SpawnedEscapeActor = params.SpawnedEscapeActor;
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnRep_EscapeShipTerminal_State
// (FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_EscapeShipTerminal_BP_C::OnRep_EscapeShipTerminal_State()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnRep_EscapeShipTerminal_State"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.BeaconFlash-TL__FinishedFunc
// (FUNC_BlueprintEvent)

void AAA_EscapeShipTerminal_BP_C::BeaconFlash_TL__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.BeaconFlash-TL__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.BeaconFlash-TL__UpdateFunc
// (FUNC_BlueprintEvent)

void AAA_EscapeShipTerminal_BP_C::BeaconFlash_TL__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.BeaconFlash-TL__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.FogAnimation__FinishedFunc
// (FUNC_BlueprintEvent)

void AAA_EscapeShipTerminal_BP_C::FogAnimation__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.FogAnimation__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.FogAnimation__UpdateFunc
// (FUNC_BlueprintEvent)

void AAA_EscapeShipTerminal_BP_C::FogAnimation__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.FogAnimation__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnNotifyEnd_2DDB424B48BCCF1BC1F4968E9490C6E7
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_EscapeShipTerminal_BP_C::OnNotifyEnd_2DDB424B48BCCF1BC1F4968E9490C6E7(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnNotifyEnd_2DDB424B48BCCF1BC1F4968E9490C6E7"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnNotifyBegin_2DDB424B48BCCF1BC1F4968E9490C6E7
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_EscapeShipTerminal_BP_C::OnNotifyBegin_2DDB424B48BCCF1BC1F4968E9490C6E7(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnNotifyBegin_2DDB424B48BCCF1BC1F4968E9490C6E7"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnInterrupted_2DDB424B48BCCF1BC1F4968E9490C6E7
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_EscapeShipTerminal_BP_C::OnInterrupted_2DDB424B48BCCF1BC1F4968E9490C6E7(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnInterrupted_2DDB424B48BCCF1BC1F4968E9490C6E7"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnBlendOut_2DDB424B48BCCF1BC1F4968E9490C6E7
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_EscapeShipTerminal_BP_C::OnBlendOut_2DDB424B48BCCF1BC1F4968E9490C6E7(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnBlendOut_2DDB424B48BCCF1BC1F4968E9490C6E7"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnCompleted_2DDB424B48BCCF1BC1F4968E9490C6E7
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_EscapeShipTerminal_BP_C::OnCompleted_2DDB424B48BCCF1BC1F4968E9490C6E7(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnCompleted_2DDB424B48BCCF1BC1F4968E9490C6E7"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnNotifyEnd_2E15C4E14D9168F9EA7277B6AD0EC9BA
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_EscapeShipTerminal_BP_C::OnNotifyEnd_2E15C4E14D9168F9EA7277B6AD0EC9BA(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnNotifyEnd_2E15C4E14D9168F9EA7277B6AD0EC9BA"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnNotifyBegin_2E15C4E14D9168F9EA7277B6AD0EC9BA
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_EscapeShipTerminal_BP_C::OnNotifyBegin_2E15C4E14D9168F9EA7277B6AD0EC9BA(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnNotifyBegin_2E15C4E14D9168F9EA7277B6AD0EC9BA"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnInterrupted_2E15C4E14D9168F9EA7277B6AD0EC9BA
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_EscapeShipTerminal_BP_C::OnInterrupted_2E15C4E14D9168F9EA7277B6AD0EC9BA(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnInterrupted_2E15C4E14D9168F9EA7277B6AD0EC9BA"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnBlendOut_2E15C4E14D9168F9EA7277B6AD0EC9BA
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_EscapeShipTerminal_BP_C::OnBlendOut_2E15C4E14D9168F9EA7277B6AD0EC9BA(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnBlendOut_2E15C4E14D9168F9EA7277B6AD0EC9BA"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnCompleted_2E15C4E14D9168F9EA7277B6AD0EC9BA
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_EscapeShipTerminal_BP_C::OnCompleted_2E15C4E14D9168F9EA7277B6AD0EC9BA(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnCompleted_2E15C4E14D9168F9EA7277B6AD0EC9BA"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnEscapeShipStateChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EAC_EscapeShip_State> EscapeShipState                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_EscapeShipTerminal_BP_C::OnEscapeShipStateChange(TEnumAsByte<EAC_EscapeShip_State> EscapeShipState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnEscapeShipStateChange"));

	struct
	{
		TEnumAsByte<EAC_EscapeShip_State> EscapeShipState;
	} params = {};

	params.EscapeShipState = EscapeShipState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.SFX_PlayShipArriving
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_EscapeShipTerminal_BP_C::SFX_PlayShipArriving()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.SFX_PlayShipArriving"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.SFX_PlayShipAlarm
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_EscapeShipTerminal_BP_C::SFX_PlayShipAlarm()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.SFX_PlayShipAlarm"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.FadeInAudioLoop
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_EscapeShipTerminal_BP_C::FadeInAudioLoop()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.FadeInAudioLoop"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.PlayEvacMusic
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_EscapeShipTerminal_BP_C::PlayEvacMusic()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.PlayEvacMusic"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.PlayMusicOnSpecificPlayer
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_EscapeShipTerminal_BP_C::PlayMusicOnSpecificPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.PlayMusicOnSpecificPlayer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnPlayersNearby
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_EscapeShipTerminal_BP_C::OnPlayersNearby()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnPlayersNearby"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnPlayersNotNearby
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_EscapeShipTerminal_BP_C::OnPlayersNotNearby()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnPlayersNotNearby"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnMainAntennaUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_EscapeShipTerminal_BP_C::OnMainAntennaUpdate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnMainAntennaUpdate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnEvacDisabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_EscapeShipTerminal_BP_C::OnEvacDisabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnEvacDisabled"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnEvacEnabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_EscapeShipTerminal_BP_C::OnEvacEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnEvacEnabled"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.VFX_FogCloud
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_EscapeShipTerminal_BP_C::VFX_FogCloud()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.VFX_FogCloud"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_0_OnPlayerInteractionCompleted__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// EYInteractionType              interactionType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AYPlayerController_Match* interactingPlayer              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_EscapeShipTerminal_BP_C::BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_0_OnPlayerInteractionCompleted__DelegateSignature(EYInteractionType interactionType, class AYPlayerController_Match* interactingPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_0_OnPlayerInteractionCompleted__DelegateSignature"));

	struct
	{
		EYInteractionType              interactionType;
		class AYPlayerController_Match* interactingPlayer;
	} params = {};

	params.interactionType = interactionType;
	params.interactingPlayer = interactingPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAA_EscapeShipTerminal_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.DisableTerminal
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_EscapeShipTerminal_BP_C::DisableTerminal()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.DisableTerminal"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.EnableTerminal
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_EscapeShipTerminal_BP_C::EnableTerminal()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.EnableTerminal"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnEvacShipLeaving
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_EscapeShipTerminal_BP_C::OnEvacShipLeaving()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnEvacShipLeaving"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.EvacAvailable
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_EscapeShipTerminal_BP_C::EvacAvailable()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.EvacAvailable"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.RegisterNewPlayerToTerminal
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerController*      Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_EscapeShipTerminal_BP_C::RegisterNewPlayerToTerminal(class AYPlayerController* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.RegisterNewPlayerToTerminal"));

	struct
	{
		class AYPlayerController*      Player;
	} params = {};

	params.Player = Player;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.CheckRegistreesForValidity
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_EscapeShipTerminal_BP_C::CheckRegistreesForValidity()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.CheckRegistreesForValidity"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.PlayDepartureAlarmOnTerminal_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_EscapeShipTerminal_BP_C::PlayDepartureAlarmOnTerminal_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.PlayDepartureAlarmOnTerminal_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.CallEvacPressed_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APRO_PlayerController_C* Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_EscapeShipTerminal_BP_C::CallEvacPressed_Event_1(class APRO_PlayerController_C* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.CallEvacPressed_Event_1"));

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


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.ChangePromptVisibility
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerController*      PlayerCTRL                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           showPrompt                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           isShipArriving                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           isEvacActive                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TEnumAsByte<EAC_EscapeShip_State> EvacShipState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AAC_EvacShip_BP_C*       EvacShip                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_EscapeShipTerminal_BP_C::ChangePromptVisibility(class AYPlayerController* PlayerCTRL, bool showPrompt, bool isShipArriving, bool isEvacActive, TEnumAsByte<EAC_EscapeShip_State> EvacShipState, class AAC_EvacShip_BP_C* EvacShip)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.ChangePromptVisibility"));

	struct
	{
		class AYPlayerController*      PlayerCTRL;
		bool                           showPrompt;
		bool                           isShipArriving;
		bool                           isEvacActive;
		TEnumAsByte<EAC_EscapeShip_State> EvacShipState;
		class AAC_EvacShip_BP_C*       EvacShip;
	} params = {};

	params.PlayerCTRL = PlayerCTRL;
	params.showPrompt = showPrompt;
	params.isShipArriving = isShipArriving;
	params.isEvacActive = isEvacActive;
	params.EvacShipState = EvacShipState;
	params.EvacShip = EvacShip;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.RefreshPromptVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_EscapeShipTerminal_BP_C::RefreshPromptVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.RefreshPromptVisibility"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnShipLanded_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_EscapeShipTerminal_BP_C::OnShipLanded_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnShipLanded_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnReplicatedMatchPhaseDataUpdated_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseData        newMatchPhaseData              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void AAA_EscapeShipTerminal_BP_C::OnReplicatedMatchPhaseDataUpdated_Event_1(const struct FYMatchPhaseData& newMatchPhaseData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnReplicatedMatchPhaseDataUpdated_Event_1"));

	struct
	{
		struct FYMatchPhaseData        newMatchPhaseData;
	} params = {};

	params.newMatchPhaseData = newMatchPhaseData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.PlayInteractionAnim
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_EscapeShipTerminal_BP_C::PlayInteractionAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.PlayInteractionAnim"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.SwitchToEvacCam
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerController*      EscapingPlayerCTRL             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_EscapeShipTerminal_BP_C::SwitchToEvacCam(class AYPlayerController* EscapingPlayerCTRL)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.SwitchToEvacCam"));

	struct
	{
		class AYPlayerController*      EscapingPlayerCTRL;
	} params = {};

	params.EscapingPlayerCTRL = EscapingPlayerCTRL;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.ChangePromptVisibility_NoShip
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerController*      PlayerCTRL                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           showPrompt                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           isShipArriving                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           isEvacActive                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_EscapeShipTerminal_BP_C::ChangePromptVisibility_NoShip(class AYPlayerController* PlayerCTRL, bool showPrompt, bool isShipArriving, bool isEvacActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.ChangePromptVisibility_NoShip"));

	struct
	{
		class AYPlayerController*      PlayerCTRL;
		bool                           showPrompt;
		bool                           isShipArriving;
		bool                           isEvacActive;
	} params = {};

	params.PlayerCTRL = PlayerCTRL;
	params.showPrompt = showPrompt;
	params.isShipArriving = isShipArriving;
	params.isEvacActive = isEvacActive;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.ExecuteUbergraph_AA_EscapeShipTerminal_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_EscapeShipTerminal_BP_C::ExecuteUbergraph_AA_EscapeShipTerminal_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.ExecuteUbergraph_AA_EscapeShipTerminal_BP"));

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


// Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnTerminalActivated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_EscapeShipTerminal_BP_C::OnTerminalActivated__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C.OnTerminalActivated__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
