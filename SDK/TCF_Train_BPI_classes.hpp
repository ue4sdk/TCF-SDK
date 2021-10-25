#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Train_BPI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Train_BPI.Train_BPI_C
// 0x0000 (0x0028 - 0x0028)
class UTrain_BPI_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Train_BPI.Train_BPI_C"));
		return ptr;
	}


	void FX_EmergencyBrake();
	void TrainDistanceUpdate(float Distance);
	void OnTeamChange();
	void UpdateOwnerState(class APlayerState* OwnerState);
	void FX_CartIndex(int CartIndex);
	void FX_ReturnRide(bool IsReturning);
	void FX_TrainSpeedUpdate(float UpdatedSpeed);
	void FX_InteractInterupted();
	void FX_InteractStart();
	void FX_Unloading(bool isCompleted, float Duration);
	void FX_Loading(bool isCompleted, float Duration);
	void FX_Stopped();
	void FX_Braking(bool Stopped);
	void FX_StartMoving();
	void CheckForOverlap();
	void UpdateTrainOwner(class AActor* ActivityActor, class AYPlayerController* OwningPlayer);
	void UpdateInteractable(bool Interactable);
	void TrainStateChange(TEnumAsByte<E_TrainStates> newState);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
