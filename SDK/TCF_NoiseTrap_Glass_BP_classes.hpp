#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_NoiseTrap_Glass_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass NoiseTrap_Glass_BP.NoiseTrap_Glass_BP_C
// 0x0008 (0x0298 - 0x0290)
class ANoiseTrap_Glass_BP_C : public ANoiseTrap_Parent_BP_C
{
public:
	class UStaticMeshComponent*                        StaticMesh2;                                              // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass NoiseTrap_Glass_BP.NoiseTrap_Glass_BP_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
