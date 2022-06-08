#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YProjectile_DirtBeast_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass YProjectile_DirtBeast_BP.YProjectile_DirtBeast_BP_C
// 0x0008 (0x03D8 - 0x03D0)
class AYProjectile_DirtBeast_BP_C : public AYProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass YProjectile_DirtBeast_BP.YProjectile_DirtBeast_BP_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void triggerEvent_onProjectileStopped(const struct FHitResult& ImpactResult);
	void triggerEvent_onDestroyed(class AActor* DestroyedActor);
	void ExecuteUbergraph_YProjectile_DirtBeast_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
