#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_LightningComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightningComponent_BP.LightningComponent_BP_C
// 0x0058 (0x0110 - 0x00B8)
class ULightningComponent_BP_C : public UYLightningComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UDataTable*                                  DataTable;                                                // 0x00C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class ULightningTypeManager_BP_C*>          LightningSpawners;                                        // 0x00C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                             // 0x00D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
	TSoftObjectPtr<class UClass>                       LightningBlueprintClass;                                  // 0x00E0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UClass*                                      ActorClassLightning;                                      // 0x0108(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass LightningComponent_BP.LightningComponent_BP_C");
		return ptr;
	}


	void RefreshSpawners();
	void TriggerLightning(const struct FLightningTuningDataInfo& InLightningTuningData, const struct FDataTableRowHandle& LIghtningTuningRowHandle);
	void OnLoaded_F74E9C45453486E2E848238F70929881(class UClass* Loaded);
	void ReceiveBeginPlay();
	void OnMatchPhaseChanged(const struct FYMatchPhaseData& newMatchPhaseData);
	void OnLightningDebugChanged();
	void ExecuteUbergraph_LightningComponent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
