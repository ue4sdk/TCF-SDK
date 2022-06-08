#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YBagContainer_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass YBagContainer_BP.YBagContainer_BP_C
// 0x000D (0x0505 - 0x04F8)
class AYBagContainer_BP_C : public AYLootContainer_Base_BP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              lifetime;                                                 // 0x0500(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               OffsetEnabled;                                            // 0x0504(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass YBagContainer_BP.YBagContainer_BP_C"));
		return ptr;
	}


	int GetMaxInventoryWeight();
	void OffsetMesh();
	void OnContainerClosedCallback();
	void OnContainerOpenedCallback();
	void ReceiveBeginPlay();
	void BP_OnItemSet();
	void BP_OnMeshComponentAdded();
	void BndEvt__YBagContainer_BP_m_inventoryComponent_K2Node_ComponentBoundEvent_0_YStateInventoryUpdatedSignature__DelegateSignature(class UYStateInventoryComponent* stateInventoryComponent);
	void ToggleGleam();
	void ExecuteUbergraph_YBagContainer_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
