// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_PlayerCharacterPlate_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.SetProspectorLevelData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 playerName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerCharacterPlate_C::SetProspectorLevelData(const struct FString& playerName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.SetProspectorLevelData"));

	struct
	{
		struct FString                 playerName;
	} params = {};

	params.playerName = playerName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_PlayerCharacterPlate_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.BP_AnimateVisibility"));

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params = {};

	params.newVisibility = newVisibility;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PlayerCharacterPlate_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.BP_OnInviteStatusChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_PlayerCharacterPlate_C::BP_OnInviteStatusChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.BP_OnInviteStatusChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.BP_OnIsOnScreenUpdated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_PlayerCharacterPlate_C::BP_OnIsOnScreenUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.BP_OnIsOnScreenUpdated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.BP_InitializeFor
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PlayerCharacterPlate_C::BP_InitializeFor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.BP_InitializeFor"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.BP_OnAssociatedPlayerState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerState*           PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerCharacterPlate_C::BP_OnAssociatedPlayerState(class AYPlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.BP_OnAssociatedPlayerState"));

	struct
	{
		class AYPlayerState*           PlayerState;
	} params = {};

	params.PlayerState = PlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.OnPlayerStateAssigned
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerCharacterPlate_C::OnPlayerStateAssigned()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.OnPlayerStateAssigned"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.RefreshNameAndColor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerCharacterPlate_C::RefreshNameAndColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.RefreshNameAndColor"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.RefreshInviteStatus
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerCharacterPlate_C::RefreshInviteStatus()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.RefreshInviteStatus"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.SetNameColor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Specified_Color                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerCharacterPlate_C::SetNameColor(const struct FLinearColor& Specified_Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.SetNameColor"));

	struct
	{
		struct FLinearColor            Specified_Color;
	} params = {};

	params.Specified_Color = Specified_Color;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.BP_OnDBNOStatusChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           isInDBNO                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerCharacterPlate_C::BP_OnDBNOStatusChanged(bool isInDBNO)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.BP_OnDBNOStatusChanged"));

	struct
	{
		bool                           isInDBNO;
	} params = {};

	params.isInDBNO = isInDBNO;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.BP_OnRemoveWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PlayerCharacterPlate_C::BP_OnRemoveWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.BP_OnRemoveWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.BP_OnHighlightStateChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           newState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerCharacterPlate_C::BP_OnHighlightStateChanged(bool newState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.BP_OnHighlightStateChanged"));

	struct
	{
		bool                           newState;
	} params = {};

	params.newState = newState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.OnTeamInfoInitialized
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           success                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerCharacterPlate_C::OnTeamInfoInitialized(bool success)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.OnTeamInfoInitialized"));

	struct
	{
		bool                           success;
	} params = {};

	params.success = success;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.OffScreenTeamInfoInitialized
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           success                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerCharacterPlate_C::OffScreenTeamInfoInitialized(bool success)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.OffScreenTeamInfoInitialized"));

	struct
	{
		bool                           success;
	} params = {};

	params.success = success;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.BP_HandleDisplayedElements
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_PlayerCharacterPlate_C::BP_HandleDisplayedElements()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.BP_HandleDisplayedElements"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.SetHealthBarVis
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               InVisibility                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerCharacterPlate_C::SetHealthBarVis(ESlateVisibility InVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.SetHealthBarVis"));

	struct
	{
		ESlateVisibility               InVisibility;
	} params = {};

	params.InVisibility = InVisibility;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerCharacterPlate_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.SetSocialVis
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               InVisibility                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerCharacterPlate_C::SetSocialVis(ESlateVisibility InVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.SetSocialVis"));

	struct
	{
		ESlateVisibility               InVisibility;
	} params = {};

	params.InVisibility = InVisibility;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.BP_OnUserInfoUpdated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_PlayerCharacterPlate_C::BP_OnUserInfoUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.BP_OnUserInfoUpdated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.UpdateDistance
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerCharacterPlate_C::UpdateDistance()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.UpdateDistance"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PlayerCharacterPlate_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.OnInteractionDetected
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYPlayerInteraction     interactionData                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)
// bool                           detected                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerCharacterPlate_C::OnInteractionDetected(const struct FYPlayerInteraction& interactionData, bool detected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.OnInteractionDetected"));

	struct
	{
		struct FYPlayerInteraction     interactionData;
		bool                           detected;
	} params = {};

	params.interactionData = interactionData;
	params.detected = detected;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.ExecuteUbergraph_WBP_PlayerCharacterPlate
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerCharacterPlate_C::ExecuteUbergraph_WBP_PlayerCharacterPlate(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerCharacterPlate.WBP_PlayerCharacterPlate_C.ExecuteUbergraph_WBP_PlayerCharacterPlate"));

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
