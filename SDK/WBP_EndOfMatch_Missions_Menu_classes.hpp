#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_EndOfMatch_Missions_Menu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_EndOfMatch_Missions_Menu.WBP_EndOfMatch_Missions_Menu_C
// 0x00B4 (0x03C0 - 0x030C)
class UWBP_EndOfMatch_Missions_Menu_C : public UWBP_EndOfMatchScreen_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x030C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0310(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            ScreenIn_Anim;                                            // 0x0318(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                missionEntries;                                           // 0x0320(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_EmptyStateBanner_C*                     WBP_EmptyStateBanner_NoMissions;                          // 0x0328(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_EmptyStateBanner_C*                     WBP_EmptyStateBanner_NoProgress;                          // 0x0330(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_EndOfMatch_Headline_C*                  WBP_EndOfMatch_Headline;                                  // 0x0338(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         SoundFX_ScreenIn;                                         // 0x0340(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         SoundFX_ScreenOut;                                        // 0x0350(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FMulticastScriptDelegate                    ScreenIn;                                                 // 0x0360(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TArray<struct FYActiveContractUIData>              TestContracts;                                            // 0x0370(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<struct FYContractProgress>                  TestProgress;                                             // 0x0380(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FMulticastScriptDelegate                    ScreenOut;                                                // 0x0390(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMargin                                     MissionWidgetPadding;                                     // 0x03A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FMargin                                     MissionChainWidgetPadding;                                // 0x03B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_EndOfMatch_Missions_Menu.WBP_EndOfMatch_Missions_Menu_C"));
		return ptr;
	}


	void LogSortedContractInfo(const struct FString& contractId, const struct FString& VariableName);
	void SetupMissionsFromContractsUIData(bool ShowAdditionallyChainEnd, TArray<struct FYContractUiData>* Array);
	void SetStage(int stage);
	class UWBP_EndOfMatch_Mission_ChainEnd_Entry_C* SetupMissionChainWidget();
	class UWBP_EndOfMatch_Mission_Entry_C* SetupMissionWidget();
	void SetupMissionsInternal(TArray<struct FYActiveContractUIData>* InActiveContracts, TArray<struct FYContractProgress>* InAllContractsProgress);
	void SetupMissions();
	void PlayScreenInAnim();
	void PlayScreenOutAnim();
	void OnScreenIn();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_EndOfMatch_Missions_Menu(int EntryPoint);
	void ScreenOut__DelegateSignature();
	void ScreenIn__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
