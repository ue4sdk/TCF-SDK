#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BTService_Friendly_AggroCheck_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTService_Friendly_AggroCheck.BTService_Friendly_AggroCheck_C
// 0x0220 (0x02C0 - 0x00A0)
class UBTService_Friendly_AggroCheck_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FVector                                     MyLocation;                                               // 0x00A8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      TargetToFlee;                                             // 0x00B8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FBlackboardKeySelector                      TargetDistance;                                           // 0x00E0(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FBlackboardKeySelector                      TargetLocation;                                           // 0x0108(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FBlackboardKeySelector                      MyCurrentLocation;                                        // 0x0130(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FBlackboardKeySelector                      targetVector;                                             // 0x0158(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Closest;                                                  // 0x0180(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0184(0x0004) MISSED OFFSET
	class AActor*                                      ClosestTarget;                                            // 0x0188(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class AActor*>                              VisibleTargets;                                           // 0x0190(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	TArray<float>                                      VisibleDistances;                                         // 0x01A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	int                                                IndexOfClosest;                                           // 0x01B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01B4(0x0004) MISSED OFFSET
	TArray<float>                                      VisibleDistancesSorted;                                   // 0x01B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<class AActor*>                              VisibleTargetsSorted;                                     // 0x01C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	int                                                MinValue;                                                 // 0x01D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData03[0x4];                                       // 0x01DC(0x0004) MISSED OFFSET
	class AAICtrl_Friendly_Base_BP_C*                  AICtrlRef;                                                // 0x01E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class AActor*>                              SensedTargets;                                            // 0x01E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	TArray<float>                                      SensedDistances;                                          // 0x01F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FBlackboardKeySelector                      AwarenessDistance;                                        // 0x0208(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FBlackboardKeySelector                      BB_IsPlayerCrouching;                                     // 0x0230(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               IsPlayerCrouching;                                        // 0x0258(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsPlayerFiring;                                           // 0x0259(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x6];                                       // 0x025A(0x0006) MISSED OFFSET
	struct FBlackboardKeySelector                      BB_IsPlayerFiring;                                        // 0x0260(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               IsPlayerTargeting;                                        // 0x0288(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0289(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      BB_IsPlayerTargeting;                                     // 0x0290(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	class AAIChar_Friendly_Base_BP_C*                  AICharFriendlyBaseRef;                                    // 0x02B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BTService_Friendly_AggroCheck.BTService_Friendly_AggroCheck_C"));
		return ptr;
	}


	void ClearArrays(TArray<class AActor*>* NewParam, TArray<float>* NewParam1);
	void SortTargetsByDistance(TArray<class AActor*>* VisibleTargets, TArray<float>* VisibleDistances, TArray<class AActor*>* VisibleTargetsSorted, TArray<float>* VisibleDistancesSorted);
	void CheckVisibilityOnSensedTargets(TArray<class AActor*>* SensedTargets);
	void SetBlackboardValues(bool IsPlayerCrouching, bool IsPlayerFiring, bool IsPlayerTargeting, TArray<class AActor*>* VisibleTargets, TArray<float>* VisibleDistances);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BTService_Friendly_AggroCheck(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
