// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Contract_Entry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Contract_Entry.WBP_Contract_Entry_C.Get Contract Unavailable Tooltip
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UWBP_Contract_Entry_C::Get_Contract_Unavailable_Tooltip()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Contract_Entry.WBP_Contract_Entry_C.Get Contract Unavailable Tooltip"));

	struct
	{
		class UWidget*                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_Contract_Entry.WBP_Contract_Entry_C.SetFooterArrowsVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShowFooterArrows               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Contract_Entry_C::SetFooterArrowsVisibility(bool ShowFooterArrows)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Contract_Entry.WBP_Contract_Entry_C.SetFooterArrowsVisibility"));

	struct
	{
		bool                           ShowFooterArrows;
	} params = {};

	params.ShowFooterArrows = ShowFooterArrows;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Contract_Entry.WBP_Contract_Entry_C.Set Inactive Button Text
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsButtonEnabled                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FString                 callerContext                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_Contract_Entry_C::Set_Inactive_Button_Text(bool IsButtonEnabled, const struct FString& callerContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Contract_Entry.WBP_Contract_Entry_C.Set Inactive Button Text"));

	struct
	{
		bool                           IsButtonEnabled;
		struct FString                 callerContext;
	} params = {};

	params.IsButtonEnabled = IsButtonEnabled;
	params.callerContext = callerContext;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Contract_Entry.WBP_Contract_Entry_C.Show Contract As Locked
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ContractIsLocked               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Contract_Entry_C::Show_Contract_As_Locked(bool ContractIsLocked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Contract_Entry.WBP_Contract_Entry_C.Show Contract As Locked"));

	struct
	{
		bool                           ContractIsLocked;
	} params = {};

	params.ContractIsLocked = ContractIsLocked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Contract_Entry.WBP_Contract_Entry_C.Get Contract Data for Tooltip
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsValidData                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FYContractUiData        YContractUiData                (CPF_Parm, CPF_OutParm)

void UWBP_Contract_Entry_C::Get_Contract_Data_for_Tooltip(bool* IsValidData, struct FYContractUiData* YContractUiData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Contract_Entry.WBP_Contract_Entry_C.Get Contract Data for Tooltip"));

	struct
	{
		bool                           IsValidData;
		struct FYContractUiData        YContractUiData;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsValidData != nullptr)
		*IsValidData = params.IsValidData;
	if (YContractUiData != nullptr)
		*YContractUiData = params.YContractUiData;
}


// Function WBP_Contract_Entry.WBP_Contract_Entry_C.Get Contract Entry Tooltip
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UWBP_Contract_Entry_C::Get_Contract_Entry_Tooltip()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Contract_Entry.WBP_Contract_Entry_C.Get Contract Entry Tooltip"));

	struct
	{
		class UWidget*                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_Contract_Entry.WBP_Contract_Entry_C.Send Request to Activate Contract
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Contract_Entry_C::Send_Request_to_Activate_Contract()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Contract_Entry.WBP_Contract_Entry_C.Send Request to Activate Contract"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Contract_Entry.WBP_Contract_Entry_C.Update Objective
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYContractObjective     objective                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            objectiveIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            ObjectiveProgress              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Contract_Entry_C::Update_Objective(const struct FYContractObjective& objective, int objectiveIndex, int ObjectiveProgress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Contract_Entry.WBP_Contract_Entry_C.Update Objective"));

	struct
	{
		struct FYContractObjective     objective;
		int                            objectiveIndex;
		int                            ObjectiveProgress;
	} params = {};

	params.objective = objective;
	params.objectiveIndex = objectiveIndex;
	params.ObjectiveProgress = ObjectiveProgress;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Contract_Entry.WBP_Contract_Entry_C.Clear Animation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Contract_Entry_C::Clear_Animation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Contract_Entry.WBP_Contract_Entry_C.Clear Animation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Contract_Entry.WBP_Contract_Entry_C.Set Objectives Visibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Show                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Contract_Entry_C::Set_Objectives_Visibility(bool Show)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Contract_Entry.WBP_Contract_Entry_C.Set Objectives Visibility"));

	struct
	{
		bool                           Show;
	} params = {};

	params.Show = Show;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Contract_Entry.WBP_Contract_Entry_C.Set Image Visibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Show                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Contract_Entry_C::Set_Image_Visibility(bool Show)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Contract_Entry.WBP_Contract_Entry_C.Set Image Visibility"));

	struct
	{
		bool                           Show;
	} params = {};

	params.Show = Show;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Contract_Entry.WBP_Contract_Entry_C.Set Description Visibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Show                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Contract_Entry_C::Set_Description_Visibility(bool Show)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Contract_Entry.WBP_Contract_Entry_C.Set Description Visibility"));

	struct
	{
		bool                           Show;
	} params = {};

	params.Show = Show;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Contract_Entry.WBP_Contract_Entry_C.Set Rewards Visibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           RewardsAreVisible              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          WidthOverride                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          HeightOverride                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Contract_Entry_C::Set_Rewards_Visibility(bool RewardsAreVisible, float WidthOverride, float HeightOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Contract_Entry.WBP_Contract_Entry_C.Set Rewards Visibility"));

	struct
	{
		bool                           RewardsAreVisible;
		float                          WidthOverride;
		float                          HeightOverride;
	} params = {};

	params.RewardsAreVisible = RewardsAreVisible;
	params.WidthOverride = WidthOverride;
	params.HeightOverride = HeightOverride;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Contract_Entry.WBP_Contract_Entry_C.Set Faction Icon Visibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Show                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Contract_Entry_C::Set_Faction_Icon_Visibility(bool Show)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Contract_Entry.WBP_Contract_Entry_C.Set Faction Icon Visibility"));

	struct
	{
		bool                           Show;
	} params = {};

	params.Show = Show;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Contract_Entry.WBP_Contract_Entry_C.Set Info Button Visibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Show                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Contract_Entry_C::Set_Info_Button_Visibility(bool Show)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Contract_Entry.WBP_Contract_Entry_C.Set Info Button Visibility"));

	struct
	{
		bool                           Show;
	} params = {};

	params.Show = Show;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Contract_Entry.WBP_Contract_Entry_C.Set Button Visibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Show                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Contract_Entry_C::Set_Button_Visibility(bool Show)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Contract_Entry.WBP_Contract_Entry_C.Set Button Visibility"));

	struct
	{
		bool                           Show;
	} params = {};

	params.Show = Show;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Contract_Entry.WBP_Contract_Entry_C.BP_CreateSetAndAddContractReward
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYContractReward        contractReward                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// bool                           showDivider                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UYWidget*                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UYWidget* UWBP_Contract_Entry_C::BP_CreateSetAndAddContractReward(const struct FYContractReward& contractReward, bool showDivider)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Contract_Entry.WBP_Contract_Entry_C.BP_CreateSetAndAddContractReward"));

	struct
	{
		struct FYContractReward        contractReward;
		bool                           showDivider;
		class UYWidget*                ReturnValue;
	} params = {};

	params.contractReward = contractReward;
	params.showDivider = showDivider;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_Contract_Entry.WBP_Contract_Entry_C.Update Objectives
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FYContractObjective> objectives                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<int>                    ObjectivePerProgress           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Contract_Entry_C::Update_Objectives(TArray<struct FYContractObjective>* objectives, TArray<int>* ObjectivePerProgress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Contract_Entry.WBP_Contract_Entry_C.Update Objectives"));

	struct
	{
		TArray<struct FYContractObjective> objectives;
		TArray<int>                    ObjectivePerProgress;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (objectives != nullptr)
		*objectives = params.objectives;
	if (ObjectivePerProgress != nullptr)
		*ObjectivePerProgress = params.ObjectivePerProgress;
}


// Function WBP_Contract_Entry.WBP_Contract_Entry_C.Update Contract Progress
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 activeContractId               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// TArray<int>                    ActiveContractCurrentProgressClamped (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Contract_Entry_C::Update_Contract_Progress(const struct FString& activeContractId, TArray<int>* ActiveContractCurrentProgressClamped)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Contract_Entry.WBP_Contract_Entry_C.Update Contract Progress"));

	struct
	{
		struct FString                 activeContractId;
		TArray<int>                    ActiveContractCurrentProgressClamped;
	} params = {};

	params.activeContractId = activeContractId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ActiveContractCurrentProgressClamped != nullptr)
		*ActiveContractCurrentProgressClamped = params.ActiveContractCurrentProgressClamped;
}


// Function WBP_Contract_Entry.WBP_Contract_Entry_C.Claim Contract
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Contract_Entry_C::Claim_Contract()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Contract_Entry.WBP_Contract_Entry_C.Claim Contract"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Contract_Entry.WBP_Contract_Entry_C.Cancel Active Contract
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Contract_Entry_C::Cancel_Active_Contract()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Contract_Entry.WBP_Contract_Entry_C.Cancel Active Contract"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Contract_Entry.WBP_Contract_Entry_C.Received Backend Response For Contract Status Change
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           isFail                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           anActiveContractHasBeenCancelled (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Contract_Entry_C::Received_Backend_Response_For_Contract_Status_Change(bool isFail, bool anActiveContractHasBeenCancelled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Contract_Entry.WBP_Contract_Entry_C.Received Backend Response For Contract Status Change"));

	struct
	{
		bool                           isFail;
		bool                           anActiveContractHasBeenCancelled;
	} params = {};

	params.isFail = isFail;
	params.anActiveContractHasBeenCancelled = anActiveContractHasBeenCancelled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Contract_Entry.WBP_Contract_Entry_C.Handle Contract State Change
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Contract_Entry_C::Handle_Contract_State_Change()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Contract_Entry.WBP_Contract_Entry_C.Handle Contract State Change"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Contract_Entry.WBP_Contract_Entry_C.Set Active Contract Button State
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYContractStatus               ContractState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 callerContext                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_Contract_Entry_C::Set_Active_Contract_Button_State(EYContractStatus ContractState, const struct FString& callerContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Contract_Entry.WBP_Contract_Entry_C.Set Active Contract Button State"));

	struct
	{
		EYContractStatus               ContractState;
		struct FString                 callerContext;
	} params = {};

	params.ContractState = ContractState;
	params.callerContext = callerContext;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Contract_Entry.WBP_Contract_Entry_C.Update Inactive Contract Button State
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsButtonEnabled                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FString                 callerContext                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_Contract_Entry_C::Update_Inactive_Contract_Button_State(bool IsButtonEnabled, const struct FString& callerContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Contract_Entry.WBP_Contract_Entry_C.Update Inactive Contract Button State"));

	struct
	{
		bool                           IsButtonEnabled;
		struct FString                 callerContext;
	} params = {};

	params.IsButtonEnabled = IsButtonEnabled;
	params.callerContext = callerContext;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Contract_Entry.WBP_Contract_Entry_C.Update Button Purchaseable State
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Contract_Entry_C::Update_Button_Purchaseable_State()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Contract_Entry.WBP_Contract_Entry_C.Update Button Purchaseable State"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Contract_Entry.WBP_Contract_Entry_C.Setup Dummy Data
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Contract_Entry_C::Setup_Dummy_Data()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Contract_Entry.WBP_Contract_Entry_C.Setup Dummy Data"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Contract_Entry.WBP_Contract_Entry_C.Setup Objectives
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FYContractObjective> objectives                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<int>                    ObjectivePerProgress           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Contract_Entry_C::Setup_Objectives(TArray<struct FYContractObjective>* objectives, TArray<int>* ObjectivePerProgress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Contract_Entry.WBP_Contract_Entry_C.Setup Objectives"));

	struct
	{
		TArray<struct FYContractObjective> objectives;
		TArray<int>                    ObjectivePerProgress;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (objectives != nullptr)
		*objectives = params.objectives;
	if (ObjectivePerProgress != nullptr)
		*ObjectivePerProgress = params.ObjectivePerProgress;
}


// Function WBP_Contract_Entry.WBP_Contract_Entry_C.Setup Base Info
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Is_Design_Time                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FYContractRow           Contract_Config_Data           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Contract_Entry_C::Setup_Base_Info(bool Is_Design_Time, const struct FYContractRow& Contract_Config_Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Contract_Entry.WBP_Contract_Entry_C.Setup Base Info"));

	struct
	{
		bool                           Is_Design_Time;
		struct FYContractRow           Contract_Config_Data;
	} params = {};

	params.Is_Design_Time = Is_Design_Time;
	params.Contract_Config_Data = Contract_Config_Data;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Contract_Entry.WBP_Contract_Entry_C.Setup Contract Board Entry
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYContractUiData        contractUiData                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Contract_Entry_C::Setup_Contract_Board_Entry(const struct FYContractUiData& contractUiData, bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Contract_Entry.WBP_Contract_Entry_C.Setup Contract Board Entry"));

	struct
	{
		struct FYContractUiData        contractUiData;
		bool                           IsDesignTime;
	} params = {};

	params.contractUiData = contractUiData;
	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Contract_Entry.WBP_Contract_Entry_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Contract_Entry_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Contract_Entry.WBP_Contract_Entry_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Contract_Entry.WBP_Contract_Entry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Contract_Entry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Contract_Entry.WBP_Contract_Entry_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Contract_Entry.WBP_Contract_Entry_C.BP_SetupContract
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FYContractUiData        contractUiData                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Contract_Entry_C::BP_SetupContract(const struct FYContractUiData& contractUiData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Contract_Entry.WBP_Contract_Entry_C.BP_SetupContract"));

	struct
	{
		struct FYContractUiData        contractUiData;
	} params = {};

	params.contractUiData = contractUiData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Contract_Entry.WBP_Contract_Entry_C.BndEvt__WBP_ContractAction_Btn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Contract_Entry_C::BndEvt__WBP_ContractAction_Btn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Contract_Entry.WBP_Contract_Entry_C.BndEvt__WBP_ContractAction_Btn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature"));

	struct
	{
		class UWBP_ButtonBase_Btn_C*   Button;
	} params = {};

	params.Button = Button;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Contract_Entry.WBP_Contract_Entry_C.BP_OnSuccessfullyCancelledContract
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_Contract_Entry_C::BP_OnSuccessfullyCancelledContract()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Contract_Entry.WBP_Contract_Entry_C.BP_OnSuccessfullyCancelledContract"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Contract_Entry.WBP_Contract_Entry_C.ExecuteUbergraph_WBP_Contract_Entry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Contract_Entry_C::ExecuteUbergraph_WBP_Contract_Entry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Contract_Entry.WBP_Contract_Entry_C.ExecuteUbergraph_WBP_Contract_Entry"));

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


// Function WBP_Contract_Entry.WBP_Contract_Entry_C.PressedClaimButton__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Contract_Entry_C::PressedClaimButton__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Contract_Entry.WBP_Contract_Entry_C.PressedClaimButton__DelegateSignature"));

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
