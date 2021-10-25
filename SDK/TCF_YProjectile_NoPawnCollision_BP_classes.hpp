#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YProjectile_NoPawnCollision_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass YProjectile_NoPawnCollision_BP.YProjectile_NoPawnCollision_BP_C
// 0x0008 (0x03A0 - 0x0398)
class AYProjectile_NoPawnCollision_BP_C : public AYProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0398(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass YProjectile_NoPawnCollision_BP.YProjectile_NoPawnCollision_BP_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void triggerEvent_onProjectileStopped(const struct FHitResult& ImpactResult);
	void triggerEvent_onDestroyed(class AActor* DestroyedActor);
	void ExecuteUbergraph_YProjectile_NoPawnCollision_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
