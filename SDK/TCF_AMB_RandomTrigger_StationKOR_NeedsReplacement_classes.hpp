#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AMB_RandomTrigger_StationKOR_NeedsReplacement_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AMB_RandomTrigger_StationKOR_NeedsReplacement.AMB_RandomTrigger_StationKOR_NeedsReplacement_C
// 0x0010 (0x0250 - 0x0240)
class AAMB_RandomTrigger_StationKOR_NeedsReplacement_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UAudioComponent*                             Audio;                                                    // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AMB_RandomTrigger_StationKOR_NeedsReplacement.AMB_RandomTrigger_StationKOR_NeedsReplacement_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_AMB_RandomTrigger_StationKOR_NeedsReplacement(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
