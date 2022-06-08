#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Tool_BinocularComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Tool_BinocularComponent_BP.Tool_BinocularComponent_BP_C
// 0x0018 (0x00F8 - 0x00E0)
class UTool_BinocularComponent_BP_C : public UYScriptableWeaponComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UYWeaponPlayerControllerRuntimeComponent*    Controller_Weapon_Runtime_Component;                      // 0x00E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UYPlayerCharacterWeaponComponent*            Character_Weapon_Component;                               // 0x00F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Tool_BinocularComponent_BP.Tool_BinocularComponent_BP_C"));
		return ptr;
	}


	void Init(class UYWeaponPlayerControllerRuntimeComponent* weaponRuntimeComponent, class UYPlayerCharacterWeaponComponent* characterWeaponComponent);
	void OnAimDownSight();
	void ExecuteUbergraph_Tool_BinocularComponent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
