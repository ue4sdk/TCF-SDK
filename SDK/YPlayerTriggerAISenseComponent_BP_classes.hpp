#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YPlayerTriggerAISenseComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass YPlayerTriggerAISenseComponent_BP.YPlayerTriggerAISenseComponent_BP_C
// 0x0060 (0x0118 - 0x00B8)
class UYPlayerTriggerAISenseComponent_BP_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class AYPlayerCharacter*                           OwnerPlayerCharacter;                                     // 0x00C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         Sense_Sprinting;                                          // 0x00C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         Sense_Walking;                                            // 0x00D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         Sense_Crouching;                                          // 0x00E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         Sense_Smell;                                              // 0x00F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         Sense_Landing;                                            // 0x0108(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass YPlayerTriggerAISenseComponent_BP.YPlayerTriggerAISenseComponent_BP_C"));
		return ptr;
	}


	void ReportAISenseInternal(const struct FDataTableRowHandle& SenseTrigegrRowHandle);
	void ReceiveBeginPlay();
	void TriggerSmell();
	void OnWeaponFired_Event_1(class UYWeaponPlayerControllerRuntimeComponent* weaponPlayerControllerRuntimeComponent);
	void BP_OnControllerChanged_Event(class AController* Controller);
	void TryTriggerFootstep();
	void BP_OnLanding_Event_1(const struct FYLandingEventInfo& landingInfo);
	void ExecuteUbergraph_YPlayerTriggerAISenseComponent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
