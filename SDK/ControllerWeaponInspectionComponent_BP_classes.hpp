#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ControllerWeaponInspectionComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ControllerWeaponInspectionComponent_BP.ControllerWeaponInspectionComponent_BP_C
// 0x0108 (0x02C0 - 0x01B8)
class UControllerWeaponInspectionComponent_BP_C : public UYControllerWeaponInspectionComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FDataTableRowHandle                         sceneRowHandle;                                           // 0x01C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	class ACameraActor*                                DetailCamera;                                             // 0x01D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ACameraActor*                                NormalCamera;                                             // 0x01D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AActor*                                      CustomizationPlacementLocation;                           // 0x01E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FYInventoryItem                             inventoryItem;                                            // 0x01E8(0x00D8) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass ControllerWeaponInspectionComponent_BP.ControllerWeaponInspectionComponent_BP_C"));
		return ptr;
	}


	struct FString Get_Context_String(const struct FString& FunctionName);
	void Handle_Set_Inspected_Inventory_Item();
	void RequestScene();
	void SetInspectedInventoryItem(const struct FYInventoryItem& inventoryItem, int inventoryId);
	void ExecuteUbergraph_ControllerWeaponInspectionComponent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
