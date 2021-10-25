#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_PlayerCharacterCombatAwarenessComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerCharacterCombatAwarenessComponent_BP.PlayerCharacterCombatAwarenessComponent_BP_C
// 0x0011 (0x00C1 - 0x00B0)
class UPlayerCharacterCombatAwarenessComponent_BP_C : public UYPlayerCharacterAwarenessComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class AYPlayerCharacter*                           PlayerCharacterOwner;                                     // 0x00B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               HasShield;                                                // 0x00C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass PlayerCharacterCombatAwarenessComponent_BP.PlayerCharacterCombatAwarenessComponent_BP_C");
		return ptr;
	}


	void GetOwningPlayerControllerAwarenesComponent(class UYPlayerControllerAwarenessComponent** awarenessComp);
	void TryGetLocalPlayerControllerAwarenessComponent(class UYPlayerControllerAwarenessComponent** Component);
	void ReceiveBeginPlay();
	void OnTakeDamage_Event_1(const struct FYDealtDamageData& Data);
	void OnEnterDBNOEvent_Event_1(class AController* Controller);
	void OnDealDamage(const struct FYDealtDamageData& Data);
	void CurrentShieldChangedDelegate_Event_1(float CurrentShield);
	void ExecuteUbergraph_PlayerCharacterCombatAwarenessComponent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
