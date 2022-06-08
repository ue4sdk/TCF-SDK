// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PRO_PlayerCharacter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.GetCustomImpactEffectData
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYImpactEffectReceiverData ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FYImpactEffectReceiverData APRO_PlayerCharacter_C::GetCustomImpactEffectData()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.GetCustomImpactEffectData"));

	struct
	{
		struct FYImpactEffectReceiverData ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.GetIgnoreStorm
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IgnoreStorm                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void APRO_PlayerCharacter_C::GetIgnoreStorm(bool* IgnoreStorm)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.GetIgnoreStorm"));

	struct
	{
		bool                           IgnoreStorm;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IgnoreStorm != nullptr)
		*IgnoreStorm = params.IgnoreStorm;
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.SetIgnoreStorm
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IgnoreStorm                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           DidChange                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void APRO_PlayerCharacter_C::SetIgnoreStorm(bool IgnoreStorm, bool* DidChange)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.SetIgnoreStorm"));

	struct
	{
		bool                           IgnoreStorm;
		bool                           DidChange;
	} params = {};

	params.IgnoreStorm = IgnoreStorm;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (DidChange != nullptr)
		*DidChange = params.DidChange;
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.BP_PostInitializeComponents
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerCharacter_C::BP_PostInitializeComponents()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.BP_PostInitializeComponents"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.DebugProduceHitch
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerCharacter_C::DebugProduceHitch()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.DebugProduceHitch"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.GetWeaponFirstPersonMesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UYSkeletalMeshComponentFOV* m_weaponMesh                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APRO_PlayerCharacter_C::GetWeaponFirstPersonMesh(class UYSkeletalMeshComponentFOV** m_weaponMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.GetWeaponFirstPersonMesh"));

	struct
	{
		class UYSkeletalMeshComponentFOV* m_weaponMesh;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (m_weaponMesh != nullptr)
		*m_weaponMesh = params.m_weaponMesh;
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnLeanDirectionChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerCharacter_C::OnLeanDirectionChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnLeanDirectionChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.PlayCameraShakeOnOwningPlayer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UCameraShakeBase*/ Shake                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void APRO_PlayerCharacter_C::PlayCameraShakeOnOwningPlayer(class UClass* /*UCameraShakeBase*/ Shake)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.PlayCameraShakeOnOwningPlayer"));

	struct
	{
		class UClass* /*UCameraShakeBase*/ Shake;
	} params = {};

	params.Shake = Shake;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnRep_IsHOT
// (FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerCharacter_C::OnRep_IsHOT()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnRep_IsHOT"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnRep_IsSlowdown
// (FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerCharacter_C::OnRep_IsSlowdown()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnRep_IsSlowdown"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnRep_IsTagged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerCharacter_C::OnRep_IsTagged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnRep_IsTagged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnRep_IsCloaked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerCharacter_C::OnRep_IsCloaked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnRep_IsCloaked"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.GetAnimBlueprint
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UAnimInstance*           AnimInstance                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APRO_PlayerCharacter_C::GetAnimBlueprint(class UAnimInstance** AnimInstance)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.GetAnimBlueprint"));

	struct
	{
		class UAnimInstance*           AnimInstance;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AnimInstance != nullptr)
		*AnimInstance = params.AnimInstance;
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.SwitchToThirdPerson
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerCharacter_C::SwitchToThirdPerson()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.SwitchToThirdPerson"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.InpActEvt_ToggleNightVision_K2Node_InputActionEvent_1
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void APRO_PlayerCharacter_C::InpActEvt_ToggleNightVision_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.InpActEvt_ToggleNightVision_K2Node_InputActionEvent_1"));

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


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnEndProne
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          HalfHeightAdjust               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ScaledHalfHeightAdjust         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APRO_PlayerCharacter_C::OnEndProne(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnEndProne"));

	struct
	{
		float                          HalfHeightAdjust;
		float                          ScaledHalfHeightAdjust;
	} params = {};

	params.HalfHeightAdjust = HalfHeightAdjust;
	params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnStartProne
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          HalfHeightAdjust               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ScaledHalfHeightAdjust         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APRO_PlayerCharacter_C::OnStartProne(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnStartProne"));

	struct
	{
		float                          HalfHeightAdjust;
		float                          ScaledHalfHeightAdjust;
	} params = {};

	params.HalfHeightAdjust = HalfHeightAdjust;
	params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void APRO_PlayerCharacter_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.Server_EH_Trail
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APRO_PlayerCharacter_C::Server_EH_Trail(float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.Server_EH_Trail"));

	struct
	{
		float                          Duration;
	} params = {};

	params.Duration = Duration;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.Server_EH_Slowdown
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsSticky                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void APRO_PlayerCharacter_C::Server_EH_Slowdown(bool IsSticky)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.Server_EH_Slowdown"));

	struct
	{
		bool                           IsSticky;
	} params = {};

	params.IsSticky = IsSticky;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.Server_EH_HOT
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsInRange                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void APRO_PlayerCharacter_C::Server_EH_HOT(bool IsInRange)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.Server_EH_HOT"));

	struct
	{
		bool                           IsInRange;
	} params = {};

	params.IsInRange = IsInRange;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.CloakStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           cloakState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void APRO_PlayerCharacter_C::CloakStateChanged(bool cloakState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.CloakStateChanged"));

	struct
	{
		bool                           cloakState;
	} params = {};

	params.cloakState = cloakState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.BndEvt__m_deathComponent_K2Node_ComponentBoundEvent_5_OnDeathDelegate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UYCharacterDeathComponent* deathComponent                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APRO_PlayerCharacter_C::BndEvt__m_deathComponent_K2Node_ComponentBoundEvent_5_OnDeathDelegate__DelegateSignature(class UYCharacterDeathComponent* deathComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.BndEvt__m_deathComponent_K2Node_ComponentBoundEvent_5_OnDeathDelegate__DelegateSignature"));

	struct
	{
		class UYCharacterDeathComponent* deathComponent;
	} params = {};

	params.deathComponent = deathComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnPerkAdded
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYPerk                  perk                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void APRO_PlayerCharacter_C::OnPerkAdded(const struct FYPerk& perk)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnPerkAdded"));

	struct
	{
		struct FYPerk                  perk;
	} params = {};

	params.perk = perk;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.HookUpReportingBugVisualization
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerCharacter_C::HookUpReportingBugVisualization()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.HookUpReportingBugVisualization"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnPerkDeactivated
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYPerk                  perk                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void APRO_PlayerCharacter_C::OnPerkDeactivated(const struct FYPerk& perk)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnPerkDeactivated"));

	struct
	{
		struct FYPerk                  perk;
	} params = {};

	params.perk = perk;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.BndEvt__m_damageComponent_K2Node_ComponentBoundEvent_1_YTakeDamageEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void APRO_PlayerCharacter_C::BndEvt__m_damageComponent_K2Node_ComponentBoundEvent_1_YTakeDamageEvent__DelegateSignature(const struct FYDealtDamageData& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.BndEvt__m_damageComponent_K2Node_ComponentBoundEvent_1_YTakeDamageEvent__DelegateSignature"));

	struct
	{
		struct FYDealtDamageData       Data;
	} params = {};

	params.Data = Data;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnFinishedDamage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerCharacter_C::OnFinishedDamage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnFinishedDamage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnVehicleEnter
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerCharacter_C::OnVehicleEnter()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnVehicleEnter"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnVehicleExit
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerCharacter_C::OnVehicleExit()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnVehicleExit"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.BndEvt__m_stateComponent_K2Node_ComponentBoundEvent_8_YAnyStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// EYStateChangeType              stateChangeType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APRO_PlayerCharacter_C::BndEvt__m_stateComponent_K2Node_ComponentBoundEvent_8_YAnyStateChanged__DelegateSignature(EYStateChangeType stateChangeType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.BndEvt__m_stateComponent_K2Node_ComponentBoundEvent_8_YAnyStateChanged__DelegateSignature"));

	struct
	{
		EYStateChangeType              stateChangeType;
	} params = {};

	params.stateChangeType = stateChangeType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.DBNO_Activate_Server
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerCharacter_C::DBNO_Activate_Server()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.DBNO_Activate_Server"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.DBNO_Deactivate_Server
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           interupted                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void APRO_PlayerCharacter_C::DBNO_Deactivate_Server(bool interupted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.DBNO_Deactivate_Server"));

	struct
	{
		bool                           interupted;
	} params = {};

	params.interupted = interupted;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.UpdateControllerYawRotation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerCharacter_C::UpdateControllerYawRotation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.UpdateControllerYawRotation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.BndEvt__m_characterCustomizationComponent_K2Node_ComponentBoundEvent_4_YOnMeshInitialized__DelegateSignature
// (FUNC_BlueprintEvent)

void APRO_PlayerCharacter_C::BndEvt__m_characterCustomizationComponent_K2Node_ComponentBoundEvent_4_YOnMeshInitialized__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.BndEvt__m_characterCustomizationComponent_K2Node_ComponentBoundEvent_4_YOnMeshInitialized__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.BndEvt__m_armorComponent_K2Node_ComponentBoundEvent_2_YArmorComponentUpdatedSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UYArmorComponent*        armorComponent                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APRO_PlayerCharacter_C::BndEvt__m_armorComponent_K2Node_ComponentBoundEvent_2_YArmorComponentUpdatedSignature__DelegateSignature(class UYArmorComponent* armorComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.BndEvt__m_armorComponent_K2Node_ComponentBoundEvent_2_YArmorComponentUpdatedSignature__DelegateSignature"));

	struct
	{
		class UYArmorComponent*        armorComponent;
	} params = {};

	params.armorComponent = armorComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnBagMeshChangedEvent_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerCharacter_C::OnBagMeshChangedEvent_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnBagMeshChangedEvent_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.DoPawnCleanup
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerCharacter_C::DoPawnCleanup()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.DoPawnCleanup"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.BndEvt__PRO_PlayerCharacter_m_deathComponent_K2Node_ComponentBoundEvent_0_OnDeathRagdollDelegate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       damageData                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ContainsInstancedReference)

void APRO_PlayerCharacter_C::BndEvt__PRO_PlayerCharacter_m_deathComponent_K2Node_ComponentBoundEvent_0_OnDeathRagdollDelegate__DelegateSignature(const struct FYDealtDamageData& damageData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.BndEvt__PRO_PlayerCharacter_m_deathComponent_K2Node_ComponentBoundEvent_0_OnDeathRagdollDelegate__DelegateSignature"));

	struct
	{
		struct FYDealtDamageData       damageData;
	} params = {};

	params.damageData = damageData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnMeshViewStateChangedCallback
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMeshViewState                newViewState                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APRO_PlayerCharacter_C::OnMeshViewStateChangedCallback(EYMeshViewState newViewState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnMeshViewStateChangedCallback"));

	struct
	{
		EYMeshViewState                newViewState;
	} params = {};

	params.newViewState = newViewState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.ExecuteUbergraph_PRO_PlayerCharacter
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APRO_PlayerCharacter_C::ExecuteUbergraph_PRO_PlayerCharacter(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.ExecuteUbergraph_PRO_PlayerCharacter"));

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
