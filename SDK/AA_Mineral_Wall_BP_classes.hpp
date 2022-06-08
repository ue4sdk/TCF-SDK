#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AA_Mineral_Wall_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AA_Mineral_Wall_BP.AA_Mineral_Wall_BP_C
// 0x0017 (0x0528 - 0x0511)
class AAA_Mineral_Wall_BP_C : public AAA_Mineral_Base_BP_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0511(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0518(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UCapsuleComponent*                           PawnCapsuleCollision;                                     // 0x0520(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AA_Mineral_Wall_BP.AA_Mineral_Wall_BP_C"));
		return ptr;
	}


	void BndEvt__AA_Mineral_Wall_BP_CollapseDestructibleComponent_BP_K2Node_ComponentBoundEvent_0_OnCollapseTriggered__DelegateSignature();
	void ExecuteUbergraph_AA_Mineral_Wall_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
