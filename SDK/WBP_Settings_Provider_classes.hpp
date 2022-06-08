#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Settings_Provider_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WBP_Settings_Provider.WBP_Settings_Provider_C
// 0x0140 (0x0278 - 0x0138)
class UWBP_Settings_Provider_C : public UYWidgetProvider_Settings
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0138(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	TArray<struct FName>                               QualitySettings;                                          // 0x0140(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TMap<struct FString, struct FString>               LanguagesToCultures;                                      // 0x0150(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FString                                     OriginalCulture;                                          // 0x01A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TMap<struct FString, struct FIntPoint>             Resolutions;                                              // 0x01B0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	int                                                OriginalResolutionIndex;                                  // 0x0200(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0204(0x0004) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnSettingInfoSet;                                         // 0x0208(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnCloseSettingInfo;                                       // 0x0218(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TMap<int, struct FString>                          GraphicAdapters;                                          // 0x0228(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass WBP_Settings_Provider.WBP_Settings_Provider_C"));
		return ptr;
	}


	void CloseSettingInfo();
	void SetSettingInfo(const struct FText& Title, const struct FText& Description, TSoftObjectPtr<class UTexture2D> Image);
	void UpdateVideoQuality(const struct FName& DataName);
	void ApplySettings();
	void GetCurrentResolution(struct FString* Resolution);
	void GetAvailableResolutions(TArray<struct FString>* Resolutions);
	void RefreshResolutions();
	void RevertSettingsChanges();
	void RestoreDefaultSettings();
	void RestoreDefaultCulture();
	void RevertCultureChanges();
	void RefreshLanguages();
	void GetCultureForLanguage(const struct FString& Language, struct FString* Culture);
	void GetAvailableLanguages(TArray<struct FString>* Languages);
	void ApplyVoiceChatSettings(class UUserWidget* Widget);
	void OnDropdown_Language(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index);
	void OnToggle_BrazilianPortuguese(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled);
	void OnToggle_ChatEnabled(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled);
	void OnToggle_Chinese(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled);
	void OnToggle_English(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled);
	void OnToggle_FOVMovementChanges(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled);
	void OnToggle_French(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled);
	void OnToggle_German(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled);
	void OnToggle_Polish(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled);
	void OnToggle_RotateMinimap(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled);
	void OnToggle_Russian(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled);
	void OnToggle_Spanish(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled);
	void OnToggle_Subtitles(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled);
	void OnToggle_Turkish(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled);
	void OnSelector_ADSSensitivity(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value);
	void OnSelector_MouseSensitivity(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value);
	void OnSelector_ScopedSensitivity(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value);
	void OnToggle_CrouchToggle(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled);
	void OnToggle_FOVBasedSensitivityScaling(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled);
	void OnToggle_InvertX(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled);
	void OnToggle_InvertY(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled);
	void OnToggle_MouseSmoothing(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled);
	void OnToggle_PerScopeSensitivity(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled);
	void OnToggle_SprintToggle(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled);
	void OnToggle_TargetingToggle(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled);
	void OnSelector_ScopedSensitivity_2x(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value);
	void OnSelector_ScopedSensitivity_4x(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value);
	void OnSelector_ScopedSensitivity_8x(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value);
	void OnSelector_ScopedSensitivity_6x(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value);
	void OnToggle_LeaningToggle(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled);
	void OnSelector_DialogueVolume(const struct FStructure_SelectorData& Value);
	void OnSelector_HitmarkerVolume(const struct FStructure_SelectorData& Value);
	void OnSelector_InputVolume(const struct FStructure_SelectorData& Value, class UWBP_Selector_Btn_C* selector);
	void OnSelector_MasterVolume(const struct FStructure_SelectorData& Value);
	void OnSelector_MicrophoneSensitivity(const struct FStructure_SelectorData& Value, class UWBP_Selector_Btn_C* selector);
	void OnSelector_MusicVolume(const struct FStructure_SelectorData& Value);
	void OnSelector_OutputVolume(const struct FStructure_SelectorData& Value, class UWBP_Selector_Btn_C* selector);
	void OnSelector_SfxVolume(const struct FStructure_SelectorData& Value);
	void OnToggle_MuteInputAudio(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled);
	void OnToggle_MuteOutputAudio(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled);
	void OnToggle_PushToTalk(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled);
	void OnDropdown_InputDevice(const struct FString& device, class UWBP_DropdownBase_Btn_C* Dropdown);
	void OnDropdown_OutputDevice(const struct FString& device, class UWBP_DropdownBase_Btn_C* Dropdown);
	void OnSelector_UnfocusedWindowVolume(const struct FStructure_SelectorData& Value, class UWBP_Selector_Btn_C* selector);
	void OnToggle_BinauralAudio(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled);
	void OnToggle_AutoDetect(bool Toggled);
	void OnToggle_Vsync(bool Toggled);
	void OnToggle_ShowFps(bool Toggled);
	void OnToggle_MultithreadedRendering(bool Toggled);
	void OnToggle_GpuCrashDebugging(bool Toggled);
	void OnToggle_MotionBlur(bool Toggled);
	void OnSelector_ImageSharpening(const struct FStructure_SelectorData& NewParam);
	void OnSelector_Colorblind(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value);
	void OnSelector_FOV(const struct FStructure_SelectorData& Value);
	void OnSelector_Gamma(const struct FStructure_SelectorData& Value);
	void OnSelector_MaxFps(const struct FStructure_SelectorData& Value);
	void OnSelector_ResolutionQuality(const struct FStructure_SelectorData& Value);
	void OnDropdown_Antialiasing(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index);
	void OnDropdown_Colorblind(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index);
	void OnDropdown_Foliage(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index);
	void OnDropdown_FullscreenMode(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index);
	void OnDropdown_Postprocess(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index);
	void OnDropdown_Resolution(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index);
	void OnDropdown_Shadow(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index);
	void OnDropdown_Texture(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index);
	void OnDropdown_ViewDistance(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index);
	void OnDropdown_VisualEffects(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index);
	void OnDropdown_VideoQuality(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index);
	void OnSelector_UIScale(const struct FStructure_SelectorData& Value);
	void OnDropdown_Dlss(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index);
	void OnDropdown_GraphicsAdapter(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index);
	void OnToggle_DX12(bool Toggled);
	void BP_OnWidgetEvent(const struct FName& DataName);
	void BP_RefreshData();
	void BP_InitializeProvider();
	void ExecuteUbergraph_WBP_Settings_Provider(int EntryPoint);
	void OnCloseSettingInfo__DelegateSignature();
	void OnSettingInfoSet__DelegateSignature(const struct FText& Title, const struct FText& Description, TSoftObjectPtr<class UTexture2D> Image);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
