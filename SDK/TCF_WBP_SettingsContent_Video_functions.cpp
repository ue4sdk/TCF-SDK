// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_SettingsContent_Video_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.UpdateDLSS
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsContent_Video_C::UpdateDLSS()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.UpdateDLSS");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.UpdateRegisteredWidgets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsContent_Video_C::UpdateRegisteredWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.UpdateRegisteredWidgets");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.UpdateAutoDetect
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsContent_Video_C::UpdateAutoDetect()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.UpdateAutoDetect");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.UpdateColorblindMode
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsContent_Video_C::UpdateColorblindMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.UpdateColorblindMode");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.Initialize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsContent_Video_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.Initialize");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.UpdateFullscreenMode
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsContent_Video_C::UpdateFullscreenMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.UpdateFullscreenMode");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.Provider_OnDataChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   DataName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   dataType                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsContent_Video_C::Provider_OnDataChanged(struct FName* DataName, struct FName* dataType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.Provider_OnDataChanged");

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


// Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.UpdateResolutions
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsContent_Video_C::UpdateResolutions()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.UpdateResolutions");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.RegisterWidgets
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsContent_Video_C::RegisterWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.RegisterWidgets");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.GetGfxQualityLevelName
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EYGfxQualityPreset             Preset                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Output                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsContent_Video_C::GetGfxQualityLevelName(EYGfxQualityPreset Preset, struct FString* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.GetGfxQualityLevelName");

	struct
	{
		EYGfxQualityPreset             Preset;
		struct FString                 Output;
	} params;

	params.Preset = Preset;

	UObject::ProcessEvent(fn, &params);

	if (Output != nullptr)
		*Output = params.Output;
}


// Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_ToggleText_Btn_145_K2Node_ComponentBoundEvent_2_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Video_C::BndEvt__WBP_ToggleText_Btn_145_K2Node_ComponentBoundEvent_2_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_ToggleText_Btn_145_K2Node_ComponentBoundEvent_2_OnToggleChanged__DelegateSignature");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_ToggleText_Btn_247_K2Node_ComponentBoundEvent_3_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Video_C::BndEvt__WBP_ToggleText_Btn_247_K2Node_ComponentBoundEvent_3_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_ToggleText_Btn_247_K2Node_ComponentBoundEvent_3_OnToggleChanged__DelegateSignature");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_ToggleText_Btn_297_K2Node_ComponentBoundEvent_4_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Video_C::BndEvt__WBP_ToggleText_Btn_297_K2Node_ComponentBoundEvent_4_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_ToggleText_Btn_297_K2Node_ComponentBoundEvent_4_OnToggleChanged__DelegateSignature");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_ToggleText_Btn_450_K2Node_ComponentBoundEvent_5_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Video_C::BndEvt__WBP_ToggleText_Btn_450_K2Node_ComponentBoundEvent_5_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_ToggleText_Btn_450_K2Node_ComponentBoundEvent_5_OnToggleChanged__DelegateSignature");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_ToggleText_Btn_556_K2Node_ComponentBoundEvent_6_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Video_C::BndEvt__WBP_ToggleText_Btn_556_K2Node_ComponentBoundEvent_6_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_ToggleText_Btn_556_K2Node_ComponentBoundEvent_6_OnToggleChanged__DelegateSignature");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_ToggleText_Btn_67_K2Node_ComponentBoundEvent_1_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Video_C::BndEvt__WBP_ToggleText_Btn_67_K2Node_ComponentBoundEvent_1_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_ToggleText_Btn_67_K2Node_ComponentBoundEvent_1_OnToggleChanged__DelegateSignature");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_Dropdown_Btn_Antialiasing_K2Node_ComponentBoundEvent_7_OnSelectedOptionDelegate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_DropdownBase_Btn_C* Dropdown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Option                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsContent_Video_C::BndEvt__WBP_Dropdown_Btn_Antialiasing_K2Node_ComponentBoundEvent_7_OnSelectedOptionDelegate__DelegateSignature(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_Dropdown_Btn_Antialiasing_K2Node_ComponentBoundEvent_7_OnSelectedOptionDelegate__DelegateSignature");

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


// Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_Dropdown_Btn_ColorblindMode_K2Node_ComponentBoundEvent_8_OnSelectedOptionDelegate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_DropdownBase_Btn_C* Dropdown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Option                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsContent_Video_C::BndEvt__WBP_Dropdown_Btn_ColorblindMode_K2Node_ComponentBoundEvent_8_OnSelectedOptionDelegate__DelegateSignature(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_Dropdown_Btn_ColorblindMode_K2Node_ComponentBoundEvent_8_OnSelectedOptionDelegate__DelegateSignature");

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


// Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_Dropdown_Btn_Foliage_K2Node_ComponentBoundEvent_9_OnSelectedOptionDelegate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_DropdownBase_Btn_C* Dropdown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Option                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsContent_Video_C::BndEvt__WBP_Dropdown_Btn_Foliage_K2Node_ComponentBoundEvent_9_OnSelectedOptionDelegate__DelegateSignature(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_Dropdown_Btn_Foliage_K2Node_ComponentBoundEvent_9_OnSelectedOptionDelegate__DelegateSignature");

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


// Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_Dropdown_Btn_FullscreenMode_K2Node_ComponentBoundEvent_10_OnSelectedOptionDelegate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_DropdownBase_Btn_C* Dropdown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Option                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsContent_Video_C::BndEvt__WBP_Dropdown_Btn_FullscreenMode_K2Node_ComponentBoundEvent_10_OnSelectedOptionDelegate__DelegateSignature(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_Dropdown_Btn_FullscreenMode_K2Node_ComponentBoundEvent_10_OnSelectedOptionDelegate__DelegateSignature");

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


// Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_Dropdown_Btn_Postprocess_K2Node_ComponentBoundEvent_11_OnSelectedOptionDelegate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_DropdownBase_Btn_C* Dropdown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Option                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsContent_Video_C::BndEvt__WBP_Dropdown_Btn_Postprocess_K2Node_ComponentBoundEvent_11_OnSelectedOptionDelegate__DelegateSignature(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_Dropdown_Btn_Postprocess_K2Node_ComponentBoundEvent_11_OnSelectedOptionDelegate__DelegateSignature");

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


// Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_Dropdown_Btn_Resolution_K2Node_ComponentBoundEvent_12_OnSelectedOptionDelegate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_DropdownBase_Btn_C* Dropdown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Option                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsContent_Video_C::BndEvt__WBP_Dropdown_Btn_Resolution_K2Node_ComponentBoundEvent_12_OnSelectedOptionDelegate__DelegateSignature(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_Dropdown_Btn_Resolution_K2Node_ComponentBoundEvent_12_OnSelectedOptionDelegate__DelegateSignature");

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


// Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_Dropdown_Btn_Shadow_K2Node_ComponentBoundEvent_13_OnSelectedOptionDelegate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_DropdownBase_Btn_C* Dropdown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Option                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsContent_Video_C::BndEvt__WBP_Dropdown_Btn_Shadow_K2Node_ComponentBoundEvent_13_OnSelectedOptionDelegate__DelegateSignature(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_Dropdown_Btn_Shadow_K2Node_ComponentBoundEvent_13_OnSelectedOptionDelegate__DelegateSignature");

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


// Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_Dropdown_Btn_Texture_K2Node_ComponentBoundEvent_14_OnSelectedOptionDelegate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_DropdownBase_Btn_C* Dropdown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Option                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsContent_Video_C::BndEvt__WBP_Dropdown_Btn_Texture_K2Node_ComponentBoundEvent_14_OnSelectedOptionDelegate__DelegateSignature(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_Dropdown_Btn_Texture_K2Node_ComponentBoundEvent_14_OnSelectedOptionDelegate__DelegateSignature");

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


// Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_Dropdown_Btn_ViewDistance_K2Node_ComponentBoundEvent_15_OnSelectedOptionDelegate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_DropdownBase_Btn_C* Dropdown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Option                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsContent_Video_C::BndEvt__WBP_Dropdown_Btn_ViewDistance_K2Node_ComponentBoundEvent_15_OnSelectedOptionDelegate__DelegateSignature(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_Dropdown_Btn_ViewDistance_K2Node_ComponentBoundEvent_15_OnSelectedOptionDelegate__DelegateSignature");

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


// Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_Dropdown_Btn_VisualEffects_K2Node_ComponentBoundEvent_16_OnSelectedOptionDelegate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_DropdownBase_Btn_C* Dropdown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Option                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsContent_Video_C::BndEvt__WBP_Dropdown_Btn_VisualEffects_K2Node_ComponentBoundEvent_16_OnSelectedOptionDelegate__DelegateSignature(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_Dropdown_Btn_VisualEffects_K2Node_ComponentBoundEvent_16_OnSelectedOptionDelegate__DelegateSignature");

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


// Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_Dropdown_VideoQuality_Btn_K2Node_ComponentBoundEvent_17_OnSelectedOptionDelegate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_DropdownBase_Btn_C* Dropdown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Option                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsContent_Video_C::BndEvt__WBP_Dropdown_VideoQuality_Btn_K2Node_ComponentBoundEvent_17_OnSelectedOptionDelegate__DelegateSignature(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_Dropdown_VideoQuality_Btn_K2Node_ComponentBoundEvent_17_OnSelectedOptionDelegate__DelegateSignature");

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


// Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_ToggleText_Btn_K2Node_ComponentBoundEvent_0_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContent_Video_C::BndEvt__WBP_ToggleText_Btn_K2Node_ComponentBoundEvent_0_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_ToggleText_Btn_K2Node_ComponentBoundEvent_0_OnToggleChanged__DelegateSignature");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_Selector_Btn_ColorblindIntensity_K2Node_ComponentBoundEvent_18_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Selector_Btn_C*     selector                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FStructure_SelectorData Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_SettingsContent_Video_C::BndEvt__WBP_Selector_Btn_ColorblindIntensity_K2Node_ComponentBoundEvent_18_OnValueChanged__DelegateSignature(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_Selector_Btn_ColorblindIntensity_K2Node_ComponentBoundEvent_18_OnValueChanged__DelegateSignature");

	struct
	{
		class UWBP_Selector_Btn_C*     selector;
		struct FStructure_SelectorData Value;
	} params;

	params.selector = selector;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_Selector_Btn_Fov_K2Node_ComponentBoundEvent_19_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Selector_Btn_C*     selector                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FStructure_SelectorData Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_SettingsContent_Video_C::BndEvt__WBP_Selector_Btn_Fov_K2Node_ComponentBoundEvent_19_OnValueChanged__DelegateSignature(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_Selector_Btn_Fov_K2Node_ComponentBoundEvent_19_OnValueChanged__DelegateSignature");

	struct
	{
		class UWBP_Selector_Btn_C*     selector;
		struct FStructure_SelectorData Value;
	} params;

	params.selector = selector;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_Selector_Btn_Gamma_K2Node_ComponentBoundEvent_20_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Selector_Btn_C*     selector                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FStructure_SelectorData Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_SettingsContent_Video_C::BndEvt__WBP_Selector_Btn_Gamma_K2Node_ComponentBoundEvent_20_OnValueChanged__DelegateSignature(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_Selector_Btn_Gamma_K2Node_ComponentBoundEvent_20_OnValueChanged__DelegateSignature");

	struct
	{
		class UWBP_Selector_Btn_C*     selector;
		struct FStructure_SelectorData Value;
	} params;

	params.selector = selector;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_Selector_Btn_MaxFps_K2Node_ComponentBoundEvent_21_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Selector_Btn_C*     selector                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FStructure_SelectorData Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_SettingsContent_Video_C::BndEvt__WBP_Selector_Btn_MaxFps_K2Node_ComponentBoundEvent_21_OnValueChanged__DelegateSignature(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_Selector_Btn_MaxFps_K2Node_ComponentBoundEvent_21_OnValueChanged__DelegateSignature");

	struct
	{
		class UWBP_Selector_Btn_C*     selector;
		struct FStructure_SelectorData Value;
	} params;

	params.selector = selector;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_Selector_Btn_ResolutionQuality_K2Node_ComponentBoundEvent_22_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Selector_Btn_C*     selector                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FStructure_SelectorData Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_SettingsContent_Video_C::BndEvt__WBP_Selector_Btn_ResolutionQuality_K2Node_ComponentBoundEvent_22_OnValueChanged__DelegateSignature(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_Selector_Btn_ResolutionQuality_K2Node_ComponentBoundEvent_22_OnValueChanged__DelegateSignature");

	struct
	{
		class UWBP_Selector_Btn_C*     selector;
		struct FStructure_SelectorData Value;
	} params;

	params.selector = selector;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_SettingsContent_Video_WBP_Selector_Btn_ApplicationScale_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Selector_Btn_C*     selector                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FStructure_SelectorData Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_SettingsContent_Video_C::BndEvt__WBP_SettingsContent_Video_WBP_Selector_Btn_ApplicationScale_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_SettingsContent_Video_WBP_Selector_Btn_ApplicationScale_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature");

	struct
	{
		class UWBP_Selector_Btn_C*     selector;
		struct FStructure_SelectorData Value;
	} params;

	params.selector = selector;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_SettingsContent_Video_WBP_Dropdown_Btn_DLSSMode_K2Node_ComponentBoundEvent_24_OnSelectedOptionDelegate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_DropdownBase_Btn_C* Dropdown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Option                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsContent_Video_C::BndEvt__WBP_SettingsContent_Video_WBP_Dropdown_Btn_DLSSMode_K2Node_ComponentBoundEvent_24_OnSelectedOptionDelegate__DelegateSignature(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.BndEvt__WBP_SettingsContent_Video_WBP_Dropdown_Btn_DLSSMode_K2Node_ComponentBoundEvent_24_OnSelectedOptionDelegate__DelegateSignature");

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


// Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.ExecuteUbergraph_WBP_SettingsContent_Video
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsContent_Video_C::ExecuteUbergraph_WBP_SettingsContent_Video(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContent_Video.WBP_SettingsContent_Video_C.ExecuteUbergraph_WBP_SettingsContent_Video");

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
