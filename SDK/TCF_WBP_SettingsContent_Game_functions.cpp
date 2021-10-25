// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_SettingsContent_Game_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.UpdateChatToggles
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsContent_Game_C::UpdateChatToggles()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.UpdateChatToggles");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.Provider_OnDataChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   DataName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   dataType                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsContent_Game_C::Provider_OnDataChanged(struct FName* DataName, struct FName* dataType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.Provider_OnDataChanged");

	struct
	{
		struct FName                   DataName;
		struct FName                   dataType;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (DataName != nullptr)
		*DataName = params.DataName;
	if (dataType != nullptr)
		*dataType = params.dataType;
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.UpdateLanguages
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsContent_Game_C::UpdateLanguages()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.UpdateLanguages");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.Initialize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsContent_Game_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.Initialize");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.RegisterWidgets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsContent_Game_C::RegisterWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.RegisterWidgets");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_BrazilianPortugueseChannel_K2Node_ComponentBoundEvent_1_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Game_C::BndEvt__WBP_ToggleText_Btn_BrazilianPortugueseChannel_K2Node_ComponentBoundEvent_1_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_BrazilianPortugueseChannel_K2Node_ComponentBoundEvent_1_OnToggleChanged__DelegateSignature");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_ChatEnabled_K2Node_ComponentBoundEvent_2_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Game_C::BndEvt__WBP_ToggleText_Btn_ChatEnabled_K2Node_ComponentBoundEvent_2_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_ChatEnabled_K2Node_ComponentBoundEvent_2_OnToggleChanged__DelegateSignature");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_ChineseChannel_K2Node_ComponentBoundEvent_3_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Game_C::BndEvt__WBP_ToggleText_Btn_ChineseChannel_K2Node_ComponentBoundEvent_3_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_ChineseChannel_K2Node_ComponentBoundEvent_3_OnToggleChanged__DelegateSignature");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_EnglishChannel_K2Node_ComponentBoundEvent_4_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Game_C::BndEvt__WBP_ToggleText_Btn_EnglishChannel_K2Node_ComponentBoundEvent_4_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_EnglishChannel_K2Node_ComponentBoundEvent_4_OnToggleChanged__DelegateSignature");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_FOVMovementChanges_K2Node_ComponentBoundEvent_5_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Game_C::BndEvt__WBP_ToggleText_Btn_FOVMovementChanges_K2Node_ComponentBoundEvent_5_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_FOVMovementChanges_K2Node_ComponentBoundEvent_5_OnToggleChanged__DelegateSignature");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_FrenchChannel_K2Node_ComponentBoundEvent_6_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Game_C::BndEvt__WBP_ToggleText_Btn_FrenchChannel_K2Node_ComponentBoundEvent_6_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_FrenchChannel_K2Node_ComponentBoundEvent_6_OnToggleChanged__DelegateSignature");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_GermanChannel_K2Node_ComponentBoundEvent_7_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Game_C::BndEvt__WBP_ToggleText_Btn_GermanChannel_K2Node_ComponentBoundEvent_7_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_GermanChannel_K2Node_ComponentBoundEvent_7_OnToggleChanged__DelegateSignature");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_PolishChannel_K2Node_ComponentBoundEvent_8_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Game_C::BndEvt__WBP_ToggleText_Btn_PolishChannel_K2Node_ComponentBoundEvent_8_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_PolishChannel_K2Node_ComponentBoundEvent_8_OnToggleChanged__DelegateSignature");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_RotateMinimap_K2Node_ComponentBoundEvent_9_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Game_C::BndEvt__WBP_ToggleText_Btn_RotateMinimap_K2Node_ComponentBoundEvent_9_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_RotateMinimap_K2Node_ComponentBoundEvent_9_OnToggleChanged__DelegateSignature");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_RussianChannel_K2Node_ComponentBoundEvent_10_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Game_C::BndEvt__WBP_ToggleText_Btn_RussianChannel_K2Node_ComponentBoundEvent_10_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_RussianChannel_K2Node_ComponentBoundEvent_10_OnToggleChanged__DelegateSignature");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_SpanishChannel_K2Node_ComponentBoundEvent_16_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Game_C::BndEvt__WBP_ToggleText_Btn_SpanishChannel_K2Node_ComponentBoundEvent_16_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_SpanishChannel_K2Node_ComponentBoundEvent_16_OnToggleChanged__DelegateSignature");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_Subtitles_K2Node_ComponentBoundEvent_17_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Game_C::BndEvt__WBP_ToggleText_Btn_Subtitles_K2Node_ComponentBoundEvent_17_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_Subtitles_K2Node_ComponentBoundEvent_17_OnToggleChanged__DelegateSignature");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_TurkishChannel_K2Node_ComponentBoundEvent_18_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Game_C::BndEvt__WBP_ToggleText_Btn_TurkishChannel_K2Node_ComponentBoundEvent_18_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_ToggleText_Btn_TurkishChannel_K2Node_ComponentBoundEvent_18_OnToggleChanged__DelegateSignature");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_Dropdown_Btn_Language_K2Node_ComponentBoundEvent_0_OnSelectedOptionDelegate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_DropdownBase_Btn_C* Dropdown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Option                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsContent_Game_C::BndEvt__WBP_Dropdown_Btn_Language_K2Node_ComponentBoundEvent_0_OnSelectedOptionDelegate__DelegateSignature(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.BndEvt__WBP_Dropdown_Btn_Language_K2Node_ComponentBoundEvent_0_OnSelectedOptionDelegate__DelegateSignature");

	struct
	{
		class UWBP_DropdownBase_Btn_C* Dropdown;
		struct FString                 Option;
		int                            Index;
	} params;

	params.Dropdown = Dropdown;
	params.Option = Option;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.ExecuteUbergraph_WBP_SettingsContent_Game
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsContent_Game_C::ExecuteUbergraph_WBP_SettingsContent_Game(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Game.WBP_SettingsContent_Game_C.ExecuteUbergraph_WBP_SettingsContent_Game");

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
