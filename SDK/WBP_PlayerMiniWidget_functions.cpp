// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_PlayerMiniWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PlayerMiniWidget.WBP_PlayerMiniWidget_C.SequenceEvent__ENTRYPOINTWBP_PlayerMiniWidget_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerMiniWidget_C::SequenceEvent__ENTRYPOINTWBP_PlayerMiniWidget_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerMiniWidget.WBP_PlayerMiniWidget_C.SequenceEvent__ENTRYPOINTWBP_PlayerMiniWidget_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_PlayerMiniWidget.WBP_PlayerMiniWidget_C.Update Faction Level
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYPlayerFactionProgressionUIData uiData                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_PlayerMiniWidget_C::Update_Faction_Level(const struct FYPlayerFactionProgressionUIData& uiData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerMiniWidget.WBP_PlayerMiniWidget_C.Update Faction Level"));

	struct
	{
		struct FYPlayerFactionProgressionUIData uiData;
	} params = {};

	params.uiData = uiData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_PlayerMiniWidget.WBP_PlayerMiniWidget_C.Bind Events After Player Init Without Character Customization
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYRuntimeInitializationContext Result                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_PlayerMiniWidget_C::Bind_Events_After_Player_Init_Without_Character_Customization(const struct FYRuntimeInitializationContext& Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerMiniWidget.WBP_PlayerMiniWidget_C.Bind Events After Player Init Without Character Customization"));

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


// Function WBP_PlayerMiniWidget.WBP_PlayerMiniWidget_C.On Social Profile Updated
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYProspectorLevelData   YProspectorLevelData           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UWBP_PlayerMiniWidget_C::On_Social_Profile_Updated(const struct FYProspectorLevelData& YProspectorLevelData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerMiniWidget.WBP_PlayerMiniWidget_C.On Social Profile Updated"));

	struct
	{
		struct FYProspectorLevelData   YProspectorLevelData;
	} params = {};

	params.YProspectorLevelData = YProspectorLevelData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_PlayerMiniWidget.WBP_PlayerMiniWidget_C.BP_SetPlayerName
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   playerName                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_PlayerMiniWidget_C::BP_SetPlayerName(const struct FText& playerName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerMiniWidget.WBP_PlayerMiniWidget_C.BP_SetPlayerName"));

	struct
	{
		struct FText                   playerName;
	} params = {};

	params.playerName = playerName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_PlayerMiniWidget.WBP_PlayerMiniWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PlayerMiniWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerMiniWidget.WBP_PlayerMiniWidget_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_PlayerMiniWidget.WBP_PlayerMiniWidget_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerMiniWidget_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerMiniWidget.WBP_PlayerMiniWidget_C.PreConstruct"));

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


// Function WBP_PlayerMiniWidget.WBP_PlayerMiniWidget_C.BP_OnSocialProfileUpdated
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FYProspectorLevelData   playerProfileData              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UWBP_PlayerMiniWidget_C::BP_OnSocialProfileUpdated(const struct FYProspectorLevelData& playerProfileData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerMiniWidget.WBP_PlayerMiniWidget_C.BP_OnSocialProfileUpdated"));

	struct
	{
		struct FYProspectorLevelData   playerProfileData;
	} params = {};

	params.playerProfileData = playerProfileData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_PlayerMiniWidget.WBP_PlayerMiniWidget_C.BndEvt__WBP_Dummy_Btn_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_PlayerMiniWidget_C::BndEvt__WBP_Dummy_Btn_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerMiniWidget.WBP_PlayerMiniWidget_C.BndEvt__WBP_Dummy_Btn_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_PlayerMiniWidget.WBP_PlayerMiniWidget_C.BndEvt__WBP_Dummy_Btn_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_PlayerMiniWidget_C::BndEvt__WBP_Dummy_Btn_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerMiniWidget.WBP_PlayerMiniWidget_C.BndEvt__WBP_Dummy_Btn_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_PlayerMiniWidget.WBP_PlayerMiniWidget_C.TriggerAnimSheen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerMiniWidget_C::TriggerAnimSheen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerMiniWidget.WBP_PlayerMiniWidget_C.TriggerAnimSheen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_PlayerMiniWidget.WBP_PlayerMiniWidget_C.BndEvt__WBP_PlayerMiniWidget_WBP_Common_Simple_Btn_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerMiniWidget_C::BndEvt__WBP_PlayerMiniWidget_WBP_Common_Simple_Btn_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerMiniWidget.WBP_PlayerMiniWidget_C.BndEvt__WBP_PlayerMiniWidget_WBP_Common_Simple_Btn_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature"));

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


// Function WBP_PlayerMiniWidget.WBP_PlayerMiniWidget_C.ExecuteUbergraph_WBP_PlayerMiniWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerMiniWidget_C::ExecuteUbergraph_WBP_PlayerMiniWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerMiniWidget.WBP_PlayerMiniWidget_C.ExecuteUbergraph_WBP_PlayerMiniWidget"));

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


// Function WBP_PlayerMiniWidget.WBP_PlayerMiniWidget_C.OnButtonClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerMiniWidget_C::OnButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerMiniWidget.WBP_PlayerMiniWidget_C.OnButtonClicked__DelegateSignature"));

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
