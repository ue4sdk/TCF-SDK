// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_SquadOverview_Entry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.SetReadyStateVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SquadOverview_Entry_C::SetReadyStateVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.SetReadyStateVisibility");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.OnMatchmakingSettingsUpdated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SquadOverview_Entry_C::OnMatchmakingSettingsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.OnMatchmakingSettingsUpdated");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.Get_ToolTipWidget_Player
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UWBP_SquadOverview_Entry_C::Get_ToolTipWidget_Player()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.Get_ToolTipWidget_Player");

	struct
	{
		class UWidget*                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.Get_ToolTipWidget_Add
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UWBP_SquadOverview_Entry_C::Get_ToolTipWidget_Add()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.Get_ToolTipWidget_Add");

	struct
	{
		class UWidget*                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.BP_NotifyDataSetup
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   playerName                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_SquadOverview_Entry_C::BP_NotifyDataSetup(const struct FText& playerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.BP_NotifyDataSetup");

	struct
	{
		struct FText                   playerName;
	} params;

	params.playerName = playerName;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.BndEvt__m_addMemberButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_SquadOverview_Entry_C::BndEvt__m_addMemberButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.BndEvt__m_addMemberButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.BndEvt__m_addMemberButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_SquadOverview_Entry_C::BndEvt__m_addMemberButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.BndEvt__m_addMemberButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SquadOverview_Entry_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.BP_NotifyPlayerBound
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 PlayerId                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_SquadOverview_Entry_C::BP_NotifyPlayerBound(const struct FString& PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.BP_NotifyPlayerBound");

	struct
	{
		struct FString                 PlayerId;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.BndEvt__m_addMemberButton_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_SquadOverview_Entry_C::BndEvt__m_addMemberButton_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.BndEvt__m_addMemberButton_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.BndEvt__m_addMemberButton_K2Node_ComponentBoundEvent_50_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_SquadOverview_Entry_C::BndEvt__m_addMemberButton_K2Node_ComponentBoundEvent_50_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.BndEvt__m_addMemberButton_K2Node_ComponentBoundEvent_50_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.BndEvt__m_squadMemberButton_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_SquadOverview_Entry_C::BndEvt__m_squadMemberButton_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.BndEvt__m_squadMemberButton_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_SquadOverview_Entry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.BndEvt__m_squadMemberButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_SquadOverview_Entry_C::BndEvt__m_squadMemberButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.BndEvt__m_squadMemberButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.ExecuteUbergraph_WBP_SquadOverview_Entry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SquadOverview_Entry_C::ExecuteUbergraph_WBP_SquadOverview_Entry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SquadOverview_Entry.WBP_SquadOverview_Entry_C.ExecuteUbergraph_WBP_SquadOverview_Entry");

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
