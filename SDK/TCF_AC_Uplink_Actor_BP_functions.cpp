// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AC_Uplink_Actor_BP_classes.hpp"

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.AnyPlayerNearby"));

	struct
	{
		bool                           NOT_AnyPlayerNearby;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (NOT_AnyPlayerNearby != nullptr)
		*NOT_AnyPlayerNearby = params.NOT_AnyPlayerNearby;
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnInteractedWithoutHardDisk
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerController_Match* Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_Uplink_Actor_BP_C::OnInteractedWithoutHardDisk(class AYPlayerController_Match* Player)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnInteractedWithoutHardDisk"));

	struct
	{
		class AYPlayerController_Match* Player;
	} params;

	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnRep_HardDriveItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::OnRep_HardDriveItem()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnRep_HardDriveItem"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnRep_HardDriveInserted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::OnRep_HardDriveInserted()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnRep_HardDriveInserted"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.UpdateCompleted
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::UpdateCompleted()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.UpdateCompleted"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.GetUpgradedDataItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FDataTableRowHandle     DataItem                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// struct FDataTableRowHandle     DataItemUpdated                (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void AAC_Uplink_Actor_BP_C::GetUpgradedDataItem(const struct FDataTableRowHandle& DataItem, struct FDataTableRowHandle* DataItemUpdated)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.GetUpgradedDataItem"));

	struct
	{
		struct FDataTableRowHandle     DataItem;
		struct FDataTableRowHandle     DataItemUpdated;
	} params;

	params.DataItem = DataItem;

	UObject::ProcessEvent(fn, &params);

	if (DataItemUpdated != nullptr)
		*DataItemUpdated = params.DataItemUpdated;
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.SetVFXColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::SetVFXColor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.SetVFXColor"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnRep_UplinkConsole
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::OnRep_UplinkConsole()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnRep_UplinkConsole"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.ClearPreviewComponents
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::ClearPreviewComponents()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.ClearPreviewComponents"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.SpawnConsole
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::SpawnConsole()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.SpawnConsole"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.InteruptUpdate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::InteruptUpdate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.InteruptUpdate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.AttemptSpawnHardDrive
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              SpawnTransform                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           SUCCESS                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAC_Uplink_Actor_BP_C::AttemptSpawnHardDrive(const struct FTransform& SpawnTransform, bool* SUCCESS)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.AttemptSpawnHardDrive"));

	struct
	{
		struct FTransform              SpawnTransform;
		bool                           SUCCESS;
	} params;

	params.SpawnTransform = SpawnTransform;

	UObject::ProcessEvent(fn, &params);

	if (SUCCESS != nullptr)
		*SUCCESS = params.SUCCESS;
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.GrantItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerController*      interactingPlayer              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           GrantedItem                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAC_Uplink_Actor_BP_C::GrantItem(class AYPlayerController* interactingPlayer, bool* GrantedItem)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.GrantItem"));

	struct
	{
		class AYPlayerController*      interactingPlayer;
		bool                           GrantedItem;
	} params;

	params.interactingPlayer = interactingPlayer;

	UObject::ProcessEvent(fn, &params);

	if (GrantedItem != nullptr)
		*GrantedItem = params.GrantedItem;
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnRep_UplinkState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::OnRep_UplinkState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnRep_UplinkState"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.StartUpdateClient
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::StartUpdateClient()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.StartUpdateClient"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnRep_CurrentUpdateProgress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::OnRep_CurrentUpdateProgress()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnRep_CurrentUpdateProgress"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.UpdateProgress
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsServer                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAC_Uplink_Actor_BP_C::UpdateProgress(bool IsServer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.UpdateProgress"));

	struct
	{
		bool                           IsServer;
	} params;

	params.IsServer = IsServer;

	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.CalcUpdateTick
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          TimeTotal                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          UpdateTickIncrement            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_Uplink_Actor_BP_C::CalcUpdateTick(float TimeTotal, float* UpdateTickIncrement)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.CalcUpdateTick"));

	struct
	{
		float                          TimeTotal;
		float                          UpdateTickIncrement;
	} params;

	params.TimeTotal = TimeTotal;

	UObject::ProcessEvent(fn, &params);

	if (UpdateTickIncrement != nullptr)
		*UpdateTickIncrement = params.UpdateTickIncrement;
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.StartUpdate
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::StartUpdate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.StartUpdate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.HasRequiredItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerController*      interactingPlayer              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           HasItem                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FDataTableRowHandle     DataItem                       (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void AAC_Uplink_Actor_BP_C::HasRequiredItem(class AYPlayerController* interactingPlayer, bool* HasItem, struct FDataTableRowHandle* DataItem)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.HasRequiredItem"));

	struct
	{
		class AYPlayerController*      interactingPlayer;
		bool                           HasItem;
		struct FDataTableRowHandle     DataItem;
	} params;

	params.interactingPlayer = interactingPlayer;

	UObject::ProcessEvent(fn, &params);

	if (HasItem != nullptr)
		*HasItem = params.HasItem;
	if (DataItem != nullptr)
		*DataItem = params.DataItem;
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.StartDownload-TH__FinishedFunc
// (FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::StartDownload_TH__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.StartDownload-TH__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.StartDownload-TH__UpdateFunc
// (FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::StartDownload_TH__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.StartDownload-TH__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.WhileDownload-TH__FinishedFunc
// (FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::WhileDownload_TH__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.WhileDownload-TH__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.WhileDownload-TH__UpdateFunc
// (FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::WhileDownload_TH__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.WhileDownload-TH__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.FX-UpdateStarted
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::FX_UpdateStarted()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.FX-UpdateStarted"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.FX-UpdateInterupted
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::FX_UpdateInterupted()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.FX-UpdateInterupted"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.FX-UpdateCompleted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::FX_UpdateCompleted()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.FX-UpdateCompleted"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.FX-WhileUpdating
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ProgressPercent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_Uplink_Actor_BP_C::FX_WhileUpdating(float ProgressPercent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.FX-WhileUpdating"));

	struct
	{
		float                          ProgressPercent;
	} params;

	params.ProgressPercent = ProgressPercent;

	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.SetVFXEnabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           enable                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAC_Uplink_Actor_BP_C::SetVFXEnabled(bool enable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.SetVFXEnabled"));

	struct
	{
		bool                           enable;
	} params;

	params.enable = enable;

	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.FX-StartAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::FX_StartAnim()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.FX-StartAnim"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.FX-StopAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::FX_StopAnim()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.FX-StopAnim"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.UpdateTick-Server
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::UpdateTick_Server()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.UpdateTick-Server"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.UpdateTick-Client
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::UpdateTick_Client()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.UpdateTick-Client"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnStartUpdateClient
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::OnStartUpdateClient()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnStartUpdateClient"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnPlayerInteractCompleted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYInteractionType              interactionType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AYPlayerController_Match* interactingPlayer              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           perfectInteraction             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAC_Uplink_Actor_BP_C::OnPlayerInteractCompleted(EYInteractionType interactionType, class AYPlayerController_Match* interactingPlayer, bool perfectInteraction)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnPlayerInteractCompleted"));

	struct
	{
		EYInteractionType              interactionType;
		class AYPlayerController_Match* interactingPlayer;
		bool                           perfectInteraction;
	} params;

	params.interactionType = interactionType;
	params.interactingPlayer = interactingPlayer;
	params.perfectInteraction = perfectInteraction;

	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnHardDriveSlotInteract
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerController_Match* interactingPlayer              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_Uplink_Actor_BP_C::OnHardDriveSlotInteract(class AYPlayerController_Match* interactingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnHardDriveSlotInteract"));

	struct
	{
		class AYPlayerController_Match* interactingPlayer;
	} params;

	params.interactingPlayer = interactingPlayer;

	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnUpdateInteruptedClient
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::OnUpdateInteruptedClient()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnUpdateInteruptedClient"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnUpdateCompletedClient
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::OnUpdateCompletedClient()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnUpdateCompletedClient"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.SendBIData
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EBIEventDataUplink_Enum> State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_Uplink_Actor_BP_C::SendBIData(TEnumAsByte<EBIEventDataUplink_Enum> State)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.SendBIData"));

	struct
	{
		TEnumAsByte<EBIEventDataUplink_Enum> State;
	} params;

	params.State = State;

	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnHardDriveSpawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_Actor_BP_C::OnHardDriveSpawn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.OnHardDriveSpawn"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.ExecuteUbergraph_AC_Uplink_Actor_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_Uplink_Actor_BP_C::ExecuteUbergraph_AC_Uplink_Actor_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_Actor_BP.AC_Uplink_Actor_BP_C.ExecuteUbergraph_AC_Uplink_Actor_BP"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
