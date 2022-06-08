#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SKY_Ring_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SKY_Ring_BP.SKY_Ring_BP_C
// 0x0080 (0x02D0 - 0x0250)
class ASKY_Ring_BP_C : public AActor
{
public:
	class USceneComponent*                             Scene;                                                    // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        Skybox_Planet_Ring_SM;                                    // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               EnableHoles;                                              // 0x0260(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0261(0x0007) MISSED OFFSET
	TArray<struct FVector>                             Holes;                                                    // 0x0268(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<float>                                      Sizes;                                                    // 0x0278(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	class UMaterialInstanceDynamic*                    DMI;                                                      // 0x0288(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               DebugVisualize;                                           // 0x0290(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0291(0x0007) MISSED OFFSET
	TArray<class UStaticMesh*>                         HoleObjects;                                              // 0x0298(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<float>                                      ObjectScales;                                             // 0x02A8(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	class UMaterialInterface*                          RingMaterial;                                             // 0x02B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FRotator>                            Object_Rotations;                                         // 0x02C0(0x0010) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass SKY_Ring_BP.SKY_Ring_BP_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
