// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_PRO_PlayerCharacter_classes.hpp"

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
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.GetCustomImpactEffectData");

	struct
	{
		struct FYImpactEffectReceiverData ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.GetWeaponFirstPersonMesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UYSkeletalMeshComponentFOV* m_weaponMesh                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APRO_PlayerCharacter_C::GetWeaponFirstPersonMesh(class UYSkeletalMeshComponentFOV** m_weaponMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.GetWeaponFirstPersonMesh");

	struct
	{
		class UYSkeletalMeshComponentFOV* m_weaponMesh;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (m_weaponMesh != nullptr)
		*m_weaponMesh = params.m_weaponMesh;
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnLeanDirectionChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerCharacter_C::OnLeanDirectionChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnLeanDirectionChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.PlayCameraShakeOnOwningPlayer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Shake                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void APRO_PlayerCharacter_C::PlayCameraShakeOnOwningPlayer(class UClass* Shake)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.PlayCameraShakeOnOwningPlayer");

	struct
	{
		class UClass*                  Shake;
	} params;

	params.Shake = Shake;

	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnRep_IsHOT
// (FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerCharacter_C::OnRep_IsHOT()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnRep_IsHOT");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnRep_IsSlowdown
// (FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerCharacter_C::OnRep_IsSlowdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnRep_IsSlowdown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnRep_IsTagged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerCharacter_C::OnRep_IsTagged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnRep_IsTagged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnRep_IsCloaked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerCharacter_C::OnRep_IsCloaked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnRep_IsCloaked");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.GetAnimBlueprint
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UAnimInstance*           AnimInstance                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APRO_PlayerCharacter_C::GetAnimBlueprint(class UAnimInstance** AnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.GetAnimBlueprint");

	struct
	{
		class UAnimInstance*           AnimInstance;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AnimInstance != nullptr)
		*AnimInstance = params.AnimInstance;
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.SwitchToThirdPerson
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerCharacter_C::SwitchToThirdPerson()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.SwitchToThirdPerson");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.STE_ChargeVFX_TL__FinishedFunc
// (FUNC_BlueprintEvent)

void APRO_PlayerCharacter_C::STE_ChargeVFX_TL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.STE_ChargeVFX_TL__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.STE_ChargeVFX_TL__UpdateFunc
// (FUNC_BlueprintEvent)

void APRO_PlayerCharacter_C::STE_ChargeVFX_TL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.STE_ChargeVFX_TL__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.InpActEvt_ToggleNightVision_K2Node_InputActionEvent_2
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void APRO_PlayerCharacter_C::InpActEvt_ToggleNightVision_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.InpActEvt_ToggleNightVision_K2Node_InputActionEvent_2");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.InpActEvt_ToggleLight_K2Node_InputActionEvent_1
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void APRO_PlayerCharacter_C::InpActEvt_ToggleLight_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.InpActEvt_ToggleLight_K2Node_InputActionEvent_1");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void APRO_PlayerCharacter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.Server_EH_Trail
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APRO_PlayerCharacter_C::Server_EH_Trail(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.Server_EH_Trail");

	struct
	{
		float                          Duration;
	} params;

	params.Duration = Duration;

	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.Server_EH_Slowdown
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsSticky                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void APRO_PlayerCharacter_C::Server_EH_Slowdown(bool IsSticky)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.Server_EH_Slowdown");

	struct
	{
		bool                           IsSticky;
	} params;

	params.IsSticky = IsSticky;

	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.Server_EH_HOT
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsInRange                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void APRO_PlayerCharacter_C::Server_EH_HOT(bool IsInRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.Server_EH_HOT");

	struct
	{
		bool                           IsInRange;
	} params;

	params.IsInRange = IsInRange;

	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.CloakStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           cloakState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void APRO_PlayerCharacter_C::CloakStateChanged(bool cloakState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.CloakStateChanged");

	struct
	{
		bool                           cloakState;
	} params;

	params.cloakState = cloakState;

	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnEmptyHealth
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYHealthComponent*       healthComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Instigator                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APRO_PlayerCharacter_C::OnEmptyHealth(class UYHealthComponent* healthComponent, class AActor* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnEmptyHealth");

	struct
	{
		class UYHealthComponent*       healthComponent;
		class AActor*                  Instigator;
	} params;

	params.healthComponent = healthComponent;
	params.Instigator = Instigator;

	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnEndProne
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          HalfHeightAdjust               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ScaledHalfHeightAdjust         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APRO_PlayerCharacter_C::OnEndProne(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnEndProne");

	struct
	{
		float                          HalfHeightAdjust;
		float                          ScaledHalfHeightAdjust;
	} params;

	params.HalfHeightAdjust = HalfHeightAdjust;
	params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;

	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnStartProne
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          HalfHeightAdjust               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ScaledHalfHeightAdjust         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APRO_PlayerCharacter_C::OnStartProne(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnStartProne");

	struct
	{
		float                          HalfHeightAdjust;
		float                          ScaledHalfHeightAdjust;
	} params;

	params.HalfHeightAdjust = HalfHeightAdjust;
	params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;

	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.UpdatePhysMaterials
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerCharacter_C::UpdatePhysMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.UpdatePhysMaterials");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.BndEvt__m_deathComponent_K2Node_ComponentBoundEvent_5_OnDeathDelegate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UYCharacterDeathComponent* deathComponent                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APRO_PlayerCharacter_C::BndEvt__m_deathComponent_K2Node_ComponentBoundEvent_5_OnDeathDelegate__DelegateSignature(class UYCharacterDeathComponent* deathComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.BndEvt__m_deathComponent_K2Node_ComponentBoundEvent_5_OnDeathDelegate__DelegateSignature");

	struct
	{
		class UYCharacterDeathComponent* deathComponent;
	} params;

	params.deathComponent = deathComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnPerkAdded
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYPerk                  perk                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void APRO_PlayerCharacter_C::OnPerkAdded(const struct FYPerk& perk)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnPerkAdded");

	struct
	{
		struct FYPerk                  perk;
	} params;

	params.perk = perk;

	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.HookUpReportingBugVisualization
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerCharacter_C::HookUpReportingBugVisualization()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.HookUpReportingBugVisualization");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnPerkDeactivated
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYPerk                  perk                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void APRO_PlayerCharacter_C::OnPerkDeactivated(const struct FYPerk& perk)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnPerkDeactivated");

	struct
	{
		struct FYPerk                  perk;
	} params;

	params.perk = perk;

	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.BndEvt__m_damageComponent_K2Node_ComponentBoundEvent_1_YTakeDamageEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void APRO_PlayerCharacter_C::BndEvt__m_damageComponent_K2Node_ComponentBoundEvent_1_YTakeDamageEvent__DelegateSignature(const struct FYDealtDamageData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.BndEvt__m_damageComponent_K2Node_ComponentBoundEvent_1_YTakeDamageEvent__DelegateSignature");

	struct
	{
		struct FYDealtDamageData       Data;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnFinishedDamage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerCharacter_C::OnFinishedDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnFinishedDamage");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnVehicleEnter
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerCharacter_C::OnVehicleEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnVehicleEnter");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnVehicleExit
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerCharacter_C::OnVehicleExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnVehicleExit");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.BndEvt__m_stateComponent_K2Node_ComponentBoundEvent_8_YAnyStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// EYStateChangeType              stateChangeType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APRO_PlayerCharacter_C::BndEvt__m_stateComponent_K2Node_ComponentBoundEvent_8_YAnyStateChanged__DelegateSignature(EYStateChangeType stateChangeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.BndEvt__m_stateComponent_K2Node_ComponentBoundEvent_8_YAnyStateChanged__DelegateSignature");

	struct
	{
		EYStateChangeType              stateChangeType;
	} params;

	params.stateChangeType = stateChangeType;

	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.DBNO_Activate_Server
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerCharacter_C::DBNO_Activate_Server()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.DBNO_Activate_Server");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.DBNO_Deactivate_Server
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           interupted                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void APRO_PlayerCharacter_C::DBNO_Deactivate_Server(bool interupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.DBNO_Deactivate_Server");

	struct
	{
		bool                           interupted;
	} params;

	params.interupted = interupted;

	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.UpdateControllerYawRotation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerCharacter_C::UpdateControllerYawRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.UpdateControllerYawRotation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.StarTrekEvac_FX_Start
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APRO_PlayerCharacter_C::StarTrekEvac_FX_Start(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.StarTrekEvac_FX_Start");

	struct
	{
		float                          Duration;
	} params;

	params.Duration = Duration;

	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.StarTrekEvac_FX_Stop
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerCharacter_C::StarTrekEvac_FX_Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.StarTrekEvac_FX_Stop");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnDeath_Implemented
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerCharacter_C::OnDeath_Implemented()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.OnDeath_Implemented");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.BndEvt__m_interactionComponent_K2Node_ComponentBoundEvent_3_OnPlayerInteractionStarted__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// EYInteractionType              interactionType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AYPlayerController_Match* interactingPlayer              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APRO_PlayerCharacter_C::BndEvt__m_interactionComponent_K2Node_ComponentBoundEvent_3_OnPlayerInteractionStarted__DelegateSignature(EYInteractionType interactionType, class AYPlayerController_Match* interactingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.BndEvt__m_interactionComponent_K2Node_ComponentBoundEvent_3_OnPlayerInteractionStarted__DelegateSignature");

	struct
	{
		EYInteractionType              interactionType;
		class AYPlayerController_Match* interactingPlayer;
	} params;

	params.interactionType = interactionType;
	params.interactingPlayer = interactingPlayer;

	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.BndEvt__m_characterCustomizationComponent_K2Node_ComponentBoundEvent_4_YOnMeshInitialized__DelegateSignature
// (FUNC_BlueprintEvent)

void APRO_PlayerCharacter_C::BndEvt__m_characterCustomizationComponent_K2Node_ComponentBoundEvent_4_YOnMeshInitialized__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.BndEvt__m_characterCustomizationComponent_K2Node_ComponentBoundEvent_4_YOnMeshInitialized__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.BndEvt__m_armorComponent_K2Node_ComponentBoundEvent_2_YArmorComponentUpdatedSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UYArmorComponent*        armorComponent                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APRO_PlayerCharacter_C::BndEvt__m_armorComponent_K2Node_ComponentBoundEvent_2_YArmorComponentUpdatedSignature__DelegateSignature(class UYArmorComponent* armorComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.BndEvt__m_armorComponent_K2Node_ComponentBoundEvent_2_YArmorComponentUpdatedSignature__DelegateSignature");

	struct
	{
		class UYArmorComponent*        armorComponent;
	} params;

	params.armorComponent = armorComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.BP_OnDeath_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYCharacterDeathComponent* deathComponent                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APRO_PlayerCharacter_C::BP_OnDeath_Event_1(class UYCharacterDeathComponent* deathComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.BP_OnDeath_Event_1");

	struct
	{
		class UYCharacterDeathComponent* deathComponent;
	} params;

	params.deathComponent = deathComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.ExecuteUbergraph_PRO_PlayerCharacter
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APRO_PlayerCharacter_C::ExecuteUbergraph_PRO_PlayerCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerCharacter.PRO_PlayerCharacter_C.ExecuteUbergraph_PRO_PlayerCharacter");

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
