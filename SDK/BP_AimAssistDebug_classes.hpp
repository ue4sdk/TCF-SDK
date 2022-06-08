#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AimAssistDebug_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AimAssistDebug.BP_AimAssistDebug_C
// 0x0083 (0x013B - 0x00B8)
class UBP_AimAssistDebug_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FSTR_AimAssistWPNPresetDesc                 Aim_Assist_WPN_Preset;                                    // 0x00C0(0x0048) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsAimState_;                                              // 0x0108(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0109(0x0003) MISSED OFFSET
	struct FVector                                     CameraLocation;                                           // 0x010C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     CameraDirectionVector;                                    // 0x0118(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Toggle_Visible_Cones_;                                    // 0x0124(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0125(0x0003) MISSED OFFSET
	class UWBP_AimAssistDebugUI_C*                     DebugUI;                                                  // 0x0128(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_AimAssist_C*                             AimAssistRef;                                             // 0x0130(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Toggle_Visible_Circles_;                                  // 0x0138(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Toggle_Visible_Influence_Point_;                          // 0x0139(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Toggle_Visible_Auto_Aim_Point_;                           // 0x013A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AimAssistDebug.BP_AimAssistDebug_C"));
		return ptr;
	}


	void GetMagnetismAIMProperties(float* MagnetismAngle, float* MagnetismDistance, float* MagnetismFalloffDistance, float* MagnetismNearFalloffDistance);
	void GetAutoAimAIMProperties(float* DeviationAngle, float* AutoAimAngle, float* AutoAimDistance, float* AutoAimFalloffDistance, float* AutoAimNearFalloffDistance);
	void GetMagnetismBlindProperties(float* MagnetismAngle, float* MagnetismDistance, float* MagnetismFalloffDistance, float* MagnetismNearFalloffDistance);
	void DrawDebugCircle(const struct FVector& Camera_Location, const struct FVector& Camera_Direction, float Cone_Angle, const struct FRotator& Camera_Rotation, const struct FLinearColor& Debug_Color);
	void GetAutoAimBlindProperties(float* DeviationAngle, float* AutoAimAngle, float* AutoAimDistance, float* AutoAimFalloffDistance, float* AutoAimNearFalloffDistance);
	void DrawnCone(const struct FVector& Origin, const struct FVector& Direction, float Angle, float Distance, const struct FLinearColor& LineColor);
	void ReceiveTick(float DeltaSeconds);
	void OpenTickForDebug();
	void CreateDebug();
	void RemoveDebug();
	void CloseTickForDebug();
	void ToggleDebug();
	void ExecuteUbergraph_BP_AimAssistDebug(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
