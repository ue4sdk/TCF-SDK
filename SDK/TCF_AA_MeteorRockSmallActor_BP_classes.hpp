#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AA_MeteorRockSmallActor_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AA_MeteorRockSmallActor_BP.AA_MeteorRockSmallActor_BP_C
// 0x001A (0x039C - 0x0382)
class AAA_MeteorRockSmallActor_BP_C : public AAC_MeteorRockBase_BP_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0382(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UPointLightComponent*                        PointLight;                                               // 0x0390(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                DestroyedChunks;                                          // 0x0398(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AA_MeteorRockSmallActor_BP.AA_MeteorRockSmallActor_BP_C"));
		return ptr;
	}


	void FX_MeteorImpact();
	void FX_MeteorFlightAlpha(float Alpha);
	void StartCountingDestroyedChunks();
	void ReceiveBeginPlay();
	void OnChunkDestroyed_Event_1(int chunkID, const struct FVector& chunkLocation, const struct FVector& chunkExtends);
	void ExecuteUbergraph_AA_MeteorRockSmallActor_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
