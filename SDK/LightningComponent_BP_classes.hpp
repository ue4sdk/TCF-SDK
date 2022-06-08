#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LightningComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightningComponent_BP.LightningComponent_BP_C
// 0x0059 (0x0119 - 0x00C0)
class ULightningComponent_BP_C : public UYLightningComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UDataTable*                                  DataTable;                                                // 0x00C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class ULightningTypeManager_BP_C*>          LightningSpawners;                                        // 0x00D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                             // 0x00E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET
	TSoftClassPtr<class UClass>                        LightningBlueprintClass;                                  // 0x00E8(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UClass* /*AActor*/                           ActorClassLightning;                                      // 0x0110(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	bool                                               InDungeon;                                                // 0x0118(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass LightningComponent_BP.LightningComponent_BP_C"));
		return ptr;
	}


	void RefreshSpawners();
	void TriggerLightning(const struct FLightningTuningDataInfo& InLightningTuningData, const struct FDataTableRowHandle& LIghtningTuningRowHandle);
	void OnLoaded_F74E9C45453486E2E848238F70929881(class UClass* /*UObject*/ Loaded);
	void ReceiveBeginPlay();
	void OnMatchPhaseChanged(const struct FYMatchPhaseData& newMatchPhaseData);
	void OnLightningDebugChanged();
	void OnEnterDungeon();
	void OnLeaveDungeon();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ClearTimersOnManager(class ULightningTypeManager_BP_C* manager);
	void OnRequestTimerClear(class ULightningTypeManager_BP_C* manager);
	void ExecuteUbergraph_LightningComponent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
