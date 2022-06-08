#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YProjectile_Weremole_Ranged02_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass YProjectile_Weremole_Ranged02_BP.YProjectile_Weremole_Ranged02_BP_C
// 0x0010 (0x03E0 - 0x03D0)
class AYProjectile_Weremole_Ranged02_BP_C : public AYProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UAudioComponent*                             SFX_Spit_Loop;                                            // 0x03D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass YProjectile_Weremole_Ranged02_BP.YProjectile_Weremole_Ranged02_BP_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void triggerEvent_onProjectileStopped(const struct FHitResult& ImpactResult);
	void triggerEvent_onDestroyed(class AActor* DestroyedActor);
	void ExecuteUbergraph_YProjectile_Weremole_Ranged02_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
