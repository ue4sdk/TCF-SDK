#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_PlayerDBNOComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C
// 0x0489 (0x0661 - 0x01D8)
class UPlayerDBNOComponent_BP_C : public UYCharacterDBNOComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01D8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	bool                                               MIDsSetUp;                                                // 0x01E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01E1(0x0007) MISSED OFFSET
	class APRO_PlayerCharacter_C*                      PlayerCharacterOwner;                                     // 0x01E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>            PlayerMeshMIDArray;                                       // 0x01F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FDataTableRowHandle                         DBNO_ShieldActivateSfx;                                   // 0x0200(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	class UAudioComponent*                             DBNOAudioComponent;                                       // 0x0210(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         DBNO_ExecutedSfx;                                         // 0x0218(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         DBNO_ReviveSfx;                                           // 0x0228(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	int                                                DBNOHighlight;                                            // 0x0238(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              foamAnimationSlider;                                      // 0x023C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FYDeathEmoteDataTableRow                    deathEmoteRow;                                            // 0x0240(0x0410) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FDataTableRowHandle                         VO_Revived;                                               // 0x0650(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	bool                                               UsedRecallRecently;                                       // 0x0660(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass PlayerDBNOComponent_BP.PlayerDBNOComponent_BP_C");
		return ptr;
	}


	void GetDeathEmoteRow(struct FYDeathEmoteDataTableRow* deathEmoteRow);
	void CreateMids(class UPrimitiveComponent* MeshComponent);
	void OnLoaded_CBD006CF4860C797A8D149B6BA851463(class UObject* Loaded);
	void OnLoaded_233255E8404EEFDC580D49BE592B34D1(class UObject* Loaded);
	void DBNO_Deactivate(bool interupted);
	void DBNO_Activate();
	void PlayExecutedFX();
	void OnRevived_Event(class AController* Controller);
	void ReceiveBeginPlay();
	void InitializeMidsIfNeeded();
	void setFoamAnimationSlider();
	void OnTeleportedDBNO_Event(const struct FVector& OldLocation, const struct FVector& NewLocation, class AActor* relevantActor);
	void ExecuteUbergraph_PlayerDBNOComponent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
