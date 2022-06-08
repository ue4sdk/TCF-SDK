#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AutomationManager_Base_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AutomationManager_Base_BP.AutomationManager_Base_BP_C
// 0x0060 (0x02B0 - 0x0250)
class AAutomationManager_Base_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<TSoftClassPtr<class UClass>>                StationAutomationComponents;                              // 0x0260(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<TSoftClassPtr<class UClass>>                MatchAutomationComponents;                                // 0x0270(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FString                                     LoggingPrefix;                                            // 0x0280(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	int                                                ComponentIndex;                                           // 0x0290(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              TimeoutValue;                                             // 0x0294(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              DelayBetweenAutomationTests;                              // 0x0298(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x029C(0x0004) MISSED OFFSET
	class UAutomationComponent_Base_BP_C*              AutomationComponent;                                      // 0x02A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                TimerHandle;                                              // 0x02A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AutomationManager_Base_BP.AutomationManager_Base_BP_C"));
		return ptr;
	}


	void GetAutomationComponents(TArray<TSoftClassPtr<class UClass>>* AutomationComponents);
	void GetTimesInMatch(int* TimesVisited);
	void GetTimesInStation(int* TimesVisited);
	void GetAutomationStartData(struct FAutomationTestStartData* AutomationStartData);
	void OnLoaded_3AC8C3AF4DB1A28692971582B8A8C06E(class UClass* /*UObject*/ Loaded);
	void CreateNextAutomationComponent();
	void EndAutomationTest();
	void OnAutomationComponentEndedCallback(TEnumAsByte<EAutomationResultCode> AutomationResultCode);
	void ReceiveBeginPlay();
	void OnAutomationTestTimedOut();
	void StartAutomationTest();
	void OnAutomationComponentChangedCallback();
	void OnInitializationCallbackCompleted(const struct FYRuntimeInitializationContext& Result);
	void ExecuteUbergraph_AutomationManager_Base_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
