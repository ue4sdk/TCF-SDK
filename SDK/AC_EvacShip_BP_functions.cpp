// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AC_EvacShip_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AC_EvacShip_BP.AC_EvacShip_BP_C.GetDrawDebugLineColor
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCoreUObject_FColor     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FCoreUObject_FColor AAC_EvacShip_BP_C::GetDrawDebugLineColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.GetDrawDebugLineColor"));

	struct
	{
		struct FCoreUObject_FColor     ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.GetDrawDebugLineTo
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector AAC_EvacShip_BP_C::GetDrawDebugLineTo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.GetDrawDebugLineTo"));

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


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.GetDebugDescription
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash)

struct FString AAC_EvacShip_BP_C::GetDebugDescription()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.GetDebugDescription"));

	struct
	{
		struct FString                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.ThrusterGroundTraceVFX
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::ThrusterGroundTraceVFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.ThrusterGroundTraceVFX"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.GetGroundWindEmitterFromLocation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::GetGroundWindEmitterFromLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.GetGroundWindEmitterFromLocation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.SetupNiagaraThrusterArray
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::SetupNiagaraThrusterArray()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.SetupNiagaraThrusterArray"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.OnRep_CoverID
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::OnRep_CoverID()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.OnRep_CoverID"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.SelectCoverMeshID
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

int AAC_EvacShip_BP_C::SelectCoverMeshID()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.SelectCoverMeshID"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.SelectDangerousRamps
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<class UPrimitiveComponent*> DangerousRamps                 (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)

void AAC_EvacShip_BP_C::SelectDangerousRamps(TArray<class UPrimitiveComponent*>* DangerousRamps)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.SelectDangerousRamps"));

	struct
	{
		TArray<class UPrimitiveComponent*> DangerousRamps;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (DangerousRamps != nullptr)
		*DangerousRamps = params.DangerousRamps;
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.DoorAnimationSetup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::DoorAnimationSetup()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.DoorAnimationSetup"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.UpdateCollisionSettings
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::UpdateCollisionSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.UpdateCollisionSettings"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.SetShipState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EAC_EscapeShip_State> EvacShipState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_EvacShip_BP_C::SetShipState(TEnumAsByte<EAC_EscapeShip_State> EvacShipState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.SetShipState"));

	struct
	{
		TEnumAsByte<EAC_EscapeShip_State> EvacShipState;
	} params = {};

	params.EvacShipState = EvacShipState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.GetCollisionDebugString
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash)

struct FString AAC_EvacShip_BP_C::GetCollisionDebugString(class UPrimitiveComponent* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.GetCollisionDebugString"));

	struct
	{
		class UPrimitiveComponent*     Target;
		struct FString                 ReturnValue;
	} params = {};

	params.Target = Target;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.InitVariables
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::InitVariables()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.InitVariables"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.StopClientEscapeProgress
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::StopClientEscapeProgress()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.StopClientEscapeProgress"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.StartClientEscapeProgress
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::StartClientEscapeProgress()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.StartClientEscapeProgress"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.UpdatePlayersEscapeTimeLeft
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class AYPlayerCharacter*> EscapingPlayers                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void AAC_EvacShip_BP_C::UpdatePlayersEscapeTimeLeft(TArray<class AYPlayerCharacter*>* EscapingPlayers)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.UpdatePlayersEscapeTimeLeft"));

	struct
	{
		TArray<class AYPlayerCharacter*> EscapingPlayers;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (EscapingPlayers != nullptr)
		*EscapingPlayers = params.EscapingPlayers;
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.FindEscapingPlayer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AYPlayerCharacter*       EscapingPlayer                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_EvacShip_BP_C::FindEscapingPlayer(class UObject* Object, class AYPlayerCharacter** EscapingPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.FindEscapingPlayer"));

	struct
	{
		class UObject*                 Object;
		class AYPlayerCharacter*       EscapingPlayer;
	} params = {};

	params.Object = Object;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (EscapingPlayer != nullptr)
		*EscapingPlayer = params.EscapingPlayer;
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.PlayerEscapes
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerState*           PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_EvacShip_BP_C::PlayerEscapes(class AYPlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.PlayerEscapes"));

	struct
	{
		class AYPlayerState*           PlayerState;
	} params = {};

	params.PlayerState = PlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.OnRep_EvacShipState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::OnRep_EvacShipState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.OnRep_EvacShipState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.DropShipFlight_TL__FinishedFunc
// (FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::DropShipFlight_TL__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.DropShipFlight_TL__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.DropShipFlight_TL__UpdateFunc
// (FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::DropShipFlight_TL__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.DropShipFlight_TL__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.DropShipTakeOff_TL__FinishedFunc
// (FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::DropShipTakeOff_TL__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.DropShipTakeOff_TL__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.DropShipTakeOff_TL__UpdateFunc
// (FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::DropShipTakeOff_TL__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.DropShipTakeOff_TL__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.DropShipTakeOff_TL__DepartureWindVFX__EventFunc
// (FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::DropShipTakeOff_TL__DepartureWindVFX__EventFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.DropShipTakeOff_TL__DepartureWindVFX__EventFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.DepartureAlarm_TL__FinishedFunc
// (FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::DepartureAlarm_TL__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.DepartureAlarm_TL__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.DepartureAlarm_TL__UpdateFunc
// (FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::DepartureAlarm_TL__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.DepartureAlarm_TL__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.DropShipLanding_TL__FinishedFunc
// (FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::DropShipLanding_TL__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.DropShipLanding_TL__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.DropShipLanding_TL__UpdateFunc
// (FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::DropShipLanding_TL__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.DropShipLanding_TL__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.DropShipLanding_TL__ActivateGroundWindVFX__EventFunc
// (FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::DropShipLanding_TL__ActivateGroundWindVFX__EventFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.DropShipLanding_TL__ActivateGroundWindVFX__EventFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.PlayArrivingAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::PlayArrivingAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.PlayArrivingAnim"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.PlayDepartingAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::PlayDepartingAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.PlayDepartingAnim"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.PlayDepartureAlarm
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::PlayDepartureAlarm()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.PlayDepartureAlarm"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.SetStateToLeaving
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::SetStateToLeaving()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.SetStateToLeaving"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.SetStateToLanded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::SetStateToLanded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.SetStateToLanded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.BndEvt__EscapeCollision_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void AAC_EvacShip_BP_C::BndEvt__EscapeCollision_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.BndEvt__EscapeCollision_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature"));

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
		bool                           bFromSweep;
		struct FHitResult              SweepResult;
	} params = {};

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.BndEvt__EscapeCollision_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_EvacShip_BP_C::BndEvt__EscapeCollision_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.BndEvt__EscapeCollision_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature"));

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
	} params = {};

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.PlayerEscapeUpdater
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::PlayerEscapeUpdater()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.PlayerEscapeUpdater"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.SetShipToLanding
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::SetShipToLanding()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.SetShipToLanding"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.PlayLandingAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::PlayLandingAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.PlayLandingAnim"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.InitiateDestruction
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::InitiateDestruction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.InitiateDestruction"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.EnableEscapeCollision
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::EnableEscapeCollision()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.EnableEscapeCollision"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.StopDepartureAlarm
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::StopDepartureAlarm()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.StopDepartureAlarm"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.SetStateToArriving
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::SetStateToArriving()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.SetStateToArriving"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.SetStateToPreparingTakeOff
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::SetStateToPreparingTakeOff()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.SetStateToPreparingTakeOff"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.DisableEscapeCollision
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::DisableEscapeCollision()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.DisableEscapeCollision"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_EvacShip_BP_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.FadeOutAndHideShip
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::FadeOutAndHideShip()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.FadeOutAndHideShip"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.EnableEscapePromptCollision
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::EnableEscapePromptCollision()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.EnableEscapePromptCollision"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.DisableEscapePromptCollision
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::DisableEscapePromptCollision()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.DisableEscapePromptCollision"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.BndEvt__AC_EvacShip_BP_EscapePromptCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void AAC_EvacShip_BP_C::BndEvt__AC_EvacShip_BP_EscapePromptCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.BndEvt__AC_EvacShip_BP_EscapePromptCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
		bool                           bFromSweep;
		struct FHitResult              SweepResult;
	} params = {};

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.BndEvt__AC_EvacShip_BP_EscapePromptCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_EvacShip_BP_C::BndEvt__AC_EvacShip_BP_EscapePromptCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.BndEvt__AC_EvacShip_BP_EscapePromptCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"));

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
	} params = {};

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.TryPlayFTUE
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::TryPlayFTUE()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.TryPlayFTUE"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.BndEvt__AC_EvacShip_BP_KillCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void AAC_EvacShip_BP_C::BndEvt__AC_EvacShip_BP_KillCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.BndEvt__AC_EvacShip_BP_KillCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature"));

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
		bool                           bFromSweep;
		struct FHitResult              SweepResult;
	} params = {};

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.AttractAIs
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::AttractAIs()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.AttractAIs"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.DoRadialDamage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::DoRadialDamage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.DoRadialDamage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.BndEvt__AC_EvacShip_BP_YObjectInteraction_K2Node_ComponentBoundEvent_5_OnPlayerInteractionCompleted__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// EYInteractionType              interactionType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AYPlayerController_Match* interactingPlayer              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_EvacShip_BP_C::BndEvt__AC_EvacShip_BP_YObjectInteraction_K2Node_ComponentBoundEvent_5_OnPlayerInteractionCompleted__DelegateSignature(EYInteractionType interactionType, class AYPlayerController_Match* interactingPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.BndEvt__AC_EvacShip_BP_YObjectInteraction_K2Node_ComponentBoundEvent_5_OnPlayerInteractionCompleted__DelegateSignature"));

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


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.FinishedToLandingBlendEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::FinishedToLandingBlendEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.FinishedToLandingBlendEvent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.BndEvt__AC_EvacShip_BP_EscapeCollision1_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void AAC_EvacShip_BP_C::BndEvt__AC_EvacShip_BP_EscapeCollision1_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.BndEvt__AC_EvacShip_BP_EscapeCollision1_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature"));

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
		bool                           bFromSweep;
		struct FHitResult              SweepResult;
	} params = {};

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.BndEvt__AC_EvacShip_BP_EscapeCollision1_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_EvacShip_BP_C::BndEvt__AC_EvacShip_BP_EscapeCollision1_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.BndEvt__AC_EvacShip_BP_EscapeCollision1_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature"));

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
	} params = {};

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.BndEvt__AC_EvacShip_BP_KillCollision_RampB_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void AAC_EvacShip_BP_C::BndEvt__AC_EvacShip_BP_KillCollision_RampB_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.BndEvt__AC_EvacShip_BP_KillCollision_RampB_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature"));

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
		bool                           bFromSweep;
		struct FHitResult              SweepResult;
	} params = {};

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.BndEvt__AC_EvacShip_BP_KillCollision_RampF_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void AAC_EvacShip_BP_C::BndEvt__AC_EvacShip_BP_KillCollision_RampF_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.BndEvt__AC_EvacShip_BP_KillCollision_RampF_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature"));

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
		bool                           bFromSweep;
		struct FHitResult              SweepResult;
	} params = {};

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.SquishPlayers
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 OverlappedObject               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           SquishedByDoors                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAC_EvacShip_BP_C::SquishPlayers(class UObject* OverlappedObject, bool SquishedByDoors)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.SquishPlayers"));

	struct
	{
		class UObject*                 OverlappedObject;
		bool                           SquishedByDoors;
	} params = {};

	params.OverlappedObject = OverlappedObject;
	params.SquishedByDoors = SquishedByDoors;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.RampCrushPlayers
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UPrimitiveComponent*> RampKillCollision              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void AAC_EvacShip_BP_C::RampCrushPlayers(TArray<class UPrimitiveComponent*> RampKillCollision)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.RampCrushPlayers"));

	struct
	{
		TArray<class UPrimitiveComponent*> RampKillCollision;
	} params = {};

	params.RampKillCollision = RampKillCollision;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.ActivateWindVFX
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::ActivateWindVFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.ActivateWindVFX"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.DeactivateWindVFX
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::DeactivateWindVFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.DeactivateWindVFX"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.InitiateWindVFX
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::InitiateWindVFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.InitiateWindVFX"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.CalculateRemainingDepartureTime
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::CalculateRemainingDepartureTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.CalculateRemainingDepartureTime"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.ExecuteUbergraph_AC_EvacShip_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_EvacShip_BP_C::ExecuteUbergraph_AC_EvacShip_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.ExecuteUbergraph_AC_EvacShip_BP"));

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


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.OnStateChange__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EAC_EscapeShip_State> EscapeShipState                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_EvacShip_BP_C::OnStateChange__DelegateSignature(TEnumAsByte<EAC_EscapeShip_State> EscapeShipState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.OnStateChange__DelegateSignature"));

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


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.OnShipLanded__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::OnShipLanded__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.OnShipLanded__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.PlayDepartureAlarmOnTerminal__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::PlayDepartureAlarmOnTerminal__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.PlayDepartureAlarmOnTerminal__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.OnShipLeaving__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::OnShipLeaving__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_EvacShip_BP.AC_EvacShip_BP_C.OnShipLeaving__DelegateSignature"));

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
