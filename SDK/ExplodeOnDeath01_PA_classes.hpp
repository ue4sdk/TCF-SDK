#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ExplodeOnDeath01_PA_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ExplodeOnDeath01_PA.ExplodeOnDeath01_PA_C
// 0x0018 (0x0060 - 0x0048)
class UExplodeOnDeath01_PA_C : public UYPerkAction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FDataTableRowHandle                         Damage_Info_Apply_Row_Handle;                             // 0x0050(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass ExplodeOnDeath01_PA.ExplodeOnDeath01_PA_C"));
		return ptr;
	}


	void ExecuteRadialDamage(const struct FYPerkActivationData& PerkActivationData);
	void StartAction(const struct FYPerkActivationData& activationData);
	void ExecuteUbergraph_ExplodeOnDeath01_PA(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
