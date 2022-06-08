#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Objectives_List_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_Objectives_List.WBP_Objectives_List_C
// 0x00CA (0x039A - 0x02D0)
class UWBP_Objectives_List_C : public UYWidget_ActiveContracts
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UOverlay*                                    Background;                                               // 0x02D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                entries;                                                  // 0x02E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Gfx_Edge;                                                 // 0x02E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    Header;                                                   // 0x02F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    HeaderRightAlign;                                         // 0x02F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Icn_ContractType;                                         // 0x0300(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                Layout_Panel;                                             // 0x0308(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UScrollBox*                                  ScrollBox_1;                                              // 0x0310(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWidgetSwitcher*                             StateSwitcher;                                            // 0x0318(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  Txt_ContractLimit;                                        // 0x0320(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  Txt_ListEmpty;                                            // 0x0328(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_BlurBacker_Panel_C*                     WBP_BlurBacker_Panel;                                     // 0x0330(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Header_Panel_C*                         WBP_Header_Panel;                                         // 0x0338(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UYControllerContractsActivesDataComponent*   ContractComponent;                                        // 0x0340(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               HideInfoTooltip;                                          // 0x0348(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0349(0x0007) MISSED OFFSET
	struct FText                                       HeaderText;                                               // 0x0350(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	class UTexture2D*                                  ContractType;                                             // 0x0370(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FText                                       PreviewAmountText;                                        // 0x0378(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               PreviewAsEmpty;                                           // 0x0398(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsJobList;                                                // 0x0399(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_Objectives_List.WBP_Objectives_List_C"));
		return ptr;
	}


	bool IsCorrectContractType(const struct FString& contractId);
	void Post_Contract_Status_Change_Menu_Update();
	class UWBP_Objectives_Progress_Entry_C* Get_Existing_Active_Contract(const struct FString& contractId);
	void Create_New_Active_Contract_Entry(class UWBP_Objectives_Progress_Entry_C** AsWBP_Objectives_Progress_Entry);
	void On_Player_Initialized(const struct FYRuntimeInitializationContext& Result);
	void Hide_Active_Contract_Tooltip(bool HideIcon);
	void Update_Alternate_Backer_Visibility();
	void Update_Number_Of_Contracts();
	void Setup_Dummy_Data();
	void Update_Objective_Progress(const struct FYContractRow& contractConfigData, class UWBP_Objectives_Progress_Entry_C* Widget, int ObjectiveProgress, int objectiveIndex);
	void Show_Active_Contract_Widget(const struct FYActiveContractUIData& ActiveContr, const struct FYContractRow& ContractConfigDat, class UWBP_Objectives_Progress_Entry_C* Widget);
	void Handle_Active_Contract_Progress_Updated(const struct FString& contractId, TArray<int>* objectivesProgress);
	void Handle_Active_Contracts_Progress_Updated(const struct FYContractsProgress& clampedProgress);
	void Handle_Active_Contract_Status_Changed(const struct FYActiveContractUIData& ActiveContractData);
	void Handle_Active_Contracts_Status_Changed(const struct FYActiveContractsUIData& activeContractsUIData);
	void PreConstruct(bool IsDesignTime);
	void OnInitialized();
	void Construct();
	void ExecuteUbergraph_WBP_Objectives_List(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
