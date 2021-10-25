// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Settings_Provider_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Settings_Provider.WBP_Settings_Provider_C.CloseSettingInfo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Settings_Provider_C::CloseSettingInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.CloseSettingInfo");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.SetSettingInfo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Title                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   Description                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TSoftObjectPtr<class UTexture2D> Image                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::SetSettingInfo(const struct FText& Title, const struct FText& Description, TSoftObjectPtr<class UTexture2D> Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.SetSettingInfo");

	struct
	{
		struct FText                   Title;
		struct FText                   Description;
		TSoftObjectPtr<class UTexture2D> Image;
	} params;

	params.Title = Title;
	params.Description = Description;
	params.Image = Image;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.UpdateVideoQuality
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   DataName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::UpdateVideoQuality(const struct FName& DataName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.UpdateVideoQuality");

	struct
	{
		struct FName                   DataName;
	} params;

	params.DataName = DataName;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.ApplySettings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Settings_Provider_C::ApplySettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.ApplySettings");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.GetCurrentResolution
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 Resolution                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::GetCurrentResolution(struct FString* Resolution)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.GetCurrentResolution");

	struct
	{
		struct FString                 Resolution;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Resolution != nullptr)
		*Resolution = params.Resolution;
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.GetAvailableResolutions
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FString>         Resolutions                    (CPF_Parm, CPF_OutParm)

void UWBP_Settings_Provider_C::GetAvailableResolutions(TArray<struct FString>* Resolutions)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.GetAvailableResolutions");

	struct
	{
		TArray<struct FString>         Resolutions;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Resolutions != nullptr)
		*Resolutions = params.Resolutions;
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.RefreshResolutions
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Settings_Provider_C::RefreshResolutions()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.RefreshResolutions");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.RevertSettingsChanges
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Settings_Provider_C::RevertSettingsChanges()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.RevertSettingsChanges");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.RestoreDefaultSettings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Settings_Provider_C::RestoreDefaultSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.RestoreDefaultSettings");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.RestoreDefaultCulture
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Settings_Provider_C::RestoreDefaultCulture()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.RestoreDefaultCulture");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.RevertCultureChanges
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Settings_Provider_C::RevertCultureChanges()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.RevertCultureChanges");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.RefreshLanguages
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Settings_Provider_C::RefreshLanguages()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.RefreshLanguages");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.GetCultureForLanguage
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 Language                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Culture                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::GetCultureForLanguage(const struct FString& Language, struct FString* Culture)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.GetCultureForLanguage");

	struct
	{
		struct FString                 Language;
		struct FString                 Culture;
	} params;

	params.Language = Language;

	UObject::ProcessEvent(fn, &params);

	if (Culture != nullptr)
		*Culture = params.Culture;
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.GetAvailableLanguages
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FString>         Languages                      (CPF_Parm, CPF_OutParm)

void UWBP_Settings_Provider_C::GetAvailableLanguages(TArray<struct FString>* Languages)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.GetAvailableLanguages");

	struct
	{
		TArray<struct FString>         Languages;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Languages != nullptr)
		*Languages = params.Languages;
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.ApplyVoiceChatSettings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::ApplyVoiceChatSettings(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.ApplyVoiceChatSettings");

	struct
	{
		class UUserWidget*             Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_Language
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_DropdownBase_Btn_C* Dropdown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Option                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::OnDropdown_Language(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_Language");

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


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_BrazilianPortuguese
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Settings_Provider_C::OnToggle_BrazilianPortuguese(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_BrazilianPortuguese");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_ChatEnabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Settings_Provider_C::OnToggle_ChatEnabled(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_ChatEnabled");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_Chinese
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Settings_Provider_C::OnToggle_Chinese(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_Chinese");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_English
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Settings_Provider_C::OnToggle_English(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_English");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_FOVMovementChanges
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Settings_Provider_C::OnToggle_FOVMovementChanges(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_FOVMovementChanges");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_French
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Settings_Provider_C::OnToggle_French(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_French");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_German
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Settings_Provider_C::OnToggle_German(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_German");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_Polish
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Settings_Provider_C::OnToggle_Polish(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_Polish");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_RotateMinimap
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Settings_Provider_C::OnToggle_RotateMinimap(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_RotateMinimap");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_Russian
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Settings_Provider_C::OnToggle_Russian(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_Russian");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_Spanish
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Settings_Provider_C::OnToggle_Spanish(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_Spanish");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_Subtitles
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Settings_Provider_C::OnToggle_Subtitles(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_Subtitles");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_Turkish
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Settings_Provider_C::OnToggle_Turkish(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_Turkish");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_ADSSensitivity
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Selector_Btn_C*     selector                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FStructure_SelectorData Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::OnSelector_ADSSensitivity(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_ADSSensitivity");

	struct
	{
		class UWBP_Selector_Btn_C*     selector;
		struct FStructure_SelectorData Value;
	} params;

	params.selector = selector;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_MouseSensitivity
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Selector_Btn_C*     selector                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FStructure_SelectorData Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::OnSelector_MouseSensitivity(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_MouseSensitivity");

	struct
	{
		class UWBP_Selector_Btn_C*     selector;
		struct FStructure_SelectorData Value;
	} params;

	params.selector = selector;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_ScopedSensitivity
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Selector_Btn_C*     selector                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FStructure_SelectorData Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::OnSelector_ScopedSensitivity(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_ScopedSensitivity");

	struct
	{
		class UWBP_Selector_Btn_C*     selector;
		struct FStructure_SelectorData Value;
	} params;

	params.selector = selector;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_CrouchToggle
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Settings_Provider_C::OnToggle_CrouchToggle(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_CrouchToggle");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_FOVBasedSensitivityScaling
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Settings_Provider_C::OnToggle_FOVBasedSensitivityScaling(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_FOVBasedSensitivityScaling");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_InvertX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Settings_Provider_C::OnToggle_InvertX(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_InvertX");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_InvertY
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Settings_Provider_C::OnToggle_InvertY(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_InvertY");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_MouseSmoothing
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Settings_Provider_C::OnToggle_MouseSmoothing(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_MouseSmoothing");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_PerScopeSensitivity
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Settings_Provider_C::OnToggle_PerScopeSensitivity(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_PerScopeSensitivity");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_SprintToggle
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Settings_Provider_C::OnToggle_SprintToggle(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_SprintToggle");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_TargetingToggle
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Settings_Provider_C::OnToggle_TargetingToggle(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_TargetingToggle");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_ScopedSensitivity_1_5x
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Selector_Btn_C*     selector                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FStructure_SelectorData Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::OnSelector_ScopedSensitivity_1_5x(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_ScopedSensitivity_1_5x");

	struct
	{
		class UWBP_Selector_Btn_C*     selector;
		struct FStructure_SelectorData Value;
	} params;

	params.selector = selector;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_ScopedSensitivity_2x
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Selector_Btn_C*     selector                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FStructure_SelectorData Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::OnSelector_ScopedSensitivity_2x(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_ScopedSensitivity_2x");

	struct
	{
		class UWBP_Selector_Btn_C*     selector;
		struct FStructure_SelectorData Value;
	} params;

	params.selector = selector;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_ScopedSensitivity_4x
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Selector_Btn_C*     selector                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FStructure_SelectorData Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::OnSelector_ScopedSensitivity_4x(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_ScopedSensitivity_4x");

	struct
	{
		class UWBP_Selector_Btn_C*     selector;
		struct FStructure_SelectorData Value;
	} params;

	params.selector = selector;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_ScopedSensitivity_8x
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Selector_Btn_C*     selector                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FStructure_SelectorData Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::OnSelector_ScopedSensitivity_8x(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_ScopedSensitivity_8x");

	struct
	{
		class UWBP_Selector_Btn_C*     selector;
		struct FStructure_SelectorData Value;
	} params;

	params.selector = selector;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_ScopedSensitivity_16x
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Selector_Btn_C*     selector                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FStructure_SelectorData Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::OnSelector_ScopedSensitivity_16x(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_ScopedSensitivity_16x");

	struct
	{
		class UWBP_Selector_Btn_C*     selector;
		struct FStructure_SelectorData Value;
	} params;

	params.selector = selector;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_LeaningToggle
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Settings_Provider_C::OnToggle_LeaningToggle(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_LeaningToggle");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_DialogueVolume
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FStructure_SelectorData Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::OnSelector_DialogueVolume(const struct FStructure_SelectorData& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_DialogueVolume");

	struct
	{
		struct FStructure_SelectorData Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_HitmarkerVolume
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FStructure_SelectorData Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::OnSelector_HitmarkerVolume(const struct FStructure_SelectorData& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_HitmarkerVolume");

	struct
	{
		struct FStructure_SelectorData Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_InputVolume
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FStructure_SelectorData Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// class UWBP_Selector_Btn_C*     selector                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::OnSelector_InputVolume(const struct FStructure_SelectorData& Value, class UWBP_Selector_Btn_C* selector)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_InputVolume");

	struct
	{
		struct FStructure_SelectorData Value;
		class UWBP_Selector_Btn_C*     selector;
	} params;

	params.Value = Value;
	params.selector = selector;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_MasterVolume
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FStructure_SelectorData Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::OnSelector_MasterVolume(const struct FStructure_SelectorData& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_MasterVolume");

	struct
	{
		struct FStructure_SelectorData Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_MicrophoneSensitivity
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FStructure_SelectorData Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// class UWBP_Selector_Btn_C*     selector                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::OnSelector_MicrophoneSensitivity(const struct FStructure_SelectorData& Value, class UWBP_Selector_Btn_C* selector)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_MicrophoneSensitivity");

	struct
	{
		struct FStructure_SelectorData Value;
		class UWBP_Selector_Btn_C*     selector;
	} params;

	params.Value = Value;
	params.selector = selector;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_MusicVolume
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FStructure_SelectorData Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::OnSelector_MusicVolume(const struct FStructure_SelectorData& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_MusicVolume");

	struct
	{
		struct FStructure_SelectorData Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_OutputVolume
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FStructure_SelectorData Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// class UWBP_Selector_Btn_C*     selector                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::OnSelector_OutputVolume(const struct FStructure_SelectorData& Value, class UWBP_Selector_Btn_C* selector)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_OutputVolume");

	struct
	{
		struct FStructure_SelectorData Value;
		class UWBP_Selector_Btn_C*     selector;
	} params;

	params.Value = Value;
	params.selector = selector;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_SfxVolume
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FStructure_SelectorData Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::OnSelector_SfxVolume(const struct FStructure_SelectorData& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_SfxVolume");

	struct
	{
		struct FStructure_SelectorData Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_MuteInputAudio
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Settings_Provider_C::OnToggle_MuteInputAudio(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_MuteInputAudio");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_MuteOutputAudio
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Settings_Provider_C::OnToggle_MuteOutputAudio(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_MuteOutputAudio");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_PushToTalk
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Settings_Provider_C::OnToggle_PushToTalk(class UWBP_ToggleText_Btn_C* Toggle, bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_PushToTalk");

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           toggled;
	} params;

	params.Toggle = Toggle;
	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_InputDevice
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Device                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UWBP_DropdownBase_Btn_C* Dropdown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::OnDropdown_InputDevice(const struct FString& Device, class UWBP_DropdownBase_Btn_C* Dropdown)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_InputDevice");

	struct
	{
		struct FString                 Device;
		class UWBP_DropdownBase_Btn_C* Dropdown;
	} params;

	params.Device = Device;
	params.Dropdown = Dropdown;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_OutputDevice
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Device                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UWBP_DropdownBase_Btn_C* Dropdown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::OnDropdown_OutputDevice(const struct FString& Device, class UWBP_DropdownBase_Btn_C* Dropdown)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_OutputDevice");

	struct
	{
		struct FString                 Device;
		class UWBP_DropdownBase_Btn_C* Dropdown;
	} params;

	params.Device = Device;
	params.Dropdown = Dropdown;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_AutoDetect
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Settings_Provider_C::OnToggle_AutoDetect(bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_AutoDetect");

	struct
	{
		bool                           toggled;
	} params;

	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_Vsync
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Settings_Provider_C::OnToggle_Vsync(bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_Vsync");

	struct
	{
		bool                           toggled;
	} params;

	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_ShowFps
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Settings_Provider_C::OnToggle_ShowFps(bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_ShowFps");

	struct
	{
		bool                           toggled;
	} params;

	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_MultithreadedRendering
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Settings_Provider_C::OnToggle_MultithreadedRendering(bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_MultithreadedRendering");

	struct
	{
		bool                           toggled;
	} params;

	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_GpuCrashDebugging
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Settings_Provider_C::OnToggle_GpuCrashDebugging(bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_GpuCrashDebugging");

	struct
	{
		bool                           toggled;
	} params;

	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_MotionBlur
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Settings_Provider_C::OnToggle_MotionBlur(bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_MotionBlur");

	struct
	{
		bool                           toggled;
	} params;

	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_ImageSharpening
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Settings_Provider_C::OnToggle_ImageSharpening(bool toggled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_ImageSharpening");

	struct
	{
		bool                           toggled;
	} params;

	params.toggled = toggled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_Colorblind
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Selector_Btn_C*     selector                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FStructure_SelectorData Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::OnSelector_Colorblind(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_Colorblind");

	struct
	{
		class UWBP_Selector_Btn_C*     selector;
		struct FStructure_SelectorData Value;
	} params;

	params.selector = selector;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_FOV
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FStructure_SelectorData Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::OnSelector_FOV(const struct FStructure_SelectorData& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_FOV");

	struct
	{
		struct FStructure_SelectorData Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_Gamma
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FStructure_SelectorData Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::OnSelector_Gamma(const struct FStructure_SelectorData& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_Gamma");

	struct
	{
		struct FStructure_SelectorData Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_MaxFps
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FStructure_SelectorData Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::OnSelector_MaxFps(const struct FStructure_SelectorData& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_MaxFps");

	struct
	{
		struct FStructure_SelectorData Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_ResolutionQuality
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FStructure_SelectorData Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::OnSelector_ResolutionQuality(const struct FStructure_SelectorData& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_ResolutionQuality");

	struct
	{
		struct FStructure_SelectorData Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_Antialiasing
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_DropdownBase_Btn_C* Dropdown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Option                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::OnDropdown_Antialiasing(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_Antialiasing");

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


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_Colorblind
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_DropdownBase_Btn_C* Dropdown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Option                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::OnDropdown_Colorblind(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_Colorblind");

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


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_Foliage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_DropdownBase_Btn_C* Dropdown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Option                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::OnDropdown_Foliage(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_Foliage");

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


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_FullscreenMode
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_DropdownBase_Btn_C* Dropdown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Option                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::OnDropdown_FullscreenMode(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_FullscreenMode");

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


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_Postprocess
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_DropdownBase_Btn_C* Dropdown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Option                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::OnDropdown_Postprocess(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_Postprocess");

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


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_Resolution
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_DropdownBase_Btn_C* Dropdown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Option                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::OnDropdown_Resolution(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_Resolution");

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


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_Shadow
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_DropdownBase_Btn_C* Dropdown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Option                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::OnDropdown_Shadow(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_Shadow");

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


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_Texture
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_DropdownBase_Btn_C* Dropdown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Option                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::OnDropdown_Texture(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_Texture");

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


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_ViewDistance
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_DropdownBase_Btn_C* Dropdown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Option                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::OnDropdown_ViewDistance(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_ViewDistance");

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


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_VisualEffects
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_DropdownBase_Btn_C* Dropdown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Option                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::OnDropdown_VisualEffects(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_VisualEffects");

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


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_VideoQuality
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_DropdownBase_Btn_C* Dropdown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Option                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::OnDropdown_VideoQuality(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_VideoQuality");

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


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_UIScale
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FStructure_SelectorData Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::OnSelector_UIScale(const struct FStructure_SelectorData& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_UIScale");

	struct
	{
		struct FStructure_SelectorData Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_Dlss
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_DropdownBase_Btn_C* Dropdown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Option                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::OnDropdown_Dlss(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_Dlss");

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


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.BP_OnWidgetEvent
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   DataName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::BP_OnWidgetEvent(const struct FName& DataName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.BP_OnWidgetEvent");

	struct
	{
		struct FName                   DataName;
	} params;

	params.DataName = DataName;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.BP_RefreshData
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_Settings_Provider_C::BP_RefreshData()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.BP_RefreshData");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.BP_Initialize
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_Settings_Provider_C::BP_Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.BP_Initialize");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.ExecuteUbergraph_WBP_Settings_Provider
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::ExecuteUbergraph_WBP_Settings_Provider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.ExecuteUbergraph_WBP_Settings_Provider");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnCloseSettingInfo__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Settings_Provider_C::OnCloseSettingInfo__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnCloseSettingInfo__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSettingInfoSet__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Title                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   Description                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TSoftObjectPtr<class UTexture2D> Image                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_Settings_Provider_C::OnSettingInfoSet__DelegateSignature(const struct FText& Title, const struct FText& Description, TSoftObjectPtr<class UTexture2D> Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSettingInfoSet__DelegateSignature");

	struct
	{
		struct FText                   Title;
		struct FText                   Description;
		TSoftObjectPtr<class UTexture2D> Image;
	} params;

	params.Title = Title;
	params.Description = Description;
	params.Image = Image;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
