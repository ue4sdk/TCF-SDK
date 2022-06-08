#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AA_Mineral_Base_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AA_Mineral_Base_BP.AA_Mineral_Base_BP_C
// 0x0211 (0x0511 - 0x0300)
class AAA_Mineral_Base_BP_C : public AYMineralActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0300(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UNavModifierComponent*                       NavModifier;                                              // 0x0308(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCollapseDestructibleComponent_BP_C*         CollapseDestructibleComponent_BP;                         // 0x0310(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UYActivityComponent*                         YActivity;                                                // 0x0318(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UMineralBIHookComponent_BP_C*                MineralBIHookComponent_BP;                                // 0x0320(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UYDamageComponent*                           YDamage;                                                  // 0x0328(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Timeline_0_scan_animSlider_679FECFA42E41068EB4E8480011EB007;// 0x0330(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_679FECFA42E41068EB4E8480011EB007;   // 0x0334(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0335(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0338(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<EYActivityType, struct FDataTableRowHandle>   DataTableRowPerActivity_Wall;                             // 0x0340(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TMap<EYActivityType, struct FDataTableRowHandle>   DataTableRowPerActivity_Ground;                           // 0x0390(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               IsWallType;                                               // 0x03E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03E1(0x0007) MISSED OFFSET
	class UAudioComponent*                             MineralCrumble_SoundComp;                                 // 0x03E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USoundBase*                                  MineralCompletedCrumble_Sound;                            // 0x03F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FYDealtDamageData                           DebugLastDamageEvent;                                     // 0x03F8(0x0118) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	bool                                               IsDepleted;                                               // 0x0510(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AA_Mineral_Base_BP.AA_Mineral_Base_BP_C"));
		return ptr;
	}


	struct FCoreUObject_FColor GetDrawDebugLineColor();
	struct FVector GetDrawDebugLineTo();
	struct FString GetDebugDescription();
	void OnRep_IsDepleted();
	void GetDebugDamageInfo(struct FString* Result);
	void OnDamaged(const struct FYDealtDamageData& DamageEvent);
	void TriggerLootDiscoveredCheck();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void BndEvt__YDamage_K2Node_ComponentBoundEvent_4_YTakeDamageEvent__DelegateSignature(const struct FYDealtDamageData& Data);
	void BndEvt__YActivity_K2Node_ComponentBoundEvent_2_OnSetupComplete__DelegateSignature();
	void BndEvt__AA_Mineral_Base_BP_CollapseDestructibleComponent_BP_K2Node_ComponentBoundEvent_7_OnCollapseCompleted__DelegateSignature();
	void FX_MineralCompletedCrumbleStarted();
	void FX_MineralCompletedCrumbleEnded();
	void MarkAsDepletedDueDamage();
	void BP_OnCrumble();
	void BndEvt__AA_Mineral_Base_BP_m_scanComponent_K2Node_ComponentBoundEvent_0_OnWasScanned__DelegateSignature();
	void ExecuteUbergraph_AA_Mineral_Base_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
