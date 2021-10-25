#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AAM_Meteor_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AAM_Meteor_BP.AAM_Meteor_BP_C
// 0x0018 (0x0300 - 0x02E8)
class AAAM_Meteor_BP_C : public AAAM_Base_BP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FTimerHandle                                SpawnMeteorTimerHandle;                                   // 0x02F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                MinutesTimeBetweenMeteorsMin;                             // 0x02F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                MinutesTimeBetweenMeteorsMax;                             // 0x02FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AAM_Meteor_BP.AAM_Meteor_BP_C"));
		return ptr;
	}


	struct FString BP_GetDebugDescription();
	void DetermineNextMeteorSpawnTime(float* Time);
	void DebugRequestTriggerActivity(class APlayerController* requestingPlayer);
	void SpawnMeteor();
	void SetupNextMeteorSpawn();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_AAM_Meteor_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
