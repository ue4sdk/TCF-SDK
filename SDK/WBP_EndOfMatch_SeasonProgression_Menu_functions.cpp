// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_EndOfMatch_SeasonProgression_Menu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.GetNumberOfTimesCompletedFrom DeltaActions
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 InputActionId                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            outNumberOfTimesCompleted      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EndOfMatch_SeasonProgression_Menu_C::GetNumberOfTimesCompletedFrom_DeltaActions(const struct FString& InputActionId, int* outNumberOfTimesCompleted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.GetNumberOfTimesCompletedFrom DeltaActions"));

	struct
	{
		struct FString                 InputActionId;
		int                            outNumberOfTimesCompleted;
	} params = {};

	params.InputActionId = InputActionId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (outNumberOfTimesCompleted != nullptr)
		*outNumberOfTimesCompleted = params.outNumberOfTimesCompleted;
}


// Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.CheckIfLevelUp
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsLevelUp                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_EndOfMatch_SeasonProgression_Menu_C::CheckIfLevelUp(bool* IsLevelUp)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.CheckIfLevelUp"));

	struct
	{
		bool                           IsLevelUp;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsLevelUp != nullptr)
		*IsLevelUp = params.IsLevelUp;
}


// Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.OnStageUpdated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            stage                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EndOfMatch_SeasonProgression_Menu_C::OnStageUpdated(int stage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.OnStageUpdated"));

	struct
	{
		int                            stage;
	} params = {};

	params.stage = stage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.Refresh
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_SeasonProgression_Menu_C::Refresh()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.Refresh"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.OnCurrentDataUpdated
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYFortunaPassPlayerData Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_EndOfMatch_SeasonProgression_Menu_C::OnCurrentDataUpdated(const struct FYFortunaPassPlayerData& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.OnCurrentDataUpdated"));

	struct
	{
		struct FYFortunaPassPlayerData Data;
	} params = {};

	params.Data = Data;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.GetActionNumberOfTimesCompletedById
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 InputActionId                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            NumberOfTimesCompleted         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EndOfMatch_SeasonProgression_Menu_C::GetActionNumberOfTimesCompletedById(const struct FString& InputActionId, int* NumberOfTimesCompleted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.GetActionNumberOfTimesCompletedById"));

	struct
	{
		struct FString                 InputActionId;
		int                            NumberOfTimesCompleted;
	} params = {};

	params.InputActionId = InputActionId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (NumberOfTimesCompleted != nullptr)
		*NumberOfTimesCompleted = params.NumberOfTimesCompleted;
}


// Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.InitExecution
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_SeasonProgression_Menu_C::InitExecution()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.InitExecution"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.GetActionDataById
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 InputActionId                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FYFortunaPassAction     FortunaPassAction              (CPF_Parm, CPF_OutParm)
// bool                           IsActionDataFound              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_EndOfMatch_SeasonProgression_Menu_C::GetActionDataById(const struct FString& InputActionId, struct FYFortunaPassAction* FortunaPassAction, bool* IsActionDataFound)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.GetActionDataById"));

	struct
	{
		struct FString                 InputActionId;
		struct FYFortunaPassAction     FortunaPassAction;
		bool                           IsActionDataFound;
	} params = {};

	params.InputActionId = InputActionId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (FortunaPassAction != nullptr)
		*FortunaPassAction = params.FortunaPassAction;
	if (IsActionDataFound != nullptr)
		*IsActionDataFound = params.IsActionDataFound;
}


// Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.CheckIfActionIsCompletedThisDrop
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 InputActionId                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           IsActionFound                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_EndOfMatch_SeasonProgression_Menu_C::CheckIfActionIsCompletedThisDrop(const struct FString& InputActionId, bool* IsActionFound)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.CheckIfActionIsCompletedThisDrop"));

	struct
	{
		struct FString                 InputActionId;
		bool                           IsActionFound;
	} params = {};

	params.InputActionId = InputActionId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsActionFound != nullptr)
		*IsActionFound = params.IsActionFound;
}


// Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.CreateActionEntriesIfActionCompleted
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYFortunaPassAction     FortunaPassAction              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_EndOfMatch_SeasonProgression_Menu_C::CreateActionEntriesIfActionCompleted(const struct FYFortunaPassAction& FortunaPassAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.CreateActionEntriesIfActionCompleted"));

	struct
	{
		struct FYFortunaPassAction     FortunaPassAction;
	} params = {};

	params.FortunaPassAction = FortunaPassAction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.SetStage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            stage                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EndOfMatch_SeasonProgression_Menu_C::SetStage(int stage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.SetStage"));

	struct
	{
		int                            stage;
	} params = {};

	params.stage = stage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.Skip
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_SeasonProgression_Menu_C::Skip()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.Skip"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.PlayScreenInAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_SeasonProgression_Menu_C::PlayScreenInAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.PlayScreenInAnim"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.PlayLevelUpAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_SeasonProgression_Menu_C::PlayLevelUpAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.PlayLevelUpAnim"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.ExecuteSpawnAction
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FYResourceManagerRequestEntry Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UWBP_EndOfMatch_SeasonProgression_Menu_C::ExecuteSpawnAction(const struct FYResourceManagerRequestEntry& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.ExecuteSpawnAction"));

	struct
	{
		struct FYResourceManagerRequestEntry Data;
	} params = {};

	params.Data = Data;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_SeasonProgression_Menu_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.OnAnimInFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_SeasonProgression_Menu_C::OnAnimInFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.OnAnimInFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.OnProgressBarAnimFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_SeasonProgression_Menu_C::OnProgressBarAnimFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.OnProgressBarAnimFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.OnActionsProgressAnimationFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_SeasonProgression_Menu_C::OnActionsProgressAnimationFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.OnActionsProgressAnimationFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.ExecuteUbergraph_WBP_EndOfMatch_SeasonProgression_Menu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EndOfMatch_SeasonProgression_Menu_C::ExecuteUbergraph_WBP_EndOfMatch_SeasonProgression_Menu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.ExecuteUbergraph_WBP_EndOfMatch_SeasonProgression_Menu"));

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


// Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.OnScreenOut__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_SeasonProgression_Menu_C::OnScreenOut__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_SeasonProgression_Menu.WBP_EndOfMatch_SeasonProgression_Menu_C.OnScreenOut__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
