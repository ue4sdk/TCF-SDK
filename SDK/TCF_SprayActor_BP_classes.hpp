#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_SprayActor_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SprayActor_BP.SprayActor_BP_C
// 0x0008 (0x02F8 - 0x02F0)
class ASprayActor_BP_C : public AYSprayActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass SprayActor_BP.SprayActor_BP_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void BndEvt__m_rowAssociationComponent_K2Node_ComponentBoundEvent_0_OnRowHandleChanged__DelegateSignature(const struct FDataTableRowHandle& oldRowHandle, const struct FDataTableRowHandle& newRowHandle);
	void ExecuteUbergraph_SprayActor_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
