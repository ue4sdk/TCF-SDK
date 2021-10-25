// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Weapon_HUD_Panel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Weapon_HUD_Panel.WBP_Weapon_HUD_Panel_C.IsValidWeaponIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Weapon_HUD_Panel_C::IsValidWeaponIndex(int Index, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Weapon_HUD_Panel.WBP_Weapon_HUD_Panel_C.IsValidWeaponIndex"));

	struct
	{
		int                            Index;
		bool                           Result;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WBP_Weapon_HUD_Panel.WBP_Weapon_HUD_Panel_C.SetWeaponData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Weapon_HUD_Item_C*  weaponHUDItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYStoredInventoryWeaponData storedWepaonData               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Weapon_HUD_Panel_C::SetWeaponData(class UWBP_Weapon_HUD_Item_C* weaponHUDItem, const struct FYStoredInventoryWeaponData& storedWepaonData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Weapon_HUD_Panel.WBP_Weapon_HUD_Panel_C.SetWeaponData"));

	struct
	{
		class UWBP_Weapon_HUD_Item_C*  weaponHUDItem;
		struct FYStoredInventoryWeaponData storedWepaonData;
	} params;

	params.weaponHUDItem = weaponHUDItem;
	params.storedWepaonData = storedWepaonData;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Weapon_HUD_Panel.WBP_Weapon_HUD_Panel_C.SwapWeapons
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Weapon_HUD_Panel_C::SwapWeapons()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Weapon_HUD_Panel.WBP_Weapon_HUD_Panel_C.SwapWeapons"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Weapon_HUD_Panel.WBP_Weapon_HUD_Panel_C.UpdateWeaponsData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYStoredInventoryWeaponData firstWeaponData                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FYStoredInventoryWeaponData secondWeaponData               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            newActiveWeaponIndex           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Weapon_HUD_Panel_C::UpdateWeaponsData(const struct FYStoredInventoryWeaponData& firstWeaponData, const struct FYStoredInventoryWeaponData& secondWeaponData, int newActiveWeaponIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Weapon_HUD_Panel.WBP_Weapon_HUD_Panel_C.UpdateWeaponsData"));

	struct
	{
		struct FYStoredInventoryWeaponData firstWeaponData;
		struct FYStoredInventoryWeaponData secondWeaponData;
		int                            newActiveWeaponIndex;
	} params;

	params.firstWeaponData = firstWeaponData;
	params.secondWeaponData = secondWeaponData;
	params.newActiveWeaponIndex = newActiveWeaponIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Weapon_HUD_Panel.WBP_Weapon_HUD_Panel_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Weapon_HUD_Panel_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Weapon_HUD_Panel.WBP_Weapon_HUD_Panel_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Weapon_HUD_Panel.WBP_Weapon_HUD_Panel_C.ExecuteUbergraph_WBP_Weapon_HUD_Panel
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Weapon_HUD_Panel_C::ExecuteUbergraph_WBP_Weapon_HUD_Panel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Weapon_HUD_Panel.WBP_Weapon_HUD_Panel_C.ExecuteUbergraph_WBP_Weapon_HUD_Panel"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
