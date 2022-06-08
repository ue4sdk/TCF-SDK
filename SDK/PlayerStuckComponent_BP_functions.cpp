// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PlayerStuckComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerStuckComponent_BP.PlayerStuckComponent_BP_C.UpdateInput
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerStuckComponent_BP_C::UpdateInput()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerStuckComponent_BP.PlayerStuckComponent_BP_C.UpdateInput"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerStuckComponent_BP.PlayerStuckComponent_BP_C.CircularCapsuleCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EDrawDebugTrace>   DebugVisibility                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          CheckAngle                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 StartPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           DebugSolution                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          DistanceFromStartPoint         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ContinueAfterFirstFind         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FRotator                B                              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           FoundPlaceToGo                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TArray<struct FVector>         FreeLocations                  (CPF_Parm, CPF_OutParm)

void UPlayerStuckComponent_BP_C::CircularCapsuleCheck(TEnumAsByte<EDrawDebugTrace> DebugVisibility, float CheckAngle, const struct FVector& StartPoint, bool DebugSolution, float DistanceFromStartPoint, bool ContinueAfterFirstFind, const struct FRotator& B, bool* FoundPlaceToGo, TArray<struct FVector>* FreeLocations)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerStuckComponent_BP.PlayerStuckComponent_BP_C.CircularCapsuleCheck"));

	struct
	{
		TEnumAsByte<EDrawDebugTrace>   DebugVisibility;
		float                          CheckAngle;
		struct FVector                 StartPoint;
		bool                           DebugSolution;
		float                          DistanceFromStartPoint;
		bool                           ContinueAfterFirstFind;
		struct FRotator                B;
		bool                           FoundPlaceToGo;
		TArray<struct FVector>         FreeLocations;
	} params = {};

	params.DebugVisibility = DebugVisibility;
	params.CheckAngle = CheckAngle;
	params.StartPoint = StartPoint;
	params.DebugSolution = DebugSolution;
	params.DistanceFromStartPoint = DistanceFromStartPoint;
	params.ContinueAfterFirstFind = ContinueAfterFirstFind;
	params.B = B;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (FoundPlaceToGo != nullptr)
		*FoundPlaceToGo = params.FoundPlaceToGo;
	if (FreeLocations != nullptr)
		*FreeLocations = params.FreeLocations;
}


// Function PlayerStuckComponent_BP.PlayerStuckComponent_BP_C.FindFurthestDistanceInGoodPositionList
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Distance                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Position                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerStuckComponent_BP_C::FindFurthestDistanceInGoodPositionList(class AActor* Player, float* Distance, struct FVector* Position)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerStuckComponent_BP.PlayerStuckComponent_BP_C.FindFurthestDistanceInGoodPositionList"));

	struct
	{
		class AActor*                  Player;
		float                          Distance;
		struct FVector                 Position;
	} params = {};

	params.Player = Player;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Distance != nullptr)
		*Distance = params.Distance;
	if (Position != nullptr)
		*Position = params.Position;
}


// Function PlayerStuckComponent_BP.PlayerStuckComponent_BP_C.AddLastMeaningfulPositionToGoodPositionsList
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerStuckComponent_BP_C::AddLastMeaningfulPositionToGoodPositionsList()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerStuckComponent_BP.PlayerStuckComponent_BP_C.AddLastMeaningfulPositionToGoodPositionsList"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerStuckComponent_BP.PlayerStuckComponent_BP_C.SphereTraceForFreeSpace
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsAbleToMove                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerStuckComponent_BP_C::SphereTraceForFreeSpace(bool* IsAbleToMove)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerStuckComponent_BP.PlayerStuckComponent_BP_C.SphereTraceForFreeSpace"));

	struct
	{
		bool                           IsAbleToMove;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsAbleToMove != nullptr)
		*IsAbleToMove = params.IsAbleToMove;
}


// Function PlayerStuckComponent_BP.PlayerStuckComponent_BP_C.IsFallingThroughWorldFeatureEnabled
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Safe_Teleport_when_Stuck       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerStuckComponent_BP_C::IsFallingThroughWorldFeatureEnabled(bool* Safe_Teleport_when_Stuck)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerStuckComponent_BP.PlayerStuckComponent_BP_C.IsFallingThroughWorldFeatureEnabled"));

	struct
	{
		bool                           Safe_Teleport_when_Stuck;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Safe_Teleport_when_Stuck != nullptr)
		*Safe_Teleport_when_Stuck = params.Safe_Teleport_when_Stuck;
}


// Function PlayerStuckComponent_BP.PlayerStuckComponent_BP_C.IsStuckFeatureEnabled
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Safe_Teleport_when_Stuck       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerStuckComponent_BP_C::IsStuckFeatureEnabled(bool* Safe_Teleport_when_Stuck)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerStuckComponent_BP.PlayerStuckComponent_BP_C.IsStuckFeatureEnabled"));

	struct
	{
		bool                           Safe_Teleport_when_Stuck;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Safe_Teleport_when_Stuck != nullptr)
		*Safe_Teleport_when_Stuck = params.Safe_Teleport_when_Stuck;
}


// Function PlayerStuckComponent_BP.PlayerStuckComponent_BP_C.FallIntoOblivionDetection
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsFalling                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerStuckComponent_BP_C::FallIntoOblivionDetection(bool* IsFalling)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerStuckComponent_BP.PlayerStuckComponent_BP_C.FallIntoOblivionDetection"));

	struct
	{
		bool                           IsFalling;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsFalling != nullptr)
		*IsFalling = params.IsFalling;
}


// Function PlayerStuckComponent_BP.PlayerStuckComponent_BP_C.GettingStuckDetection
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerStuckComponent_BP_C::GettingStuckDetection(bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerStuckComponent_BP.PlayerStuckComponent_BP_C.GettingStuckDetection"));

	struct
	{
		bool                           Result;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
}


// Function PlayerStuckComponent_BP.PlayerStuckComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPlayerStuckComponent_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerStuckComponent_BP.PlayerStuckComponent_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerStuckComponent_BP.PlayerStuckComponent_BP_C.CheckIfPlayerIsStuck
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerStuckComponent_BP_C::CheckIfPlayerIsStuck()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerStuckComponent_BP.PlayerStuckComponent_BP_C.CheckIfPlayerIsStuck"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerStuckComponent_BP.PlayerStuckComponent_BP_C.ServerSetPlayerLocation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 NewLocation                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerStuckComponent_BP_C::ServerSetPlayerLocation(const struct FVector& NewLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerStuckComponent_BP.PlayerStuckComponent_BP_C.ServerSetPlayerLocation"));

	struct
	{
		struct FVector                 NewLocation;
	} params = {};

	params.NewLocation = NewLocation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerStuckComponent_BP.PlayerStuckComponent_BP_C.MoveForward
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InputPin                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerStuckComponent_BP_C::MoveForward(float InputPin)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerStuckComponent_BP.PlayerStuckComponent_BP_C.MoveForward"));

	struct
	{
		float                          InputPin;
	} params = {};

	params.InputPin = InputPin;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerStuckComponent_BP.PlayerStuckComponent_BP_C.MoveSideways
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InputPin                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerStuckComponent_BP_C::MoveSideways(float InputPin)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerStuckComponent_BP.PlayerStuckComponent_BP_C.MoveSideways"));

	struct
	{
		float                          InputPin;
	} params = {};

	params.InputPin = InputPin;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerStuckComponent_BP.PlayerStuckComponent_BP_C.PreventFallingIntoOblivion
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerStuckComponent_BP_C::PreventFallingIntoOblivion()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerStuckComponent_BP.PlayerStuckComponent_BP_C.PreventFallingIntoOblivion"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerStuckComponent_BP.PlayerStuckComponent_BP_C.OnInitializationCallback
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYRuntimeInitializationContext Result                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UPlayerStuckComponent_BP_C::OnInitializationCallback(const struct FYRuntimeInitializationContext& Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerStuckComponent_BP.PlayerStuckComponent_BP_C.OnInitializationCallback"));

	struct
	{
		struct FYRuntimeInitializationContext Result;
	} params = {};

	params.Result = Result;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerStuckComponent_BP.PlayerStuckComponent_BP_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerStuckComponent_BP_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerStuckComponent_BP.PlayerStuckComponent_BP_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerStuckComponent_BP.PlayerStuckComponent_BP_C.ExecuteUbergraph_PlayerStuckComponent_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerStuckComponent_BP_C::ExecuteUbergraph_PlayerStuckComponent_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerStuckComponent_BP.PlayerStuckComponent_BP_C.ExecuteUbergraph_PlayerStuckComponent_BP"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
