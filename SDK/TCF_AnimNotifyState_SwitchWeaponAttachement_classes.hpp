#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AnimNotifyState_SwitchWeaponAttachement_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AnimNotifyState_SwitchWeaponAttachement.AnimNotifyState_SwitchWeaponAttachement_C
// 0x0010 (0x0040 - 0x0030)
class UAnimNotifyState_SwitchWeaponAttachement_C : public UAnimNotifyState
{
public:
	struct FName                                       SocketAttach;                                             // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       SocketAttachResetTo;                                      // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AnimNotifyState_SwitchWeaponAttachement.AnimNotifyState_SwitchWeaponAttachement_C"));
		return ptr;
	}


	void AttachToSocket(class USkeletalMeshComponent* SkelmeshCompoennt, const struct FName& SocketName);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
