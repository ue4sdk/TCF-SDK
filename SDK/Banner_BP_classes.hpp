#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Banner_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Banner_BP.Banner_BP_C
// 0x0634 (0x089C - 0x0268)
class ABanner_BP_C : public AYBannerActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0268(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UChildActorComponent*                        SeasonDetailView;                                         // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UChildActorComponent*                        SeasonFirstView;                                          // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBoxComponent*                               BoxToTriggerOverlaps;                                     // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTextRenderComponent*                        SecondPlate;                                              // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    Banner_PS;                                                // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Prop_Banner_SK;                                           // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTextRenderComponent*                        NamePlate;                                                // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class APlayerState*                                PlayerState;                                              // 0x02B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              ParticleSize;                                             // 0x02B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     ParticleOffset;                                           // 0x02BC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                ParticleSystemColor;                                      // 0x02C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         BannerDTRow;                                              // 0x02D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_ExposeOnSpawn)
	struct FYBannerVanityRow                           BannerVanityRow;                                          // 0x02E8(0x0578) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       BannerNameOverride;                                       // 0x0860(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)
	float                                              LineTraceCeilingDistance;                                 // 0x0880(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0884(0x0004) MISSED OFFSET
	TArray<class UObject*>                             SoundsLoaded;                                             // 0x0888(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	int                                                MinutesBeforeDestruction;                                 // 0x0898(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Banner_BP.Banner_BP_C"));
		return ptr;
	}


	void Get_Delay_Before_Actor_Destruction(float* Seconds);
	void Convert_Minutes_to_Seconds(int Minutes, float* Seconds);
	void Get_Name(struct FText* returnResult);
	void UserConstructionScript();
	void OnLoaded_4A0385474C8EACF19812D19508361D30(class UObject* Loaded);
	void OnLoaded_E3ED64D64653F1E69C56DF89C98F009D(class UObject* Loaded);
	void OnLoaded_0074BA974BE052B7FF9369A7D5DDF321(class UObject* Loaded);
	void OnLoaded_EED911CE44C8CCD77EDDB3A4329542A0(class UObject* Loaded);
	void OnLoaded_994CAFF44D2DD18F243915A76E8BB079(class UObject* Loaded);
	void OnLoaded_DBD0CE2141F452DB2698AF94D8E4CE9D(class UObject* Loaded);
	void BndEvt__m_rowAssociationComponent_K2Node_ComponentBoundEvent_2_OnRowHandleChanged__DelegateSignature(const struct FDataTableRowHandle& oldRowHandle, const struct FDataTableRowHandle& newRowHandle);
	void BP_SetIsAttached(bool attachedStatus);
	void SetUpBannerPreviewInEditor();
	void LoadSounds();
	void LoadParticle();
	void LoadMaterial();
	void PlaySound();
	void lineTraceCeilingHeightForParticles();
	void SetupTextPlates();
	void ReceiveBeginPlay();
	void BP_OnOwnerChanged();
	void SetupLIghtAndFlareColor();
	void ExecuteUbergraph_Banner_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
