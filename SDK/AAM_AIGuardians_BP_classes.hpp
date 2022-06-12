#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AAM_AIGuardians_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AAM_AIGuardians_BP.AAM_AIGuardians_BP_C
// 0x0008 (0x0300 - 0x02F8)
class AAAM_AIGuardians_BP_C : public AAAM_Base_BP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AAM_AIGuardians_BP.AAM_AIGuardians_BP_C"));
		return ptr;
	}


	void RespawnCheck();
	void ExecuteUbergraph_AAM_AIGuardians_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
