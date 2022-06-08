#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DP_Base_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DP_Base_BP.DP_Base_BP_C
// 0x0108 (0x03A0 - 0x0298)
class ADP_Base_BP_C : public AYPodActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0298(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UPointLightComponent*                        PointLight1;                                              // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UYSpotlightComponent*                        YSpotlight;                                               // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UYMapMarkerComponent*                        YMapMarker;                                               // 0x02B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UYSkeletalMeshComponentFOV*                  DopPodComponentFOV;                                       // 0x02B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USphereComponent*                            Sphere;                                                   // 0x02C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UPointLightComponent*                        PointLight;                                               // 0x02C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UPointLightComponent*                        lightOrange;                                              // 0x02D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UDecalComponent*                             CraterDecal;                                              // 0x02D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        HiddenShadowCaster;                                       // 0x02E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    window_PS;                                                // 0x02E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    retroThruster_PS;                                         // 0x02F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USphereComponent*                            SphereCollision;                                          // 0x02F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    ground_PS;                                                // 0x0300(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Timeline_1_HiddenShadowCaster_2AD71DC7452E2068EE6B52B28D961CF2;// 0x0308(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_2AD71DC7452E2068EE6B52B28D961CF2;   // 0x030C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x030D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x0310(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     Timeline_0_location_3668E36A4761944F15CDCB9D1CE453C5;     // 0x0318(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Timeline_0_lightRed_3668E36A4761944F15CDCB9D1CE453C5;     // 0x0324(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Timeline_0_lightGreen_3668E36A4761944F15CDCB9D1CE453C5;   // 0x0328(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Timeline_0_lightRedFlashing_3668E36A4761944F15CDCB9D1CE453C5;// 0x032C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_3668E36A4761944F15CDCB9D1CE453C5;   // 0x0330(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0331(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0338(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     StartPosition;                                            // 0x0340(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x4];                                       // 0x034C(0x0004) MISSED OFFSET
	class AYPlayerCharacter*                           CachedPlayerCharacter;                                    // 0x0350(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         Landing_SFX_1;                                            // 0x0358(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         Landing_SFX_3;                                            // 0x0368(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         retroThrusters;                                           // 0x0378(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	class UAnimMontage*                                PodOpenHatchAnim;                                         // 0x0388(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AYPlayerState*                               RelevantState;                                            // 0x0390(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USoundBase*                                  DropPodMusic;                                             // 0x0398(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass DP_Base_BP.DP_Base_BP_C"));
		return ptr;
	}


	void AdjustLocationForTutorial();
	void Set_Collision_Based_on_Context(EYPodSpawningTypeContext Selection);
	void Set_Use_Custom_FOV(bool newState);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_0__retroThrusters__EventFunc();
	void Timeline_0__TriggerInitialSupportingEffects__EventFunc();
	void Timeline_0__TriggerLandingEffects__EventFunc();
	void Timeline_0__ground_dust__EventFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void OnNotifyEnd_E3E1655941965588221796876DC7ADDF(const struct FName& NotifyName);
	void OnNotifyBegin_E3E1655941965588221796876DC7ADDF(const struct FName& NotifyName);
	void OnInterrupted_E3E1655941965588221796876DC7ADDF(const struct FName& NotifyName);
	void OnBlendOut_E3E1655941965588221796876DC7ADDF(const struct FName& NotifyName);
	void OnCompleted_E3E1655941965588221796876DC7ADDF(const struct FName& NotifyName);
	void OnNotifyEnd_C858DD4F4BA062AE666252A04AB0EA85(const struct FName& NotifyName);
	void OnNotifyBegin_C858DD4F4BA062AE666252A04AB0EA85(const struct FName& NotifyName);
	void OnInterrupted_C858DD4F4BA062AE666252A04AB0EA85(const struct FName& NotifyName);
	void OnBlendOut_C858DD4F4BA062AE666252A04AB0EA85(const struct FName& NotifyName);
	void OnCompleted_C858DD4F4BA062AE666252A04AB0EA85(const struct FName& NotifyName);
	void OnNotifyEnd_4743CB0A4F7EF368E043898E87CC5139(const struct FName& NotifyName);
	void OnNotifyBegin_4743CB0A4F7EF368E043898E87CC5139(const struct FName& NotifyName);
	void OnInterrupted_4743CB0A4F7EF368E043898E87CC5139(const struct FName& NotifyName);
	void OnBlendOut_4743CB0A4F7EF368E043898E87CC5139(const struct FName& NotifyName);
	void OnCompleted_4743CB0A4F7EF368E043898E87CC5139(const struct FName& NotifyName);
	void OnNotifyEnd_78EA5A814B497F0C2C80439B93BD053F(const struct FName& NotifyName);
	void OnNotifyBegin_78EA5A814B497F0C2C80439B93BD053F(const struct FName& NotifyName);
	void OnInterrupted_78EA5A814B497F0C2C80439B93BD053F(const struct FName& NotifyName);
	void OnBlendOut_78EA5A814B497F0C2C80439B93BD053F(const struct FName& NotifyName);
	void OnCompleted_78EA5A814B497F0C2C80439B93BD053F(const struct FName& NotifyName);
	void OpenPodDoor();
	void StartMovement();
	void BP_SpawnContextAssigned(EYPodSpawningTypeContext spawnContext);
	void ReceiveBeginPlay();
	void DebugLights();
	void BP_SetContextPlayerActor(class AActor* playerActorContext);
	void ExecuteUbergraph_DP_Base_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
