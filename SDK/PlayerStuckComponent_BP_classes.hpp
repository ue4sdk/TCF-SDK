#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PlayerStuckComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerStuckComponent_BP.PlayerStuckComponent_BP_C
// 0x0074 (0x012C - 0x00B8)
class UPlayerStuckComponent_BP_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              StuckForward;                                             // 0x00C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              StuckBackward;                                            // 0x00C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              StuckRight;                                               // 0x00C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              StuckLeft;                                                // 0x00CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     LastMeaningfulPosition;                                   // 0x00D0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	struct FTimespan                                   TimeOfLastMovement;                                       // 0x00E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     CachedPrevLocation;                                       // 0x00E8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     CachedNewLocation;                                        // 0x00F4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MovementBuildupForward;                                   // 0x0100(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MovementBuildupBackward;                                  // 0x0104(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MovementBuildupRight;                                     // 0x0108(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MovementBuildupLeft;                                      // 0x010C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FVector>                             GoodPositionsList;                                        // 0x0110(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class AYPlayerCharacter*                           Player;                                                   // 0x0120(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AccelerationThreshold;                                    // 0x0128(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass PlayerStuckComponent_BP.PlayerStuckComponent_BP_C"));
		return ptr;
	}


	void UpdateInput();
	void CircularCapsuleCheck(TEnumAsByte<EDrawDebugTrace> DebugVisibility, float CheckAngle, const struct FVector& StartPoint, bool DebugSolution, float DistanceFromStartPoint, bool ContinueAfterFirstFind, const struct FRotator& B, bool* FoundPlaceToGo, TArray<struct FVector>* FreeLocations);
	void FindFurthestDistanceInGoodPositionList(class AActor* Player, float* Distance, struct FVector* Position);
	void AddLastMeaningfulPositionToGoodPositionsList();
	void SphereTraceForFreeSpace(bool* IsAbleToMove);
	void IsFallingThroughWorldFeatureEnabled(bool* Safe_Teleport_when_Stuck);
	void IsStuckFeatureEnabled(bool* Safe_Teleport_when_Stuck);
	void FallIntoOblivionDetection(bool* IsFalling);
	void GettingStuckDetection(bool* Result);
	void ReceiveBeginPlay();
	void CheckIfPlayerIsStuck();
	void ServerSetPlayerLocation(const struct FVector& NewLocation);
	void MoveForward(float InputPin);
	void MoveSideways(float InputPin);
	void PreventFallingIntoOblivion();
	void OnInitializationCallback(const struct FYRuntimeInitializationContext& Result);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_PlayerStuckComponent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
