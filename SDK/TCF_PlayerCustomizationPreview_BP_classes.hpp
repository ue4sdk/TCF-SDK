#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_PlayerCustomizationPreview_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C
// 0x0038 (0x05D8 - 0x05A0)
class APlayerCustomizationPreview_BP_C : public AYCharacterCustomizationPlayerActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class USkeletalMeshComponent*                      DBNO_FoamMesh_SK;                                         // 0x05A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	struct FName                                       CurrentArchetype;                                         // 0x05B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       AttachWeaponBoneName;                                     // 0x05B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	EYCustomizationCategory                            MontageActiveCategory;                                    // 0x05C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsEndOfMatch;                                             // 0x05C1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x6];                                       // 0x05C2(0x0006) MISSED OFFSET
	class UAnimMontage*                                DeathAnimMontage;                                         // 0x05C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimSequence*                               EmoteAnimSequence;                                        // 0x05D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C");
		return ptr;
	}


	void SetupEndOfMatchState();
	void SetupForArchetype(const struct FName& archetypeId);
	bool IsPreviewedPlayerDead();
	void RefreshActiveMontage(EYCustomizationCategory Category);
	void BP_PlayCustomizationMontage(class UAnimMontage* Montage, EYCustomizationCategory Category);
	void BP_OnShowCustomizationCategory(const struct FYShowBodyTypeCategoryUpdateData& customizationCategory);
	void BP_OnResetRequest(EYCharacterVanityResetRequest resetRequest);
	void BP_SetDeathEmote(const struct FYCharacterCustomizationRowBase& deathEmoteRowBase);
	void BP_SetEmote(const struct FYCharacterCustomizationRowBase& deathEmoteRowBase);
	void BP_OnEOMMapLoaded();
	void BP_OnActiveCustomizationDataChanged(const struct FYActiveCustomizationData& newCustomizationData);
	void OnEnteredQuickMenu();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_PlayerCustomizationPreview_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
