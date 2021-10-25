#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AAM_PowerUp_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AAM_PowerUp_BP.AAM_PowerUp_BP_C
// 0x0018 (0x0300 - 0x02E8)
class AAAM_PowerUp_BP_C : public AAAM_Base_BP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	TArray<class AAA_Powerup_Configurator_BP_C*>       Configurators;                                            // 0x02F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AAM_PowerUp_BP.AAM_PowerUp_BP_C"));
		return ptr;
	}


	TArray<class AActor*> GetSpecialDebugActors();
	void AddConfigurator(class AAA_Powerup_Configurator_BP_C* Configurator);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_AAM_PowerUp_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
