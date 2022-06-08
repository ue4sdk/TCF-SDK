// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FX_soundTrapBirds01_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.OnRep_isPaused
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFX_SoundTrapBirds01_BP_C::OnRep_isPaused()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.OnRep_isPaused"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.LoS_Check
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           hasLoS                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AFX_SoundTrapBirds01_BP_C::LoS_Check(class AActor* OtherActor, bool* hasLoS)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.LoS_Check"));

	struct
	{
		class AActor*                  OtherActor;
		bool                           hasLoS;
	} params = {};

	params.OtherActor = OtherActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (hasLoS != nullptr)
		*hasLoS = params.hasLoS;
}


// Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.markActivityAsDepleted
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFX_SoundTrapBirds01_BP_C::markActivityAsDepleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.markActivityAsDepleted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.setBirdsToDie
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFX_SoundTrapBirds01_BP_C::setBirdsToDie()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.setBirdsToDie"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.calculatedAngleAwayFromActor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFX_SoundTrapBirds01_BP_C::calculatedAngleAwayFromActor(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.calculatedAngleAwayFromActor"));

	struct
	{
		class AActor*                  Actor;
	} params = {};

	params.Actor = Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.setDissipationValues
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFX_SoundTrapBirds01_BP_C::setDissipationValues()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.setDissipationValues"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.getDirectionAwayFromActor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  AwayFromThisActor              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FQuat                   AwayFacingQuaternion           (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor)

void AFX_SoundTrapBirds01_BP_C::getDirectionAwayFromActor(class AActor* AwayFromThisActor, struct FQuat* AwayFacingQuaternion)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.getDirectionAwayFromActor"));

	struct
	{
		class AActor*                  AwayFromThisActor;
		struct FQuat                   AwayFacingQuaternion;
	} params = {};

	params.AwayFromThisActor = AwayFromThisActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AwayFacingQuaternion != nullptr)
		*AwayFacingQuaternion = params.AwayFacingQuaternion;
}


// Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.setBirdsState_ShotAt
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UNiagaraComponent*       NiagaraBirds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  ActorThatShot                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFX_SoundTrapBirds01_BP_C::setBirdsState_ShotAt(class UNiagaraComponent* NiagaraBirds, class AActor* ActorThatShot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.setBirdsState_ShotAt"));

	struct
	{
		class UNiagaraComponent*       NiagaraBirds;
		class AActor*                  ActorThatShot;
	} params = {};

	params.NiagaraBirds = NiagaraBirds;
	params.ActorThatShot = ActorThatShot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.setBirdsState_Liftoff
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UNiagaraComponent*       NiagaraBirds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFX_SoundTrapBirds01_BP_C::setBirdsState_Liftoff(class UNiagaraComponent* NiagaraBirds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.setBirdsState_Liftoff"));

	struct
	{
		class UNiagaraComponent*       NiagaraBirds;
	} params = {};

	params.NiagaraBirds = NiagaraBirds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.setBirdsState_Unstartled
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UNiagaraComponent*       NiagaraBirds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFX_SoundTrapBirds01_BP_C::setBirdsState_Unstartled(class UNiagaraComponent* NiagaraBirds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.setBirdsState_Unstartled"));

	struct
	{
		class UNiagaraComponent*       NiagaraBirds;
	} params = {};

	params.NiagaraBirds = NiagaraBirds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.setBirdsState_Startled
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UNiagaraComponent*       NiagaraBirds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FQuat                   LookAtRotation                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)

void AFX_SoundTrapBirds01_BP_C::setBirdsState_Startled(class UNiagaraComponent* NiagaraBirds, const struct FQuat& LookAtRotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.setBirdsState_Startled"));

	struct
	{
		class UNiagaraComponent*       NiagaraBirds;
		struct FQuat                   LookAtRotation;
	} params = {};

	params.NiagaraBirds = NiagaraBirds;
	params.LookAtRotation = LookAtRotation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.setBirdsFlightData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UNiagaraComponent*       NiagaraBirds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Destination                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFX_SoundTrapBirds01_BP_C::setBirdsFlightData(class UNiagaraComponent* NiagaraBirds, const struct FVector& Destination)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.setBirdsFlightData"));

	struct
	{
		class UNiagaraComponent*       NiagaraBirds;
		struct FVector                 Destination;
	} params = {};

	params.NiagaraBirds = NiagaraBirds;
	params.Destination = Destination;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.updateAudioPosition
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFX_SoundTrapBirds01_BP_C::updateAudioPosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.updateAudioPosition"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.updatePosition
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFX_SoundTrapBirds01_BP_C::updatePosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.updatePosition"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AFX_SoundTrapBirds01_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.CustomEvent_3
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void AFX_SoundTrapBirds01_BP_C::CustomEvent_3(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.CustomEvent_3"));

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


// Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.nextCirclingWaypoint
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFX_SoundTrapBirds01_BP_C::nextCirclingWaypoint()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.nextCirclingWaypoint"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.ReTriggerIdle
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFX_SoundTrapBirds01_BP_C::ReTriggerIdle()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.ReTriggerIdle"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.Birds_ShotAt
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFX_SoundTrapBirds01_BP_C::Birds_ShotAt()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.Birds_ShotAt"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.Birds_Startled
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFX_SoundTrapBirds01_BP_C::Birds_Startled()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.Birds_Startled"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.Birds_Unstartled
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFX_SoundTrapBirds01_BP_C::Birds_Unstartled()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.Birds_Unstartled"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.Birds_FlyAway
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFX_SoundTrapBirds01_BP_C::Birds_FlyAway()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.Birds_FlyAway"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.CheckForPlayersInFlyAwayRange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFX_SoundTrapBirds01_BP_C::CheckForPlayersInFlyAwayRange()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.CheckForPlayersInFlyAwayRange"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.GetCharactersInRange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFX_SoundTrapBirds01_BP_C::GetCharactersInRange()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.GetCharactersInRange"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.CheckForPlayersInStartleRange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFX_SoundTrapBirds01_BP_C::CheckForPlayersInStartleRange()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.CheckForPlayersInStartleRange"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.ExecuteUbergraph_FX_SoundTrapBirds01_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFX_SoundTrapBirds01_BP_C::ExecuteUbergraph_FX_SoundTrapBirds01_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FX_soundTrapBirds01_BP.FX_SoundTrapBirds01_BP_C.ExecuteUbergraph_FX_SoundTrapBirds01_BP"));

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
