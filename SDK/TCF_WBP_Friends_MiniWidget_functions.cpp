// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Friends_MiniWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Friends_MiniWidget.WBP_Friends_MiniWidget_C.UpdateSquadStatus
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Friends_MiniWidget_C::UpdateSquadStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Friends_MiniWidget.WBP_Friends_MiniWidget_C.UpdateSquadStatus");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Friends_MiniWidget.WBP_Friends_MiniWidget_C.OnMatchmakingSettingsUpdated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Friends_MiniWidget_C::OnMatchmakingSettingsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Friends_MiniWidget.WBP_Friends_MiniWidget_C.OnMatchmakingSettingsUpdated");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Friends_MiniWidget.WBP_Friends_MiniWidget_C.OnSquadInfoUpdated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Friends_MiniWidget_C::OnSquadInfoUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Friends_MiniWidget.WBP_Friends_MiniWidget_C.OnSquadInfoUpdated");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Friends_MiniWidget.WBP_Friends_MiniWidget_C.BndEvt__WBP_Dummy_Btn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Friends_MiniWidget_C::BndEvt__WBP_Dummy_Btn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Friends_MiniWidget.WBP_Friends_MiniWidget_C.BndEvt__WBP_Dummy_Btn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	struct
	{
		class UWBP_ButtonBase_Btn_C*   Button;
	} params;

	params.Button = Button;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Friends_MiniWidget.WBP_Friends_MiniWidget_C.BndEvt__OutpostSocialToggle_WBP_K2Node_ComponentBoundEvent_0_OnSocialToggleClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Friends_MiniWidget_C::BndEvt__OutpostSocialToggle_WBP_K2Node_ComponentBoundEvent_0_OnSocialToggleClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Friends_MiniWidget.WBP_Friends_MiniWidget_C.BndEvt__OutpostSocialToggle_WBP_K2Node_ComponentBoundEvent_0_OnSocialToggleClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Friends_MiniWidget.WBP_Friends_MiniWidget_C.BndEvt__OutpostSquadToggle_WBP_K2Node_ComponentBoundEvent_2_OnSquadToggleClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Friends_MiniWidget_C::BndEvt__OutpostSquadToggle_WBP_K2Node_ComponentBoundEvent_2_OnSquadToggleClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Friends_MiniWidget.WBP_Friends_MiniWidget_C.BndEvt__OutpostSquadToggle_WBP_K2Node_ComponentBoundEvent_2_OnSquadToggleClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Friends_MiniWidget.WBP_Friends_MiniWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Friends_MiniWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Friends_MiniWidget.WBP_Friends_MiniWidget_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Friends_MiniWidget.WBP_Friends_MiniWidget_C.OnSquadInfoUpdatedEvent
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FYOutpostFriendInfo> squadMemberInfos               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Friends_MiniWidget_C::OnSquadInfoUpdatedEvent(TArray<struct FYOutpostFriendInfo> squadMemberInfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Friends_MiniWidget.WBP_Friends_MiniWidget_C.OnSquadInfoUpdatedEvent");

	struct
	{
		TArray<struct FYOutpostFriendInfo> squadMemberInfos;
	} params;

	params.squadMemberInfos = squadMemberInfos;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Friends_MiniWidget.WBP_Friends_MiniWidget_C.ExecuteUbergraph_WBP_Friends_MiniWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Friends_MiniWidget_C::ExecuteUbergraph_WBP_Friends_MiniWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Friends_MiniWidget.WBP_Friends_MiniWidget_C.ExecuteUbergraph_WBP_Friends_MiniWidget");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Friends_MiniWidget.WBP_Friends_MiniWidget_C.WidgetClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Friends_MiniWidget_C::WidgetClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Friends_MiniWidget.WBP_Friends_MiniWidget_C.WidgetClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
