#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AMB_Spawn_Cues_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AMB_Spawn_Cues_BP.AMB_Spawn_Cues_BP_C
// 0x0030 (0x0288 - 0x0258)
class AAMB_Spawn_Cues_BP_C : public ATriggerSphere
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0258(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	TArray<struct FAMB_Spawn_Cues_Data_Struct>         SoundData;                                                // 0x0260(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               IsEnabled;                                                // 0x0270(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsPlayerInRange;                                          // 0x0271(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0272(0x0006) MISSED OFFSET
	TArray<struct FAMB_Spawn_Cues_Data_Struct>         StormSoundData;                                           // 0x0278(0x0010) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AMB_Spawn_Cues_BP.AMB_Spawn_Cues_BP_C"));
		return ptr;
	}


	void AddAudioComponent(const struct FAMB_Spawn_Cues_Data_Struct& AMB_Spawn_Cues_Data_Struct, bool isStormSound);
	void UserConstructionScript();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void ReceiveBeginPlay();
	void BP_SetIsEnabled(bool IsEnabled);
	void ExecuteUbergraph_AMB_Spawn_Cues_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
