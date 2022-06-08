#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MS_Line_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MS_Line_Base.MS_Line_Base_C
// 0x0060 (0x01E0 - 0x0180)
class UMS_Line_Base_C : public UYOnboardingPlayerInstanceComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	TArray<class AActor*>                              HintIndicators;                                           // 0x0188(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	struct FMS_HintMarkerReplicatedData_ST             HintData;                                                 // 0x0198(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance, CPF_RepNotify, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnTutorialAnnouncementQueueEmpty;                         // 0x01B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FDataTableRowHandle                         ReturnButtonHighlightRow;                                 // 0x01C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FGuid                                       ReturnButtonHighlightGUID;                                // 0x01D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass MS_Line_Base.MS_Line_Base_C"));
		return ptr;
	}


	void SetReturnButtonHighlightActive(bool IsActive);
	void UnbindAndStopReturnButtonHighlight();
	void TryHighlightReturnButton(const struct FDataTableRowHandle& ExceptIfSceneOpen);
	void CompleteStep();
	void RequestEmptyTutorialAnnouncementQueue(const struct FScriptDelegate& Delegate);
	void GetNumberOfTutorialLinesInQueue(int* NumberInQueue);
	void OnRep_HintData();
	void IsPlayerFacing(bool* IsPlayerFacing);
	void CreateHintIndicator(const struct FTransform& RelatedTransform);
	void ClearIndicators();
	void BP_ClearHindIndicator();
	void HandleAnnouncementStopped(const struct FYAnnouncementPlayEntryData& voicelineData, bool isCancelled);
	void ServerCompleteStep();
	void OnSceneRemoved_ReturnButtonHighlight(const struct FDataTableRowHandle& sceneRowHandle);
	void ExecuteUbergraph_MS_Line_Base(int EntryPoint);
	void OnTutorialAnnouncementQueueEmpty__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
