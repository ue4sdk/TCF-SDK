#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AICharExplosionComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AICharExplosionComponent_BP.AICharExplosionComponent_BP_C
// 0x0068 (0x0120 - 0x00B8)
class UAICharExplosionComponent_BP_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FDataTableRowHandle                         ExplosionImpactHandle;                                    // 0x00C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FMulticastScriptDelegate                    OnAboutToExplode;                                         // 0x00D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class UMaterialInterface*                          DecalMaterialBase;                                        // 0x00E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    decalMID;                                                 // 0x00E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         PreExplodeAudio;                                          // 0x00F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	class AActor*                                      ExplosionCauser;                                          // 0x0100(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               spawnDecal;                                               // 0x0108(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               spawnAIonDeath;                                           // 0x0109(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x6];                                       // 0x010A(0x0006) MISSED OFFSET
	struct FDataTableRowHandle                         Damage_Info_Apply_Row_Handle;                             // 0x0110(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AICharExplosionComponent_BP.AICharExplosionComponent_BP_C"));
		return ptr;
	}


	void Trigger_Explosion_Impact();
	void BP_OnDeath_Event_1(class UYCharacterDeathComponent* deathComponent);
	void TrySpawnDecal();
	void FromAnimNotifier_OnPreExplode();
	void ReceiveBeginPlay();
	void AssignToTakeDamageEvent();
	void OnPreTakeDamage(const struct FYDealtDamageData& Data);
	void AssignToOnDeathEvent();
	void FromAnimNotifier_TriggerExplosion();
	void ExecuteUbergraph_AICharExplosionComponent_BP(int EntryPoint);
	void OnAboutToExplode__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
