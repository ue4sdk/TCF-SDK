// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AC_Uplink_Actor_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.AnyPlayerNearby
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           NOT_AnyPlayerNearby            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAC_Uplink_Actor_BP_C::AnyPlayerNearby(bool* NOT_AnyPlayerNearby)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.AnyPlayerNearby"));

	struct
	{
		bool                           NOT_AnyPlayerNearby;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (NOT_AnyPlayerNearby != nullptr)
		*NOT_AnyPlayerNearby = params.NOT_AnyPlayerNearby;
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnInteractedWithoutHardDisk
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerController_Match* Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_Uplink_Actor_BP_C::OnInteractedWithoutHardDisk(class AYPlayerController_Match* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnInteractedWithoutHardDisk"));

	struct
	{
		class AYPlayerController_Match* Player;
	} params = {};

	params.Player = Player;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnRep_HardDriveItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::OnRep_HardDriveItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnRep_HardDriveItem"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnRep_HardDriveInserted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::OnRep_HardDriveInserted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnRep_HardDriveInserted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.UpdateCompleted
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::UpdateCompleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.UpdateCompleted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.GetUpgradedDataItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FDataTableRowHandle     DataItem                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// struct FDataTableRowHandle     DataItemUpdated                (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void AAC_Uplink_Actor_BP_C::GetUpgradedDataItem(const struct FDataTableRowHandle& DataItem, struct FDataTableRowHandle* DataItemUpdated)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.GetUpgradedDataItem"));

	struct
	{
		struct FDataTableRowHandle     DataItem;
		struct FDataTableRowHandle     DataItemUpdated;
	} params = {};

	params.DataItem = DataItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (DataItemUpdated != nullptr)
		*DataItemUpdated = params.DataItemUpdated;
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.SetVFXColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::SetVFXColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.SetVFXColor"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnRep_UplinkConsole
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::OnRep_UplinkConsole()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnRep_UplinkConsole"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.ClearPreviewComponents
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::ClearPreviewComponents()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.ClearPreviewComponents"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.SpawnConsole
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::SpawnConsole()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.SpawnConsole"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.InteruptUpdate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::InteruptUpdate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.InteruptUpdate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.AttemptSpawnHardDrive
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              SpawnTransform                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAC_Uplink_Actor_BP_C::AttemptSpawnHardDrive(const struct FTransform& SpawnTransform, bool* success)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.AttemptSpawnHardDrive"));

	struct
	{
		struct FTransform              SpawnTransform;
		bool                           success;
	} params = {};

	params.SpawnTransform = SpawnTransform;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (success != nullptr)
		*success = params.success;
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.GrantItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerController*      interactingPlayer              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           GrantedItem                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAC_Uplink_Actor_BP_C::GrantItem(class AYPlayerController* interactingPlayer, bool* GrantedItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.GrantItem"));

	struct
	{
		class AYPlayerController*      interactingPlayer;
		bool                           GrantedItem;
	} params = {};

	params.interactingPlayer = interactingPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (GrantedItem != nullptr)
		*GrantedItem = params.GrantedItem;
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnRep_UplinkState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::OnRep_UplinkState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnRep_UplinkState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.StartUpdateClient
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::StartUpdateClient()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.StartUpdateClient"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnRep_CurrentUpdateProgress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::OnRep_CurrentUpdateProgress()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnRep_CurrentUpdateProgress"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.UpdateProgress
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsServer                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAC_Uplink_Actor_BP_C::UpdateProgress(bool IsServer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.UpdateProgress"));

	struct
	{
		bool                           IsServer;
	} params = {};

	params.IsServer = IsServer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.CalcUpdateTick
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          TimeTotal                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          UpdateTickIncrement            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_Uplink_Actor_BP_C::CalcUpdateTick(float TimeTotal, float* UpdateTickIncrement)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.CalcUpdateTick"));

	struct
	{
		float                          TimeTotal;
		float                          UpdateTickIncrement;
	} params = {};

	params.TimeTotal = TimeTotal;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (UpdateTickIncrement != nullptr)
		*UpdateTickIncrement = params.UpdateTickIncrement;
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.StartUpdate
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::StartUpdate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.StartUpdate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.HasRequiredItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerController*      interactingPlayer              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           HasItem                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FDataTableRowHandle     DataItem                       (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void AAC_Uplink_Actor_BP_C::HasRequiredItem(class AYPlayerController* interactingPlayer, bool* HasItem, struct FDataTableRowHandle* DataItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.HasRequiredItem"));

	struct
	{
		class AYPlayerController*      interactingPlayer;
		bool                           HasItem;
		struct FDataTableRowHandle     DataItem;
	} params = {};

	params.interactingPlayer = interactingPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (HasItem != nullptr)
		*HasItem = params.HasItem;
	if (DataItem != nullptr)
		*DataItem = params.DataItem;
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.StartDownload-TH__FinishedFunc
// (FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::StartDownload_TH__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.StartDownload-TH__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.StartDownload-TH__UpdateFunc
// (FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::StartDownload_TH__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.StartDownload-TH__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.WhileDownload-TH__FinishedFunc
// (FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::WhileDownload_TH__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.WhileDownload-TH__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.WhileDownload-TH__UpdateFunc
// (FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::WhileDownload_TH__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.WhileDownload-TH__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.FX-UpdateStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::FX_UpdateStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.FX-UpdateStarted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.FX-UpdateInterupted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::FX_UpdateInterupted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.FX-UpdateInterupted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.FX-UpdateCompleted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::FX_UpdateCompleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.FX-UpdateCompleted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.FX-WhileUpdating
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ProgressPercent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_Uplink_Actor_BP_C::FX_WhileUpdating(float ProgressPercent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.FX-WhileUpdating"));

	struct
	{
		float                          ProgressPercent;
	} params = {};

	params.ProgressPercent = ProgressPercent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.SetVFXEnabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           enable                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAC_Uplink_Actor_BP_C::SetVFXEnabled(bool enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.SetVFXEnabled"));

	struct
	{
		bool                           enable;
	} params = {};

	params.enable = enable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.FX-StartAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::FX_StartAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.FX-StartAnim"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.FX-StopAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::FX_StopAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.FX-StopAnim"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.UpdateTick-Server
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::UpdateTick_Server()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.UpdateTick-Server"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.UpdateTick-Client
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::UpdateTick_Client()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.UpdateTick-Client"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnStartUpdateClient
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::OnStartUpdateClient()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnStartUpdateClient"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnPlayerInteractCompleted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYInteractionType              interactionType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AYPlayerController_Match* interactingPlayer              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_Uplink_Actor_BP_C::OnPlayerInteractCompleted(EYInteractionType interactionType, class AYPlayerController_Match* interactingPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnPlayerInteractCompleted"));

	struct
	{
		EYInteractionType              interactionType;
		class AYPlayerController_Match* interactingPlayer;
	} params = {};

	params.interactionType = interactionType;
	params.interactingPlayer = interactingPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnHardDriveSlotInteract
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerController_Match* interactingPlayer              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_Uplink_Actor_BP_C::OnHardDriveSlotInteract(class AYPlayerController_Match* interactingPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnHardDriveSlotInteract"));

	struct
	{
		class AYPlayerController_Match* interactingPlayer;
	} params = {};

	params.interactingPlayer = interactingPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnUpdateInteruptedClient
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::OnUpdateInteruptedClient()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnUpdateInteruptedClient"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnUpdateCompletedClient
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::OnUpdateCompletedClient()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnUpdateCompletedClient"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.SendBIData
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EBIEventDataUplink_Enum> State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_Uplink_Actor_BP_C::SendBIData(TEnumAsByte<EBIEventDataUplink_Enum> State)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.SendBIData"));

	struct
	{
		TEnumAsByte<EBIEventDataUplink_Enum> State;
	} params = {};

	params.State = State;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnHardDriveSpawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::OnHardDriveSpawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnHardDriveSpawn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.ExecuteUbergraph_AC_Uplink_Actor_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_Uplink_Actor_BP_C::ExecuteUbergraph_AC_Uplink_Actor_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.ExecuteUbergraph_AC_Uplink_Actor_BP"));

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
