// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MS_Line_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MS_Line_Base.MS_Line_Base_C.SetReturnButtonHighlightActive
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsActive                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMS_Line_Base_C::SetReturnButtonHighlightActive(bool IsActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MS_Line_Base.MS_Line_Base_C.SetReturnButtonHighlightActive"));

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


// Function MS_Line_Base.MS_Line_Base_C.UnbindAndStopReturnButtonHighlight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMS_Line_Base_C::UnbindAndStopReturnButtonHighlight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MS_Line_Base.MS_Line_Base_C.UnbindAndStopReturnButtonHighlight"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MS_Line_Base.MS_Line_Base_C.TryHighlightReturnButton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     ExceptIfSceneOpen              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UMS_Line_Base_C::TryHighlightReturnButton(const struct FDataTableRowHandle& ExceptIfSceneOpen)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MS_Line_Base.MS_Line_Base_C.TryHighlightReturnButton"));

	struct
	{
		struct FDataTableRowHandle     ExceptIfSceneOpen;
	} params = {};

	params.ExceptIfSceneOpen = ExceptIfSceneOpen;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MS_Line_Base.MS_Line_Base_C.CompleteStep
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMS_Line_Base_C::CompleteStep()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MS_Line_Base.MS_Line_Base_C.CompleteStep"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MS_Line_Base.MS_Line_Base_C.RequestEmptyTutorialAnnouncementQueue
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Delegate                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor)

void UMS_Line_Base_C::RequestEmptyTutorialAnnouncementQueue(const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MS_Line_Base.MS_Line_Base_C.RequestEmptyTutorialAnnouncementQueue"));

	struct
	{
		struct FScriptDelegate         Delegate;
	} params = {};

	params.Delegate = Delegate;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MS_Line_Base.MS_Line_Base_C.GetNumberOfTutorialLinesInQueue
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            NumberInQueue                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMS_Line_Base_C::GetNumberOfTutorialLinesInQueue(int* NumberInQueue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MS_Line_Base.MS_Line_Base_C.GetNumberOfTutorialLinesInQueue"));

	struct
	{
		int                            NumberInQueue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (NumberInQueue != nullptr)
		*NumberInQueue = params.NumberInQueue;
}


// Function MS_Line_Base.MS_Line_Base_C.OnRep_HintData
// (FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMS_Line_Base_C::OnRep_HintData()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MS_Line_Base.MS_Line_Base_C.OnRep_HintData"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MS_Line_Base.MS_Line_Base_C.IsPlayerFacing
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsPlayerFacing                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMS_Line_Base_C::IsPlayerFacing(bool* IsPlayerFacing)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MS_Line_Base.MS_Line_Base_C.IsPlayerFacing"));

	struct
	{
		bool                           IsPlayerFacing;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsPlayerFacing != nullptr)
		*IsPlayerFacing = params.IsPlayerFacing;
}


// Function MS_Line_Base.MS_Line_Base_C.CreateHintIndicator
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              RelatedTransform               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)

void UMS_Line_Base_C::CreateHintIndicator(const struct FTransform& RelatedTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MS_Line_Base.MS_Line_Base_C.CreateHintIndicator"));

	struct
	{
		struct FTransform              RelatedTransform;
	} params = {};

	params.RelatedTransform = RelatedTransform;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MS_Line_Base.MS_Line_Base_C.ClearIndicators
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMS_Line_Base_C::ClearIndicators()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MS_Line_Base.MS_Line_Base_C.ClearIndicators"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MS_Line_Base.MS_Line_Base_C.BP_ClearHindIndicator
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMS_Line_Base_C::BP_ClearHindIndicator()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MS_Line_Base.MS_Line_Base_C.BP_ClearHindIndicator"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MS_Line_Base.MS_Line_Base_C.HandleAnnouncementStopped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYAnnouncementPlayEntryData voicelineData                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// bool                           isCancelled                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMS_Line_Base_C::HandleAnnouncementStopped(const struct FYAnnouncementPlayEntryData& voicelineData, bool isCancelled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MS_Line_Base.MS_Line_Base_C.HandleAnnouncementStopped"));

	struct
	{
		struct FYAnnouncementPlayEntryData voicelineData;
		bool                           isCancelled;
	} params = {};

	params.voicelineData = voicelineData;
	params.isCancelled = isCancelled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MS_Line_Base.MS_Line_Base_C.ServerCompleteStep
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMS_Line_Base_C::ServerCompleteStep()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MS_Line_Base.MS_Line_Base_C.ServerCompleteStep"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MS_Line_Base.MS_Line_Base_C.OnSceneRemoved_ReturnButtonHighlight
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     sceneRowHandle                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UMS_Line_Base_C::OnSceneRemoved_ReturnButtonHighlight(const struct FDataTableRowHandle& sceneRowHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MS_Line_Base.MS_Line_Base_C.OnSceneRemoved_ReturnButtonHighlight"));

	struct
	{
		struct FDataTableRowHandle     sceneRowHandle;
	} params = {};

	params.sceneRowHandle = sceneRowHandle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MS_Line_Base.MS_Line_Base_C.ExecuteUbergraph_MS_Line_Base
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMS_Line_Base_C::ExecuteUbergraph_MS_Line_Base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MS_Line_Base.MS_Line_Base_C.ExecuteUbergraph_MS_Line_Base"));

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


// Function MS_Line_Base.MS_Line_Base_C.OnTutorialAnnouncementQueueEmpty__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMS_Line_Base_C::OnTutorialAnnouncementQueueEmpty__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MS_Line_Base.MS_Line_Base_C.OnTutorialAnnouncementQueueEmpty__DelegateSignature"));

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
