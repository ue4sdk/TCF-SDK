// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Train_BPI_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Train_BPI.Train_BPI_C.FX-EmergencyBrake
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTrain_BPI_C::FX_EmergencyBrake()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Train_BPI.Train_BPI_C.FX-EmergencyBrake"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Train_BPI.Train_BPI_C.TrainDistanceUpdate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Distance                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTrain_BPI_C::TrainDistanceUpdate(float Distance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Train_BPI.Train_BPI_C.TrainDistanceUpdate"));

	struct
	{
		float                          Distance;
	} params;

	params.Distance = Distance;

	UObject::ProcessEvent(fn, &params);
}


// Function Train_BPI.Train_BPI_C.OnTeamChange
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTrain_BPI_C::OnTeamChange()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Train_BPI.Train_BPI_C.OnTeamChange"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Train_BPI.Train_BPI_C.UpdateOwnerState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            OwnerState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTrain_BPI_C::UpdateOwnerState(class APlayerState* OwnerState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Train_BPI.Train_BPI_C.UpdateOwnerState"));

	struct
	{
		class APlayerState*            OwnerState;
	} params;

	params.OwnerState = OwnerState;

	UObject::ProcessEvent(fn, &params);
}


// Function Train_BPI.Train_BPI_C.FX-CartIndex
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            CartIndex                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTrain_BPI_C::FX_CartIndex(int CartIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Train_BPI.Train_BPI_C.FX-CartIndex"));

	struct
	{
		int                            CartIndex;
	} params;

	params.CartIndex = CartIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function Train_BPI.Train_BPI_C.FX-ReturnRide
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsReturning                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTrain_BPI_C::FX_ReturnRide(bool IsReturning)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Train_BPI.Train_BPI_C.FX-ReturnRide"));

	struct
	{
		bool                           IsReturning;
	} params;

	params.IsReturning = IsReturning;

	UObject::ProcessEvent(fn, &params);
}


// Function Train_BPI.Train_BPI_C.FX-TrainSpeedUpdate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          UpdatedSpeed                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTrain_BPI_C::FX_TrainSpeedUpdate(float UpdatedSpeed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Train_BPI.Train_BPI_C.FX-TrainSpeedUpdate"));

	struct
	{
		float                          UpdatedSpeed;
	} params;

	params.UpdatedSpeed = UpdatedSpeed;

	UObject::ProcessEvent(fn, &params);
}


// Function Train_BPI.Train_BPI_C.FX-InteractInterupted
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTrain_BPI_C::FX_InteractInterupted()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Train_BPI.Train_BPI_C.FX-InteractInterupted"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Train_BPI.Train_BPI_C.FX-InteractStart
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTrain_BPI_C::FX_InteractStart()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Train_BPI.Train_BPI_C.FX-InteractStart"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Train_BPI.Train_BPI_C.FX-Unloading
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           isCompleted                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTrain_BPI_C::FX_Unloading(bool isCompleted, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Train_BPI.Train_BPI_C.FX-Unloading"));

	struct
	{
		bool                           isCompleted;
		float                          Duration;
	} params;

	params.isCompleted = isCompleted;
	params.Duration = Duration;

	UObject::ProcessEvent(fn, &params);
}


// Function Train_BPI.Train_BPI_C.FX-Loading
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           isCompleted                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTrain_BPI_C::FX_Loading(bool isCompleted, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Train_BPI.Train_BPI_C.FX-Loading"));

	struct
	{
		bool                           isCompleted;
		float                          Duration;
	} params;

	params.isCompleted = isCompleted;
	params.Duration = Duration;

	UObject::ProcessEvent(fn, &params);
}


// Function Train_BPI.Train_BPI_C.FX-Stopped
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTrain_BPI_C::FX_Stopped()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Train_BPI.Train_BPI_C.FX-Stopped"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Train_BPI.Train_BPI_C.FX-Braking
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Stopped                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTrain_BPI_C::FX_Braking(bool Stopped)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Train_BPI.Train_BPI_C.FX-Braking"));

	struct
	{
		bool                           Stopped;
	} params;

	params.Stopped = Stopped;

	UObject::ProcessEvent(fn, &params);
}


// Function Train_BPI.Train_BPI_C.FX-StartMoving
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTrain_BPI_C::FX_StartMoving()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Train_BPI.Train_BPI_C.FX-StartMoving"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Train_BPI.Train_BPI_C.CheckForOverlap
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTrain_BPI_C::CheckForOverlap()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Train_BPI.Train_BPI_C.CheckForOverlap"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Train_BPI.Train_BPI_C.UpdateTrainOwner
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  ActivityActor                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AYPlayerController*      OwningPlayer                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTrain_BPI_C::UpdateTrainOwner(class AActor* ActivityActor, class AYPlayerController* OwningPlayer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Train_BPI.Train_BPI_C.UpdateTrainOwner"));

	struct
	{
		class AActor*                  ActivityActor;
		class AYPlayerController*      OwningPlayer;
	} params;

	params.ActivityActor = ActivityActor;
	params.OwningPlayer = OwningPlayer;

	UObject::ProcessEvent(fn, &params);
}


// Function Train_BPI.Train_BPI_C.UpdateInteractable
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Interactable                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTrain_BPI_C::UpdateInteractable(bool Interactable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Train_BPI.Train_BPI_C.UpdateInteractable"));

	struct
	{
		bool                           Interactable;
	} params;

	params.Interactable = Interactable;

	UObject::ProcessEvent(fn, &params);
}


// Function Train_BPI.Train_BPI_C.TrainStateChange
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_TrainStates>     newState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTrain_BPI_C::TrainStateChange(TEnumAsByte<E_TrainStates> newState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Train_BPI.Train_BPI_C.TrainStateChange"));

	struct
	{
		TEnumAsByte<E_TrainStates>     newState;
	} params;

	params.newState = newState;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
