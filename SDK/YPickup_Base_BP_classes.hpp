#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YPickup_Base_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass YPickup_Base_BP.YPickup_Base_BP_C
// 0x0018 (0x04C0 - 0x04A8)
class AYPickup_Base_BP_C : public AYPickupActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	TArray<EYItemType>                                 GleamItemTypes;                                           // 0x04B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass YPickup_Base_BP.YPickup_Base_BP_C"));
		return ptr;
	}


	void ToggleGleamAndSetMaterial(class UMeshComponent* Component);
	void BP_OnMeshComponentAdded();
	void ReceiveBeginPlay();
	void ToggleGleam();
	void ExecuteUbergraph_YPickup_Base_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
