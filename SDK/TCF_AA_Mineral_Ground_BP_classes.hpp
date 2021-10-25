#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AA_Mineral_Ground_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AA_Mineral_Ground_BP.AA_Mineral_Ground_BP_C
// 0x0010 (0x0428 - 0x0418)
class AAA_Mineral_Ground_BP_C : public AAA_Mineral_Base_BP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0418(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UBoxComponent*                               PawnBoxCollision;                                         // 0x0420(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AA_Mineral_Ground_BP.AA_Mineral_Ground_BP_C"));
		return ptr;
	}


	void BndEvt__AA_Mineral_Ground_BP_CollapseDestructibleComponent_BP_K2Node_ComponentBoundEvent_0_OnCollapseTriggered__DelegateSignature();
	void ExecuteUbergraph_AA_Mineral_Ground_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
