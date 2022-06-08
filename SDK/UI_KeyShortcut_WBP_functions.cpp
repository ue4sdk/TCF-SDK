// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UI_KeyShortcut_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_KeyShortcut_WBP.UI_KeyShortcut_WBP_C.GetLocalizedKeyText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// struct FText                   Text                           (CPF_Parm, CPF_OutParm)

void UUI_KeyShortcut_WBP_C::GetLocalizedKeyText(const struct FKey& Key, struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_KeyShortcut_WBP.UI_KeyShortcut_WBP_C.GetLocalizedKeyText"));

	struct
	{
		struct FKey                    Key;
		struct FText                   Text;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Text != nullptr)
		*Text = params.Text;
}


// Function UI_KeyShortcut_WBP.UI_KeyShortcut_WBP_C.AzertyHandling
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    InputKey                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// struct FText                   translatedKey                  (CPF_Parm, CPF_OutParm)
// bool                           isTranslated                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UUI_KeyShortcut_WBP_C::AzertyHandling(const struct FKey& InputKey, struct FText* translatedKey, bool* isTranslated)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_KeyShortcut_WBP.UI_KeyShortcut_WBP_C.AzertyHandling"));

	struct
	{
		struct FKey                    InputKey;
		struct FText                   translatedKey;
		bool                           isTranslated;
	} params = {};

	params.InputKey = InputKey;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (translatedKey != nullptr)
		*translatedKey = params.translatedKey;
	if (isTranslated != nullptr)
		*isTranslated = params.isTranslated;
}


// Function UI_KeyShortcut_WBP.UI_KeyShortcut_WBP_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UUI_KeyShortcut_WBP_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_KeyShortcut_WBP.UI_KeyShortcut_WBP_C.PreConstruct"));

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


// Function UI_KeyShortcut_WBP.UI_KeyShortcut_WBP_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_KeyShortcut_WBP_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_KeyShortcut_WBP.UI_KeyShortcut_WBP_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UI_KeyShortcut_WBP.UI_KeyShortcut_WBP_C.SetKeyShortcutText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   keyText                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_KeyShortcut_WBP_C::SetKeyShortcutText(const struct FText& keyText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_KeyShortcut_WBP.UI_KeyShortcut_WBP_C.SetKeyShortcutText"));

	struct
	{
		struct FText                   keyText;
	} params = {};

	params.keyText = keyText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UI_KeyShortcut_WBP.UI_KeyShortcut_WBP_C.SettingText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_KeyShortcut_WBP_C::SettingText()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_KeyShortcut_WBP.UI_KeyShortcut_WBP_C.SettingText"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UI_KeyShortcut_WBP.UI_KeyShortcut_WBP_C.SettingsUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_KeyShortcut_WBP_C::SettingsUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_KeyShortcut_WBP.UI_KeyShortcut_WBP_C.SettingsUpdated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function UI_KeyShortcut_WBP.UI_KeyShortcut_WBP_C.ExecuteUbergraph_UI_KeyShortcut_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUI_KeyShortcut_WBP_C::ExecuteUbergraph_UI_KeyShortcut_WBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_KeyShortcut_WBP.UI_KeyShortcut_WBP_C.ExecuteUbergraph_UI_KeyShortcut_WBP"));

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
