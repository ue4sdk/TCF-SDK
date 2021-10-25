#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_MS_Line_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MS_Line_Base.MS_Line_Base_C
// 0x0030 (0x01B0 - 0x0180)
class UMS_Line_Base_C : public UYMetaQuestPlayerInstanceComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	TArray<class AActor*>                              HintIndicators;                                           // 0x0188(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	struct FMS_HintMarkerReplicatedData_ST             HintData;                                                 // 0x0198(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance, CPF_RepNotify, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass MS_Line_Base.MS_Line_Base_C");
		return ptr;
	}


	void OnRep_HintData();
	void IsPlayerFacing(bool* IsPlayerFacing);
	void CreateHintIndicator(const struct FTransform& RelatedTransform);
	void ClearIndicators();
	void BP_ClearHindIndicator();
	void ExecuteUbergraph_MS_Line_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
