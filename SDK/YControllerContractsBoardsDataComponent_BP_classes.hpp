#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YControllerContractsBoardsDataComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass YControllerContractsBoardsDataComponent_BP.YControllerContractsBoardsDataComponent_BP_C
// 0x0008 (0x0150 - 0x0148)
class UYControllerContractsBoardsDataComponent_BP_C : public UYControllerContractsBoardsDataComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0148(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass YControllerContractsBoardsDataComponent_BP.YControllerContractsBoardsDataComponent_BP_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_YControllerContractsBoardsDataComponent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
