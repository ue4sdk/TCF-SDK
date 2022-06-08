// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YTutorialStepsPlayerComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.SetGenericDragAndDropHighlightingActive
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShouldBeActive                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYTutorialStepsPlayerComponent_BP_C::SetGenericDragAndDropHighlightingActive(bool ShouldBeActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.SetGenericDragAndDropHighlightingActive"));

	struct
	{
		bool                           ShouldBeActive;
	} params = {};

	params.ShouldBeActive = ShouldBeActive;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.HasHealingItems
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UYTutorialStepsPlayerComponent_BP_C::HasHealingItems()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.HasHealingItems"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.InitEvacMarker
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::InitEvacMarker()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.InitEvacMarker"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.SetConsumableButtonHighlight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsHighlighted                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYTutorialStepsPlayerComponent_BP_C::SetConsumableButtonHighlight(bool IsHighlighted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.SetConsumableButtonHighlight"));

	struct
	{
		bool                           IsHighlighted;
	} params = {};

	params.IsHighlighted = IsHighlighted;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.SetToolButtonHighlight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsHighlighted                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYTutorialStepsPlayerComponent_BP_C::SetToolButtonHighlight(bool IsHighlighted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.SetToolButtonHighlight"));

	struct
	{
		bool                           IsHighlighted;
	} params = {};

	params.IsHighlighted = IsHighlighted;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.IsItemInHands
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ItemSubstring                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYTutorialStepsPlayerComponent_BP_C::IsItemInHands(const struct FString& ItemSubstring, bool* success)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.IsItemInHands"));

	struct
	{
		struct FString                 ItemSubstring;
		bool                           success;
	} params = {};

	params.ItemSubstring = ItemSubstring;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (success != nullptr)
		*success = params.success;
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.IncreasePendingStep
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::IncreasePendingStep()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.IncreasePendingStep"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.CanStartHealingTutorial
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UYTutorialStepsPlayerComponent_BP_C::CanStartHealingTutorial()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.CanStartHealingTutorial"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.IsAtFullHealth
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UYTutorialStepsPlayerComponent_BP_C::IsAtFullHealth()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.IsAtFullHealth"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.IsInCombat
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UYTutorialStepsPlayerComponent_BP_C::IsInCombat()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.IsInCombat"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.GetNumberOfItemsInSafePockets
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            Number                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYTutorialStepsPlayerComponent_BP_C::GetNumberOfItemsInSafePockets(int* Number)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.GetNumberOfItemsInSafePockets"));

	struct
	{
		int                            Number;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Number != nullptr)
		*Number = params.Number;
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.SetAllMineralsHighlight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsHighlighted                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYTutorialStepsPlayerComponent_BP_C::SetAllMineralsHighlight(bool IsHighlighted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.SetAllMineralsHighlight"));

	struct
	{
		bool                           IsHighlighted;
	} params = {};

	params.IsHighlighted = IsHighlighted;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.IsOnEvacPlatform
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           IsOnPlatform                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYTutorialStepsPlayerComponent_BP_C::IsOnEvacPlatform(bool* IsOnPlatform)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.IsOnEvacPlatform"));

	struct
	{
		bool                           IsOnPlatform;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsOnPlatform != nullptr)
		*IsOnPlatform = params.IsOnPlatform;
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.SetEvacMarkerStepUpdateActive
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsActive                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            StartingStep                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYTutorialStepsPlayerComponent_BP_C::SetEvacMarkerStepUpdateActive(bool IsActive, int StartingStep)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.SetEvacMarkerStepUpdateActive"));

	struct
	{
		bool                           IsActive;
		int                            StartingStep;
	} params = {};

	params.IsActive = IsActive;
	params.StartingStep = StartingStep;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.FindCurrentEvacMarkerStep
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            step                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYTutorialStepsPlayerComponent_BP_C::FindCurrentEvacMarkerStep(int* step)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.FindCurrentEvacMarkerStep"));

	struct
	{
		int                            step;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (step != nullptr)
		*step = params.step;
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.MoveEvacMarkerToWaitingPosition
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::MoveEvacMarkerToWaitingPosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.MoveEvacMarkerToWaitingPosition"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.IsCloseEnoughToMineral
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           CloseEnough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYTutorialStepsPlayerComponent_BP_C::IsCloseEnoughToMineral(bool* CloseEnough)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.IsCloseEnoughToMineral"));

	struct
	{
		bool                           CloseEnough;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CloseEnough != nullptr)
		*CloseEnough = params.CloseEnough;
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.SetClosestMineralMarkerActive
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsActive                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYTutorialStepsPlayerComponent_BP_C::SetClosestMineralMarkerActive(bool IsActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.SetClosestMineralMarkerActive"));

	struct
	{
		bool                           IsActive;
	} params = {};

	params.IsActive = IsActive;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.SetNewStep
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            step                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ShowMissionStep                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYTutorialStepsPlayerComponent_BP_C::SetNewStep(int step, bool ShowMissionStep)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.SetNewStep"));

	struct
	{
		int                            step;
		bool                           ShowMissionStep;
	} params = {};

	params.step = step;
	params.ShowMissionStep = ShowMissionStep;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.ShowMissionLineStep
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            step                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYTutorialStepsPlayerComponent_BP_C::ShowMissionLineStep(int step)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.ShowMissionLineStep"));

	struct
	{
		int                            step;
	} params = {};

	params.step = step;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.SetStriderLocationMarkerActive
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsActive                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYTutorialStepsPlayerComponent_BP_C::SetStriderLocationMarkerActive(bool IsActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.SetStriderLocationMarkerActive"));

	struct
	{
		bool                           IsActive;
	} params = {};

	params.IsActive = IsActive;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.FindClosestStrider
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           FoundAny                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class AActor*                  Actor                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Distance                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYTutorialStepsPlayerComponent_BP_C::FindClosestStrider(bool* FoundAny, class AActor** Actor, float* Distance)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.FindClosestStrider"));

	struct
	{
		bool                           FoundAny;
		class AActor*                  Actor;
		float                          Distance;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (FoundAny != nullptr)
		*FoundAny = params.FoundAny;
	if (Actor != nullptr)
		*Actor = params.Actor;
	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.UpdateEvacMarkerLocationToStep
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FVector>         StepLocations                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            step                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYTutorialStepsPlayerComponent_BP_C::UpdateEvacMarkerLocationToStep(int step, TArray<struct FVector>* StepLocations)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.UpdateEvacMarkerLocationToStep"));

	struct
	{
		TArray<struct FVector>         StepLocations;
		int                            step;
	} params = {};

	params.step = step;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (StepLocations != nullptr)
		*StepLocations = params.StepLocations;
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.IsMineralObject
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FYInventoryItem         YInventoryItem                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           TRUE                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYTutorialStepsPlayerComponent_BP_C::IsMineralObject(const struct FYInventoryItem& YInventoryItem, bool* TRUE)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.IsMineralObject"));

	struct
	{
		struct FYInventoryItem         YInventoryItem;
		bool                           TRUE;
	} params = {};

	params.YInventoryItem = YInventoryItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TRUE != nullptr)
		*TRUE = params.TRUE;
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.FindClosestMineralLoc
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FVector                 Location                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYTutorialStepsPlayerComponent_BP_C::FindClosestMineralLoc(bool* success, struct FVector* Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.FindClosestMineralLoc"));

	struct
	{
		bool                           success;
		struct FVector                 Location;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (success != nullptr)
		*success = params.success;
	if (Location != nullptr)
		*Location = params.Location;
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.KilledAStrider
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FYDealtDamageData       YDealtDamageData               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// bool                           success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYTutorialStepsPlayerComponent_BP_C::KilledAStrider(const struct FYDealtDamageData& YDealtDamageData, bool* success)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.KilledAStrider"));

	struct
	{
		struct FYDealtDamageData       YDealtDamageData;
		bool                           success;
	} params = {};

	params.YDealtDamageData = YDealtDamageData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (success != nullptr)
		*success = params.success;
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.FindNearbyStriders
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYTutorialStepsPlayerComponent_BP_C::FindNearbyStriders(bool* success)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.FindNearbyStriders"));

	struct
	{
		bool                           success;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (success != nullptr)
		*success = params.success;
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.FindWidgetProvider
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWidgetProvider_Missions* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UYWidgetProvider_Missions* UYTutorialStepsPlayerComponent_BP_C::FindWidgetProvider()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.FindWidgetProvider"));

	struct
	{
		class UYWidgetProvider_Missions* ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.SetHUDHighlightActive
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     ContextRowHandle               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// bool                           IsActive                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FGuid                   Guid                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYTutorialStepsPlayerComponent_BP_C::SetHUDHighlightActive(const struct FDataTableRowHandle& ContextRowHandle, bool IsActive, struct FGuid* Guid)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.SetHUDHighlightActive"));

	struct
	{
		struct FDataTableRowHandle     ContextRowHandle;
		bool                           IsActive;
		struct FGuid                   Guid;
	} params = {};

	params.ContextRowHandle = ContextRowHandle;
	params.IsActive = IsActive;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Guid != nullptr)
		*Guid = params.Guid;
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.InitStep
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            stepIndex                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYTutorialStepsPlayerComponent_BP_C::InitStep(int stepIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.InitStep"));

	struct
	{
		int                            stepIndex;
	} params = {};

	params.stepIndex = stepIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnChainCompleted_C23C35D4448CE813C63973BD63D420D3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnChainCompleted_C23C35D4448CE813C63973BD63D420D3()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnChainCompleted_C23C35D4448CE813C63973BD63D420D3"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCompleted_C23C35D4448CE813C63973BD63D420D3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnCompleted_C23C35D4448CE813C63973BD63D420D3()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCompleted_C23C35D4448CE813C63973BD63D420D3"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCancelled_C23C35D4448CE813C63973BD63D420D3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnCancelled_C23C35D4448CE813C63973BD63D420D3()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCancelled_C23C35D4448CE813C63973BD63D420D3"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStarted_C23C35D4448CE813C63973BD63D420D3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnStarted_C23C35D4448CE813C63973BD63D420D3()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStarted_C23C35D4448CE813C63973BD63D420D3"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStartFailed_C23C35D4448CE813C63973BD63D420D3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnStartFailed_C23C35D4448CE813C63973BD63D420D3()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStartFailed_C23C35D4448CE813C63973BD63D420D3"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnChainCompleted_C23C35D4448CE813C63973BD6909E3DD
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnChainCompleted_C23C35D4448CE813C63973BD6909E3DD()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnChainCompleted_C23C35D4448CE813C63973BD6909E3DD"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCompleted_C23C35D4448CE813C63973BD6909E3DD
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnCompleted_C23C35D4448CE813C63973BD6909E3DD()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCompleted_C23C35D4448CE813C63973BD6909E3DD"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCancelled_C23C35D4448CE813C63973BD6909E3DD
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnCancelled_C23C35D4448CE813C63973BD6909E3DD()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCancelled_C23C35D4448CE813C63973BD6909E3DD"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStarted_C23C35D4448CE813C63973BD6909E3DD
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnStarted_C23C35D4448CE813C63973BD6909E3DD()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStarted_C23C35D4448CE813C63973BD6909E3DD"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStartFailed_C23C35D4448CE813C63973BD6909E3DD
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnStartFailed_C23C35D4448CE813C63973BD6909E3DD()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStartFailed_C23C35D4448CE813C63973BD6909E3DD"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnChainCompleted_C23C35D4448CE813C63973BD28127A84
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnChainCompleted_C23C35D4448CE813C63973BD28127A84()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnChainCompleted_C23C35D4448CE813C63973BD28127A84"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCompleted_C23C35D4448CE813C63973BD28127A84
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnCompleted_C23C35D4448CE813C63973BD28127A84()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCompleted_C23C35D4448CE813C63973BD28127A84"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCancelled_C23C35D4448CE813C63973BD28127A84
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnCancelled_C23C35D4448CE813C63973BD28127A84()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCancelled_C23C35D4448CE813C63973BD28127A84"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStarted_C23C35D4448CE813C63973BD28127A84
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnStarted_C23C35D4448CE813C63973BD28127A84()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStarted_C23C35D4448CE813C63973BD28127A84"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStartFailed_C23C35D4448CE813C63973BD28127A84
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnStartFailed_C23C35D4448CE813C63973BD28127A84()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStartFailed_C23C35D4448CE813C63973BD28127A84"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnChainCompleted_C23C35D4448CE813C63973BD1BB5324D
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnChainCompleted_C23C35D4448CE813C63973BD1BB5324D()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnChainCompleted_C23C35D4448CE813C63973BD1BB5324D"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCompleted_C23C35D4448CE813C63973BD1BB5324D
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnCompleted_C23C35D4448CE813C63973BD1BB5324D()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCompleted_C23C35D4448CE813C63973BD1BB5324D"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCancelled_C23C35D4448CE813C63973BD1BB5324D
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnCancelled_C23C35D4448CE813C63973BD1BB5324D()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCancelled_C23C35D4448CE813C63973BD1BB5324D"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStarted_C23C35D4448CE813C63973BD1BB5324D
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnStarted_C23C35D4448CE813C63973BD1BB5324D()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStarted_C23C35D4448CE813C63973BD1BB5324D"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStartFailed_C23C35D4448CE813C63973BD1BB5324D
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnStartFailed_C23C35D4448CE813C63973BD1BB5324D()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStartFailed_C23C35D4448CE813C63973BD1BB5324D"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnChainCompleted_C23C35D4448CE813C63973BD8A09B911
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnChainCompleted_C23C35D4448CE813C63973BD8A09B911()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnChainCompleted_C23C35D4448CE813C63973BD8A09B911"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCompleted_C23C35D4448CE813C63973BD8A09B911
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnCompleted_C23C35D4448CE813C63973BD8A09B911()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCompleted_C23C35D4448CE813C63973BD8A09B911"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCancelled_C23C35D4448CE813C63973BD8A09B911
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnCancelled_C23C35D4448CE813C63973BD8A09B911()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCancelled_C23C35D4448CE813C63973BD8A09B911"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStarted_C23C35D4448CE813C63973BD8A09B911
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnStarted_C23C35D4448CE813C63973BD8A09B911()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStarted_C23C35D4448CE813C63973BD8A09B911"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStartFailed_C23C35D4448CE813C63973BD8A09B911
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnStartFailed_C23C35D4448CE813C63973BD8A09B911()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStartFailed_C23C35D4448CE813C63973BD8A09B911"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnChainCompleted_C23C35D4448CE813C63973BDDB600207
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnChainCompleted_C23C35D4448CE813C63973BDDB600207()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnChainCompleted_C23C35D4448CE813C63973BDDB600207"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCompleted_C23C35D4448CE813C63973BDDB600207
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnCompleted_C23C35D4448CE813C63973BDDB600207()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCompleted_C23C35D4448CE813C63973BDDB600207"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCancelled_C23C35D4448CE813C63973BDDB600207
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnCancelled_C23C35D4448CE813C63973BDDB600207()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCancelled_C23C35D4448CE813C63973BDDB600207"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStarted_C23C35D4448CE813C63973BDDB600207
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnStarted_C23C35D4448CE813C63973BDDB600207()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStarted_C23C35D4448CE813C63973BDDB600207"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStartFailed_C23C35D4448CE813C63973BDDB600207
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnStartFailed_C23C35D4448CE813C63973BDDB600207()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStartFailed_C23C35D4448CE813C63973BDDB600207"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnChainCompleted_C23C35D4448CE813C63973BDBF127265
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnChainCompleted_C23C35D4448CE813C63973BDBF127265()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnChainCompleted_C23C35D4448CE813C63973BDBF127265"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCompleted_C23C35D4448CE813C63973BDBF127265
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnCompleted_C23C35D4448CE813C63973BDBF127265()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCompleted_C23C35D4448CE813C63973BDBF127265"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCancelled_C23C35D4448CE813C63973BDBF127265
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnCancelled_C23C35D4448CE813C63973BDBF127265()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCancelled_C23C35D4448CE813C63973BDBF127265"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStarted_C23C35D4448CE813C63973BDBF127265
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnStarted_C23C35D4448CE813C63973BDBF127265()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStarted_C23C35D4448CE813C63973BDBF127265"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStartFailed_C23C35D4448CE813C63973BDBF127265
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnStartFailed_C23C35D4448CE813C63973BDBF127265()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStartFailed_C23C35D4448CE813C63973BDBF127265"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnChainCompleted_C23C35D4448CE813C63973BD3C541236
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnChainCompleted_C23C35D4448CE813C63973BD3C541236()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnChainCompleted_C23C35D4448CE813C63973BD3C541236"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCompleted_C23C35D4448CE813C63973BD3C541236
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnCompleted_C23C35D4448CE813C63973BD3C541236()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCompleted_C23C35D4448CE813C63973BD3C541236"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCancelled_C23C35D4448CE813C63973BD3C541236
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnCancelled_C23C35D4448CE813C63973BD3C541236()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCancelled_C23C35D4448CE813C63973BD3C541236"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStarted_C23C35D4448CE813C63973BD3C541236
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnStarted_C23C35D4448CE813C63973BD3C541236()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStarted_C23C35D4448CE813C63973BD3C541236"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStartFailed_C23C35D4448CE813C63973BD3C541236
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnStartFailed_C23C35D4448CE813C63973BD3C541236()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStartFailed_C23C35D4448CE813C63973BD3C541236"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnChainCompleted_C23C35D4448CE813C63973BD9B50F69C
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnChainCompleted_C23C35D4448CE813C63973BD9B50F69C()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnChainCompleted_C23C35D4448CE813C63973BD9B50F69C"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCompleted_C23C35D4448CE813C63973BD9B50F69C
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnCompleted_C23C35D4448CE813C63973BD9B50F69C()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCompleted_C23C35D4448CE813C63973BD9B50F69C"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCancelled_C23C35D4448CE813C63973BD9B50F69C
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnCancelled_C23C35D4448CE813C63973BD9B50F69C()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCancelled_C23C35D4448CE813C63973BD9B50F69C"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStarted_C23C35D4448CE813C63973BD9B50F69C
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnStarted_C23C35D4448CE813C63973BD9B50F69C()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStarted_C23C35D4448CE813C63973BD9B50F69C"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStartFailed_C23C35D4448CE813C63973BD9B50F69C
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnStartFailed_C23C35D4448CE813C63973BD9B50F69C()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStartFailed_C23C35D4448CE813C63973BD9B50F69C"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnChainCompleted_C23C35D4448CE813C63973BD86C4CFF8
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnChainCompleted_C23C35D4448CE813C63973BD86C4CFF8()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnChainCompleted_C23C35D4448CE813C63973BD86C4CFF8"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCompleted_C23C35D4448CE813C63973BD86C4CFF8
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnCompleted_C23C35D4448CE813C63973BD86C4CFF8()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCompleted_C23C35D4448CE813C63973BD86C4CFF8"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCancelled_C23C35D4448CE813C63973BD86C4CFF8
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnCancelled_C23C35D4448CE813C63973BD86C4CFF8()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCancelled_C23C35D4448CE813C63973BD86C4CFF8"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStarted_C23C35D4448CE813C63973BD86C4CFF8
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnStarted_C23C35D4448CE813C63973BD86C4CFF8()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStarted_C23C35D4448CE813C63973BD86C4CFF8"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStartFailed_C23C35D4448CE813C63973BD86C4CFF8
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnStartFailed_C23C35D4448CE813C63973BD86C4CFF8()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStartFailed_C23C35D4448CE813C63973BD86C4CFF8"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnChainCompleted_C23C35D4448CE813C63973BD850DBC90
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnChainCompleted_C23C35D4448CE813C63973BD850DBC90()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnChainCompleted_C23C35D4448CE813C63973BD850DBC90"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCompleted_C23C35D4448CE813C63973BD850DBC90
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnCompleted_C23C35D4448CE813C63973BD850DBC90()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCompleted_C23C35D4448CE813C63973BD850DBC90"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCancelled_C23C35D4448CE813C63973BD850DBC90
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnCancelled_C23C35D4448CE813C63973BD850DBC90()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCancelled_C23C35D4448CE813C63973BD850DBC90"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStarted_C23C35D4448CE813C63973BD850DBC90
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnStarted_C23C35D4448CE813C63973BD850DBC90()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStarted_C23C35D4448CE813C63973BD850DBC90"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStartFailed_C23C35D4448CE813C63973BD850DBC90
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnStartFailed_C23C35D4448CE813C63973BD850DBC90()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStartFailed_C23C35D4448CE813C63973BD850DBC90"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnChainCompleted_C23C35D4448CE813C63973BDC1D3C31E
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnChainCompleted_C23C35D4448CE813C63973BDC1D3C31E()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnChainCompleted_C23C35D4448CE813C63973BDC1D3C31E"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCompleted_C23C35D4448CE813C63973BDC1D3C31E
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnCompleted_C23C35D4448CE813C63973BDC1D3C31E()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCompleted_C23C35D4448CE813C63973BDC1D3C31E"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCancelled_C23C35D4448CE813C63973BDC1D3C31E
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnCancelled_C23C35D4448CE813C63973BDC1D3C31E()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCancelled_C23C35D4448CE813C63973BDC1D3C31E"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStarted_C23C35D4448CE813C63973BDC1D3C31E
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnStarted_C23C35D4448CE813C63973BDC1D3C31E()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStarted_C23C35D4448CE813C63973BDC1D3C31E"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStartFailed_C23C35D4448CE813C63973BDC1D3C31E
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnStartFailed_C23C35D4448CE813C63973BDC1D3C31E()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStartFailed_C23C35D4448CE813C63973BDC1D3C31E"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnChainCompleted_C23C35D4448CE813C63973BDC98259D3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnChainCompleted_C23C35D4448CE813C63973BDC98259D3()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnChainCompleted_C23C35D4448CE813C63973BDC98259D3"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCompleted_C23C35D4448CE813C63973BDC98259D3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnCompleted_C23C35D4448CE813C63973BDC98259D3()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCompleted_C23C35D4448CE813C63973BDC98259D3"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCancelled_C23C35D4448CE813C63973BDC98259D3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnCancelled_C23C35D4448CE813C63973BDC98259D3()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCancelled_C23C35D4448CE813C63973BDC98259D3"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStarted_C23C35D4448CE813C63973BDC98259D3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnStarted_C23C35D4448CE813C63973BDC98259D3()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStarted_C23C35D4448CE813C63973BDC98259D3"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStartFailed_C23C35D4448CE813C63973BDC98259D3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnStartFailed_C23C35D4448CE813C63973BDC98259D3()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStartFailed_C23C35D4448CE813C63973BDC98259D3"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnChainCompleted_C23C35D4448CE813C63973BDBC1A6EC3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnChainCompleted_C23C35D4448CE813C63973BDBC1A6EC3()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnChainCompleted_C23C35D4448CE813C63973BDBC1A6EC3"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCompleted_C23C35D4448CE813C63973BDBC1A6EC3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnCompleted_C23C35D4448CE813C63973BDBC1A6EC3()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCompleted_C23C35D4448CE813C63973BDBC1A6EC3"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCancelled_C23C35D4448CE813C63973BDBC1A6EC3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnCancelled_C23C35D4448CE813C63973BDBC1A6EC3()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCancelled_C23C35D4448CE813C63973BDBC1A6EC3"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStarted_C23C35D4448CE813C63973BDBC1A6EC3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnStarted_C23C35D4448CE813C63973BDBC1A6EC3()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStarted_C23C35D4448CE813C63973BDBC1A6EC3"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStartFailed_C23C35D4448CE813C63973BDBC1A6EC3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnStartFailed_C23C35D4448CE813C63973BDBC1A6EC3()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStartFailed_C23C35D4448CE813C63973BDBC1A6EC3"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnChainCompleted_C23C35D4448CE813C63973BDD58FAA1B
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnChainCompleted_C23C35D4448CE813C63973BDD58FAA1B()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnChainCompleted_C23C35D4448CE813C63973BDD58FAA1B"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCompleted_C23C35D4448CE813C63973BDD58FAA1B
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnCompleted_C23C35D4448CE813C63973BDD58FAA1B()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCompleted_C23C35D4448CE813C63973BDD58FAA1B"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCancelled_C23C35D4448CE813C63973BDD58FAA1B
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnCancelled_C23C35D4448CE813C63973BDD58FAA1B()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnCancelled_C23C35D4448CE813C63973BDD58FAA1B"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStarted_C23C35D4448CE813C63973BDD58FAA1B
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnStarted_C23C35D4448CE813C63973BDD58FAA1B()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStarted_C23C35D4448CE813C63973BDD58FAA1B"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStartFailed_C23C35D4448CE813C63973BDD58FAA1B
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnStartFailed_C23C35D4448CE813C63973BDD58FAA1B()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnStartFailed_C23C35D4448CE813C63973BDD58FAA1B"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.InitStep_KillStrider
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::InitStep_KillStrider()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.InitStep_KillStrider"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.InitStep_EquipScanner
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::InitStep_EquipScanner()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.InitStep_EquipScanner"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.InitStep_UseScanner
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::InitStep_UseScanner()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.InitStep_UseScanner"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.DistanceToAIUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::DistanceToAIUpdate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.DistanceToAIUpdate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnPlayerDealsDamage
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UYTutorialStepsPlayerComponent_BP_C::OnPlayerDealsDamage(const struct FYDealtDamageData& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnPlayerDealsDamage"));

	struct
	{
		struct FYDealtDamageData       Data;
	} params = {};

	params.Data = Data;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.ToolSwapTrackingInit
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::ToolSwapTrackingInit()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.ToolSwapTrackingInit"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.InitStep_EquipPickaxe
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::InitStep_EquipPickaxe()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.InitStep_EquipPickaxe"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnSuccessScan
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UActorComponent*> Location                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UYTutorialStepsPlayerComponent_BP_C::OnSuccessScan(TArray<class UActorComponent*> Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnSuccessScan"));

	struct
	{
		TArray<class UActorComponent*> Location;
	} params = {};

	params.Location = Location;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.DistanceToMineralUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::DistanceToMineralUpdate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.DistanceToMineralUpdate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.InitStep_MineMineral
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::InitStep_MineMineral()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.InitStep_MineMineral"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.StartMineralDistanceCheck
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::StartMineralDistanceCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.StartMineralDistanceCheck"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.InitStep_GoToEvac
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::InitStep_GoToEvac()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.InitStep_GoToEvac"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnItemPickedUp
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYStateInventoryComponent* stateInventoryComponent        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYInventoryItem         Item                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// EYPlayerSetType                equippedSetType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYTutorialStepsPlayerComponent_BP_C::OnItemPickedUp(class UYStateInventoryComponent* stateInventoryComponent, const struct FYInventoryItem& Item, EYPlayerSetType equippedSetType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnItemPickedUp"));

	struct
	{
		class UYStateInventoryComponent* stateInventoryComponent;
		struct FYInventoryItem         Item;
		EYPlayerSetType                equippedSetType;
	} params = {};

	params.stateInventoryComponent = stateInventoryComponent;
	params.Item = Item;
	params.equippedSetType = equippedSetType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.DistanceToEvacUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::DistanceToEvacUpdate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.DistanceToEvacUpdate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.InitStep_CallShip
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::InitStep_CallShip()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.InitStep_CallShip"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnEvacCalled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APRO_PlayerController_C* Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYTutorialStepsPlayerComponent_BP_C::OnEvacCalled(class APRO_PlayerController_C* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnEvacCalled"));

	struct
	{
		class APRO_PlayerController_C* Player;
	} params = {};

	params.Player = Player;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.InitStep_WaitForShip
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::InitStep_WaitForShip()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.InitStep_WaitForShip"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnEvacShipStateChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EAC_EscapeShip_State> EscapeShipState                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYTutorialStepsPlayerComponent_BP_C::OnEvacShipStateChange(TEnumAsByte<EAC_EscapeShip_State> EscapeShipState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnEvacShipStateChange"));

	struct
	{
		TEnumAsByte<EAC_EscapeShip_State> EscapeShipState;
	} params = {};

	params.EscapeShipState = EscapeShipState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.InitStep_GoIntoShip
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::InitStep_GoIntoShip()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.InitStep_GoIntoShip"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.InitStep_Welcome
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::InitStep_Welcome()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.InitStep_Welcome"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnIntroFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnIntroFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnIntroFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.InitializeTutorial
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::InitializeTutorial()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.InitializeTutorial"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.InitStep_MissedEvac
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::InitStep_MissedEvac()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.InitStep_MissedEvac"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.TryFindRelevantStriders
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::TryFindRelevantStriders()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.TryFindRelevantStriders"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.EndStriderMarkerLogic
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::EndStriderMarkerLogic()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.EndStriderMarkerLogic"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.TryFinishStepOne
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::TryFinishStepOne()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.TryFinishStepOne"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.HandleTrackedItemEquipped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Substring                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UYTutorialStepsPlayerComponent_BP_C::HandleTrackedItemEquipped(const struct FString& Substring)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.HandleTrackedItemEquipped"));

	struct
	{
		struct FString                 Substring;
	} params = {};

	params.Substring = Substring;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.HandleMineralsFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::HandleMineralsFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.HandleMineralsFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.HandleArrivedAtMineral
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::HandleArrivedAtMineral()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.HandleArrivedAtMineral"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.StartFirstStep
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::StartFirstStep()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.StartFirstStep"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.InitStep_Inventory
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::InitStep_Inventory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.InitStep_Inventory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.CheckSafePocket
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::CheckSafePocket()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.CheckSafePocket"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.CompleteStep_Inventory
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::CompleteStep_Inventory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.CompleteStep_Inventory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnInventoryOpened
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnInventoryOpened()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnInventoryOpened"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.FinishInventoryOpeningStep
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::FinishInventoryOpeningStep()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.FinishInventoryOpeningStep"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.PromptOpenInventory
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::PromptOpenInventory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.PromptOpenInventory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnPlayerSetUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYStateInventoryComponent* stateInventoryComponent        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYTutorialStepsPlayerComponent_BP_C::OnPlayerSetUpdated(class UYStateInventoryComponent* stateInventoryComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnPlayerSetUpdated"));

	struct
	{
		class UYStateInventoryComponent* stateInventoryComponent;
	} params = {};

	params.stateInventoryComponent = stateInventoryComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.HandleStriderKilled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::HandleStriderKilled()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.HandleStriderKilled"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.DamageTrackingInit
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::DamageTrackingInit()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.DamageTrackingInit"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnPlayerTakeDamage
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UYTutorialStepsPlayerComponent_BP_C::OnPlayerTakeDamage(const struct FYDealtDamageData& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnPlayerTakeDamage"));

	struct
	{
		struct FYDealtDamageData       Data;
	} params = {};

	params.Data = Data;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.DetectDynamicHealingTutorialStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::DetectDynamicHealingTutorialStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.DetectDynamicHealingTutorialStart"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnHealingComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnHealingComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnHealingComplete"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.InitStep_HealEquipStim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::InitStep_HealEquipStim()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.InitStep_HealEquipStim"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.InitStep_HealUseStim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::InitStep_HealUseStim()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.InitStep_HealUseStim"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.HandleNewItemEquipped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::HandleNewItemEquipped()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.HandleNewItemEquipped"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.CompleteStep_EquipScanner
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::CompleteStep_EquipScanner()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.CompleteStep_EquipScanner"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.CompleteStep_EquipPickaxe
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::CompleteStep_EquipPickaxe()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.CompleteStep_EquipPickaxe"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.CompleteStep_HealEquipStim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::CompleteStep_HealEquipStim()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.CompleteStep_HealEquipStim"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.CompleteStep_KillStriders
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::CompleteStep_KillStriders()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.CompleteStep_KillStriders"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.TryGoNextStepAfterKillStrider
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::TryGoNextStepAfterKillStrider()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.TryGoNextStepAfterKillStrider"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.TryGoNextStepAfterInventory
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::TryGoNextStepAfterInventory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.TryGoNextStepAfterInventory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnAbilityActivated_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Owner                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYInventoryItem         inventoryItem                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UYTutorialStepsPlayerComponent_BP_C::OnAbilityActivated_Event_1(class AActor* Owner, const struct FYInventoryItem& inventoryItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnAbilityActivated_Event_1"));

	struct
	{
		class AActor*                  Owner;
		struct FYInventoryItem         inventoryItem;
	} params = {};

	params.Owner = Owner;
	params.inventoryItem = inventoryItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.InitStep_OpenMap
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::InitStep_OpenMap()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.InitStep_OpenMap"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnMapOpened
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           MapIsOpen                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYTutorialStepsPlayerComponent_BP_C::OnMapOpened(bool MapIsOpen)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnMapOpened"));

	struct
	{
		bool                           MapIsOpen;
	} params = {};

	params.MapIsOpen = MapIsOpen;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.ExecuteUbergraph_YTutorialStepsPlayerComponent_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYTutorialStepsPlayerComponent_BP_C::ExecuteUbergraph_YTutorialStepsPlayerComponent_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.ExecuteUbergraph_YTutorialStepsPlayerComponent_BP"));

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


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.ConsumableButtonHighlightUpdate__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShouldHighlight                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYTutorialStepsPlayerComponent_BP_C::ConsumableButtonHighlightUpdate__DelegateSignature(bool ShouldHighlight)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.ConsumableButtonHighlightUpdate__DelegateSignature"));

	struct
	{
		bool                           ShouldHighlight;
	} params = {};

	params.ShouldHighlight = ShouldHighlight;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.ToolButtonHighlightUpdate__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShouldHighlight                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYTutorialStepsPlayerComponent_BP_C::ToolButtonHighlightUpdate__DelegateSignature(bool ShouldHighlight)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.ToolButtonHighlightUpdate__DelegateSignature"));

	struct
	{
		bool                           ShouldHighlight;
	} params = {};

	params.ShouldHighlight = ShouldHighlight;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
