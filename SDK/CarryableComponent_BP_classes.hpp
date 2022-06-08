#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CarryableComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CarryableComponent_BP.CarryableComponent_BP_C
// 0x0048 (0x0100 - 0x00B8)
class UCarryableComponent_BP_C : public UYCarryableComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UPlayerCarryingComponent_BP_C*               PlayerCarryingComponent;                                  // 0x00C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnStartedGettingCarried;                                  // 0x00C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnStoppedGettingCarried;                                  // 0x00D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	float                                              ThrowSpeed;                                               // 0x00E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              DesiredDistance;                                          // 0x00EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CollisionSphereRadiusOverride;                            // 0x00F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     LastFrame;                                                // 0x00F4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass CarryableComponent_BP.CarryableComponent_BP_C"));
		return ptr;
	}


	void GetCollisionRadius(float* SphereRadius);
	void GetDesiredDistanceFromCarrier(float* Distance);
	struct FString BP_GetDebugDescription();
	void GetComponentForCollisionChecks(class UPrimitiveComponent** AsPrimitive_Component);
	void OnRep_PlayerCarryingComponent();
	void ThrowActorDueDrop();
	void StartGettingCarried(class UPlayerCarryingComponent_BP_C* CarryingComponent);
	void StopGettingCarried();
	void TryRequestStopCarry();
	void NotifyOnStartedGettingCarried();
	void NotifyOnStoppedGettingCarried();
	void MulticastThrow(const struct FVector& Velocity);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_CarryableComponent_BP(int EntryPoint);
	void OnStoppedGettingCarried__DelegateSignature();
	void OnStartedGettingCarried__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
