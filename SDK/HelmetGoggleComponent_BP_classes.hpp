#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HelmetGoggleComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HelmetGoggleComponent_BP.HelmetGoggleComponent_BP_C
// 0x0010 (0x00F8 - 0x00E8)
class UHelmetGoggleComponent_BP_C : public UYHelmetGoggleComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UMaterialInstanceDynamic*                    GoggleMat;                                                // 0x00F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass HelmetGoggleComponent_BP.HelmetGoggleComponent_BP_C"));
		return ptr;
	}


	void Bind_to_Armor_Updated_Event(bool ShouldBind);
	void SetNewBlendableMat(class UMaterialInterface* NewMat);
	void BindToItemRemovedEvent(bool ShouldBind);
	void EnableNV(class UMaterialInterface* NewMat);
	void OnItemRemoved(class UYStateInventoryComponent* stateInventoryComponent, const struct FYInventoryItem& Item, EYPlayerSetType equippedSetType);
	void OnArmorUpdated(class UYArmorComponent* armorComponent);
	void ToggleNightVision();
	void ExecuteUbergraph_HelmetGoggleComponent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
