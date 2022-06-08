#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ItemComponent_MatchAmmo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ItemComponent_MatchAmmo.ItemComponent_MatchAmmo_C
// 0x0008 (0x0318 - 0x0310)
class UItemComponent_MatchAmmo_C : public UYWidget_ItemComponentBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0310(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass ItemComponent_MatchAmmo.ItemComponent_MatchAmmo_C"));
		return ptr;
	}


	void GetTotalAmmoInBag(const struct FDataTableRowHandle& rowHandle, int* TotalAmmo);
	void BP_HandleSetItem();
	void ExecuteUbergraph_ItemComponent_MatchAmmo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
