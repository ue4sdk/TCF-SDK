#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Weapon_HUD_Panel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_Weapon_HUD_Panel.WBP_Weapon_HUD_Panel_C
// 0x002C (0x028C - 0x0260)
class UWBP_Weapon_HUD_Panel_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            Swap_Anim;                                                // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWBP_Weapon_Melee_HUD_Item_C*                WBP_Weapon_Melee_HUD_Item;                                // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Weapon_HUD_Item_C*                      WBP_Weapon_Slot1;                                         // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Weapon_HUD_Item_C*                      WBP_Weapon_Slot2;                                         // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	int                                                activeWeaponIndex;                                        // 0x0288(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_Weapon_HUD_Panel.WBP_Weapon_HUD_Panel_C"));
		return ptr;
	}


	void IsValidWeaponIndex(int Index, bool* Result);
	void SetWeaponData(class UWBP_Weapon_HUD_Item_C* weaponHUDItem, const struct FYStoredInventoryWeaponData& storedWepaonData);
	void SwapWeapons();
	void UpdateWeaponsData(const struct FYStoredInventoryWeaponData& firstWeaponData, const struct FYStoredInventoryWeaponData& secondWeaponData, int newActiveWeaponIndex);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_Weapon_HUD_Panel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
