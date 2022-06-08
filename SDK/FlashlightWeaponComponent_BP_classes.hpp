#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FlashlightWeaponComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FlashlightWeaponComponent_BP.FlashlightWeaponComponent_BP_C
// 0x0008 (0x00E8 - 0x00E0)
class UFlashlightWeaponComponent_BP_C : public UYScriptableWeaponComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass FlashlightWeaponComponent_BP.FlashlightWeaponComponent_BP_C"));
		return ptr;
	}


	class AActor* GetCharacter();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnWeaponFired_Event(class UYWeaponPlayerControllerRuntimeComponent* weaponPlayerControllerRuntimeComponent);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_FlashlightWeaponComponent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
