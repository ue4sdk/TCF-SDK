#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YCharacterScopeGlintComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass YCharacterScopeGlintComponent_BP.YCharacterScopeGlintComponent_BP_C
// 0x0018 (0x00C8 - 0x00B0)
class UYCharacterScopeGlintComponent_BP_C : public UYCharacterWeaponGlintComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UParticleSystemComponent*                    GlintPS;                                                  // 0x00B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCurveFloat*                                 GlintEffectCurve;                                         // 0x00C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass YCharacterScopeGlintComponent_BP.YCharacterScopeGlintComponent_BP_C");
		return ptr;
	}


	float GetCameraDistanceToGlint();
	float CalculateCameraToScopeDot();
	void GetOwningPawnViewPoint(struct FVector* ViewLocation, struct FRotator* ViewRotation);
	void ReceiveBeginPlay();
	void BP_OnEnterTargeting(bool ShouldCreateGlint);
	void BP_OnLeaveTargeting(bool ShouldCreateGlint);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_YCharacterScopeGlintComponent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
