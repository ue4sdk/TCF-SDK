#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_BP_AimAssist_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AimAssist.BP_AimAssist_C
// 0x01A0 (0x0250 - 0x00B0)
class UBP_AimAssist_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             CameraManagerTransformComponent;                          // 0x00B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ENUM_CharacterAimState>                CharacterAimState;                                        // 0x00C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00C1(0x0003) MISSED OFFSET
	struct FSTR_AimAssistWPNPresetDesc                 AimAssistWPNPresetLib;                                    // 0x00C4(0x0048) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                TraceSegments;                                            // 0x010C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              TraceRate;                                                // 0x0110(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              TargetPrecision;                                          // 0x0114(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FSTR_AimAssistTarget                        CurrentTarget;                                            // 0x0118(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CurrentHoldTargetTime;                                    // 0x0140(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FRotator                                    AutoAimRotator;                                           // 0x0144(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FVector                                     CentralLineEndPoint;                                      // 0x0150(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x015C(0x0004) MISSED OFFSET
	struct FSTR_AimAssistPresetDesc                    AimAssistPresetLib;                                       // 0x0160(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	float                                              PreviousTargetAngle;                                      // 0x0190(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0194(0x0004) MISSED OFFSET
	class APawn*                                       Pawn;                                                     // 0x0198(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCurveFloat*                                 CurveMagnetismSens;                                       // 0x01A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AddedControlRotationAngleYaw;                             // 0x01A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AddedControlRotationAnglePitch;                           // 0x01AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AutoAimCoefficient;                                       // 0x01B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AutoAimAngle;                                             // 0x01B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MagnetismCoefficient;                                     // 0x01B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              FinalMagnetismCoefficient;                                // 0x01BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AutoAimDistanceCoefficient;                               // 0x01C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MagnetismAngleCoefficient;                                // 0x01C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MagnetismDistanceCoefficient;                             // 0x01C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AutoAimAngleCoefficient;                                  // 0x01CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AngularVelocityYaw;                                       // 0x01D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AngularVelocityPitch;                                     // 0x01D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              PlayerInputMax;                                           // 0x01D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MagnetismSensCoefficient;                                 // 0x01DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              FrictionFraction;                                         // 0x01E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     CameraVelocity;                                           // 0x01E4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     TargetVelocity;                                           // 0x01F0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AdhesionFraction;                                         // 0x01FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              ControllerYawInput;                                       // 0x0200(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              ControllerPitchInput;                                     // 0x0204(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MouseYawInput;                                            // 0x0208(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MousePitchInput;                                          // 0x020C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              FinalYawInput;                                            // 0x0210(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              FinalPitchInput;                                          // 0x0214(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<EDrawDebugTrace>                       DrawConeTraces;                                           // 0x0218(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0219(0x0007) MISSED OFFSET
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypeForConeTrace;                                   // 0x0220(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FName                                       Aim_Assist_WPN_Preset_Name;                               // 0x0230(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Found_Valid_Target_;                                      // 0x0238(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Scanning_;                                                // 0x0239(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x2];                                       // 0x023A(0x0002) MISSED OFFSET
	struct FName                                       Default_Aim_Preset_;                                      // 0x023C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0244(0x0004) MISSED OFFSET
	struct FTimerHandle                                DefiningTargetTimerHandle;                                // 0x0248(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_AimAssist.BP_AimAssist_C");
		return ptr;
	}


	void GetAutoAimRotator(struct FRotator* AutoAimRotator);
	void GetAutoAimPureAngle(float* AutoAimAngle, bool* IsAngleValueNOTNull_);
	void ModifyFrictionByMovementCoeff(float Initial_Friction_Value, float Movement_Coeff, float* Final_Friction);
	void Logging();
	void AdditionalCheckHittingTarget(const struct FVector& Start_Point, const struct FVector& Forward_Vector, bool* IsHittedTargetDirectTrace_);
	void GetAutoAimAngle(float* AutoAimAngle);
	void GetAutoAimRotatorPure(struct FRotator* AutoAimRotator);
	void GetCurrentHoldTargetTime(float* CurrentHoldTargetTime);
	void GetFoundValidTarget(bool* Found_Valid_Target_);
	void GetAimAssistPresetSettings(struct FString* PresetName, float* HoldTargetTime, float* MagnetismFriction_In_Bliend, float* MagnetismAdhesion_In_Bliend, float* MagnetismFriction_In_Aim, float* MagnetismAdhesion_In_Aim);
	void GetMagnetismAImSettings(float* MagnetismAngle, float* MagnetismDistance, float* MagnetismFalloffDistance, float* MagnetismNearFalloffDistance);
	void GetMagnetismBliendSettings(float* MagnetismAngle, float* MagnetismDistance, float* MagnetismFalloffDistance, float* MagnetismNearFalloffDistance);
	void GetAutoAimAimSettings(float* DeviationAngle, float* AutoAimAngle, float* AutoAimDistance, float* AutoAimFalloffDistance, float* AutoAimNearFalloffDistance);
	void GetAutoAimBliendSettings(float* DeviationAngle, float* AutoAimAngle, float* AutoAimDistance, float* AutoAimFalloffDistance, float* AutoAimNearFalloffDistance);
	void GetAimAssistWPNPresetName(struct FName* Aim_Assist_WPN_Preset_Name);
	void SetPitchInputByController(float Pitch, float* Input_Pitch_Value_After_Inf_Magsm);
	void SetYawInputByController(float Yaw, float* Input_Yaw_Value_After_Inf_Magsm);
	void GetMagnetismStatus(float* YawInput, float* PitchInput, float* PlayerInputMax, float* MagnetismSensCoefficient, float* FinalMagnetismCoefficient, float* Friction, float* AddedControlRotationAngleYaw, float* AddedControlRotationAnglePitch, float* FrictionFraction);
	void GetTargetBone(struct FName* TargetHitBoneName);
	void GetTargetActor(class AActor** Current_Target_Hit_Actor);
	void GetTargetImpactPoint(struct FVector* TargetImpactPoint);
	void GetDistanceToTarget(float* TargetDistance);
	void GetMagnetismCoefficients(float* MagnetismCoefficient, float* FinalMagnetismCoefficient, float* MagnetismAngleCoefficient, float* MagnetismDistanceCoefficient, float* MagnetismSensCoefficient);
	void GetAutoAimCoefficients(float* AutoAimCoefficient, float* AutoAimDistanceCoefficient, float* AutoAimAngleCoefficient);
	void GetAimAssistPreset(struct FSTR_AimAssistPresetDesc* AimAssistPresetLib);
	void GetAimAssistWPNPreset(struct FSTR_AimAssistWPNPresetDesc* AimAssistWPNPresetLib);
	void GetAimState(TEnumAsByte<ENUM_CharacterAimState>* AimState);
	void SetPitchInputByMouse(float Pitch, float* Input_Pitch_Value_After_Inf_Magsm);
	void SetYawInputByMouse(float Yaw, float* Input_Yaw_Value_After_Inf_Magsm);
	void ApplyMagnetism(float MagnetismCoefficient, const struct FVector& CameraWorldLocation);
	void ApplyAutoAim(const struct FVector& StartPoint, const struct FVector& ForwardVector, const struct FVector& WorldPoint);
	void CalculateCoefficients(float TargetDistance, float TargetAngle, float* AutoAimCoefficient, float* MagnetismCoefficient);
	void PreciseTarget(const struct FVector& CameraWorldLocation, const struct FVector& CameraForwardVector, float TraceDistance, struct FSTR_AimAssistTarget* AimAssistTarget);
	void GetSuitableTargetFast(const struct FVector& CameraWorldLocation, const struct FVector& CameraForwardVector, struct FSTR_AimAssistTarget* AimAssistTarget);
	void DefiningTarget();
	void InitializeAimPresetLib(const struct FName& RowName);
	void SetCharacterAimState(TEnumAsByte<ENUM_CharacterAimState> CharacterAimState);
	void SetAimAssitWPNPreset(const struct FName& Preset_Name);
	void AimAssistScanTurn_ON_OFF(bool Scanning_);
	void ReceiveBeginPlay();
	void SetAnimAssistPreset(const struct FName& RowName);
	void CharacterChangeState(TEnumAsByte<ENUM_CharacterAimState> newState);
	void InitializeAimAssistWPNPreset(const struct FString& PresetName);
	void KeybindingDataChanged();
	void StartTimerBasedOnInputDevice();
	void ExecuteUbergraph_BP_AimAssist(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
