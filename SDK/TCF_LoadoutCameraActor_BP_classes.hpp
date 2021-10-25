#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_LoadoutCameraActor_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LoadoutCameraActor_BP.LoadoutCameraActor_BP_C
// 0x0008 (0x07C8 - 0x07C0)
class ALoadoutCameraActor_BP_C : public ACameraActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass LoadoutCameraActor_BP.LoadoutCameraActor_BP_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_LoadoutCameraActor_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
