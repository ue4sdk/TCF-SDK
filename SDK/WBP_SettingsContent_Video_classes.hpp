#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_SettingsContent_Video_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_SettingsContent_Video.WBP_SettingsContent_Video_C
// 0x0248 (0x0598 - 0x0350)
class UWBP_SettingsContent_Video_C : public UWBP_SettingsContentBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0350(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWBP_Dropdown_Btn_C*                         WBP_Dropdown_Btn_Antialiasing;                            // 0x0358(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Dropdown_Btn_C*                         WBP_Dropdown_Btn_ColorblindMode;                          // 0x0360(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Dropdown_Btn_C*                         WBP_Dropdown_Btn_Device;                                  // 0x0368(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Dropdown_Btn_C*                         WBP_Dropdown_Btn_DLSSMode;                                // 0x0370(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Dropdown_Btn_C*                         WBP_Dropdown_Btn_Foliage;                                 // 0x0378(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Dropdown_Btn_C*                         WBP_Dropdown_Btn_FullscreenMode;                          // 0x0380(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Dropdown_Btn_C*                         WBP_Dropdown_Btn_Postprocess;                             // 0x0388(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Dropdown_Btn_C*                         WBP_Dropdown_Btn_Resolution;                              // 0x0390(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Dropdown_Btn_C*                         WBP_Dropdown_Btn_Shadow;                                  // 0x0398(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Dropdown_Btn_C*                         WBP_Dropdown_Btn_Texture;                                 // 0x03A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Dropdown_Btn_C*                         WBP_Dropdown_Btn_ViewDistance;                            // 0x03A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Dropdown_Btn_C*                         WBP_Dropdown_Btn_VisualEffects;                           // 0x03B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Dropdown_Btn_C*                         WBP_Dropdown_VideoQuality_Btn;                            // 0x03B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Selector_Btn_C*                         WBP_Selector_Btn_ColorblindIntensity;                     // 0x03C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Selector_Btn_C*                         WBP_Selector_Btn_Fov;                                     // 0x03C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Selector_Btn_C*                         WBP_Selector_Btn_Gamma;                                   // 0x03D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Selector_Btn_C*                         WBP_Selector_Btn_ImageSharpening;                         // 0x03D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Selector_Btn_C*                         WBP_Selector_Btn_MaxFps;                                  // 0x03E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Selector_Btn_C*                         WBP_Selector_Btn_ResolutionQuality;                       // 0x03E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Selector_Btn_C*                         WBP_Selector_Btn_UIScale;                                 // 0x03F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_AntiAliasingQuality;                // 0x03F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_AutoDetect;                         // 0x0400(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_ColorblindMode;                     // 0x0408(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_CorrectDeficiency;                  // 0x0410(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_CrashDebugging;                     // 0x0418(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_Device;                             // 0x0420(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_DLSSMode;                           // 0x0428(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_DX12;                               // 0x0430(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_FoilageQuality;                     // 0x0438(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_FOV;                                // 0x0440(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_FullscreenMode;                     // 0x0448(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_Gamma;                              // 0x0450(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_ImageSharpening;                    // 0x0458(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_MaxFPS;                             // 0x0460(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_MotionBlur;                         // 0x0468(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_MultiThreadRendering;               // 0x0470(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_PostProcessQuality;                 // 0x0478(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_Resolution;                         // 0x0480(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_ResolutionQuality;                  // 0x0488(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_ShadowQuality;                      // 0x0490(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_ShowFPS;                            // 0x0498(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_TextureQuality;                     // 0x04A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_UIScale;                            // 0x04A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_VideoQuality;                       // 0x04B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_ViewDistanceQuality;                // 0x04B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_VisualEffectsQuality;               // 0x04C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_VSync;                              // 0x04C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingSectionHeader_Item_C*            WBP_SettingSectionHeader_Accessibility;                   // 0x04D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingSectionHeader_Item_C*            WBP_SettingSectionHeader_VideoQuality;                    // 0x04D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingSectionHeader_Item_C*            WBP_SettingSectionHeader_VideoQuality_2;                  // 0x04E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ToggleText_Btn_C*                       WBP_ToggleText_Btn_AutoDetect;                            // 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ToggleText_Btn_C*                       WBP_ToggleText_Btn_DX12;                                  // 0x04F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ToggleText_Btn_C*                       WBP_ToggleText_Btn_GpuCrashDebugging;                     // 0x04F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ToggleText_Btn_C*                       WBP_ToggleText_Btn_MotionBlur;                            // 0x0500(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ToggleText_Btn_C*                       WBP_ToggleText_Btn_MultithreadedRendering;                // 0x0508(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ToggleText_Btn_C*                       WBP_ToggleText_Btn_ShowFps;                               // 0x0510(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ToggleText_Btn_C*                       WBP_ToggleText_Btn_Vsync;                                 // 0x0518(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FText                                       Label;                                                    // 0x0520(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	TMap<struct FString, EYGfxQualityPreset>           GFXSettings;                                              // 0x0540(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FName                                       NewVar_1;                                                 // 0x0590(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_SettingsContent_Video.WBP_SettingsContent_Video_C"));
		return ptr;
	}


	void UpdateDevices();
	void UpdateDLSS();
	void UpdateRegisteredWidgets();
	void UpdateAutoDetect();
	void UpdateColorblindMode();
	void Initialize();
	void UpdateFullscreenMode();
	void Provider_OnDataChanged(struct FName* DataName, struct FName* dataType);
	void Update_Resolutions();
	void RegisterWidgets();
	void GetGfxQualityLevelName(EYGfxQualityPreset Preset, struct FString* Output);
	void BndEvt__WBP_ToggleText_Btn_145_K2Node_ComponentBoundEvent_2_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled);
	void BndEvt__WBP_ToggleText_Btn_247_K2Node_ComponentBoundEvent_3_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled);
	void BndEvt__WBP_ToggleText_Btn_297_K2Node_ComponentBoundEvent_4_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled);
	void BndEvt__WBP_ToggleText_Btn_450_K2Node_ComponentBoundEvent_5_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled);
	void BndEvt__WBP_ToggleText_Btn_67_K2Node_ComponentBoundEvent_1_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled);
	void BndEvt__WBP_Dropdown_Btn_Antialiasing_K2Node_ComponentBoundEvent_7_OnSelectedOptionDelegate__DelegateSignature(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index);
	void BndEvt__WBP_Dropdown_Btn_ColorblindMode_K2Node_ComponentBoundEvent_8_OnSelectedOptionDelegate__DelegateSignature(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index);
	void BndEvt__WBP_Dropdown_Btn_Foliage_K2Node_ComponentBoundEvent_9_OnSelectedOptionDelegate__DelegateSignature(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index);
	void BndEvt__WBP_Dropdown_Btn_FullscreenMode_K2Node_ComponentBoundEvent_10_OnSelectedOptionDelegate__DelegateSignature(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index);
	void BndEvt__WBP_Dropdown_Btn_Postprocess_K2Node_ComponentBoundEvent_11_OnSelectedOptionDelegate__DelegateSignature(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index);
	void BndEvt__WBP_Dropdown_Btn_Resolution_K2Node_ComponentBoundEvent_12_OnSelectedOptionDelegate__DelegateSignature(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index);
	void BndEvt__WBP_Dropdown_Btn_Shadow_K2Node_ComponentBoundEvent_13_OnSelectedOptionDelegate__DelegateSignature(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index);
	void BndEvt__WBP_Dropdown_Btn_Texture_K2Node_ComponentBoundEvent_14_OnSelectedOptionDelegate__DelegateSignature(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index);
	void BndEvt__WBP_Dropdown_Btn_ViewDistance_K2Node_ComponentBoundEvent_15_OnSelectedOptionDelegate__DelegateSignature(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index);
	void BndEvt__WBP_Dropdown_Btn_VisualEffects_K2Node_ComponentBoundEvent_16_OnSelectedOptionDelegate__DelegateSignature(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index);
	void BndEvt__WBP_Dropdown_VideoQuality_Btn_K2Node_ComponentBoundEvent_17_OnSelectedOptionDelegate__DelegateSignature(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index);
	void BndEvt__WBP_ToggleText_Btn_K2Node_ComponentBoundEvent_0_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled);
	void BndEvt__WBP_Selector_Btn_ColorblindIntensity_K2Node_ComponentBoundEvent_18_OnValueChanged__DelegateSignature(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value);
	void BndEvt__WBP_Selector_Btn_Fov_K2Node_ComponentBoundEvent_19_OnValueChanged__DelegateSignature(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value);
	void BndEvt__WBP_Selector_Btn_Gamma_K2Node_ComponentBoundEvent_20_OnValueChanged__DelegateSignature(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value);
	void BndEvt__WBP_Selector_Btn_MaxFps_K2Node_ComponentBoundEvent_21_OnValueChanged__DelegateSignature(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value);
	void BndEvt__WBP_Selector_Btn_ResolutionQuality_K2Node_ComponentBoundEvent_22_OnValueChanged__DelegateSignature(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value);
	void BndEvt__WBP_SettingsContent_Video_WBP_Selector_Btn_ApplicationScale_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value);
	void BndEvt__WBP_SettingsContent_Video_WBP_Dropdown_Btn_DLSSMode_K2Node_ComponentBoundEvent_24_OnSelectedOptionDelegate__DelegateSignature(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index);
	void BndEvt__WBP_SettingsContent_Video_WBP_Selector_Btn_ImageSharpening_K2Node_ComponentBoundEvent_25_OnValueChanged__DelegateSignature(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value);
	void BndEvt__WBP_SettingsContent_Video_WBP_Dropdown_Btn_Device_K2Node_ComponentBoundEvent_6_OnSelectedOptionDelegate__DelegateSignature(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index);
	void BndEvt__WBP_SettingsContent_Video_WBP_ToggleText_Btn_DX12_K2Node_ComponentBoundEvent_26_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled);
	void ExecuteUbergraph_WBP_SettingsContent_Video(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
