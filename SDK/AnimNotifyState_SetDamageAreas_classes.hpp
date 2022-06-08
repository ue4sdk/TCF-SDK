#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AnimNotifyState_SetDamageAreas_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AnimNotifyState_SetDamageAreas.AnimNotifyState_SetDamageAreas_C
// 0x0050 (0x0088 - 0x0038)
class UAnimNotifyState_SetDamageAreas_C : public UAnimNotifyState
{
public:
	TMap<struct FName, float>                          New_Damage_Areas;                                         // 0x0038(0x0050) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AnimNotifyState_SetDamageAreas.AnimNotifyState_SetDamageAreas_C"));
		return ptr;
	}


	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
