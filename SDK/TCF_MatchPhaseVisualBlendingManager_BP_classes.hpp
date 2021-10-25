#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_MatchPhaseVisualBlendingManager_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C
// 0x0208 (0x0448 - 0x0240)
class AMatchPhaseVisualBlendingManager_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UMatchPhaseListenerComponent_BP_C*           MatchPhaseListenerComponent_BP;                           // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         FromVisualRowHandle;                                      // 0x0258(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         ToVisualRowHandle;                                        // 0x0268(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	float                                              currentBlendAlphaClient;                                  // 0x0278(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              currentBlendAlphaServer;                                  // 0x027C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              BlendDuration;                                            // 0x0280(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0284(0x0004) MISSED OFFSET
	class AExponentialHeightFog*                       ExponentialHeightFog;                                     // 0x0288(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ASkyAtmosphere*                              SkyAtmosphere;                                            // 0x0290(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ADirectionalLight*                           DirectionalLight;                                         // 0x0298(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ASkyLight*                                   SkyLight;                                                 // 0x02A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AFX_StormManager01_Clouds_BP_C*              CloudManager;                                             // 0x02A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class APostProcessVolume*                          PostProcessVolume;                                        // 0x02B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              GlobalTime;                                               // 0x02B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              GlobalTimeMultiplier;                                     // 0x02BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              DeltaSeconds;                                             // 0x02C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02C4(0x0004) MISSED OFFSET
	struct FYMatchPhaseVisualRow                       ToVisualData;                                             // 0x02C8(0x0140) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FYMatchPhaseData                            New_Match_Phase_Data;                                     // 0x0408(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FVector                                     ExponentialHeightFogDefaultLocation;                      // 0x0430(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               receivedBlendAlpha;                                       // 0x043C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               receivedMatchPhaseData;                                   // 0x043D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x2];                                       // 0x043E(0x0002) MISSED OFFSET
	class AFX_StormManager01_DistantLightning_BP_C*    LightningManager;                                         // 0x0440(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C"));
		return ptr;
	}


	void GetGameStateMatchBP(class AYGameState_Match_BP_C** gameStateMatch);
	void TrySettingInitialVisualsOnClient();
	void OnRep_currentBlendAlphaServer();
	void SetCurrentAlpha(float currentAlpha);
	void GetCurrentAlpha(float* currentAlpha);
	void SetGlobalTime(float DeltaSeconds);
	void SetMaterialParameterCollectionProperties(const struct FYMatchPhaseVisualRow& VisualData);
	void SetPostProcessProperties(const struct FYMatchPhaseVisualRow& VisualData);
	void SetSkyLightProperties(const struct FYMatchPhaseVisualRow& VisualData);
	void SetDirectionalLightProperties(const struct FYMatchPhaseVisualRow& VisualData);
	void SetStormAmbientVFX(const struct FYMatchPhaseVisualRow& VisualData);
	void SetSkyAtmosphereProperties(const struct FYMatchPhaseVisualRow& VisualData);
	void SetFogProperties(const struct FYMatchPhaseVisualRow& VisualData);
	void SetVisualProperties(const struct FYMatchPhaseVisualRow& VisualData);
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__MatchPhaseListenerComponent_BP_K2Node_ComponentBoundEvent_1_OnReplicatedMatchPhaseDataUpdated__DelegateSignature(const struct FYMatchPhaseData& newMatchPhaseData);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_MatchPhaseVisualBlendingManager_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
