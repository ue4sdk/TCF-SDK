#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WeaponScopeComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeaponScopeComponent_BP.WeaponScopeComponent_BP_C
// 0x0010 (0x00C0 - 0x00B0)
class UWeaponScopeComponent_BP_C : public UYWeaponScopeComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UMaterialInstanceDynamic*                    ThermalScopeMat;                                          // 0x00B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass WeaponScopeComponent_BP.WeaponScopeComponent_BP_C");
		return ptr;
	}


	void OnEnterTargeting_BP();
	void OnLeaveTargeting_BP(bool interrupted);
	void ExecuteUbergraph_WeaponScopeComponent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
