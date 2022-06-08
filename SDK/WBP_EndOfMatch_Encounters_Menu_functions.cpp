// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_EndOfMatch_Encounters_Menu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_EndOfMatch_Encounters_Menu.WBP_EndOfMatch_Encounters_Menu_C.SequenceEvent__ENTRYPOINTWBP_EndOfMatch_Encounters_Menu_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_EndOfMatch_Headline_C* WBP_EndOfMatch_Headline        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EndOfMatch_Encounters_Menu_C::SequenceEvent__ENTRYPOINTWBP_EndOfMatch_Encounters_Menu_1(class UWBP_EndOfMatch_Headline_C* WBP_EndOfMatch_Headline)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Encounters_Menu.WBP_EndOfMatch_Encounters_Menu_C.SequenceEvent__ENTRYPOINTWBP_EndOfMatch_Encounters_Menu_1"));

	struct
	{
		class UWBP_EndOfMatch_Headline_C* WBP_EndOfMatch_Headline;
	} params = {};

	params.WBP_EndOfMatch_Headline = WBP_EndOfMatch_Headline;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_Encounters_Menu.WBP_EndOfMatch_Encounters_Menu_C.SetStage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            stage                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EndOfMatch_Encounters_Menu_C::SetStage(int stage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Encounters_Menu.WBP_EndOfMatch_Encounters_Menu_C.SetStage"));

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


// Function WBP_EndOfMatch_Encounters_Menu.WBP_EndOfMatch_Encounters_Menu_C.WBP_EndOfMatch_Headline_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_EndOfMatch_Headline_C* WBP_EndOfMatch_Headline        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EndOfMatch_Encounters_Menu_C::WBP_EndOfMatch_Headline_Event_1(class UWBP_EndOfMatch_Headline_C* WBP_EndOfMatch_Headline)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Encounters_Menu.WBP_EndOfMatch_Encounters_Menu_C.WBP_EndOfMatch_Headline_Event_1"));

	struct
	{
		class UWBP_EndOfMatch_Headline_C* WBP_EndOfMatch_Headline;
	} params = {};

	params.WBP_EndOfMatch_Headline = WBP_EndOfMatch_Headline;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_Encounters_Menu.WBP_EndOfMatch_Encounters_Menu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_Encounters_Menu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Encounters_Menu.WBP_EndOfMatch_Encounters_Menu_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_Encounters_Menu.WBP_EndOfMatch_Encounters_Menu_C.PlayScreenInAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_Encounters_Menu_C::PlayScreenInAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Encounters_Menu.WBP_EndOfMatch_Encounters_Menu_C.PlayScreenInAnim"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_Encounters_Menu.WBP_EndOfMatch_Encounters_Menu_C.OnScreenIn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_Encounters_Menu_C::OnScreenIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Encounters_Menu.WBP_EndOfMatch_Encounters_Menu_C.OnScreenIn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_Encounters_Menu.WBP_EndOfMatch_Encounters_Menu_C.OnInviteSent_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 UsderID                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_EndOfMatch_Encounters_Menu_C::OnInviteSent_Event_1(const struct FString& UsderID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Encounters_Menu.WBP_EndOfMatch_Encounters_Menu_C.OnInviteSent_Event_1"));

	struct
	{
		struct FString                 UsderID;
	} params = {};

	params.UsderID = UsderID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_Encounters_Menu.WBP_EndOfMatch_Encounters_Menu_C.UpdateEmptyState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           HasEncountersToShow            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_EndOfMatch_Encounters_Menu_C::UpdateEmptyState(bool HasEncountersToShow)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Encounters_Menu.WBP_EndOfMatch_Encounters_Menu_C.UpdateEmptyState"));

	struct
	{
		bool                           HasEncountersToShow;
	} params = {};

	params.HasEncountersToShow = HasEncountersToShow;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_Encounters_Menu.WBP_EndOfMatch_Encounters_Menu_C.OnSentPlayerReport_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYPlayerReportSubmitData Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_EndOfMatch_Encounters_Menu_C::OnSentPlayerReport_Event_1(const struct FYPlayerReportSubmitData& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Encounters_Menu.WBP_EndOfMatch_Encounters_Menu_C.OnSentPlayerReport_Event_1"));

	struct
	{
		struct FYPlayerReportSubmitData Data;
	} params = {};

	params.Data = Data;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_Encounters_Menu.WBP_EndOfMatch_Encounters_Menu_C.HookUpReporting
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_Encounters_Menu_C::HookUpReporting()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Encounters_Menu.WBP_EndOfMatch_Encounters_Menu_C.HookUpReporting"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_Encounters_Menu.WBP_EndOfMatch_Encounters_Menu_C.BP_OnEncounterDataReceived_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYBattleLogComponent*    Component                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EndOfMatch_Encounters_Menu_C::BP_OnEncounterDataReceived_Event_1(class UYBattleLogComponent* Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Encounters_Menu.WBP_EndOfMatch_Encounters_Menu_C.BP_OnEncounterDataReceived_Event_1"));

	struct
	{
		class UYBattleLogComponent*    Component;
	} params = {};

	params.Component = Component;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_Encounters_Menu.WBP_EndOfMatch_Encounters_Menu_C.Setup
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_Encounters_Menu_C::Setup()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Encounters_Menu.WBP_EndOfMatch_Encounters_Menu_C.Setup"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_Encounters_Menu.WBP_EndOfMatch_Encounters_Menu_C.ExecuteUbergraph_WBP_EndOfMatch_Encounters_Menu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EndOfMatch_Encounters_Menu_C::ExecuteUbergraph_WBP_EndOfMatch_Encounters_Menu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Encounters_Menu.WBP_EndOfMatch_Encounters_Menu_C.ExecuteUbergraph_WBP_EndOfMatch_Encounters_Menu"));

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


// Function WBP_EndOfMatch_Encounters_Menu.WBP_EndOfMatch_Encounters_Menu_C.OnScreenOut__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_Encounters_Menu_C::OnScreenOut__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Encounters_Menu.WBP_EndOfMatch_Encounters_Menu_C.OnScreenOut__DelegateSignature"));

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
