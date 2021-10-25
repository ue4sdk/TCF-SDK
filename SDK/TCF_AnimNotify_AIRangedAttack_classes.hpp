#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AnimNotify_AIRangedAttack_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AnimNotify_AIRangedAttack.AnimNotify_AIRangedAttack_C
// 0x0010 (0x0048 - 0x0038)
class UAnimNotify_AIRangedAttack_C : public UAnimNotify
{
public:
	struct FDataTableRowHandle                         rangedAttackDefinitionRowhandle;                          // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AnimNotify_AIRangedAttack.AnimNotify_AIRangedAttack_C"));
		return ptr;
	}


	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
