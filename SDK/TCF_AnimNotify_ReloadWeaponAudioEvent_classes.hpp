#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AnimNotify_ReloadWeaponAudioEvent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AnimNotify_ReloadWeaponAudioEvent.AnimNotify_ReloadWeaponAudioEvent_C
// 0x0014 (0x004C - 0x0038)
class UAnimNotify_ReloadWeaponAudioEvent_C : public UAnimNotify
{
public:
	struct FDataTableRowHandle                         Event_DT_Row;                                             // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	int                                                Reload_Event_Idx;                                         // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AnimNotify_ReloadWeaponAudioEvent.AnimNotify_ReloadWeaponAudioEvent_C"));
		return ptr;
	}


	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
