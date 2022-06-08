#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MatchPhaseVisualBlendingManager_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C
// 0x04CA (0x071A - 0x0250)
class AMatchPhaseVisualBlendingManager_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UMatchPhaseListenerComponent_BP_C*           MatchPhaseListenerComponent_BP;                           // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              IgnoreStormTimeline_NewTrack_0_6F4B3D514D6F123D3D4A31A440B5F449;// 0x0268(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    IgnoreStormTimeline__Direction_6F4B3D514D6F123D3D4A31A440B5F449;// 0x026C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x026D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          IgnoreStormTimeline;                                      // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         CurrentVisualRowHandle;                                   // 0x0278(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         LastVisualRowHandle;                                      // 0x0288(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FYMatchPhaseVisualRow                       CurrentStormBlendVisualData;                              // 0x0298(0x0140) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FYMatchPhaseVisualRow                       LastStormBlendVisualData;                                 // 0x03D8(0x0140) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              currentBlendAlphaClient;                                  // 0x0518(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              currentBlendAlphaServer;                                  // 0x051C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              blendDuration;                                            // 0x0520(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0524(0x0004) MISSED OFFSET
	class AExponentialHeightFog*                       ExponentialHeightFog;                                     // 0x0528(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ASkyAtmosphere*                              SkyAtmosphere;                                            // 0x0530(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ADirectionalLight*                           DirectionalLight;                                         // 0x0538(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ASkyLight*                                   SkyLight;                                                 // 0x0540(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AFX_StormManager01_Clouds_BP_C*              CloudManager;                                             // 0x0548(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class APostProcessVolume*                          PostProcessVolume;                                        // 0x0550(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              GlobalTime;                                               // 0x0558(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              GlobalTimeMultiplier;                                     // 0x055C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              DeltaSeconds;                                             // 0x0560(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0564(0x0004) MISSED OFFSET
	struct FYMatchPhaseData                            New_Match_Phase_Data;                                     // 0x0568(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FVector                                     ExponentialHeightFogDefaultLocation;                      // 0x0590(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               receivedBlendAlpha;                                       // 0x059C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               receivedMatchPhaseData;                                   // 0x059D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x2];                                       // 0x059E(0x0002) MISSED OFFSET
	class AFX_StormManager01_DistantLightning_BP_C*    LightningManager;                                         // 0x05A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<float>                                      LocalSkyLightOverwrite;                                   // 0x05A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              LocalSkyIntensityBoxRadius;                               // 0x05B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       LastVisualRowHandleName;                                  // 0x05BC(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CurrentStormPhase;                                        // 0x05C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              WaterFlipBookFrame;                                       // 0x05C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              SkyLightIntensityMultiplier;                              // 0x05CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FYMatchPhaseVisualRow                       StormIgnoreMatchPhaseVisualRow;                           // 0x05D0(0x0140) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               IgnoreStorm;                                              // 0x0710(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0711(0x0003) MISSED OFFSET
	int                                                PreviousVariationIndex;                                   // 0x0714(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               DebugLog;                                                 // 0x0718(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               DebugOnScreen;                                            // 0x0719(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C"));
		return ptr;
	}


	void SetSkyLightIntensityMultiplier(float IntensityMultiplier);
	void UpdateMatchProgressionMaterialParameter();
	void SortFloatArrayByDistance(const struct FVector& Position, TArray<class AObjectBlueprint_C*>* ObjectBlueprint);
	void GenerateLocalSkyIntensities(int Quality);
	void GetLocalPlayerSkyIntensityMultiplyer(float* Intensity);
	void GetGameStateMatchBP(class AYGameState_Match_BP_C** gameStateMatch);
	void OnRep_currentBlendAlphaServer();
	void SetCurrentAlpha(float currentAlpha);
	void GetCurrentAlpha(float* currentAlpha);
	void SetGlobalTime(float DeltaSeconds);
	void SetMaterialParameterCollectionProperties(const struct FYMatchPhaseVisualRow& VisualData);
	void SetPostProcessProperties(const struct FYMatchPhaseVisualRow& VisualData);
	void SetSkyLightProperties(const struct FYMatchPhaseVisualRow& VisualData, class UTextureCube* SourceCubemap, class UTextureCube* DestinationCubemap, float BlendFractionCubemap);
	void SetDirectionalLightProperties(const struct FYMatchPhaseVisualRow& VisualData);
	void SetStormAmbientVFX(const struct FYMatchPhaseVisualRow& VisualData);
	void SetSkyAtmosphereProperties(const struct FYMatchPhaseVisualRow& VisualData);
	void SetFogProperties(const struct FYMatchPhaseVisualRow& VisualData);
	void SetVisualProperties(const struct FYMatchPhaseVisualRow& VisualData, class UTextureCube* SourceCubemap, class UTextureCube* DestinationCubemap, float BlendFractionCubemap);
	void IgnoreStormTimeline__FinishedFunc();
	void IgnoreStormTimeline__UpdateFunc();
	void BndEvt__MatchPhaseListenerComponent_BP_K2Node_ComponentBoundEvent_1_OnReplicatedMatchPhaseDataUpdated__DelegateSignature(const struct FYMatchPhaseData& newMatchPhaseData);
	void StartEndIgnoreStorm(bool DisableStorm, float blendDuration);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_MatchPhaseVisualBlendingManager_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
