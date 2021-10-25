#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YPickUp_Mineral_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass YPickUp_Mineral_BP.YPickUp_Mineral_BP_C
// 0x000C (0x0498 - 0x048C)
class AYPickUp_Mineral_BP_C : public AYPickup_Base_BP_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x048C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0490(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass YPickUp_Mineral_BP.YPickUp_Mineral_BP_C");
		return ptr;
	}


	void TryPlaySpecialPickUpAnimation(class AYPlayerController* PlayerController);
	void RetrieveStaticMeshVisualization(class UStaticMesh** AsStatic_Mesh);
	void BP_OnCollected(class AYPlayerController* collectingPlayer, bool isItemPlacedInPlayerInventory);
	void ExecuteUbergraph_YPickUp_Mineral_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
