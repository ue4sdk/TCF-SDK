#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_FlinchesComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FlinchesComponent_BP.FlinchesComponent_BP_C
// 0x0008 (0x00B8 - 0x00B0)
class UFlinchesComponent_BP_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass FlinchesComponent_BP.FlinchesComponent_BP_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void OnTakeDamage_Event_1(const struct FYDealtDamageData& Data);
	void ExecuteUbergraph_FlinchesComponent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
