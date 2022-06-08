// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_SettingsContent_Game_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.UpdateNotificationToggles
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Data_Name                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsContent_Game_C::UpdateNotificationToggles(const struct FName& Data_Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.UpdateNotificationToggles"));

	struct
	{
		struct FName                   Data_Name;
	} params = {};

	params.Data_Name = Data_Name;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.UpdateChatToggles
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsContent_Game_C::UpdateChatToggles()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.UpdateChatToggles"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.Provider_OnDataChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   DataName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   dataType                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsContent_Game_C::Provider_OnDataChanged(struct FName* DataName, struct FName* dataType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.Provider_OnDataChanged"));

	struct
	{
		struct FName                   DataName;
		struct FName                   dataType;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (DataName != nullptr)
		*DataName = params.DataName;
	if (dataType != nullptr)
		*dataType = params.dataType;
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.UpdateLanguages
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsContent_Game_C::UpdateLanguages()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.UpdateLanguages"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.Initialize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsContent_Game_C::Initialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.Initialize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.RegisterWidgets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsContent_Game_C::RegisterWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.RegisterWidgets"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_BrazilianPortugueseChannel_K2Node_ComponentBoundEvent_1_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Game_C::BndEvt__WBP_ToggleText_Btn_BrazilianPortugueseChannel_K2Node_ComponentBoundEvent_1_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_BrazilianPortugueseChannel_K2Node_ComponentBoundEvent_1_OnToggleChanged__DelegateSignature"));

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           Toggled;
	} params = {};

	params.Toggle = Toggle;
	params.Toggled = Toggled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_ChatEnabled_K2Node_ComponentBoundEvent_2_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Game_C::BndEvt__WBP_ToggleText_Btn_ChatEnabled_K2Node_ComponentBoundEvent_2_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_ChatEnabled_K2Node_ComponentBoundEvent_2_OnToggleChanged__DelegateSignature"));

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           Toggled;
	} params = {};

	params.Toggle = Toggle;
	params.Toggled = Toggled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_ChineseChannel_K2Node_ComponentBoundEvent_3_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Game_C::BndEvt__WBP_ToggleText_Btn_ChineseChannel_K2Node_ComponentBoundEvent_3_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_ChineseChannel_K2Node_ComponentBoundEvent_3_OnToggleChanged__DelegateSignature"));

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           Toggled;
	} params = {};

	params.Toggle = Toggle;
	params.Toggled = Toggled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_EnglishChannel_K2Node_ComponentBoundEvent_4_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Game_C::BndEvt__WBP_ToggleText_Btn_EnglishChannel_K2Node_ComponentBoundEvent_4_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_EnglishChannel_K2Node_ComponentBoundEvent_4_OnToggleChanged__DelegateSignature"));

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           Toggled;
	} params = {};

	params.Toggle = Toggle;
	params.Toggled = Toggled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_FOVMovementChanges_K2Node_ComponentBoundEvent_5_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Game_C::BndEvt__WBP_ToggleText_Btn_FOVMovementChanges_K2Node_ComponentBoundEvent_5_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_FOVMovementChanges_K2Node_ComponentBoundEvent_5_OnToggleChanged__DelegateSignature"));

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           Toggled;
	} params = {};

	params.Toggle = Toggle;
	params.Toggled = Toggled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_FrenchChannel_K2Node_ComponentBoundEvent_6_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Game_C::BndEvt__WBP_ToggleText_Btn_FrenchChannel_K2Node_ComponentBoundEvent_6_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_FrenchChannel_K2Node_ComponentBoundEvent_6_OnToggleChanged__DelegateSignature"));

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           Toggled;
	} params = {};

	params.Toggle = Toggle;
	params.Toggled = Toggled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_GermanChannel_K2Node_ComponentBoundEvent_7_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Game_C::BndEvt__WBP_ToggleText_Btn_GermanChannel_K2Node_ComponentBoundEvent_7_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_GermanChannel_K2Node_ComponentBoundEvent_7_OnToggleChanged__DelegateSignature"));

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           Toggled;
	} params = {};

	params.Toggle = Toggle;
	params.Toggled = Toggled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_PolishChannel_K2Node_ComponentBoundEvent_8_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Game_C::BndEvt__WBP_ToggleText_Btn_PolishChannel_K2Node_ComponentBoundEvent_8_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_PolishChannel_K2Node_ComponentBoundEvent_8_OnToggleChanged__DelegateSignature"));

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           Toggled;
	} params = {};

	params.Toggle = Toggle;
	params.Toggled = Toggled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_RotateMinimap_K2Node_ComponentBoundEvent_9_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Game_C::BndEvt__WBP_ToggleText_Btn_RotateMinimap_K2Node_ComponentBoundEvent_9_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_RotateMinimap_K2Node_ComponentBoundEvent_9_OnToggleChanged__DelegateSignature"));

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           Toggled;
	} params = {};

	params.Toggle = Toggle;
	params.Toggled = Toggled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_RussianChannel_K2Node_ComponentBoundEvent_10_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Game_C::BndEvt__WBP_ToggleText_Btn_RussianChannel_K2Node_ComponentBoundEvent_10_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_RussianChannel_K2Node_ComponentBoundEvent_10_OnToggleChanged__DelegateSignature"));

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           Toggled;
	} params = {};

	params.Toggle = Toggle;
	params.Toggled = Toggled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_SpanishChannel_K2Node_ComponentBoundEvent_16_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Game_C::BndEvt__WBP_ToggleText_Btn_SpanishChannel_K2Node_ComponentBoundEvent_16_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_SpanishChannel_K2Node_ComponentBoundEvent_16_OnToggleChanged__DelegateSignature"));

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           Toggled;
	} params = {};

	params.Toggle = Toggle;
	params.Toggled = Toggled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_Subtitles_K2Node_ComponentBoundEvent_17_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Game_C::BndEvt__WBP_ToggleText_Btn_Subtitles_K2Node_ComponentBoundEvent_17_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_Subtitles_K2Node_ComponentBoundEvent_17_OnToggleChanged__DelegateSignature"));

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           Toggled;
	} params = {};

	params.Toggle = Toggle;
	params.Toggled = Toggled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_TurkishChannel_K2Node_ComponentBoundEvent_18_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Game_C::BndEvt__WBP_ToggleText_Btn_TurkishChannel_K2Node_ComponentBoundEvent_18_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_TurkishChannel_K2Node_ComponentBoundEvent_18_OnToggleChanged__DelegateSignature"));

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           Toggled;
	} params = {};

	params.Toggle = Toggle;
	params.Toggled = Toggled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_Dropdown_Btn_Language_K2Node_ComponentBoundEvent_0_OnSelectedOptionDelegate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_DropdownBase_Btn_C* Dropdown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Option                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsContent_Game_C::BndEvt__WBP_Dropdown_Btn_Language_K2Node_ComponentBoundEvent_0_OnSelectedOptionDelegate__DelegateSignature(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_Dropdown_Btn_Language_K2Node_ComponentBoundEvent_0_OnSelectedOptionDelegate__DelegateSignature"));

	struct
	{
		class UWBP_DropdownBase_Btn_C* Dropdown;
		struct FString                 Option;
		int                            Index;
	} params = {};

	params.Dropdown = Dropdown;
	params.Option = Option;
	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_SettingsContent_Game_WBP_ToggleText_Btn_Subtitles_1_K2Node_ComponentBoundEvent_11_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Game_C::BndEvt__WBP_SettingsContent_Game_WBP_ToggleText_Btn_Subtitles_1_K2Node_ComponentBoundEvent_11_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_SettingsContent_Game_WBP_ToggleText_Btn_Subtitles_1_K2Node_ComponentBoundEvent_11_OnToggleChanged__DelegateSignature"));

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           Toggled;
	} params = {};

	params.Toggle = Toggle;
	params.Toggled = Toggled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_SettingsContent_Game_WBP_ToggleText_Btn_Subtitles_2_K2Node_ComponentBoundEvent_12_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Game_C::BndEvt__WBP_SettingsContent_Game_WBP_ToggleText_Btn_Subtitles_2_K2Node_ComponentBoundEvent_12_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_SettingsContent_Game_WBP_ToggleText_Btn_Subtitles_2_K2Node_ComponentBoundEvent_12_OnToggleChanged__DelegateSignature"));

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           Toggled;
	} params = {};

	params.Toggle = Toggle;
	params.Toggled = Toggled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_SettingsContent_Game_WBP_ToggleText_Btn_NotificationsPlayerQuarters_1_K2Node_ComponentBoundEvent_13_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Game_C::BndEvt__WBP_SettingsContent_Game_WBP_ToggleText_Btn_NotificationsPlayerQuarters_1_K2Node_ComponentBoundEvent_13_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_SettingsContent_Game_WBP_ToggleText_Btn_NotificationsPlayerQuarters_1_K2Node_ComponentBoundEvent_13_OnToggleChanged__DelegateSignature"));

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           Toggled;
	} params = {};

	params.Toggle = Toggle;
	params.Toggled = Toggled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_SettingsContent_Game_WBP_ToggleText_Btn_NotificationsPlayerQuarters_2_K2Node_ComponentBoundEvent_14_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Game_C::BndEvt__WBP_SettingsContent_Game_WBP_ToggleText_Btn_NotificationsPlayerQuarters_2_K2Node_ComponentBoundEvent_14_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_SettingsContent_Game_WBP_ToggleText_Btn_NotificationsPlayerQuarters_2_K2Node_ComponentBoundEvent_14_OnToggleChanged__DelegateSignature"));

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           Toggled;
	} params = {};

	params.Toggle = Toggle;
	params.Toggled = Toggled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_SettingsContent_Game_WBP_ToggleText_Btn_NotificationsPlayerQuarters_3_K2Node_ComponentBoundEvent_15_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Game_C::BndEvt__WBP_SettingsContent_Game_WBP_ToggleText_Btn_NotificationsPlayerQuarters_3_K2Node_ComponentBoundEvent_15_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_SettingsContent_Game_WBP_ToggleText_Btn_NotificationsPlayerQuarters_3_K2Node_ComponentBoundEvent_15_OnToggleChanged__DelegateSignature"));

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           Toggled;
	} params = {};

	params.Toggle = Toggle;
	params.Toggled = Toggled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_SettingsContent_Game_WBP_ToggleText_Btn_NotificationsPlayerQuarters_4_K2Node_ComponentBoundEvent_19_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Game_C::BndEvt__WBP_SettingsContent_Game_WBP_ToggleText_Btn_NotificationsPlayerQuarters_4_K2Node_ComponentBoundEvent_19_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_SettingsContent_Game_WBP_ToggleText_Btn_NotificationsPlayerQuarters_4_K2Node_ComponentBoundEvent_19_OnToggleChanged__DelegateSignature"));

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           Toggled;
	} params = {};

	params.Toggle = Toggle;
	params.Toggled = Toggled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_SettingsContent_Game_WBP_ToggleText_Btn_NotificationsPlayerQuarters_5_K2Node_ComponentBoundEvent_20_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Game_C::BndEvt__WBP_SettingsContent_Game_WBP_ToggleText_Btn_NotificationsPlayerQuarters_5_K2Node_ComponentBoundEvent_20_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_SettingsContent_Game_WBP_ToggleText_Btn_NotificationsPlayerQuarters_5_K2Node_ComponentBoundEvent_20_OnToggleChanged__DelegateSignature"));

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           Toggled;
	} params = {};

	params.Toggle = Toggle;
	params.Toggled = Toggled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.ExecuteUbergraph_WBP_SettingsContent_Game
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsContent_Game_C::ExecuteUbergraph_WBP_SettingsContent_Game(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.ExecuteUbergraph_WBP_SettingsContent_Game"));

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
