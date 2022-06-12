#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ExplodeOnDeath02_PA_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ExplodeOnDeath02_PA.ExplodeOnDeath02_PA_C
// 0x0018 (0x0060 - 0x0048)
class UExplodeOnDeath02_PA_C : public UYPerkAction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FDataTableRowHandle                         Damage_Info_Apply_Row_Handle;                             // 0x0050(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass ExplodeOnDeath02_PA.ExplodeOnDeath02_PA_C"));
		return ptr;
	}


	void ExecuteRadialDamage(const struct FYPerkActivationData& initializationData);
	void StartAction(const struct FYPerkActivationData& activationData);
	void ExecuteUbergraph_ExplodeOnDeath02_PA(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
